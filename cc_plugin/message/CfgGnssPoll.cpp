//
// Copyright 2015 - 2016 (C). Alex Robenko. All rights reserved.
//

// This file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <cassert>

#include "CfgGnssPoll.h"

template class ublox::message::CfgGnssPoll<ublox::cc_plugin::Message>;
template class ublox::cc_plugin::ProtocolMessageBase<
    ublox::message::CfgGnssPoll<ublox::cc_plugin::Message>,
    ublox::cc_plugin::message::CfgGnssPoll>;

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

CfgGnssPoll::CfgGnssPoll() = default;
CfgGnssPoll::~CfgGnssPoll() = default;

CfgGnssPoll& CfgGnssPoll::operator=(const CfgGnssPoll&) = default;
CfgGnssPoll& CfgGnssPoll::operator=(CfgGnssPoll&&) = default;


const char* CfgGnssPoll::nameImpl() const
{
    static const char* Str = "CFG-GNSS (Poll)";
    return Str;
}


}  // namespace message

}  // namespace cc_plugin

}  // namespace ublox

