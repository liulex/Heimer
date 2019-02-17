// This file is part of Heimer.
// Copyright (C) 2018 Jussi Lind <jussi.lind@iki.fi>
//
// Dust Racing 2D is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// Dust Racing 2D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Dust Racing 2D. If not, see <http://www.gnu.org/licenses/>.

#ifndef DRAG_AND_DROP_STORE_HPP
#define DRAG_AND_DROP_STORE_HPP

#include <QPointF>

class Node;

class DragAndDropStore
{
public:

    enum class Action
    {
        None,
        MoveNode,
        CreateOrConnectNode,
        Scroll
    };

    DragAndDropStore();

    void clear();

    Node * sourceNode() const;
    void setSourceNode(Node * node, Action action);

    Action action() const;

    QPointF sourcePos() const;
    void setSourcePos(const QPointF & sourcePos);

private:

    Node * m_sourceNode = nullptr;

    QPointF m_sourcePos;

    Action m_action = Action::None;
};

#endif // DRAG_AND_DROP_STORE_HPP
