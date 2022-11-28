# Copyright (c) 2022 The ZMK Contributors
# SPDX-License-Identifier: MIT

if (CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  target_sources(app PRIVATE common.c)
  target_sources(app PRIVATE central.c)
endif()
if (NOT CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  target_sources(app PRIVATE ../split_listener.c)
  target_sources(app PRIVATE common.c)
  target_sources(app PRIVATE service.c)
endif()