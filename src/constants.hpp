// This file is part of Heimer.
// Copyright (C) 2018 Jussi Lind <jussi.lind@iki.fi>
//
// Heimer is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// Heimer is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Heimer. If not, see <http://www.gnu.org/licenses/>.

#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <QColor>

namespace Constants {

namespace Application {

static constexpr auto APPLICATION_NAME = "Heimer";

static constexpr auto APPLICATION_VERSION = VERSION;

static constexpr auto COPYRIGHT = "Copyright (c) 2018 Jussi Lind";

static constexpr auto FILE_EXTENSION = ".alz";

static constexpr auto QSETTINGS_COMPANY_NAME = "Heimer";

static constexpr auto WEB_SITE_URL = "http://juzzlin.github.io/Heimer";

static constexpr auto QSETTINGS_SOFTWARE_NAME = APPLICATION_NAME;

static constexpr auto SUPPORT_SITE_URL = "https://www.patreon.com/juzzlin";

static constexpr auto TRANSLATIONS_RESOURCE_BASE = ":/heimer_";

} // Application

namespace Edge {

static const double ARROW_LENGTH = 10;

static const double ARROW_OPENING = 150;

static const QColor DOT_COLOR{255, 0, 0, 192};

static const int DOT_DURATION = 2000;

static const int DOT_RADIUS = 10;

static const QColor LABEL_COLOR{0xff, 0xee, 0xaa};

static const int LABEL_DURATION = 2000;

static const double MIN_SIZE = 0.1;

static const double MAX_SIZE = 5.0;

static const double STEP = 0.1;

static const int TEXT_EDIT_ANIMATION_DURATION = 150;

static const int TEXT_EDIT_DURATION = 2000;

} // Edge

namespace Export {

static const QString FILE_EXTENSION = ".png";

static const int MIN_IMAGE_SIZE = 0;

static const int MAX_IMAGE_SIZE = 99999;

} // Export

namespace Grid {

static const int MIN_SIZE = 0;

static const int MAX_SIZE = 500;

} // Grid

namespace MindMap {

static const QColor DEFAULT_BACKGROUND_COLOR{0x80, 0xc8, 0xff};

static const QColor DEFAULT_EDGE_COLOR{0, 0, 0, 200};

static const double DEFAULT_EDGE_WIDTH = 2.0;

static const int DEFAULT_TEXT_SIZE = 11;

} // MindMap

namespace Node {

static const int HANDLE_ANIMATION_DURATION = 150;

static const double HANDLE_OPACITY = 0.8;

static const int HANDLE_RADIUS = 28;

static const int HANDLE_RADIUS_SMALL = 20;

static const int MARGIN = 10;

static const int MIN_HEIGHT = 75;

static const int MIN_WIDTH = 200;

} // Node

namespace LayoutOptimizer {

static const int DEFAULT_MIN_EDGE_LENGTH = 50;

static const int MIN_EDGE_LENGTH = 10;

static const int MAX_EDGE_LENGTH = 250;

static const double DEFAULT_ASPECT_RATIO = 1.0;

static const double MIN_ASPECT_RATIO = 0.1;

static const double MAX_ASPECT_RATIO = 10;

} // LayoutOptimizer

namespace Scene {

static const QColor BARRIER_COLOR{255, 0, 0, 128};

static const int BARRIER_WIDTH = 100;

static const int RADIUS = 10000;

} // Scene

namespace Text {

static const int MIN_SIZE = 6;

static const int MAX_SIZE = 24;

} // Text

namespace View {

static const double DRAG_NODE_OPACITY = 0.5;

static const int ZOOM_MAX = 200;

static const int ZOOM_MIN = 10;

static const int ZOOM_SENSITIVITY = 10;

} // View

} // Constants

#endif // CONSTANTS_HPP
