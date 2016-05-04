/*
 * Copyright (C) 2016, Cavium, Inc.
 * All Rights Reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License"); you may
 *   not use this file except in compliance with the License. You may obtain
 *   a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *   WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *   License for the specific language governing permissions and limitations
 *   under the License.
 *
 * File: ops-xp-classifier.c
 *
 * Purpose: This file contains OpenSwitch classifier related
 *          application code for the Cavium/XPliant SDK.
 */

#include <unistd.h>
#include "openvswitch/vlog.h"
#include "ofproto/ofproto-provider.h"
#include "ops-cls-asic-plugin.h"
#include "ops-xp-classifier.h"

VLOG_DEFINE_THIS_MODULE(xp_classifier);

int
ops_xp_cls_apply(struct ops_cls_list *list, struct ofproto *ofproto,
                 void *aux, struct ops_cls_interface_info *interface_info,
                 enum ops_cls_direction direction,
                 struct ops_cls_pd_status *pd_status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_remove(const struct uuid *list_id, const char *list_name,
                  enum ops_cls_type list_type, struct ofproto *ofproto,
                  void *aux, struct ops_cls_interface_info *interface_info,
                  enum ops_cls_direction direction,
                  struct ops_cls_pd_status *pd_status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_replace(const struct uuid *list_id_orig, const char *list_name_orig,
                   struct ops_cls_list *list_new, struct ofproto *ofproto,
                   void *aux, struct ops_cls_interface_info *interface_info,
                   enum ops_cls_direction direction,
                   struct ops_cls_pd_status *pd_status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_list_update(struct ops_cls_list *list,
                       struct ops_cls_pd_list_status *status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_stats_get(const struct uuid *list_id, const char *list_name,
                     enum ops_cls_type list_type, struct ofproto *ofproto,
                     void *aux, struct ops_cls_interface_info *interface_info,
                     enum ops_cls_direction direction,
                     struct ops_cls_statistics *statistics,
                     int num_entries, struct ops_cls_pd_list_status *status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_stats_clear(const struct uuid *list_id, const char *list_name,
                       enum ops_cls_type list_type, struct ofproto *ofproto,
                       void *aux, struct ops_cls_interface_info *interface_info,
                       enum ops_cls_direction direction,
                       struct ops_cls_pd_list_status *status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_stats_clear_all(struct ops_cls_pd_list_status *status)
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}

int
ops_xp_cls_acl_log_pkt_register_cb(void (*callback_handler)(struct acl_log_info *))
{
    VLOG_DBG("%s", __FUNCTION__);

    return 0;
}
