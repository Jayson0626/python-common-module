/*
 * $Copyright: (c) 2016 Broadcom.
 * File:  dfe_dispatch.c
 */

int _bcm_dfe_dispatch_not_empty;

#include <bcm_int/control.h>
#include <bcm_int/api_xlate_port.h>
#include <bcm/error.h>
#include <bcm/debug.h>
#include <bcm/auth.h>
#include <bcm/cosq.h>
#include <bcm/custom.h>
#include <bcm/eav.h>
#include <bcm/ecn.h>
#include <bcm/fabric.h>
#include <bcm/failover.h>
#include <bcm/fcoe.h>
#include <bcm/field.h>
#include <bcm/init.h>
#include <bcm/ipfix.h>
#include <bcm/ipsec.h>
#include <bcm/knet.h>
#include <bcm/l2.h>
#include <bcm/lb.h>
#include <bcm/link.h>
#include <bcm/mcast.h>
#include <bcm/mirror.h>
#include <bcm/mpls.h>
#include <bcm/multicast.h>
#include <bcm/oam.h>
#include <bcm/oob.h>
#include <bcm/policer.h>
#include <bcm/port.h>
#include <bcm/qos.h>
#include <bcm/range.h>
#include <bcm/rate.h>
#include <bcm/rx.h>
#include <bcm/sat.h>
#include <bcm/stack.h>
#include <bcm/stat.h>
#include <bcm/stg.h>
#include <bcm/subport.h>
#include <bcm/switch.h>
#include <bcm/time.h>
#include <bcm/topo.h>
#include <bcm/trunk.h>
#include <bcm/tsn.h>
#include <bcm/tx.h>
#include <bcm/txbeacon.h>
#include <bcm/udf.h>
#include <bcm/vlan.h>
#include <bcm/vswitch.h>
#include <bcm_int/dfe_dispatch.h>
#if defined(INCLUDE_BFD)
#include <bcm/bfd.h>
#endif
#if defined(INCLUDE_FCMAP)
#include <bcm/fcmap.h>
#endif
#if defined(INCLUDE_I2C)
#include <bcm/bcmi2c.h>
#endif
#if defined(INCLUDE_L3)
#include <bcm/extender.h>
#include <bcm/ipmc.h>
#include <bcm/l2gre.h>
#include <bcm/l3.h>
#include <bcm/mim.h>
#include <bcm/nat.h>
#include <bcm/niv.h>
#include <bcm/proxy.h>
#include <bcm/trill.h>
#include <bcm/tunnel.h>
#include <bcm/vxlan.h>
#include <bcm/wlan.h>
#endif
#if defined(INCLUDE_MACSEC)
#include <bcm/macsec.h>
#endif
#if defined(INCLUDE_PSTATS)
#include <bcm/pstats.h>
#endif
#if defined(INCLUDE_PTP)
#include <bcm/ptp.h>
#endif
#if defined(INCLUDE_REGEX)
#include <bcm/bregex.h>
#endif

int 
bcm_dfe_auth_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_egress_get(
    int unit, 
    int port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_egress_set(
    int unit, 
    int port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mac_add(
    int unit, 
    int port, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mac_control_get(
    int unit, 
    bcm_auth_mac_control_t type, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mac_control_set(
    int unit, 
    bcm_auth_mac_control_t type, 
    uint32 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mac_delete(
    int unit, 
    int port, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mac_delete_all(
    int unit, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mode_get(
    int unit, 
    int port, 
    uint32 *modep)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_mode_set(
    int unit, 
    int port, 
    uint32 mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_auth_unauth_callback(
    int unit, 
    bcm_auth_cb_t func, 
    void *cookie)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_auth_sha1_get(
    int unit, 
    int index, 
    bcm_bfd_auth_sha1_t *sha1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_auth_sha1_set(
    int unit, 
    int index, 
    bcm_bfd_auth_sha1_t *sha1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_auth_simple_password_get(
    int unit, 
    int index, 
    bcm_bfd_auth_simple_password_t *sp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_auth_simple_password_set(
    int unit, 
    int index, 
    bcm_bfd_auth_simple_password_t *sp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_discard_stat_get(
    int unit, 
    bcm_bfd_discard_stat_t *discarded_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_discard_stat_set(
    int unit, 
    bcm_bfd_discard_stat_t *discarded_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_endpoint_create(
    int unit, 
    bcm_bfd_endpoint_info_t *endpoint_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_endpoint_destroy(
    int unit, 
    bcm_bfd_endpoint_t endpoint)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_endpoint_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_endpoint_get(
    int unit, 
    bcm_bfd_endpoint_t endpoint, 
    bcm_bfd_endpoint_info_t *endpoint_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_endpoint_poll(
    int unit, 
    bcm_bfd_endpoint_t endpoint)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_endpoint_stat_get(
    int unit, 
    bcm_bfd_endpoint_t endpoint, 
    bcm_bfd_endpoint_stat_t *ctr_info, 
    uint32 options)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_event_register(
    int unit, 
    bcm_bfd_event_types_t event_types, 
    bcm_bfd_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_event_unregister(
    int unit, 
    bcm_bfd_event_types_t event_types, 
    bcm_bfd_event_cb cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_status_multi_get(
    int unit, 
    int max_endpoints, 
    bcm_bfd_status_t *status_arr, 
    int *count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_tx_start(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_BFD)
int 
bcm_dfe_bfd_tx_stop(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_clear(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_multi_profile_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid, 
    int array_size, 
    bcm_cosq_bst_profile_t *profile_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_multi_profile_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid, 
    int array_size, 
    bcm_cosq_bst_profile_t *profile_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_profile_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid, 
    bcm_cosq_bst_profile_t *profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_profile_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid, 
    bcm_cosq_bst_profile_t *profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_clear(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_extended_clear(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_bst_stat_id_t bid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_extended_get(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_bst_stat_id_t bid, 
    uint32 options, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_extended_get32(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_bst_stat_id_t bid, 
    uint32 options, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid, 
    uint32 options, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_get32(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_bst_stat_id_t bid, 
    uint32 options, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_multi_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    uint32 options, 
    int max_values, 
    bcm_bst_stat_id_t *id_list, 
    uint64 *values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_multi_get32(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    uint32 options, 
    int max_values, 
    bcm_bst_stat_id_t *id_list, 
    uint32 *values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_bst_stat_sync(
    int unit, 
    bcm_bst_stat_id_t bid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_buffer_id_multi_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_dir_t direction, 
    int array_max, 
    bcm_cosq_buffer_id_t *buf_id_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_create(
    int unit, 
    bcm_cosq_classifier_t *classifier, 
    int *classifier_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_destroy(
    int unit, 
    int classifier_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_get(
    int unit, 
    int classifier_id, 
    bcm_cosq_classifier_t *classifier)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_id_get(
    int unit, 
    bcm_cosq_classifier_t *classifier, 
    int array_count, 
    bcm_cos_t *priority_array, 
    bcm_cos_queue_t *cosq_array, 
    int *classifier_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_mapping_clear(
    int unit, 
    bcm_gport_t port, 
    int classifier_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_mapping_get(
    int unit, 
    bcm_gport_t port, 
    int classifier_id, 
    bcm_gport_t *queue_group, 
    bcm_cos_t priority, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_mapping_multi_get(
    int unit, 
    bcm_gport_t port, 
    int classifier_id, 
    bcm_gport_t *queue_group, 
    int array_max, 
    bcm_cos_t *priority_array, 
    bcm_cos_queue_t *cosq_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_mapping_multi_set(
    int unit, 
    bcm_gport_t port, 
    int classifier_id, 
    bcm_gport_t queue_group, 
    int array_count, 
    bcm_cos_t *priority_array, 
    bcm_cos_queue_t *cosq_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_classifier_mapping_set(
    int unit, 
    bcm_gport_t port, 
    int classifier_id, 
    bcm_gport_t queue_group, 
    bcm_cos_t priority, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_config_get(
    int unit, 
    int *numq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_config_set(
    int unit, 
    int numq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_congestion_mapping_get(
    int unit, 
    int fabric_modid, 
    bcm_cosq_congestion_mapping_info_t *mapping_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_congestion_mapping_set(
    int unit, 
    int fabric_modid, 
    bcm_cosq_congestion_mapping_info_t *mapping_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_control_extended_get(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_cosq_control_data_t *control)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_control_extended_set(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_cosq_control_data_t *control)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_control_range_get(
    int unit, 
    bcm_gport_t port, 
    uint32 flags, 
    bcm_cosq_control_range_type_t type, 
    bcm_cosq_range_t *range)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_control_range_set(
    int unit, 
    bcm_gport_t port, 
    uint32 flags, 
    bcm_cosq_control_range_type_t type, 
    bcm_cosq_range_t *range)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_cpu_cosq_enable_get(
    int unit, 
    bcm_cos_queue_t cosq, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_cpu_cosq_enable_set(
    int unit, 
    bcm_cos_queue_t cosq, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_delay_tolerance_level_get(
    int unit, 
    int delay_tolerance_level, 
    bcm_cosq_delay_tolerance_t *delay_tolerance)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_delay_tolerance_level_set(
    int unit, 
    int delay_tolerance_level, 
    bcm_cosq_delay_tolerance_t *delay_tolerance)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_dest_credit_size_get(
    int unit, 
    bcm_module_t dest_modid, 
    uint32 *credit_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_dest_credit_size_set(
    int unit, 
    bcm_module_t dest_modid, 
    uint32 credit_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_discard_get(
    int unit, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_discard_port_get(
    int unit, 
    bcm_port_t port, 
    bcm_cos_queue_t cosq, 
    uint32 color, 
    int *drop_start, 
    int *drop_slope, 
    int *average_time)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_discard_port_set(
    int unit, 
    bcm_port_t port, 
    bcm_cos_queue_t cosq, 
    uint32 color, 
    int drop_start, 
    int drop_slope, 
    int average_time)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_discard_set(
    int unit, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_event_register(
    int unit, 
    bcm_cosq_event_types_t event_types, 
    bcm_gport_t port, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_event_unregister(
    int unit, 
    bcm_cosq_event_types_t event_types, 
    bcm_gport_t port, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_event_cb cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_fabric_distribution_add(
    int unit, 
    bcm_fabric_distribution_t ds_id, 
    int num_cos_levels, 
    uint32 flags, 
    bcm_gport_t *req_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_fabric_distribution_get(
    int unit, 
    bcm_fabric_distribution_t ds_id, 
    int *num_cos_levels, 
    bcm_gport_t *req_gport, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_fc_path_add(
    int unit, 
    bcm_cosq_fc_direction_type_t fc_direction, 
    bcm_cosq_fc_endpoint_t *source, 
    bcm_cosq_fc_endpoint_t *target)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_fc_path_delete(
    int unit, 
    bcm_cosq_fc_direction_type_t fc_direction, 
    bcm_cosq_fc_endpoint_t *source, 
    bcm_cosq_fc_endpoint_t *target)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_fc_path_get(
    int unit, 
    bcm_cosq_fc_direction_type_t fc_direction, 
    bcm_cosq_fc_endpoint_t *source, 
    int target_max, 
    bcm_cosq_fc_endpoint_t *target, 
    int *target_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_add(
    int unit, 
    bcm_gport_t port, 
    int numq, 
    uint32 flags, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_attach(
    int unit, 
    bcm_gport_t sched_port, 
    bcm_gport_t input_port, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_attach_get(
    int unit, 
    bcm_gport_t sched_port, 
    bcm_gport_t *input_port, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_child_get(
    int unit, 
    bcm_gport_t in_gport, 
    bcm_cos_queue_t cosq, 
    bcm_gport_t *out_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_color_size_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_color_t color, 
    uint32 flags, 
    bcm_cosq_gport_size_t *gport_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_color_size_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_color_t color, 
    uint32 flags, 
    bcm_cosq_gport_size_t *gport_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_congestion_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_congestion_info_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_congestion_config_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_congestion_info_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_connection_get(
    int unit, 
    bcm_cosq_gport_connection_t *gport_connect)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_connection_set(
    int unit, 
    bcm_cosq_gport_connection_t *gport_connect)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_delete(
    int unit, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_destmod_attach(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_t ingress_port, 
    bcm_module_t dest_modid, 
    int fabric_egress_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_destmod_detach(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_t ingress_port, 
    bcm_module_t dest_modid, 
    int fabric_egress_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_detach(
    int unit, 
    bcm_gport_t sched_port, 
    bcm_gport_t input_port, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_discard_extended_get(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_cosq_gport_discard_t *discard)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_discard_extended_set(
    int unit, 
    bcm_cosq_object_id_t *id, 
    bcm_cosq_gport_discard_t *discard)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_discard_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_gport_discard_t *discard)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_discard_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_gport_discard_t *discard)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_egress_map_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_t ingress_pri, 
    bcm_color_t ingress_dp, 
    bcm_cos_queue_t *offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_egress_map_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_t ingress_pri, 
    bcm_color_t ingress_dp, 
    bcm_cos_queue_t offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_egress_mapping_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_t *int_pri, 
    bcm_cos_t *cos, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_egress_mapping_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_t int_pri, 
    bcm_cos_t cos, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_egress_multicast_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_t ingress_pri, 
    bcm_color_t ingress_dp, 
    uint32 flags, 
    bcm_cosq_egress_multicast_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_egress_multicast_config_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_t ingress_pri, 
    bcm_color_t ingress_dp, 
    uint32 flags, 
    bcm_cosq_egress_multicast_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_enable_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_enable_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_fadt_threshold_get(
    int unit, 
    uint32 flags, 
    bcm_cosq_fadt_info_t *fadt_info, 
    bcm_cosq_fadt_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_fadt_threshold_set(
    int unit, 
    uint32 flags, 
    bcm_cosq_fadt_info_t *fadt_info, 
    bcm_cosq_fadt_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_flow_control_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cos_t int_pri, 
    uint32 *flow_control_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_flow_control_set(
    int unit, 
    bcm_gport_t port, 
    bcm_cos_t int_pri, 
    uint32 flow_control_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t *physical_port, 
    int *num_cos_levels, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_handle_core_get(
    int unit, 
    bcm_core_t core, 
    bcm_cosq_gport_info_core_t *gport_info, 
    bcm_gport_t *out_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_mapping_get(
    int unit, 
    bcm_port_t ing_port, 
    bcm_cos_t int_pri, 
    uint32 flags, 
    bcm_gport_t *gport, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_mapping_set(
    int unit, 
    bcm_port_t ing_port, 
    bcm_cos_t int_pri, 
    uint32 flags, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_multipath_add(
    int unit, 
    bcm_gport_t multipath_gport, 
    bcm_gport_t member_gport, 
    bcm_cos_queue_t member_gport_cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_multipath_delete(
    int unit, 
    bcm_gport_t multipath_gport, 
    bcm_gport_t member_gport, 
    bcm_cos_queue_t member_gport_cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_multipath_get(
    int unit, 
    bcm_gport_t multipath_gport, 
    int member_gport_max, 
    bcm_gport_t *member_gport_array, 
    bcm_cos_queue_t *member_gport_cosq_array, 
    int *member_gport_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_parent_get(
    int unit, 
    bcm_gport_t child_port, 
    bcm_cos_queue_t cos, 
    bcm_gport_t *parent_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_pkt_size_adjust_get(
    int unit, 
    bcm_cosq_pkt_size_adjust_info_t *adjust_info, 
    int *delta)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_pkt_size_adjust_set(
    int unit, 
    bcm_cosq_pkt_size_adjust_info_t *adjust_info, 
    int delta)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_pon_link_sla_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_pon_link_sla_t *link_sla)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_pon_link_sla_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_pon_link_sla_t *link_sla)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_queue_attach(
    int unit, 
    uint32 flags, 
    bcm_gport_t ingress_queue, 
    bcm_cos_t ingress_int_pri, 
    bcm_gport_t egress_queue, 
    bcm_cos_t egress_int_pri, 
    int *attach_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_queue_attach_get(
    int unit, 
    bcm_gport_t ingress_queue, 
    bcm_cos_t ingress_int_pri, 
    bcm_gport_t *egress_queue, 
    bcm_cos_t *egress_int_pri, 
    int attach_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_queue_detach(
    int unit, 
    bcm_gport_t ingress_queue, 
    bcm_cos_t ingress_int_pri, 
    int attach_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_reattach(
    int unit, 
    bcm_gport_t sched_port, 
    bcm_gport_t input_port, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_report_threshold_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_report_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_report_threshold_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_report_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_sched_config_get(
    int unit, 
    bcm_gport_t gport, 
    int sched_mode, 
    int int_pri, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_sched_config_set(
    int unit, 
    bcm_gport_t gport, 
    int sched_mode, 
    int int_pri, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_size_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    uint32 *bytes_min, 
    uint32 *bytes_max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_size_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    uint32 bytes_min, 
    uint32 bytes_max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t lgl_gport, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_gport_stat_profile_t *profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_config_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t lgl_gport, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_gport_stat_profile_t profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_enable_get(
    int unit, 
    bcm_gport_t gport, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_enable_set(
    int unit, 
    bcm_gport_t gport, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_gport_stats_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_gport_stats_t stat, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_stat_sync_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_gport_stats_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_statistic_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t lgl_gport, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_gport_stats_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_statistic_multi_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t lgl_gport, 
    bcm_cos_queue_t cosq, 
    int stat_count, 
    bcm_cosq_gport_stats_t *stats_array, 
    int value_count, 
    uint64 *value_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_statistic_multi_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t lgl_gport, 
    bcm_cos_queue_t cosq, 
    int stat_count, 
    bcm_cosq_gport_stats_t *stats_array, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_statistic_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t lgl_gport, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_gport_stats_t stat, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_traverse(
    int unit, 
    bcm_cosq_gport_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_vsq_add(
    int unit, 
    bcm_gport_t vsq, 
    bcm_gport_t queue, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_vsq_create(
    int unit, 
    bcm_cosq_vsq_info_t *vsq_info, 
    bcm_gport_t *vsq_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_vsq_delete(
    int unit, 
    bcm_gport_t vsq, 
    bcm_gport_t queue, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_vsq_delete_all(
    int unit, 
    bcm_gport_t vsq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_vsq_destroy(
    int unit, 
    bcm_gport_t vsq_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_gport_vsq_get(
    int unit, 
    bcm_gport_t vsq, 
    int queue_max, 
    bcm_gport_t *queue_array, 
    bcm_cos_queue_t *cosq_array, 
    int *queue_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_icgm_resource_stat_get(
    int unit, 
    bcm_cosq_icgm_resource_stat_key_t *stat_key, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_control_frame_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_cosq_ingress_drop_control_frame_config_t *control_frame_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_control_frame_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_cosq_ingress_drop_control_frame_config_t *control_frame_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_custom_ether_type_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 ether_type_code, 
    uint32 *ether_type_val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_custom_ether_type_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 ether_type_code, 
    uint32 ether_type_val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_default_priority_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 *default_priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_default_priority_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 default_priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_enable_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int *enable_mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_enable_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int enable_mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_flex_key_construct_get(
    int unit, 
    bcm_cosq_ingress_drop_flex_key_construct_id_t *key_id, 
    uint32 flags, 
    bcm_cosq_ingress_drop_flex_key_construct_t *flex_key_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_flex_key_construct_set(
    int unit, 
    bcm_cosq_ingress_drop_flex_key_construct_id_t *key_id, 
    uint32 flags, 
    bcm_cosq_ingress_drop_flex_key_construct_t *flex_key_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_flex_key_entry_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 key_index, 
    bcm_cosq_ingress_drop_flex_key_entry_t *flex_key_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_flex_key_entry_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 key_index, 
    bcm_cosq_ingress_drop_flex_key_entry_t *flex_key_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_map_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_cosq_ingress_port_drop_map_t map, 
    uint32 key, 
    int *priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_map_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_cosq_ingress_port_drop_map_t map, 
    uint32 key, 
    int priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_threshold_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int priority, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_port_drop_threshold_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int priority, 
    uint32 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_ingress_queue_bundle_gport_add(
    int unit, 
    bcm_cosq_ingress_queue_bundle_gport_config_t *config, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_mapping_get(
    int unit, 
    bcm_cos_t priority, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_mapping_set(
    int unit, 
    bcm_cos_t priority, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_max_latency_pkts_get(
    int unit, 
    bcm_gport_t gport, 
    uint32 flags, 
    int max_count, 
    bcm_cosq_max_latency_pkts_t *max_latency_pkts, 
    int *actual_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_class_mapping_get(
    int unit, 
    bcm_gport_t port, 
    int array_max, 
    bcm_cosq_pfc_class_mapping_t *mapping_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_class_mapping_set(
    int unit, 
    bcm_gport_t port, 
    int array_count, 
    bcm_cosq_pfc_class_mapping_t *mapping_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_pfc_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_config_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_pfc_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_config_get(
    int unit, 
    int priority, 
    bcm_cosq_pfc_deadlock_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_config_set(
    int unit, 
    int priority, 
    bcm_cosq_pfc_deadlock_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_info_get(
    int unit, 
    int priority, 
    bcm_cosq_pfc_deadlock_info_t *pfc_deadlock_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_queue_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cosq_pfc_deadlock_queue_config_t *q_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_queue_config_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cosq_pfc_deadlock_queue_config_t *q_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_queue_status_get(
    int unit, 
    bcm_gport_t gport, 
    uint8 *deadlock_status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_recovery_event_register(
    int unit, 
    bcm_cosq_pfc_deadlock_recovery_event_cb_t callback, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pfc_deadlock_recovery_event_unregister(
    int unit, 
    bcm_cosq_pfc_deadlock_recovery_event_cb_t callback, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pkt_size_adjust_delta_map_get(
    int unit, 
    int delta, 
    int *final_delta)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_pkt_size_adjust_delta_map_set(
    int unit, 
    int delta, 
    int final_delta)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_bandwidth_get(
    int unit, 
    bcm_port_t port, 
    bcm_cos_queue_t cosq, 
    uint32 *kbits_sec_min, 
    uint32 *kbits_sec_max, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_bandwidth_set(
    int unit, 
    bcm_port_t port, 
    bcm_cos_queue_t cosq, 
    uint32 kbits_sec_min, 
    uint32 kbits_sec_max, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_mapping_get(
    int unit, 
    bcm_port_t port, 
    bcm_cos_t priority, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_mapping_multi_get(
    int unit, 
    bcm_port_t port, 
    int count, 
    bcm_cos_t *priority_array, 
    bcm_cos_queue_t *cosq_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_mapping_multi_set(
    int unit, 
    bcm_port_t port, 
    int count, 
    bcm_cos_t *priority_array, 
    bcm_cos_queue_t *cosq_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_mapping_set(
    int unit, 
    bcm_port_t port, 
    bcm_cos_t priority, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_sched_get(
    int unit, 
    bcm_pbmp_t pbm, 
    int *mode, 
    int weights[BCM_COS_COUNT], 
    int *delay)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_port_sched_set(
    int unit, 
    bcm_pbmp_t pbm, 
    int mode, 
    const int weights[BCM_COS_COUNT], 
    int delay)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_priority_get(
    int unit, 
    int start_queue, 
    int end_queue, 
    int *pri_profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_priority_profile_get(
    int unit, 
    int pri_profile_id, 
    int *count, 
    bcm_cosq_gport_priority_profile_t *pri_profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_priority_profile_set(
    int unit, 
    int pri_profile_id, 
    int count, 
    bcm_cosq_gport_priority_profile_t *pri_profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_priority_set(
    int unit, 
    int start_queue, 
    int end_queue, 
    int pri_profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_profile_mapping_get(
    int unit, 
    bcm_gport_t gport_to_map, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_switch_profile_mapping_t *profile_mapping)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_profile_mapping_set(
    int unit, 
    bcm_gport_t gport_to_map, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_switch_profile_mapping_t *profile_mapping)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_qcn_config_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_qcn_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_qcn_config_set(
    int unit, 
    bcm_gport_t port, 
    bcm_cos_queue_t cosq, 
    uint32 flags, 
    bcm_cosq_qcn_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_resource_allocation_get(
    int unit, 
    uint32 flags, 
    bcm_cosq_resource_t resource, 
    bcm_cosq_allocation_entity_t *target, 
    bcm_cosq_resource_amounts_t *amounts)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_resource_allocation_set(
    int unit, 
    uint32 flags, 
    bcm_cosq_resource_t resource, 
    bcm_cosq_allocation_entity_t *target, 
    bcm_cosq_resource_amounts_t *amounts)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_safc_class_mapping_get(
    int unit, 
    bcm_gport_t port, 
    int array_max, 
    bcm_cosq_safc_class_mapping_t *mapping_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_safc_class_mapping_set(
    int unit, 
    bcm_gport_t port, 
    int array_count, 
    bcm_cosq_safc_class_mapping_t *mapping_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_sched_get(
    int unit, 
    int *mode, 
    int weights[BCM_COS_COUNT], 
    int *delay)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_sched_set(
    int unit, 
    int mode, 
    const int weights[BCM_COS_COUNT], 
    int delay)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_sched_weight_max_get(
    int unit, 
    int mode, 
    int *weight_max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_service_pool_get(
    int unit, 
    bcm_service_pool_id_t id, 
    bcm_cosq_service_pool_t *cosq_service_pool)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_service_pool_set(
    int unit, 
    bcm_service_pool_id_t id, 
    bcm_cosq_service_pool_t cosq_service_pool)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_slow_profile_get(
    int unit, 
    bcm_cosq_slow_level_t *slow_level, 
    bcm_cosq_slow_profile_attributes_t *attr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_slow_profile_set(
    int unit, 
    bcm_cosq_slow_level_t *slow_level, 
    bcm_cosq_slow_profile_attributes_t *attr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_src_vsqs_gport_add(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_src_vsqs_gport_config_t *config, 
    bcm_gport_t *src_port_vsq_gport, 
    bcm_gport_t *pg_base_vsq_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_src_vsqs_gport_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_src_vsqs_gport_config_t *config, 
    bcm_gport_t *src_port_vsq_gport, 
    bcm_gport_t *pg_base_vsq_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_config_get(
    int unit, 
    int stat_count, 
    bcm_cosq_stat_t *stat_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_config_set(
    int unit, 
    int stat_count, 
    bcm_cosq_stat_t *stat_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_stat_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_get32(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_stat_t stat, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_stat_t stat, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_set32(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_stat_t stat, 
    uint32 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_sync_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_stat_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_stat_sync_get32(
    int unit, 
    bcm_gport_t gport, 
    bcm_cos_queue_t cosq, 
    bcm_cosq_stat_t stat, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subport_flow_control_get(
    int unit, 
    bcm_gport_t subport, 
    bcm_gport_t *sched_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subport_flow_control_set(
    int unit, 
    bcm_gport_t subport, 
    bcm_gport_t sched_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subscriber_map_add(
    int unit, 
    bcm_cosq_subscriber_map_t *map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subscriber_map_delete(
    int unit, 
    bcm_cosq_subscriber_map_t *map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subscriber_map_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subscriber_map_get(
    int unit, 
    bcm_cosq_subscriber_map_t *map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_subscriber_traverse(
    int unit, 
    bcm_cosq_subscriber_map_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_control_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_control_set(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_commit(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_id_t pid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_create(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_t *profile, 
    bcm_cosq_tas_profile_id_t *pid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_destroy(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_id_t pid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_destroy_all(
    int unit, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_id_t pid, 
    bcm_cosq_tas_profile_t *profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_set(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_id_t pid, 
    bcm_cosq_tas_profile_t *profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_status_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_id_t pid, 
    bcm_cosq_tas_profile_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_profile_traverse(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_profile_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_cosq_tas_status_get(
    int unit, 
    bcm_gport_t port, 
    bcm_cosq_tas_status_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_buffer_multi_get(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    int array_max, 
    bcm_cosq_tcb_buffer_t *buffer_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_cb_register(
    int unit, 
    bcm_cosq_tcb_callback_t fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_cb_unregister(
    int unit, 
    bcm_cosq_tcb_callback_t fn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_config_get(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    bcm_cosq_tcb_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_config_set(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    bcm_cosq_tcb_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_control_get(
    int unit, 
    int buffer_id, 
    bcm_cosq_tcb_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_control_set(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    bcm_cosq_tcb_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_event_multi_get(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    int array_max, 
    bcm_cosq_tcb_event_t *event_array, 
    int *array_count, 
    int *overflow_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_gport_threshold_mapping_get(
    int unit, 
    bcm_cosq_object_id_t *id, 
    int *profile_index)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_gport_threshold_mapping_set(
    int unit, 
    bcm_cosq_object_id_t *id, 
    int profile_index)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_threshold_profile_create(
    int unit, 
    int flags, 
    bcm_cosq_buffer_id_t buffer_id, 
    bcm_cosq_tcb_threshold_profile_t *threshold, 
    int *profile_index)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_threshold_profile_destroy(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    int profile_index)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_TCB)
int 
bcm_dfe_cosq_tcb_threshold_profile_get(
    int unit, 
    bcm_cosq_buffer_id_t buffer_id, 
    int profile_index, 
    bcm_cosq_tcb_threshold_profile_t *threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_cosq_voq_connector_gport_add(
    int unit, 
    bcm_cosq_voq_connector_gport_t *config, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_custom_port_get(
    int unit, 
    bcm_port_t port, 
    int type, 
    int max_len, 
    uint32 *args, 
    int *actual_len)
{
    return bcm_common_custom_port_get(unit, port, type, max_len, args, actual_len);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_custom_port_set(
    int unit, 
    bcm_port_t port, 
    int type, 
    int len, 
    uint32 *args)
{
    return bcm_common_custom_port_set(unit, port, type, len, args);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_custom_register(
    int unit, 
    bcm_custom_cb_t func, 
    void *user_data)
{
    return bcm_common_custom_register(unit, func, user_data);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_custom_unregister(
    int unit)
{
    return bcm_common_custom_unregister(unit);
}
#endif

int 
bcm_dfe_eav_bandwidth_get(
    int unit, 
    bcm_port_t port, 
    bcm_eav_stream_class_t type, 
    uint32 *bytes_sec, 
    uint32 *bytes_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_bandwidth_set(
    int unit, 
    bcm_port_t port, 
    bcm_eav_stream_class_t type, 
    uint32 bytes_sec, 
    uint32 bytes_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_control_get(
    int unit, 
    bcm_eav_control_t type, 
    uint32 *arg, 
    uint32 *arg2)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_control_set(
    int unit, 
    bcm_eav_control_t type, 
    uint32 arg, 
    uint32 arg2)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_link_status_get(
    int unit, 
    bcm_port_t port, 
    int *link)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_link_status_set(
    int unit, 
    bcm_port_t port, 
    int link)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_pcp_mapping_get(
    int unit, 
    bcm_eav_stream_class_t type, 
    int *pcp, 
    int *remapped_pcp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_pcp_mapping_set(
    int unit, 
    bcm_eav_stream_class_t type, 
    int pcp, 
    int remapped_pcp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_port_enable_get(
    int unit, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_port_enable_set(
    int unit, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_srp_mac_ethertype_get(
    int unit, 
    bcm_mac_t mac, 
    bcm_port_ethertype_t *ethertype)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_srp_mac_ethertype_set(
    int unit, 
    bcm_mac_t mac, 
    bcm_port_ethertype_t ethertype)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_timestamp_get(
    int unit, 
    bcm_port_t port, 
    uint32 *timestamp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_timesync_mac_get(
    int unit, 
    bcm_mac_t eav_mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_eav_timesync_mac_set(
    int unit, 
    bcm_mac_t eav_mac)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_ecn_map_create(
    int unit, 
    uint32 flags, 
    int *ecn_map_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ecn_map_destroy(
    int unit, 
    int ecn_map_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ecn_map_get(
    int unit, 
    int ecn_map_id, 
    bcm_ecn_map_t *ecn_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ecn_map_set(
    int unit, 
    uint32 options, 
    int ecn_map_id, 
    bcm_ecn_map_t *ecn_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ecn_port_map_get(
    int unit, 
    bcm_gport_t port, 
    bcm_ecn_port_map_t *ecn_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ecn_port_map_set(
    int unit, 
    bcm_gport_t port, 
    bcm_ecn_port_map_t *ecn_map)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_ecn_responsive_protocol_get(
    int unit, 
    uint8 ip_proto, 
    int *responsive)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ecn_responsive_protocol_set(
    int unit, 
    uint8 ip_proto, 
    int responsive)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ecn_traffic_action_config_get(
    int unit, 
    bcm_ecn_traffic_action_config_t *ecn_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ecn_traffic_action_config_set(
    int unit, 
    bcm_ecn_traffic_action_config_t *ecn_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ecn_traffic_map_get(
    int unit, 
    bcm_ecn_traffic_map_info_t *map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ecn_traffic_map_set(
    int unit, 
    bcm_ecn_traffic_map_info_t *map)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_QL_SSM_map(
    int unit, 
    bcm_esmc_network_option_t opt, 
    bcm_esmc_quality_level_t ql, 
    uint8 *ssm_code)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_SSM_QL_map(
    int unit, 
    bcm_esmc_network_option_t opt, 
    uint8 ssm_code, 
    bcm_esmc_quality_level_t *ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_g781_option_get(
    int unit, 
    int stack_id, 
    bcm_esmc_network_option_t *g781_option)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_g781_option_set(
    int unit, 
    int stack_id, 
    bcm_esmc_network_option_t g781_option)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_rx_callback_register(
    int unit, 
    int stack_id, 
    bcm_esmc_rx_cb rx_cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_rx_callback_unregister(
    int unit, 
    int stack_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_tunnel_get(
    int unit, 
    int stack_id, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_tunnel_set(
    int unit, 
    int stack_id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_esmc_tx(
    int unit, 
    int stack_id, 
    bcm_pbmp_t pbmp, 
    bcm_esmc_pdu_data_t *esmc_pdu_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_egress_add(
    int unit, 
    bcm_gport_t extender_port, 
    bcm_extender_egress_t *extender_egress)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_egress_delete(
    int unit, 
    bcm_gport_t extender_port, 
    bcm_extender_egress_t *extender_egress)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_egress_delete_all(
    int unit, 
    bcm_gport_t extender_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_egress_get(
    int unit, 
    bcm_gport_t extender_port, 
    bcm_extender_egress_t *extender_egress)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_egress_get_all(
    int unit, 
    bcm_gport_t extender_port, 
    int array_size, 
    bcm_extender_egress_t *extender_egress_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_egress_set(
    int unit, 
    bcm_gport_t extender_port, 
    int array_size, 
    bcm_extender_egress_t *extender_egress_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_encap_create(
    int unit, 
    bcm_extender_encap_t *extender_encap)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_encap_destroy(
    int unit, 
    bcm_gport_t *extender_encap_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_encap_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_encap_get(
    int unit, 
    bcm_extender_encap_t *extender_encap)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_encap_traverse(
    int unit, 
    bcm_extender_encap_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_forward_add(
    int unit, 
    bcm_extender_forward_t *extender_forward_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_forward_delete(
    int unit, 
    bcm_extender_forward_t *extender_forward_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_forward_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_forward_get(
    int unit, 
    bcm_extender_forward_t *extender_forward_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_forward_traverse(
    int unit, 
    bcm_extender_forward_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_port_add(
    int unit, 
    bcm_extender_port_t *extender_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_port_delete(
    int unit, 
    bcm_gport_t extender_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_port_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_port_get(
    int unit, 
    bcm_extender_port_t *extender_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_extender_port_traverse(
    int unit, 
    bcm_extender_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_fabric_action_create(
    int unit, 
    bcm_fabric_action_info_t *action_info, 
    bcm_fabric_action_t *action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_action_destroy(
    int unit, 
    bcm_fabric_action_t action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_action_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_action_get(
    int unit, 
    bcm_fabric_action_t action_id, 
    bcm_fabric_action_info_t *action_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_action_traverse(
    int unit, 
    bcm_fabric_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_bandwidth_core_profile_get(
    int unit, 
    int core, 
    uint32 flags, 
    int profile_count, 
    bcm_fabric_bandwidth_profile_t *profile_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_bandwidth_core_profile_set(
    int unit, 
    int core, 
    uint32 flags, 
    int profile_count, 
    bcm_fabric_bandwidth_profile_t *profile_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_bandwidth_profile_get(
    int unit, 
    int profile_count, 
    bcm_fabric_bandwidth_profile_t *profile_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_bandwidth_profile_set(
    int unit, 
    int profile_count, 
    bcm_fabric_bandwidth_profile_t *profile_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_active(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_get(
    int unit, 
    int cindex, 
    int *connection, 
    bcm_gport_t *dest_port, 
    bcm_cos_queue_t *dest_cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_max_get(
    int unit, 
    int *max_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_multi_get(
    int unit, 
    int array_size, 
    int *connection_array, 
    bcm_gport_t *dest_port_array, 
    bcm_cos_queue_t *dest_cosq_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_multi_set(
    int unit, 
    int array_size, 
    int *connection_array, 
    bcm_gport_t *dest_port_array, 
    bcm_cos_queue_t *dest_cosq_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_set(
    int unit, 
    int cindex, 
    int connection, 
    bcm_gport_t dest_port, 
    bcm_cos_queue_t dest_cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_size_get(
    int unit, 
    int *config_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_calendar_size_set(
    int unit, 
    int config_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_config_discard_get(
    int unit, 
    bcm_fabric_config_discard_t *discard)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_config_discard_set(
    int unit, 
    bcm_fabric_config_discard_t *discard)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_congestion_size_get(
    int unit, 
    bcm_module_t module_id, 
    int *max_ports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_congestion_size_set(
    int unit, 
    bcm_module_t module_id, 
    int max_ports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_connection_bytes_get(
    int unit, 
    int src_modid, 
    int dst_modid, 
    bcm_fabric_connection_mode_t mode, 
    int link_fail_count, 
    int *max_bytes)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_connection_interval_get(
    int unit, 
    int link_fail_count, 
    int *connection_interval)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_connection_max_get(
    int unit, 
    int link_fail_count, 
    int *connection)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_control_redundancy_register(
    int unit, 
    bcm_fabric_control_redundancy_handler_t f)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_control_redundancy_unregister(
    int unit, 
    bcm_fabric_control_redundancy_handler_t f)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_connection_get(
    int unit, 
    int xbar, 
    int src_modid, 
    bcm_port_t src_xbport, 
    int dst_modid, 
    bcm_port_t *dst_xbport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_connection_set(
    int unit, 
    int xbar, 
    int src_modid, 
    bcm_port_t src_xbport, 
    int dst_modid, 
    bcm_port_t dst_xbport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_connection_status_get(
    int unit, 
    int src_modid, 
    int dst_modid, 
    bcm_fabric_connection_mode_t mode, 
    uint64 *xbars)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_enable_get(
    int unit, 
    uint64 *xbars)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_enable_set(
    int unit, 
    uint64 xbars)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_mapping_get(
    int unit, 
    int modid, 
    int switch_fabric_arbiter_id, 
    int xbar, 
    bcm_port_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_mapping_set(
    int unit, 
    int modid, 
    int switch_fabric_arbiter_id, 
    int xbar, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_crossbar_status_get(
    int unit, 
    uint64 *xbars)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_destination_link_min_get(
    int unit, 
    uint32 flags, 
    bcm_module_t module_id, 
    int *num_of_links)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_destination_link_min_set(
    int unit, 
    uint32 flags, 
    bcm_module_t module_id, 
    int num_of_links)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_distribution_control_get(
    int unit, 
    bcm_fabric_distribution_t ds_id, 
    bcm_fabric_distribution_control_t type, 
    int *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_distribution_control_set(
    int unit, 
    bcm_fabric_distribution_t ds_id, 
    bcm_fabric_distribution_control_t type, 
    int value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_distribution_create(
    int unit, 
    uint32 flags, 
    bcm_fabric_distribution_t *ds_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_distribution_destroy(
    int unit, 
    bcm_fabric_distribution_t ds_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_distribution_get(
    int unit, 
    bcm_fabric_distribution_t ds_id, 
    int max_count, 
    int *dist_modids, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_distribution_set(
    int unit, 
    bcm_fabric_distribution_t ds_id, 
    int modid_count, 
    int *dist_modids)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_module_control_get(
    int unit, 
    uint32 flags, 
    bcm_module_t modid, 
    bcm_fabric_module_control_t control, 
    int *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_module_control_set(
    int unit, 
    uint32 flags, 
    bcm_module_t modid, 
    bcm_fabric_module_control_t control, 
    int value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_operating_interval_get(
    int unit, 
    int link_fail_count, 
    int *operating_interval)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_packet_adjust_get(
    int unit, 
    int pkt_adjust_selector, 
    int *pkt_adjust_len)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_packet_adjust_set(
    int unit, 
    int pkt_adjust_selector, 
    int pkt_adjust_len)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_pcp_dest_mode_config_get(
    int unit, 
    uint32 flags, 
    bcm_module_t modid, 
    bcm_fabric_pcp_mode_config_t *pcp_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_pcp_dest_mode_config_set(
    int unit, 
    uint32 flags, 
    bcm_module_t modid, 
    bcm_fabric_pcp_mode_config_t *pcp_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_port_create(
    int unit, 
    bcm_gport_t parent_port, 
    int offset, 
    uint32 flags, 
    bcm_gport_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_port_destroy(
    int unit, 
    bcm_gport_t parent_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_port_failover_get(
    int unit, 
    bcm_gport_t port, 
    bcm_failover_t *failover_id, 
    bcm_gport_t *failover_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_port_failover_set(
    int unit, 
    bcm_gport_t port, 
    bcm_failover_t failover_id, 
    bcm_gport_t failover_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_port_get(
    int unit, 
    bcm_gport_t child_port, 
    uint32 flags, 
    bcm_gport_t *parent_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_action_create(
    int unit, 
    bcm_fabric_predicate_action_info_t *predicate_action, 
    bcm_fabric_predicate_action_t *predicate_action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_action_destroy(
    int unit, 
    bcm_fabric_predicate_action_t predicate_action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_action_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_action_get(
    int unit, 
    bcm_fabric_predicate_action_t predicate_action_id, 
    bcm_fabric_predicate_action_info_t *predicate_action_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_action_traverse(
    int unit, 
    bcm_fabric_predicate_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_create(
    int unit, 
    bcm_fabric_predicate_info_t *pred_info, 
    bcm_fabric_predicate_t *pred_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_destroy(
    int unit, 
    bcm_fabric_predicate_t pred_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_get(
    int unit, 
    bcm_fabric_predicate_t pred_id, 
    bcm_fabric_predicate_info_t *pred_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_predicate_traverse(
    int unit, 
    bcm_fabric_predicate_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_priority_get(
    int unit, 
    uint32 flags, 
    bcm_cos_t ingress_pri, 
    bcm_color_t color, 
    int *fabric_priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_priority_set(
    int unit, 
    uint32 flags, 
    bcm_cos_t ingress_pri, 
    bcm_color_t color, 
    int fabric_priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_create(
    int unit, 
    uint32 flags, 
    int base, 
    int count, 
    bcm_fabric_qsel_t *qsel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_destroy(
    int unit, 
    bcm_fabric_qsel_t qsel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_entry_get(
    int unit, 
    bcm_fabric_qsel_t qsel_id, 
    int offset, 
    bcm_gport_t *queue, 
    bcm_fabric_qsel_offset_t *qsel_offset_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_entry_multi_get(
    int unit, 
    bcm_fabric_qsel_t qsel_id, 
    int offset, 
    int count, 
    bcm_gport_t *queue, 
    bcm_fabric_qsel_offset_t *qsel_offset_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_entry_multi_set(
    int unit, 
    bcm_fabric_qsel_t qsel_id, 
    int offset, 
    int count, 
    bcm_gport_t *queue, 
    bcm_fabric_qsel_offset_t *qsel_offset_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_entry_set(
    int unit, 
    bcm_fabric_qsel_t qsel_id, 
    int offset, 
    bcm_gport_t queue, 
    bcm_fabric_qsel_offset_t qsel_offset_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_entry_traverse(
    int unit, 
    bcm_fabric_qsel_t qsel_id, 
    bcm_fabric_qsel_entry_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_get(
    int unit, 
    bcm_fabric_qsel_t qsel_id, 
    uint32 *flags, 
    int *base, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_create(
    int unit, 
    uint32 flags, 
    bcm_fabric_qsel_offset_t *qsel_offset_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_destroy(
    int unit, 
    bcm_fabric_qsel_offset_t qsel_offset_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_entry_get(
    int unit, 
    bcm_fabric_qsel_offset_t qsel_offset_id, 
    bcm_cos_t int_pri, 
    int *offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_entry_set(
    int unit, 
    bcm_fabric_qsel_offset_t qsel_offset_id, 
    bcm_cos_t int_pri, 
    int offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_entry_traverse(
    int unit, 
    bcm_fabric_qsel_offset_t qsel_offset_id, 
    bcm_fabric_qsel_offset_entry_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_offset_traverse(
    int unit, 
    bcm_fabric_qsel_offset_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_qsel_traverse(
    int unit, 
    bcm_fabric_qsel_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_rci_config_get(
    int unit, 
    bcm_fabric_rci_config_t *rci_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_rci_config_set(
    int unit, 
    bcm_fabric_rci_config_t rci_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_static_replication_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 destid_count, 
    bcm_module_t *destid_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_tdm_direct_routing_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_fabric_tdm_direct_routing_t *routing_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_tdm_direct_routing_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_fabric_tdm_direct_routing_t *routing_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_tdm_editing_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_fabric_tdm_editing_t *editing)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_tdm_editing_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_fabric_tdm_editing_t *editing)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_tdm_enable_get(
    int unit, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fabric_tdm_enable_set(
    int unit, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_create(
    int unit, 
    uint32 flags, 
    bcm_failover_t *failover_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_destroy(
    int unit, 
    bcm_failover_t failover_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_get(
    int unit, 
    bcm_failover_t failover_id, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_multi_level_attach(
    int unit, 
    bcm_failover_multi_level_t multi_level_failover)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_failover_ring_config_get(
    int unit, 
    bcm_failover_ring_t *failover_ring)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_failover_ring_config_set(
    int unit, 
    bcm_failover_ring_t *failover_ring)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_set(
    int unit, 
    bcm_failover_t failover_id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_status_get(
    int unit, 
    bcm_failover_element_t *failover, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_failover_status_set(
    int unit, 
    bcm_failover_element_t *failover, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_diag_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_diag_code_t *diag)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_event_enable_get(
    int unit, 
    bcm_fcmap_event_t t, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_event_enable_set(
    int unit, 
    bcm_fcmap_event_t t, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_event_register(
    int unit, 
    bcm_fcmap_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_event_unregister(
    int unit, 
    bcm_fcmap_event_cb cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_linkfault_trigger_rc_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_lf_tr_t *trigger, 
    bcm_fcmap_lf_rc_t *rc)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_ability_advert_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_ability_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_ability_advert_set(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_ability_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_config_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_config_selective_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_config_selective_set(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_config_set(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_enable(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_link_reset(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_shutdown(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_speed_set(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_port_speed_t speed)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_port_traverse(
    int unit, 
    bcm_fcmap_port_traverse_cb callbk, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_stat_clear(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_stat_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_stat_get32(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_vlan_map_add(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_vlan_vsan_map_t *vlan)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_vlan_map_delete(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_vlan_vsan_map_t *vlan)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_FCMAP)
int 
bcm_dfe_fcmap_vlan_map_get(
    int unit, 
    bcm_port_t port, 
    bcm_fcmap_vlan_vsan_map_t *vlan)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_fcoe_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_control_vsan_get(
    int unit, 
    bcm_fcoe_vsan_id_t vsan_id, 
    bcm_fcoe_vsan_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_control_vsan_set(
    int unit, 
    bcm_fcoe_vsan_id_t vsan_id, 
    bcm_fcoe_vsan_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_enable_set(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_fc_header_type_get(
    int unit, 
    uint32 flags, 
    uint8 r_ctl, 
    bcm_fcoe_fc_header_type_t *hdr_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_fc_header_type_set(
    int unit, 
    uint32 flags, 
    uint8 r_ctl, 
    bcm_fcoe_fc_header_type_t hdr_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_intf_config_get(
    int unit, 
    uint32 flags, 
    bcm_if_t intf, 
    bcm_fcoe_intf_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_intf_config_set(
    int unit, 
    uint32 flags, 
    bcm_if_t intf, 
    bcm_fcoe_intf_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_add(
    int unit, 
    bcm_fcoe_route_t *route)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_delete(
    int unit, 
    bcm_fcoe_route_t *route)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_delete_by_interface(
    int unit, 
    bcm_fcoe_route_t *route)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_delete_by_prefix(
    int unit, 
    bcm_fcoe_route_t *route)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_find(
    int unit, 
    bcm_fcoe_route_t *route)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_stat_attach(
    int unit, 
    bcm_fcoe_route_t *route, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_stat_counter_get(
    int unit, 
    bcm_fcoe_route_t *route, 
    bcm_fcoe_route_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_stat_counter_set(
    int unit, 
    bcm_fcoe_route_t *route, 
    bcm_fcoe_route_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_stat_counter_sync_get(
    int unit, 
    bcm_fcoe_route_t *route, 
    bcm_fcoe_route_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_stat_detach(
    int unit, 
    bcm_fcoe_route_t *route)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_stat_id_get(
    int unit, 
    bcm_fcoe_route_t *route, 
    bcm_fcoe_route_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_route_traverse(
    int unit, 
    uint32 flags, 
    bcm_fcoe_route_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_create(
    int unit, 
    uint32 options, 
    bcm_fcoe_vsan_t *vsan, 
    bcm_fcoe_vsan_id_t *vsan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_destroy(
    int unit, 
    bcm_fcoe_vsan_id_t vsan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_get(
    int unit, 
    bcm_fcoe_vsan_id_t vsan_id, 
    bcm_fcoe_vsan_t *vsan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_set(
    int unit, 
    bcm_fcoe_vsan_id_t vsan_id, 
    bcm_fcoe_vsan_t *vsan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_stat_attach(
    int unit, 
    bcm_fcoe_vsan_id_t vsan, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_stat_counter_get(
    int unit, 
    bcm_fcoe_vsan_id_t vsan, 
    bcm_fcoe_vsan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_stat_counter_set(
    int unit, 
    bcm_fcoe_vsan_id_t vsan, 
    bcm_fcoe_vsan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_stat_counter_sync_get(
    int unit, 
    bcm_fcoe_vsan_id_t vsan, 
    bcm_fcoe_vsan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_stat_detach(
    int unit, 
    bcm_fcoe_vsan_id_t vsan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_stat_id_get(
    int unit, 
    bcm_fcoe_vsan_id_t vsan, 
    bcm_fcoe_vsan_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_translate_action_add(
    int unit, 
    bcm_fcoe_vsan_translate_key_config_t *key, 
    bcm_fcoe_vsan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_translate_action_delete(
    int unit, 
    bcm_fcoe_vsan_translate_key_config_t *key)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_vsan_traverse(
    int unit, 
    uint32 flags, 
    bcm_fcoe_vsan_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_add(
    int unit, 
    bcm_fcoe_zone_entry_t *zone)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_delete(
    int unit, 
    bcm_fcoe_zone_entry_t *zone)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_delete_by_did(
    int unit, 
    bcm_fcoe_zone_entry_t *zone)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_delete_by_sid(
    int unit, 
    bcm_fcoe_zone_entry_t *zone)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_delete_by_vsan(
    int unit, 
    bcm_fcoe_zone_entry_t *zone)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_get(
    int unit, 
    bcm_fcoe_zone_entry_t *zone)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_fcoe_zone_traverse(
    int unit, 
    uint32 flags, 
    bcm_fcoe_zone_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    uint32 param0, 
    uint32 param1)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_class_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_class_info_t *class_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_class_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_class_info_t *class_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_config_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    int core_config_arr_len, 
    bcm_field_action_core_config_t *core_config_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_copytocpu_config_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_CopyToCpu_config_t *CopyToCpu_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_copytocpu_config_set(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_CopyToCpu_config_t CopyToCpu_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_delete(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    uint32 param0, 
    uint32 param1)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    uint32 *param0, 
    uint32 *param1)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_mac_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_mac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_ports_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_ports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_redirect_config_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_redirect_config_t *redirect_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_redirect_config_set(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_redirect_config_t redirect_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_remove(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_action_t action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_remove_all(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_width_get(
    int unit, 
    uint32 flags, 
    int internal_action, 
    uint32 *width_p)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_action_width_set(
    int unit, 
    uint32 flags, 
    int internal_action, 
    uint32 width)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_class_map_get(
    int unit, 
    bcm_field_stage_t stage, 
    bcm_field_qualify_t qual, 
    uint32 num_entries, 
    uint32 *orig_values_array, 
    uint32 *map_values_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_class_map_set(
    int unit, 
    bcm_field_stage_t stage, 
    bcm_field_qualify_t qual, 
    uint32 num_entries, 
    uint32 *orig_values_array, 
    uint32 *map_values_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_class_size_get(
    int unit, 
    bcm_field_qualify_t qual, 
    uint16 *class_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_control_get(
    int unit, 
    bcm_field_control_t control, 
    uint32 *state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_control_set(
    int unit, 
    bcm_field_control_t control, 
    uint32 state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_create(
    int unit, 
    bcm_field_data_qualifier_t *data_qualifier)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_destroy(
    int unit, 
    int qual_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_ethertype_add(
    int unit, 
    int qual_id, 
    bcm_field_data_ethertype_t *etype)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_ethertype_delete(
    int unit, 
    int qual_id, 
    bcm_field_data_ethertype_t *etype)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_get(
    int unit, 
    int qual_id, 
    bcm_field_data_qualifier_t *qual)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_ip_protocol_add(
    int unit, 
    int qual_id, 
    bcm_field_data_ip_protocol_t *ip_protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_ip_protocol_delete(
    int unit, 
    int qual_id, 
    bcm_field_data_ip_protocol_t *ip_protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_multi_get(
    int unit, 
    int qual_size, 
    int *qual_array, 
    int *qual_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_packet_format_add(
    int unit, 
    int qual_id, 
    bcm_field_data_packet_format_t *packet_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_data_qualifier_packet_format_delete(
    int unit, 
    int qual_id, 
    bcm_field_data_packet_format_t *packet_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_direct_extraction_action_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_extraction_action_t action, 
    int count, 
    bcm_field_extraction_field_t *extractions)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_direct_extraction_action_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_extraction_action_t *action, 
    int max_count, 
    bcm_field_extraction_field_t *extractions, 
    int *actual_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_copy(
    int unit, 
    bcm_field_entry_t src_entry, 
    bcm_field_entry_t *dst_entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_copy_id(
    int unit, 
    bcm_field_entry_t src_entry, 
    bcm_field_entry_t dst_entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_create(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_entry_t *entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_create_id(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_destroy(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

#if defined(BROADCOM_DEBUG)
int 
bcm_dfe_field_entry_dump(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_field_entry_enable_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *enable_flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_enable_set(
    int unit, 
    bcm_field_entry_t entry, 
    int enable_flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_install(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_multi_get(
    int unit, 
    bcm_field_group_t group, 
    int entry_size, 
    bcm_field_entry_t *entry_array, 
    int *entry_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_operation(
    int unit, 
    bcm_field_entry_oper_t *entry_oper)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_policer_attach(
    int unit, 
    bcm_field_entry_t entry_id, 
    int level, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_policer_detach(
    int unit, 
    bcm_field_entry_t entry_id, 
    int level)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_policer_detach_all(
    int unit, 
    bcm_field_entry_t entry_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_policer_get(
    int unit, 
    bcm_field_entry_t entry_id, 
    int level, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_prio_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_prio_set(
    int unit, 
    bcm_field_entry_t entry, 
    int prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_reinstall(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_remove(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_stat_attach(
    int unit, 
    bcm_field_entry_t entry, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_stat_detach(
    int unit, 
    bcm_field_entry_t entry, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_stat_extended_attach(
    int unit, 
    bcm_field_entry_t entry, 
    int stat_id, 
    bcm_field_stat_action_t stat_action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_stat_extended_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *stat_id, 
    bcm_field_stat_action_t *stat_action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_entry_stat_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_action_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_aset_t *aset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_action_set(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_aset_t aset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_compress(
    int unit, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_config_create(
    int unit, 
    bcm_field_group_config_t *group_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_config_validate(
    int unit, 
    bcm_field_group_config_t *group_config, 
    bcm_field_group_mode_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_create(
    int unit, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_create_id(
    int unit, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_create_mode(
    int unit, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_create_mode_id(
    int unit, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_default_entry_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_entry_t *entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_default_entry_set(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_entry_t entry, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_destroy(
    int unit, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

#if defined(BROADCOM_DEBUG)
int 
bcm_dfe_field_group_dump(
    int unit, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_field_group_enable_get(
    int unit, 
    bcm_field_group_t group, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_enable_set(
    int unit, 
    bcm_field_group_t group, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_expansion_enable_get(
    int unit, 
    bcm_field_group_t group, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_expansion_enable_set(
    int unit, 
    bcm_field_group_t group, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_flush(
    int unit, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_qset_t *qset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_install(
    int unit, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_mode_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_group_mode_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_oper_mode_get(
    int unit, 
    bcm_field_qualify_t stage, 
    bcm_field_group_oper_mode_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_oper_mode_set(
    int unit, 
    bcm_field_qualify_t stage, 
    bcm_field_group_oper_mode_t mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_port_create_mode(
    int unit, 
    bcm_port_t port, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_port_create_mode_id(
    int unit, 
    bcm_port_t port, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_ports_add(
    int unit, 
    bcm_field_group_t group, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_ports_create_mode(
    int unit, 
    bcm_pbmp_t pbmp, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_ports_create_mode_id(
    int unit, 
    bcm_pbmp_t pbmp, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_ports_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_ports_remove(
    int unit, 
    bcm_field_group_t group, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_presel_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_presel_set_t *presel)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_presel_set(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_presel_set_t *presel)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_priority_get(
    int unit, 
    bcm_field_group_t group, 
    int *priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_priority_set(
    int unit, 
    bcm_field_group_t group, 
    int priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_remove(
    int unit, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_set(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_qset_t qset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_status_get(
    int unit, 
    bcm_field_group_t group, 
    bcm_field_group_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_traverse(
    int unit, 
    bcm_field_group_traverse_cb callback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_wlan_create_mode(
    int unit, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_group_wlan_create_mode_id(
    int unit, 
    bcm_field_qset_t qset, 
    int pri, 
    bcm_field_group_mode_t mode, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_hints_add(
    int unit, 
    bcm_field_hintid_t hint_id, 
    bcm_field_hint_t *hint)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_hints_create(
    int unit, 
    bcm_field_hintid_t *hint_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_hints_delete(
    int unit, 
    bcm_field_hintid_t hint_id, 
    bcm_field_hint_t *hint)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_hints_delete_all(
    int unit, 
    bcm_field_hintid_t hint_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_hints_destroy(
    int unit, 
    bcm_field_hintid_t hint_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_hints_get(
    int unit, 
    bcm_field_hintid_t hint_id, 
    bcm_field_hint_t *hint)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_internal_to_bcm_action_map(
    int unit, 
    uint32 flags, 
    int internal_action, 
    uint32 bcm_action_size, 
    bcm_field_internal_to_bcm_map_t *bcm_action_stage, 
    uint32 *bcm_action_size_actual)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_oam_stat_action_add(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_stat_action_t *oam_stat_action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_oam_stat_action_delete(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_stat_action_t *oam_stat_action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_oam_stat_action_delete_all(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_oam_stat_action_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_stat_action_t *oam_stat_action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_oam_stat_action_get_all(
    int unit, 
    bcm_field_entry_t entry, 
    int oam_stat_max, 
    bcm_field_oam_stat_action_t *oam_stat_action, 
    int *oam_stat_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_presel_config_get(
    int unit, 
    bcm_field_presel_t presel_id, 
    bcm_field_presel_config_t *presel_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_presel_config_set(
    int unit, 
    bcm_field_presel_t presel_id, 
    bcm_field_presel_config_t *presel_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_presel_create(
    int unit, 
    bcm_field_presel_t *presel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_presel_create_id(
    int unit, 
    bcm_field_presel_t presel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_presel_create_stage_id(
    int unit, 
    bcm_field_stage_t stage, 
    bcm_field_presel_t presel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_presel_destroy(
    int unit, 
    bcm_field_presel_t presel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qset_data_qualifier_add(
    int unit, 
    bcm_field_qset_t *qset, 
    int qual_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qset_data_qualifier_delete(
    int unit, 
    bcm_field_qset_t *qset, 
    int qual_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qset_data_qualifier_get(
    int unit, 
    bcm_field_qset_t qset, 
    int qual_max, 
    int *qual_arr, 
    int *qual_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qset_id_multi_delete(
    int unit, 
    bcm_field_qualify_t qualifier, 
    int num_objects, 
    int *object_list, 
    bcm_field_qset_t *qset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qset_id_multi_get(
    int unit, 
    bcm_field_qset_t qset, 
    bcm_field_qualify_t qualifier, 
    int max_objects, 
    int *object_list, 
    int *count_objects)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qset_id_multi_set(
    int unit, 
    bcm_field_qualify_t qualifier, 
    int num_objects, 
    int *object_list, 
    bcm_field_qset_t *qset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualifier_delete(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_qualify_t qual_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_AppType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_AppType_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_AppType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_AppType_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ArpOpcode(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_ArpOpcode_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ArpOpcode_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_ArpOpcode_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ArpSenderIp4(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ArpSenderIp4_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ArpTargetIp4(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ArpTargetIp4_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BfdYourDiscriminator(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BfdYourDiscriminator_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BigIcmpCheck(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 flag, 
    uint32 size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BigIcmpCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *flag, 
    uint32 *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BypassFilter(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BypassFilter32(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BypassFilter32_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BypassFilter_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BypassSrcMacFilter(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_BypassSrcMacFilter_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapHdrRid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapHdrRid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapHdrType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapHdrType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadDip(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadDip6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadDip6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadDip_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadDstMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadDstMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadEtherType(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadEtherType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadInnerVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadIpProtocol(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadIpProtocol_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL3HdrParseable(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL3HdrParseable_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL4DstPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL4DstPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL4HdrParseable(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL4HdrParseable_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL4SrcPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadL4SrcPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadOuterVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSOF(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSOF_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSip(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSip6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSip6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSip_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadTos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadTos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadVlanFormat(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CapwapPayloadVlanFormat_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CascadedKeyValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CascadedKeyValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ClassId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ClassId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CnTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CnTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Color(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Color_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CpuQueue(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CpuQueue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CpuVisibilityPacket(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CpuVisibilityPacket_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CustomHeaderData(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CustomHeaderData_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CustomHeaderPkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_CustomHeaderPkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DSCP(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DSCP_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Decap(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_decap_t decap)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DestVirtualPortValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DestVirtualPortValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DevicePortBitmap(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t data, 
    bcm_pbmp_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DevicePortBitmap_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t *data, 
    bcm_pbmp_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Dhcp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Dhcp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DosAttack(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DosAttack_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DownMepSatTerminated(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DownMepSatTerminated_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Drop(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Drop_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstClassField(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstClassField_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstClassL2(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstClassL2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstClassL3(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstClassL3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstHiGig(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstHiGig_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6Class(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6ClassLower(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6ClassLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6ClassMsbNibble(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6ClassMsbNibble_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6ClassUpper(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6ClassUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6Class_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6High(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6High_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6Low(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6Low_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClassLower(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClassLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClassMsbNibble(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClassMsbNibble_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClassUpper(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClassUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpLocal(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIpLocal_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstIp_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL2MulticastGroup(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t group, 
    bcm_multicast_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL2MulticastGroup_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t *group, 
    bcm_multicast_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL3Egress(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t if_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL3EgressNextHops(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL3EgressNextHops_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL3Egress_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t *if_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL3MulticastGroup(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t group, 
    bcm_multicast_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstL3MulticastGroup_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t *group, 
    bcm_multicast_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMimGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mim_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMimGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mim_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMimGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mim_port_id, 
    bcm_gport_t mim_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMimGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mim_port_id, 
    bcm_gport_t *mim_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMplsGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mpls_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMplsGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mpls_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMplsGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mpls_port_id, 
    bcm_gport_t mpls_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMplsGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mpls_port_id, 
    bcm_gport_t *mpls_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMulticastGroup(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMulticastGroup_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMulticastGroups(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t group, 
    bcm_multicast_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMulticastGroups_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t *group, 
    bcm_multicast_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMultipath(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t mpintf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMultipathOverlay(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t data, 
    bcm_if_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMultipathOverlay_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t *data, 
    bcm_if_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMultipathUnderlay(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t data, 
    bcm_if_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMultipathUnderlay_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t *data, 
    bcm_if_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstMultipath_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_if_t *mpintf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstNivGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t niv_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstNivGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *niv_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstNivGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t niv_port_id, 
    bcm_gport_t niv_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstNivGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *niv_port_id, 
    bcm_gport_t *niv_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_module_t data_modid, 
    bcm_module_t mask_modid, 
    bcm_port_t data_port, 
    bcm_port_t mask_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRLanId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 net_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRLanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *net_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRMode(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_port_mode_t type, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRMode_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_port_mode_t *type, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRNetId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 net_id, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRNetId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *net_id, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRRoleInterlink(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRRoleInterlink_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_port_sr_type_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPortSRType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_port_sr_type_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_module_t *data_modid, 
    bcm_module_t *mask_modid, 
    bcm_port_t *data_port, 
    bcm_port_t *mask_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstRpfGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstRpfGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstSysPortExt(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstSysPortExt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstTrunk(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_trunk_t data, 
    bcm_trunk_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstTrunk_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_trunk_t *data, 
    bcm_trunk_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVlanGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVlanGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVlanGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vlan_port_id, 
    bcm_gport_t vlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVlanGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vlan_port_id, 
    bcm_gport_t *vlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVxlanGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vxlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVxlanGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vxlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVxlanGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vxlan_port_id, 
    bcm_gport_t vxlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstVxlanGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vxlan_port_id, 
    bcm_gport_t *vxlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstWlanGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t wlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstWlanGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *wlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstWlanGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t wlan_port_id, 
    bcm_gport_t wlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_DstWlanGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *wlan_port_id, 
    bcm_gport_t *wlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ECid(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ECid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ETag(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ETag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EcnValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EcnValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassL2Gre(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassL2Gre_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassL3Interface(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassL3Interface_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassTrill(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassTrill_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassVxlan(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassVxlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassWlan(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClassWlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EgressClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EqualL4Port(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EqualL4Port_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EtherType(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EtherTypeClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EtherTypeClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EtherType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamClassVlanTranslateKeyFirst(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamClassVlanTranslateKeyFirst_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamClassVlanTranslateKeySecond(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamClassVlanTranslateKeySecond_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamClassVpn(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamClassVpn_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamDstClassL2(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamDstClassL2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamHeaderBits0_31(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamHeaderBits0_31_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamHeaderBits32_63(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamHeaderBits32_63_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassMim(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassMim_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassMpls(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassMpls_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassNiv(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassNiv_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassVlan(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassVxlan(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamInterfaceClassVxlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamTxPktUPMEP(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_EthernetOamTxPktUPMEP_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExactMatchActionClassId(
    int unit, 
    bcm_field_entry_t entry, 
    int group_pri, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExactMatchActionClassId_get(
    int unit, 
    bcm_field_entry_t entry, 
    int group_pri, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExactMatchGroupClassId(
    int unit, 
    bcm_field_entry_t entry, 
    int group_pri, 
    bcm_field_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExactMatchGroupClassId_get(
    int unit, 
    bcm_field_entry_t entry, 
    int group_pri, 
    bcm_field_group_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExactMatchHitStatus(
    int unit, 
    bcm_field_entry_t entry, 
    int group_pri, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExactMatchHitStatus_get(
    int unit, 
    bcm_field_entry_t entry, 
    int group_pri, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExtensionHeader2Type(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExtensionHeader2Type_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExtensionHeaderSubCode(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExtensionHeaderSubCode_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExtensionHeaderType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExtensionHeaderType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit0(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit0_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit1(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit1_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit2(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit3(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit4(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit4_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit5(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit5_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit6(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit6_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit7(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalHit7_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue0(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue0_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue1(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue1_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue2(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue3(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue4(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue4_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue5(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue5_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue6(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue6_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue7(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ExternalValue7_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FabricQueueTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FabricQueueTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeOxID(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeOxIDClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeOxIDClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeOxID_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeRxID(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeRxIDClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeRxIDClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeRxID_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeSOF(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeSOF_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeVersionIsZero(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FcoeVersionIsZero_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Fhei(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FheiSize(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FheiSize_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Fhei_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanCSCtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanCSCtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDFCtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDFCtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClassLower(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClassLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClassMsbNibble(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClassMsbNibble_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClassUpper(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClassUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstIdClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanDstId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanFCtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanFCtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanInner(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_FibreChan_t fibre_chan_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanInner_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_FibreChan_t *fibre_chan_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanOuter(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_FibreChan_t fibre_chan_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanOuter_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_FibreChan_t *fibre_chan_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanRCtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanRCtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcBindCheck(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcBindCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcFpmaCheck(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcFpmaCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClassLower(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClassLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClassMsbNibble(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClassMsbNibble_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClassUpper(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClassUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcIdClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanSrcId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTFabricId(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTFabricId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTHopCount(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTHopCount_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTVersion(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTVersion_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTVsanId(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTVsanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTVsanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanVFTVsanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanZoneCheck(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FibreChanZoneCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FlowId(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_FlowId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardCopy(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardCopy_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardHdrDstMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardHdrDstMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardHdrSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardHdrSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardHdrVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardHdrVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingHeaderOffset(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_data_offset_base_t base_header, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingHeaderOffset_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_data_offset_base_t *base_header, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_ForwardingType_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_ForwardingType_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingVlanValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ForwardingVlanValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_GeneratedTtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_GeneratedTtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_GenericAssociatedChannelLabelValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_GenericAssociatedChannelLabelValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_GroupClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_GroupClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HeaderFormat(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_header_format_t header_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HeaderFormatSet(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_header_format_set_t header_format_set)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HeaderFormatSet_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_header_format_set_t *header_format_set)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HeaderFormat_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_header_format_t *header_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGig(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigColor(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigColor_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDoNotFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDoNotFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstModPortGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstModPortGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstModuleGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstModuleGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstMulticast(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstMulticastGroupId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t group, 
    bcm_multicast_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstMulticastGroupId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_multicast_t *group, 
    bcm_multicast_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstMulticast_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstPortGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstPortGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstTrunk(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstTrunkId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_trunk_t data, 
    bcm_trunk_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstTrunkId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_trunk_t *data, 
    bcm_trunk_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstTrunk_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigDstType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigEgressMcast(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigEgressMcast_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigExtendedHeaderPresent(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigExtendedHeaderPresent_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigForwardingType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_HiGigForwardingType_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigForwardingType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_HiGigForwardingType_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIngressClassificationTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIngressClassificationTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIngressL3SwitchPkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIngressL3SwitchPkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIngressTagged(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIngressTagged_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIntCongestionNotification(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigIntCongestionNotification_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigLabel(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigLabelType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigLabelType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigLabel_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigLoadBalanceID(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigLoadBalanceID_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMirrorOrSwitchPkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMirrorOrSwitchPkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMirrorToVp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMirrorToVp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMplsPkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMplsPkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMulticastIndex(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigMulticastIndex_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineClassificationTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineClassificationTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineDeferredFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineDeferredFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineDscpNew(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineDscpNew_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEnginePktPriNew(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEnginePktPriNew_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEnginePreserveDot1p(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEnginePreserveDot1p_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEnginePreserveDscp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEnginePreserveDscp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineSrcType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineSrcType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineVxltStatus(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigOffloadEngineVxltStatus_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigPortFilteringMode(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigPortFilteringMode_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigPreserveFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigPreserveFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigProtectionSwitchingStatus(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigProtectionSwitchingStatus_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigProxy(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigProxy_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigReplicationId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigReplicationId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcModPortGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcModPortGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcModuleGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcModuleGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcPortGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcPortGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcTrunk(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcTrunk_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcType(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigSrcType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigTrafficClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigTrafficClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVlan(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVni(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVni_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVpLagFailoverPacket(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVpLagFailoverPacket_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVpPreserveFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVpPreserveFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVpReplicationId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGigVpReplicationId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_HiGig_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ISid(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ISid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ITag(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ITag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IcmpError(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IcmpError_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IcmpTypeCode(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IcmpTypeCode_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IgmpTypeMaxRespTime(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IgmpTypeMaxRespTime_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_port_t data, 
    bcm_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_port_t *data, 
    bcm_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InPorts(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t data, 
    bcm_pbmp_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InPorts_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t *data, 
    bcm_pbmp_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InVPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InVPort32(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InVPort32_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InVPortWide(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InVPortWide_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InVPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IncomingIpIfClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IncomingIpIfClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressClassField(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressClassField_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropEthernetOamControl(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropEthernetOamControl_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t *mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropEthernetOamData(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropEthernetOamData_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t *mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropMplsOamControl(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropMplsOamControl_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t *mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropMplsOamData(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressDropMplsOamData_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_drop_mep_type_t *mep_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressECid(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressECid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressInterfaceClassPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressInterfaceClassPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressInterfaceClassVPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressInterfaceClassVPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressStpState(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressStpState_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressVPortBridgeDisable(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IngressVPortBridgeDisable_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDSCP(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDSCP_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstIp(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstIp6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstIp6High(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstIp6High_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstIp6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstIp_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerDstMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerEtherType(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerEtherType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIp6FlowLabel(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIp6FlowLabel_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIp6HopLimit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIp6HopLimit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIp6NextHeader(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIp6NextHeader_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpFrag(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpFrag_t frag_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpFrag_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpFrag_t *frag_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpProtocol(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpProtocolCommon(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpProtocolCommon_t protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpProtocolCommon_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpProtocolCommon_t *protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpProtocol_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpType_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerIpType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpType_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerL4DstPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerL4DstPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerL4SrcPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerL4SrcPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcIp(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcIp6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcIp6High(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcIp6High_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcIp6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcIp_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerTos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerTos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerTpid(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerTpid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerTtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerTtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanActionRange(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanActionRange_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InnerVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IntCongestionNotification(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IntCongestionNotification_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IntPriority(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IntPriority_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassL2(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassL2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassL3(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassL3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassProcessingPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassProcessingPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassVPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceClassVPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceInPorts(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t data, 
    bcm_pbmp_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceInPorts_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t *data, 
    bcm_pbmp_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceIngressKeySelectClassPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceIngressKeySelectClassPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceLookupClassPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_InterfaceLookupClassPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6FlowLabel(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6FlowLabel_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6HopLimit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6HopLimit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6NextHeader(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6NextHeader_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6TrafficClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ip6TrafficClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpAddrsNormalized(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpAddrsNormalized_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpAuth(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpAuth_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpFrag(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpFrag_t frag_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpFragNonOrFirst(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpFragNonOrFirst_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpFrag_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpFrag_t *frag_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpInfo(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpInfo_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpMulticastCompatible(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpMulticastCompatible_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpProtocol(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpProtocolClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpProtocolClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpProtocolCommon(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpProtocolCommon_t protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpProtocolCommon_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpProtocolCommon_t *protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpProtocol_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpTunnelHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpTunnelHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpTunnelValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpTunnelValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpType_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_IpType_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcStarGroupHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcStarGroupHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcStarGroupValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcStarGroupValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IpmcValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IsEqualValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_IsEqualValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2CacheHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2CacheHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DestHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DestHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DestSRNodeType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_node_type_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DestSRNodeType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_node_type_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DestValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DestValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DstMulticastHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2DstMulticastHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2Format(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_L2Format_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2Format_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_L2Format_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreFlowId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreFlowId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreProtocolType(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreProtocolType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreSrcIpHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreSrcIpHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreVfiHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreVfiHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreVsid(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2GreVsid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2Learn(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2Learn_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2PayLoad(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 length, 
    const uint8 *data, 
    const uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2PayLoad_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 length, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2PayloadFirstEightBytes(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data1, 
    uint32 data2, 
    uint32 mask1, 
    uint32 mask2)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2PayloadFirstEightBytes_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data1, 
    uint32 *data2, 
    uint32 *mask1, 
    uint32 *mask2)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcMulticastHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcMulticastHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcStatic(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcStatic_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2SrcValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2StationMove(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L2StationMove_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3DestHostHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3DestHostHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3DestRouteHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3DestRouteHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3DestRouteValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3DestRouteValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3Ingress(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 intf_id, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3Ingress_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3Routable(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3Routable_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcBind(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcBind_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcHostHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcHostHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcRouteHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcRouteHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcRouteValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L3SrcRouteValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4DstPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4DstPortClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4DstPortClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4DstPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4PortRangeCheck(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_range_t range, 
    int invert)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4PortRangeCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    int max_count, 
    bcm_field_range_t *range, 
    int *invert, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4Ports(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4Ports_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4SrcPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4SrcPortClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4SrcPortClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_L4SrcPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnExtension(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnExtension_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnInVPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnInVPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnSrcPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnSrcPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LearnVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Llc(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_llc_header_t data, 
    bcm_field_llc_header_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Llc_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_llc_header_t *data, 
    bcm_field_llc_header_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LlidValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LlidValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackColor(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackColor_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackCpuMasqueradePktProfile(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackCpuMasqueradePktProfile_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackPacketProcessingPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackPacketProcessingPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackQueue(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackQueue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackSrcGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackSrcGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackTrafficClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopBackTrafficClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Loopback(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopbackType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_LoopbackType_t loopback_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_LoopbackType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_LoopbackType_t *loopback_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Loopback_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MHOpcode(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MHOpcode_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MacAddrsNormalized(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MacAddrsNormalized_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimSrcGportHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimSrcGportHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimVfiHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimVfiHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlDstMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlDstMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlInnerTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlInnerTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlPkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlPkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MimlVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MirrorCopy(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MirrorCopy_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MirrorEgressDisabled(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MirrorEgressDisabled_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MixedSrcClassId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t pbmp, 
    bcm_field_src_class_t data, 
    bcm_field_src_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MixedSrcClassId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t pbmp, 
    bcm_field_src_class_t *data, 
    bcm_field_src_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsBos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsBos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsControlWord(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsControlWordValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsControlWordValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsControlWord_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabel(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelAction(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelAction32(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelAction32_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelAction_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelBos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelBos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelExp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelExp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelPayload(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelPayload_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelTtl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabelTtl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsForwardingLabel_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Bos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Bos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Exp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Exp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Hit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Hit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Id(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Id_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Ttl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1Ttl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel1_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Bos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Bos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Exp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Exp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Hit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Hit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Id(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Id_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Ttl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2Ttl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Bos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Bos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Exp(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Exp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Id(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Id_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Ttl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3Ttl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsLabel3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamACH(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamACH_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamClassMplsSwitchLabel(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamClassMplsSwitchLabel_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamControlPktType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_MplsOam_Control_pktType_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamControlPktType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_MplsOam_Control_pktType_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamGALExposed(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamGALExposed_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamGALLabelOnly(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamGALLabelOnly_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamHeaderBits0_31(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamHeaderBits0_31_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamHeaderBits32_63(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamHeaderBits32_63_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamUpperLabelDataDrop(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOamUpperLabelDataDrop_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOuterLabelPop(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsOuterLabelPop_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsStationHitTunnelUnterminated(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsStationHitTunnelUnterminated_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsTerminated(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsTerminatedHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsTerminatedHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsTerminatedValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsTerminatedValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MplsTerminated_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MyStation2Hit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MyStation2Hit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MyStationHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_MyStationHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NatDstRealmId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NatDstRealmId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NatNeeded(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NatNeeded_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NatSrcRealmId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NatSrcRealmId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NativeVSwitch(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NativeVSwitchValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NativeVSwitchValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_NativeVSwitch_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamDownMEPLoopbackPacket(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamDownMEPLoopbackPacket_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClass2Vxlt(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClass2Vxlt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClassPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClassPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClassSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClassSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClassVxlt(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressClassVxlt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressEtherType(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressEtherType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressMulticastMacHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressMulticastMacHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressPortUnicastDstMacHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressPortUnicastDstMacHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressVxltFirstHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressVxltFirstHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressVxltSecondHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamEgressVxltSecondHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamHeaderBits0_31(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamHeaderBits0_31_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamHeaderBits32_63(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamHeaderBits32_63_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamHeaderOffset(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamHeaderOffset_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamInLifId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamInLifIdValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamInLifIdValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamInLifId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamMdl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamMdl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamMepId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamMepId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamMeterDisable(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamMeterDisable_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamStampOffset(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamStampOffset_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamSubtype(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamSubtype_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamTsSystemHeader(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamTsSystemHeader_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_type_t oam_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_oam_type_t *oam_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamUpMep(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OamUpMep_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_port_t data, 
    bcm_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_port_t *data, 
    bcm_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutPorts(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t data, 
    bcm_pbmp_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutPorts_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t *data, 
    bcm_pbmp_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutVPort(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutVPort32(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutVPort32_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OutVPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterTpid(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterTpid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanActionRange(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanActionRange_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanPriCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanPriCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_OuterVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketLength(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketLengthRangeCheck(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_range_t range, 
    int invert)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketLengthRangeCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    int max_count, 
    bcm_field_range_t *range, 
    int *invert, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketLength_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketRes(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketRes_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketSize(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketSize_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketTerminatedBytes(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PacketTerminatedBytes_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PktIsVisible(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PktIsVisible_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PolicerIntPrio(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PolicerIntPrio_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PortOrientation(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PortOrientation_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PreemptablePacket(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PreemptablePacket_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PreselId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_PreselId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ptch(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ptch_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RangeCheck(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_range_t range, 
    int invert)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RangeCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    int max_count, 
    bcm_field_range_t *range, 
    int *invert, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RecoverableDrop(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RecoverableDrop_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RepCopy(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RepCopy_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ReplicantAny(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ReplicantAny_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ReplicantFirst(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_ReplicantFirst_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthDstQueuePair(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthDstQueuePair_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthOpcode(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthOpcode_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthPartitionKey(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceBthPartitionKey_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceVer1Pkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceVer1Pkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceVer2Pkt(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RoceVer2Pkt_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RouterAlertLabelValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RouterAlertLabelValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7AHashLower(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7AHashLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7AHashUpper(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7AHashUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7BHashLower(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7BHashLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7BHashUpper(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Rtag7BHashUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapCode(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_rx_trap_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapCode32(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapCode32_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapCodeForSnoop(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapCodeForSnoop_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapCode_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_rx_trap_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapData(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapData_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapStrength(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_RxTrapStrength_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRDuplicate(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRDuplicate_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRError(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRError_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRFlowId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRFlowId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRLanId(
    int unit, 
    bcm_field_entry_t entry, 
    int lan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRLanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *lan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRNetId(
    int unit, 
    bcm_field_entry_t entry, 
    int net_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRNetIdMatched(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRNetIdMatched_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRNetId_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *net_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRSrcNodeIsSan(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRSrcNodeIsSan_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRSupervisionType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_supervision_type_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRSupervisionType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_supervision_type_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRTagType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_tag_type_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SRTagType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_tag_type_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Snap(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_snap_header_t data, 
    bcm_field_snap_header_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Snap_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_snap_header_t *data, 
    bcm_field_snap_header_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SnoopCopy(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SnoopCopy_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SourceGportBitmap(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t data, 
    bcm_pbmp_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SourceGportBitmap_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t *data, 
    bcm_pbmp_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcClassField(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcClassField_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcClassL2(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcClassL2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcClassL3(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcClassL3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6Class(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6ClassLower(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6ClassLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6ClassMsbNibble(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6ClassMsbNibble_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6ClassUpper(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6ClassUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6Class_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6High(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6High_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6Low(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6Low_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClass(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClassLower(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClassLower_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClassMsbNibble(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClassMsbNibble_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClassUpper(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClassUpper_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpEqualDstIp(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIpEqualDstIp_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcIp_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMimGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mim_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMimGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mim_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMimGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mim_port_id, 
    bcm_gport_t mim_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMimGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mim_port_id, 
    bcm_gport_t *mim_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcModPortGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcModPortGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcModPortGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id, 
    bcm_gport_t port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcModPortGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id, 
    bcm_gport_t *port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcModuleGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcModuleGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMplsGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mpls_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMplsGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mpls_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMplsGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t mpls_port_id, 
    bcm_gport_t mpls_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcMplsGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *mpls_port_id, 
    bcm_gport_t *mpls_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcNivGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t niv_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcNivGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *niv_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcNivGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t niv_port_id, 
    bcm_gport_t niv_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcNivGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *niv_port_id, 
    bcm_gport_t *niv_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_module_t data_modid, 
    bcm_module_t mask_modid, 
    bcm_port_t data_port, 
    bcm_port_t mask_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRLanId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 net_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRLanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *net_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRMode(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_port_mode_t type, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRMode_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_sr_port_mode_t *type, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRNetId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 net_id, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRNetId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *net_id, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRRoleInterlink(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRRoleInterlink_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_port_sr_type_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPortSRType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_port_sr_type_t *type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_module_t *data_modid, 
    bcm_module_t *mask_modid, 
    bcm_port_t *data_port, 
    bcm_port_t *mask_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcTrunk(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_trunk_t data, 
    bcm_trunk_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcTrunkMemberGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcTrunkMemberGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcTrunk_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_trunk_t *data, 
    bcm_trunk_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVirtualPortValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVirtualPortValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVlanGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVlanGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVlanGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vlan_port_id, 
    bcm_gport_t vlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVlanGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vlan_port_id, 
    bcm_gport_t *vlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVxlanGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vxlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVxlanGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vxlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVxlanGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t vxlan_port_id, 
    bcm_gport_t vxlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcVxlanGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *vxlan_port_id, 
    bcm_gport_t *vxlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcWlanGport(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t wlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcWlanGport_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *wlan_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcWlanGports(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t wlan_port_id, 
    bcm_gport_t wlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SrcWlanGports_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *wlan_port_id, 
    bcm_gport_t *wlan_port_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StackingRoute(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StackingRoute_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Stage(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_stage_t data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Stage_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_stage_t *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredDirectValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredDirectValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile0(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile0_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile1(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile1_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile2(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile3(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfile3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfileDirect(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredPreselProfileDirect_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue0(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue0_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue1(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue1_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue2(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue2_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue3(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StaggeredValue3_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StpState(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_StpState_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SubportPktTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SubportPktTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SystemPortBitmap(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t data, 
    bcm_pbmp_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_SystemPortBitmap_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_pbmp_t *data, 
    bcm_pbmp_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpClassOne(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpClassOne_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpClassZero(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpClassZero_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpControl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpControl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpHeaderSize(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpHeaderSize_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpSequenceZero(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TcpSequenceZero_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *flag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Tos(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TosClassOne(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TosClassOne_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TosClassZero(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TosClassZero_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TosLower4Bits(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TosLower4Bits_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Tos_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedInnerVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedOuterVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedVlanFormat(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TranslatedVlanFormat_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillEgressRbridge(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillEgressRbridgeHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillEgressRbridgeHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillEgressRbridge_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillHopCount(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillHopCount_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillIVersion(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillIVersion_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillIngressRbridge(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillIngressRbridgeHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillIngressRbridgeHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillIngressRbridge_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillMultiDestination(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillMultiDestination_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillOpLength(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillOpLength_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillPayload(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrillPayload_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrunkHashResult(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrunkHashResult_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrunkMemberSourceModuleId(
    int unit, 
    bcm_field_entry_t entry, 
    int data, 
    int mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TrunkMemberSourceModuleId_get(
    int unit, 
    bcm_field_entry_t entry, 
    int *data, 
    int *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TsnFlowId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TsnFlowId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ttl(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TtlClassOne(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TtlClassOne_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TtlClassZero(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t data, 
    bcm_class_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TtlClassZero_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_class_t *data, 
    bcm_class_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Ttl_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadDip(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadDip6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadDip6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadDip_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadDstMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadDstMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadEtherType(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 data, 
    uint16 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadEtherType_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint16 *data, 
    uint16 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadIpProtocol(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadIpProtocol_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadL4DstPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadL4DstPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadL4SrcPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t data, 
    bcm_l4_port_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadL4SrcPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_l4_port_t *data, 
    bcm_l4_port_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlan(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlanCfi(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlanCfi_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlanId(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t data, 
    bcm_vlan_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlanPri(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlanPri_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadOuterVlan_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vlan_t *data, 
    bcm_vlan_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadSip(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t data, 
    bcm_ip_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadSip6(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t data, 
    bcm_ip6_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadSip6_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip6_t *data, 
    bcm_ip6_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadSip_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_ip_t *data, 
    bcm_ip_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadSrcMac(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t data, 
    bcm_mac_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelPayloadSrcMac_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_mac_t *data, 
    bcm_mac_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelTerminated(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelTerminatedHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelTerminatedHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelTerminatedValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelTerminatedValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelTerminated_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelType(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_TunnelType_t tunnel_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_TunnelType_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_TunnelType_t *tunnel_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_UdfClass(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_UdfClass_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VPortRangeCheck(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_field_range_t range, 
    int invert)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VPortRangeCheck_get(
    int unit, 
    bcm_field_entry_t entry, 
    int max_count, 
    bcm_field_range_t *range, 
    int *invert, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanAction(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanAction_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanFormat(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanFormat_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanSREnable(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanSREnable_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanSRLanId(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 lan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanSRLanId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *lan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanTranslationHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanTranslationHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanTranslationValue(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 data, 
    uint64 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VlanTranslationValue_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint64 *data, 
    uint64 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VnTag(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VnTag_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Vpn(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vpn_t data, 
    bcm_vpn_t mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VpnUnknownDstMacDstPort(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VpnUnknownDstMacDstPort_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_gport_t *port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Vpn_get(
    int unit, 
    bcm_field_entry_t entry, 
    bcm_vpn_t *data, 
    bcm_vpn_t *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Vrf(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_Vrf_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanClassValid(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanClassValid_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanFlags(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanFlags_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanHeaderBits56_63(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanHeaderBits56_63_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanHeaderBits8_31(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanHeaderBits8_31_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanNetworkId(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanNetworkId_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint32 *data, 
    uint32 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanPacket(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanPacket_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanPayloadVlanFormat(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanPayloadVlanFormat_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanVnidVlanTranslateHit(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 data, 
    uint8 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_VxlanVnidVlanTranslateHit_get(
    int unit, 
    bcm_field_entry_t entry, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_clear(
    int unit, 
    bcm_field_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_data(
    int unit, 
    bcm_field_entry_t eid, 
    int qual_id, 
    uint8 *data, 
    uint8 *mask, 
    uint16 length)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_data_get(
    int unit, 
    bcm_field_entry_t eid, 
    int qual_id, 
    uint16 length_max, 
    uint8 *data, 
    uint8 *mask, 
    uint16 *length)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_udf(
    int unit, 
    bcm_field_entry_t eid, 
    bcm_udf_id_t udf_id, 
    int length, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_qualify_udf_get(
    int unit, 
    bcm_field_entry_t eid, 
    bcm_udf_id_t udf_id, 
    int max_length, 
    uint8 *data, 
    uint8 *mask, 
    int *actual_length)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_create(
    int unit, 
    bcm_field_range_t *range, 
    uint32 flags, 
    bcm_l4_port_t min, 
    bcm_l4_port_t max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_create_id(
    int unit, 
    bcm_field_range_t range, 
    uint32 flags, 
    bcm_l4_port_t min, 
    bcm_l4_port_t max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_destroy(
    int unit, 
    bcm_field_range_t range)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_get(
    int unit, 
    bcm_field_range_t range, 
    uint32 *flags, 
    bcm_l4_port_t *min, 
    bcm_l4_port_t *max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_group_create(
    int unit, 
    bcm_field_range_t *range, 
    uint32 flags, 
    bcm_l4_port_t min, 
    bcm_l4_port_t max, 
    bcm_if_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_group_create_id(
    int unit, 
    bcm_field_range_t range, 
    uint32 flags, 
    bcm_l4_port_t min, 
    bcm_l4_port_t max, 
    bcm_if_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_multi_create(
    int unit, 
    bcm_field_range_t *range_id, 
    uint32 create_flags, 
    int count, 
    uint32 *range_flags, 
    uint32 *min_value, 
    uint32 *max_value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_range_multi_get(
    int unit, 
    bcm_field_range_t range_id, 
    int max_count, 
    uint32 *range_flags, 
    uint32 *minimum_value, 
    uint32 *maxamum_value, 
    int *actual_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_resync(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_sat_macsa_add(
    int unit, 
    bcm_mac_t mac, 
    uint32 class_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_sat_macsa_delete(
    int unit, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_sat_macsa_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_sat_macsa_get(
    int unit, 
    bcm_mac_t mac, 
    uint32 *class_id)
{
    return BCM_E_UNAVAIL;
}

#if defined(BROADCOM_DEBUG)
int 
bcm_dfe_field_show(
    int unit, 
    const char *pfx)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_field_source_class_mode_get(
    int unit, 
    bcm_field_stage_t stage, 
    bcm_pbmp_t pbmp, 
    bcm_field_src_class_mode_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_source_class_mode_set(
    int unit, 
    bcm_field_stage_t stage, 
    bcm_pbmp_t pbmp, 
    bcm_field_src_class_mode_t mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stage_info_get(
    int unit, 
    bcm_field_stage_t stage, 
    bcm_field_stage_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_all_set(
    int unit, 
    int stat_id, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_all_set32(
    int unit, 
    int stat_id, 
    uint32 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_attach(
    int unit, 
    bcm_field_group_t group, 
    uint32 stat_counter_id, 
    uint32 *stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_config_get(
    int unit, 
    int stat_id, 
    int nstat, 
    bcm_field_stat_t *stat_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_counter_get(
    int unit, 
    uint32 stat_id, 
    bcm_field_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_counter_set(
    int unit, 
    uint32 stat_id, 
    bcm_field_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_counter_sync_get(
    int unit, 
    uint32 stat_id, 
    bcm_field_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_create(
    int unit, 
    bcm_field_group_t group, 
    int nstat, 
    bcm_field_stat_t *stat_arr, 
    int *stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_create_id(
    int unit, 
    bcm_field_group_t group, 
    int nstat, 
    bcm_field_stat_t *stat_arr, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_destroy(
    int unit, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_detach(
    int unit, 
    uint32 stat_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_get(
    int unit, 
    int stat_id, 
    bcm_field_stat_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_get32(
    int unit, 
    int stat_id, 
    bcm_field_stat_t stat, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_id_get(
    int unit, 
    bcm_field_group_t group, 
    uint32 stat_id, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_multi_get(
    int unit, 
    int stat_id, 
    int nstat, 
    bcm_field_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_multi_get32(
    int unit, 
    int stat_id, 
    int nstat, 
    bcm_field_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_set(
    int unit, 
    int stat_id, 
    bcm_field_stat_t stat, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_set32(
    int unit, 
    int stat_id, 
    bcm_field_stat_t stat, 
    uint32 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_size(
    int unit, 
    int stat_id, 
    int *stat_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_sync_get(
    int unit, 
    int stat_id, 
    bcm_field_stat_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_field_stat_sync_get32(
    int unit, 
    int stat_id, 
    bcm_field_stat_t stat, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_I2C)
int 
bcm_dfe_i2c_ioctl(
    int unit, 
    int fd, 
    int opcode, 
    void *data, 
    int len)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_I2C)
int 
bcm_dfe_i2c_open(
    int unit, 
    char *devname, 
    uint32 flags, 
    int speed)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_I2C)
int 
bcm_dfe_i2c_read(
    int unit, 
    int fd, 
    uint32 addr, 
    uint8 *data, 
    uint32 *nbytes)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_I2C)
int 
bcm_dfe_i2c_write(
    int unit, 
    int fd, 
    uint32 addr, 
    uint8 *data, 
    uint32 nbytes)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_ipfix_config_get(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_port_t port, 
    bcm_ipfix_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_config_set(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_port_t port, 
    bcm_ipfix_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_mirror_config_get(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_gport_t port, 
    bcm_ipfix_mirror_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_mirror_config_set(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_gport_t port, 
    bcm_ipfix_mirror_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_mirror_port_dest_add(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_gport_t port, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_mirror_port_dest_delete(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_gport_t port, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_mirror_port_dest_delete_all(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_mirror_port_dest_get(
    int unit, 
    bcm_ipfix_stage_t stage, 
    bcm_gport_t port, 
    int mirror_dest_size, 
    bcm_gport_t *mirror_dest_id, 
    int *mirror_dest_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_create(
    int unit, 
    bcm_ipfix_rate_t *rate_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_destroy(
    int unit, 
    bcm_ipfix_rate_id_t rate_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_get(
    int unit, 
    bcm_ipfix_rate_t *rate_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_mirror_add(
    int unit, 
    bcm_ipfix_rate_id_t rate_id, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_mirror_delete(
    int unit, 
    bcm_ipfix_rate_id_t rate_id, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_mirror_delete_all(
    int unit, 
    bcm_ipfix_rate_id_t rate_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_mirror_get(
    int unit, 
    bcm_ipfix_rate_id_t rate_id, 
    int mirror_dest_size, 
    bcm_gport_t *mirror_dest_id, 
    int *mirror_dest_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_rate_traverse(
    int unit, 
    bcm_ipfix_rate_traverse_cb cb, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_register(
    int unit, 
    bcm_ipfix_callback_t callback, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipfix_unregister(
    int unit, 
    bcm_ipfix_callback_t callback, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_add(
    int unit, 
    bcm_ipmc_addr_t *data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_age(
    int unit, 
    uint32 flags, 
    bcm_ipmc_traverse_cb age_cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_bitmap_del(
    int unit, 
    int ipmc_idx, 
    bcm_port_t port, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_bitmap_get(
    int unit, 
    int ipmc_idx, 
    bcm_port_t port, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_bitmap_max_get(
    int unit, 
    int *max_index)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_bitmap_set(
    int unit, 
    int ipmc_idx, 
    bcm_port_t port, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_counters_get(
    int unit, 
    bcm_port_t port, 
    bcm_ipmc_counters_t *counters)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_egress_port_get(
    int unit, 
    bcm_port_t port, 
    bcm_mac_t mac, 
    int *untag, 
    bcm_vlan_t *vid, 
    int *ttl_threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_egress_port_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_egress_port_set(
    int unit, 
    bcm_port_t port, 
    const bcm_mac_t mac, 
    int untag, 
    bcm_vlan_t vid, 
    int ttl_threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_enable(
    int unit, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_find(
    int unit, 
    bcm_ipmc_addr_t *data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_range_add(
    int unit, 
    int *range_id, 
    bcm_ipmc_range_t *range)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_range_delete(
    int unit, 
    int range_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_range_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_range_get(
    int unit, 
    int range_id, 
    bcm_ipmc_range_t *range)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_range_size_get(
    int unit, 
    int *size)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_remove(
    int unit, 
    bcm_ipmc_addr_t *data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_remove_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_add(
    int unit, 
    int rp_id, 
    bcm_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_create(
    int unit, 
    uint32 flags, 
    int *rp_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_delete(
    int unit, 
    int rp_id, 
    bcm_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_delete_all(
    int unit, 
    int rp_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_destroy(
    int unit, 
    int rp_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_get(
    int unit, 
    int rp_id, 
    int intf_max, 
    bcm_if_t *intf_array, 
    int *intf_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_rp_set(
    int unit, 
    int rp_id, 
    int intf_count, 
    bcm_if_t *intf_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_attach(
    int unit, 
    bcm_ipmc_addr_t *info, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_counter_get(
    int unit, 
    bcm_ipmc_addr_t *info, 
    bcm_ipmc_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_counter_set(
    int unit, 
    bcm_ipmc_addr_t *info, 
    bcm_ipmc_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_counter_sync_get(
    int unit, 
    bcm_ipmc_addr_t *info, 
    bcm_ipmc_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_detach(
    int unit, 
    bcm_ipmc_addr_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_id_get(
    int unit, 
    bcm_ipmc_addr_t *info, 
    bcm_ipmc_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_multi_get(
    int unit, 
    bcm_ipmc_addr_t *info, 
    int nstat, 
    bcm_ipmc_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_multi_get32(
    int unit, 
    bcm_ipmc_addr_t *info, 
    int nstat, 
    bcm_ipmc_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_multi_set(
    int unit, 
    bcm_ipmc_addr_t *info, 
    int nstat, 
    bcm_ipmc_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_stat_multi_set32(
    int unit, 
    bcm_ipmc_addr_t *info, 
    int nstat, 
    bcm_ipmc_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_ipmc_traverse(
    int unit, 
    uint32 flags, 
    bcm_ipmc_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_ipsec_config_set(
    int unit, 
    bcm_ipsec_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_sa_create(
    int unit, 
    uint32 flags, 
    uint32 *sa_id, 
    bcm_ipsec_sa_info_t *sa)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_sa_delete(
    int unit, 
    uint32 flags, 
    uint32 sa_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_sa_key_update(
    int unit, 
    uint32 flags, 
    uint32 sa_id, 
    bcm_ipsec_sa_keys_t *sa_keys)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_sa_to_tunnel_map_get(
    int unit, 
    uint32 sa_id, 
    uint32 *tunnel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_sa_to_tunnel_map_set(
    int unit, 
    uint32 tunnel_id, 
    uint32 sa_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_tunnel_create(
    int unit, 
    uint32 flags, 
    uint32 *tunnel_id, 
    bcm_ipsec_tunnel_info_t *tunnel_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_ipsec_tunnel_delete(
    int unit, 
    uint32 flags, 
    uint32 tunnel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_filter_create(
    int unit, 
    bcm_knet_filter_t *filter)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_filter_destroy(
    int unit, 
    int filter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_filter_get(
    int unit, 
    int filter_id, 
    bcm_knet_filter_t *filter)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_filter_traverse(
    int unit, 
    bcm_knet_filter_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_netif_create(
    int unit, 
    bcm_knet_netif_t *netif)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_netif_destroy(
    int unit, 
    int netif_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_netif_get(
    int unit, 
    int netif_id, 
    bcm_knet_netif_t *netif)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_knet_netif_traverse(
    int unit, 
    bcm_knet_netif_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_add(
    int unit, 
    bcm_l2_addr_t *l2addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_mac(
    int unit, 
    bcm_mac_t mac, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_mac_port(
    int unit, 
    bcm_mac_t mac, 
    bcm_module_t mod, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_port(
    int unit, 
    bcm_module_t mod, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_trunk(
    int unit, 
    bcm_trunk_t tid, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_vlan(
    int unit, 
    bcm_vlan_t vid, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_vlan_gport_multi(
    int unit, 
    uint32 flags, 
    int num_pairs, 
    bcm_vlan_t *vlan, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_vlan_port(
    int unit, 
    bcm_vlan_t vid, 
    bcm_module_t mod, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_delete_by_vlan_trunk(
    int unit, 
    bcm_vlan_t vid, 
    bcm_trunk_t tid, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_freeze(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_get(
    int unit, 
    bcm_mac_t mac_addr, 
    bcm_vlan_t vid, 
    bcm_l2_addr_t *l2addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_msg_distribute_get(
    int unit, 
    bcm_l2_addr_distribute_t *distribution)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_msg_distribute_set(
    int unit, 
    bcm_l2_addr_distribute_t *distribution)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_multi_add(
    int unit, 
    bcm_l2_addr_t *l2addr, 
    int count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_multi_delete(
    int unit, 
    bcm_l2_addr_t *l2addr, 
    int count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_register(
    int unit, 
    bcm_l2_addr_callback_t callback, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_thaw(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_addr_unregister(
    int unit, 
    bcm_l2_addr_callback_t callback, 
    void *userdata)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_age_timer_get(
    int unit, 
    int *age_seconds)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_age_timer_set(
    int unit, 
    int age_seconds)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_auth_add(
    int unit, 
    bcm_l2_auth_addr_t *addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_auth_delete(
    int unit, 
    bcm_l2_auth_addr_t *addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_auth_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_auth_get(
    int unit, 
    bcm_l2_auth_addr_t *addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_auth_traverse(
    int unit, 
    bcm_l2_auth_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_delete(
    int unit, 
    int index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_get(
    int unit, 
    int index, 
    bcm_l2_cache_addr_t *addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_profile_get(
    int unit, 
    int trap_type, 
    uint32 profile_idx, 
    uint32 flags, 
    bcm_l2cp_profile_info_t *l2cp_profile_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_profile_set(
    int unit, 
    int trap_type, 
    uint32 profile_idx, 
    uint32 flags, 
    bcm_l2cp_profile_info_t *l2cp_profile_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_set(
    int unit, 
    int index, 
    bcm_l2_cache_addr_t *addr, 
    int *index_used)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_size_get(
    int unit, 
    int *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_vpn_to_profile_map_get(
    int unit, 
    uint32 vsi, 
    uint32 *profile_idx)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_cache_vpn_to_profile_map_set(
    int unit, 
    uint32 vsi, 
    uint32 profile_idx)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_clear(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_conflict_get(
    int unit, 
    bcm_l2_addr_t *addr, 
    bcm_l2_addr_t *cf_array, 
    int cf_max, 
    int *cf_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_egress_create(
    int unit, 
    bcm_l2_egress_t *egr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_egress_destroy(
    int unit, 
    bcm_if_t encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_egress_find(
    int unit, 
    bcm_l2_egress_t *egr, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_egress_get(
    int unit, 
    bcm_if_t encap_id, 
    bcm_l2_egress_t *egr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_egress_traverse(
    int unit, 
    bcm_l2_egress_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_gport_forward_info_get(
    int unit, 
    int gport_id, 
    bcm_l2_gport_forward_info_t *forward_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_key_dump(
    int unit, 
    char *pfx, 
    bcm_l2_addr_t *entry, 
    char *sfx)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_class_get(
    int unit, 
    int lclass, 
    int *lclass_prio, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_class_set(
    int unit, 
    int lclass, 
    int lclass_prio, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_limit_disable(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_limit_enable(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_limit_get(
    int unit, 
    bcm_l2_learn_limit_t *limit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_limit_set(
    int unit, 
    bcm_l2_learn_limit_t *limit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_msgs_config_get(
    int unit, 
    bcm_l2_learn_msgs_config_t *learn_msg_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_msgs_config_set(
    int unit, 
    bcm_l2_learn_msgs_config_t *learn_msg_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_port_class_get(
    int unit, 
    bcm_gport_t port, 
    int *lclass)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_port_class_set(
    int unit, 
    bcm_gport_t port, 
    int lclass)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_stat_get(
    int unit, 
    bcm_l2_learn_stat_t *learn_stat)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_learn_stat_set(
    int unit, 
    bcm_l2_learn_stat_t *learn_stat)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_mac_port_create(
    int unit, 
    bcm_l2_mac_port_t *mac_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_mac_port_destroy(
    int unit, 
    bcm_gport_t mac_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_mac_port_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_mac_port_get(
    int unit, 
    bcm_l2_mac_port_t *mac_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_mac_port_traverse(
    int unit, 
    bcm_l2_mac_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_match_masked_traverse(
    int unit, 
    uint32 flags, 
    bcm_l2_addr_t *match_addr, 
    bcm_l2_addr_t *mask_addr, 
    bcm_l2_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_matched_traverse(
    int unit, 
    uint32 flags, 
    bcm_l2_addr_t *match_addr, 
    bcm_l2_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_port_native(
    int unit, 
    int modid, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_replace(
    int unit, 
    uint32 flags, 
    bcm_l2_addr_t *match_addr, 
    bcm_module_t new_module, 
    bcm_port_t new_port, 
    bcm_trunk_t new_trunk)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_replace_match(
    int unit, 
    uint32 flags, 
    bcm_l2_addr_t *match_addr, 
    bcm_l2_addr_t *mask_addr, 
    bcm_l2_addr_t *replace_addr, 
    bcm_l2_addr_t *replace_mask_addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_ring_replace(
    int unit, 
    bcm_l2_ring_t *l2_ring)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_stat_enable_set(
    int unit, 
    bcm_l2_addr_t *l2_addr, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_stat_get(
    int unit, 
    bcm_l2_addr_t *l2_addr, 
    bcm_l2_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_stat_get32(
    int unit, 
    bcm_l2_addr_t *l2_addr, 
    bcm_l2_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_stat_set(
    int unit, 
    bcm_l2_addr_t *l2_addr, 
    bcm_l2_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_stat_set32(
    int unit, 
    bcm_l2_addr_t *l2_addr, 
    bcm_l2_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_station_add(
    int unit, 
    int *station_id, 
    bcm_l2_station_t *station)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_station_delete(
    int unit, 
    int station_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_station_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_station_get(
    int unit, 
    int station_id, 
    bcm_l2_station_t *station)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_station_size_get(
    int unit, 
    int *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_station_traverse(
    int unit, 
    bcm_l2_station_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_traverse(
    int unit, 
    bcm_l2_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_tunnel_add(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_tunnel_delete(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_l2_tunnel_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_port_add(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_l2gre_port_t *l2gre_port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_port_delete(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_gport_t l2gre_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_port_delete_all(
    int unit, 
    bcm_vpn_t l2vpn)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_port_get(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_l2gre_port_t *l2gre_port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_port_get_all(
    int unit, 
    bcm_vpn_t l2vpn, 
    int port_max, 
    bcm_l2gre_port_t *port_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_attach(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_counter_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_l2gre_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_counter_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_l2gre_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_counter_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_l2gre_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_detach(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_id_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_l2gre_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_multi_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_l2gre_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_multi_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_l2gre_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_multi_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_l2gre_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_stat_multi_set32(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_l2gre_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_initiator_create(
    int unit, 
    bcm_tunnel_initiator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_initiator_destroy(
    int unit, 
    bcm_gport_t l2gre_tunnel_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_initiator_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_initiator_get(
    int unit, 
    bcm_tunnel_initiator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_initiator_traverse(
    int unit, 
    bcm_tunnel_initiator_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_terminator_create(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_terminator_destroy(
    int unit, 
    bcm_gport_t l2gre_tunnel_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_terminator_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_terminator_get(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_terminator_traverse(
    int unit, 
    bcm_tunnel_terminator_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_tunnel_terminator_update(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_vpn_create(
    int unit, 
    bcm_l2gre_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_vpn_destroy(
    int unit, 
    bcm_vpn_t l2vpn)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_vpn_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_vpn_get(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_l2gre_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_l2gre_vpn_traverse(
    int unit, 
    bcm_l2gre_vpn_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_agm_attach(
    int unit, 
    bcm_if_t l3_ecmp_id, 
    bcm_switch_agm_id_t agm_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_agm_attach_get(
    int unit, 
    bcm_if_t l3_ecmp_id, 
    bcm_switch_agm_id_t *agm_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_agm_detach(
    int unit, 
    bcm_if_t l3_ecmp_id, 
    bcm_switch_agm_id_t agm_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_create(
    int unit, 
    uint32 options, 
    bcm_l3_egress_ecmp_t *ecmp_info, 
    int ecmp_member_count, 
    bcm_l3_ecmp_member_t *ecmp_member_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_destroy(
    int unit, 
    bcm_if_t ecmp_group_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_find(
    int unit, 
    int ecmp_member_count, 
    bcm_l3_ecmp_member_t *ecmp_member_array, 
    bcm_l3_egress_ecmp_t *ecmp_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_get(
    int unit, 
    bcm_l3_egress_ecmp_t *ecmp_info, 
    int ecmp_member_size, 
    bcm_l3_ecmp_member_t *ecmp_member_array, 
    int *ecmp_member_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_member_add(
    int unit, 
    bcm_if_t ecmp_group_id, 
    bcm_l3_ecmp_member_t *ecmp_member)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_member_delete(
    int unit, 
    bcm_if_t ecmp_group_id, 
    bcm_l3_ecmp_member_t *ecmp_member)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_member_delete_all(
    int unit, 
    bcm_if_t ecmp_group_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ecmp_traverse(
    int unit, 
    bcm_l3_ecmp_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_create(
    int unit, 
    uint32 flags, 
    bcm_l3_egress_t *egr, 
    bcm_if_t *if_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_destroy(
    int unit, 
    bcm_if_t intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_add(
    int unit, 
    bcm_l3_egress_ecmp_t *ecmp, 
    bcm_if_t intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_create(
    int unit, 
    bcm_l3_egress_ecmp_t *ecmp, 
    int intf_count, 
    bcm_if_t *intf_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_delete(
    int unit, 
    bcm_l3_egress_ecmp_t *ecmp, 
    bcm_if_t intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_destroy(
    int unit, 
    bcm_l3_egress_ecmp_t *ecmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_ethertype_get(
    int unit, 
    uint32 *flags, 
    int ethertype_max, 
    int *ethertype_array, 
    int *ethertype_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_ethertype_set(
    int unit, 
    uint32 flags, 
    int ethertype_count, 
    int *ethertype_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_find(
    int unit, 
    int intf_count, 
    bcm_if_t *intf_array, 
    bcm_l3_egress_ecmp_t *ecmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_get(
    int unit, 
    bcm_l3_egress_ecmp_t *ecmp, 
    int intf_size, 
    bcm_if_t *intf_array, 
    int *intf_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_member_status_get(
    int unit, 
    bcm_if_t intf, 
    int *status)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_member_status_set(
    int unit, 
    bcm_if_t intf, 
    int status)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_resilient_replace(
    int unit, 
    uint32 flags, 
    bcm_l3_egress_ecmp_resilient_entry_t *match_entry, 
    int *num_entries, 
    bcm_l3_egress_ecmp_resilient_entry_t *replace_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_resilient_traverse(
    int unit, 
    uint32 flags, 
    bcm_l3_egress_ecmp_resilient_entry_t *match_entry, 
    bcm_l3_egress_ecmp_resilient_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_ecmp_traverse(
    int unit, 
    bcm_l3_egress_ecmp_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_find(
    int unit, 
    bcm_l3_egress_t *egr, 
    bcm_if_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_get(
    int unit, 
    bcm_if_t intf, 
    bcm_l3_egress_t *egr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multi_alloc(
    int unit, 
    bcm_l3_egress_multi_info_t egress_multi_info, 
    bcm_if_t *base_egress_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multi_free(
    int unit, 
    bcm_if_t base_egress_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_add(
    int unit, 
    bcm_if_t mpintf, 
    bcm_if_t intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_create(
    int unit, 
    uint32 flags, 
    int intf_count, 
    bcm_if_t *intf_array, 
    bcm_if_t *mpintf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_delete(
    int unit, 
    bcm_if_t mpintf, 
    bcm_if_t intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_destroy(
    int unit, 
    bcm_if_t mpintf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_find(
    int unit, 
    int intf_count, 
    bcm_if_t *intf_array, 
    bcm_if_t *mpintf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_get(
    int unit, 
    bcm_if_t mpintf, 
    int intf_size, 
    bcm_if_t *intf_array, 
    int *intf_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_max_create(
    int unit, 
    uint32 flags, 
    int max_paths, 
    int intf_count, 
    bcm_if_t *intf_array, 
    bcm_if_t *mpintf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_multipath_traverse(
    int unit, 
    bcm_l3_egress_multipath_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_attach(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_counter_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_counter_set(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_counter_sync_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_detach(
    int unit, 
    bcm_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_enable_set(
    int unit, 
    bcm_l3_egress_t *egr, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_get(
    int unit, 
    bcm_l3_egress_t *egr, 
    bcm_l3_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_get32(
    int unit, 
    bcm_l3_egress_t *egr, 
    bcm_l3_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_id_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_set(
    int unit, 
    bcm_l3_egress_t *egr, 
    bcm_l3_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_stat_set32(
    int unit, 
    bcm_l3_egress_t *egr, 
    bcm_l3_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_egress_traverse(
    int unit, 
    bcm_l3_egress_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_enable_set(
    int unit, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_add(
    int unit, 
    bcm_l3_host_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_age(
    int unit, 
    uint32 flags, 
    bcm_l3_host_traverse_cb age_cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_conflict_get(
    int unit, 
    bcm_l3_key_t *ipkey, 
    bcm_l3_key_t *cf_array, 
    int cf_max, 
    int *cf_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_delete(
    int unit, 
    bcm_l3_host_t *ip_addr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_delete_all(
    int unit, 
    bcm_l3_host_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_delete_by_interface(
    int unit, 
    bcm_l3_host_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_delete_by_network(
    int unit, 
    bcm_l3_route_t *ip_addr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_find(
    int unit, 
    bcm_l3_host_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_invalidate_entry(
    int unit, 
    bcm_ip_t info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_attach(
    int unit, 
    bcm_l3_host_t *info, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_counter_get(
    int unit, 
    bcm_l3_host_t *info, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_counter_set(
    int unit, 
    bcm_l3_host_t *info, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_counter_sync_get(
    int unit, 
    bcm_l3_host_t *info, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_detach(
    int unit, 
    bcm_l3_host_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_enable_set(
    int unit, 
    bcm_l3_host_t *host, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_get(
    int unit, 
    bcm_l3_host_t *host, 
    bcm_l3_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_get32(
    int unit, 
    bcm_l3_host_t *host, 
    bcm_l3_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_id_get(
    int unit, 
    bcm_l3_host_t *info, 
    bcm_l3_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_set(
    int unit, 
    bcm_l3_host_t *host, 
    bcm_l3_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_stat_set32(
    int unit, 
    bcm_l3_host_t *host, 
    bcm_l3_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_traverse(
    int unit, 
    uint32 flags, 
    uint32 start, 
    uint32 end, 
    bcm_l3_host_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_host_validate_entry(
    int unit, 
    bcm_ip_t info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_info(
    int unit, 
    bcm_l3_info_t *l3info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_create(
    int unit, 
    bcm_l3_ingress_t *ing_intf, 
    bcm_if_t *intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_destroy(
    int unit, 
    bcm_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_find(
    int unit, 
    bcm_l3_ingress_t *ing_intf, 
    bcm_if_t *intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_get(
    int unit, 
    bcm_if_t intf, 
    bcm_l3_ingress_t *ing_intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_stat_attach(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_stat_counter_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_stat_counter_set(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_stat_counter_sync_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_stat_detach(
    int unit, 
    bcm_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_stat_id_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_l3_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ingress_traverse(
    int unit, 
    bcm_l3_ingress_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_intf_create(
    int unit, 
    bcm_l3_intf_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_intf_delete(
    int unit, 
    bcm_l3_intf_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_intf_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_intf_find(
    int unit, 
    bcm_l3_intf_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_intf_find_vlan(
    int unit, 
    bcm_l3_intf_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_intf_get(
    int unit, 
    bcm_l3_intf_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip4_options_action_get(
    int unit, 
    int ip4_options_profile_id, 
    int ip4_option, 
    bcm_l3_ip4_options_action_t *action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip4_options_action_set(
    int unit, 
    int ip4_options_profile_id, 
    int ip4_option, 
    bcm_l3_ip4_options_action_t action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip4_options_profile_create(
    int unit, 
    uint32 flags, 
    bcm_l3_ip4_options_action_t default_action, 
    int *ip4_options_profile_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip4_options_profile_destroy(
    int unit, 
    int ip4_options_profile_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip6_prefix_map_add(
    int unit, 
    bcm_ip6_t ip6_addr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip6_prefix_map_delete(
    int unit, 
    bcm_ip6_t ip6_addr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip6_prefix_map_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_ip6_prefix_map_get(
    int unit, 
    int map_size, 
    bcm_ip6_t *ip6_array, 
    int *ip6_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_add(
    int unit, 
    bcm_l3_nat_egress_t *nat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_delete(
    int unit, 
    bcm_l3_nat_id_t nat_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_get(
    int unit, 
    bcm_l3_nat_egress_t *nat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_attach(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_counter_get(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    bcm_l3_nat_egress_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_counter_set(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    bcm_l3_nat_egress_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_counter_sync_get(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    bcm_l3_nat_egress_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_detach(
    int unit, 
    bcm_l3_nat_egress_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_id_get(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    bcm_l3_nat_egress_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_multi_get(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    int nstat, 
    bcm_l3_nat_egress_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_multi_get32(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    int nstat, 
    bcm_l3_nat_egress_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_multi_set(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    int nstat, 
    bcm_l3_nat_egress_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_stat_multi_set32(
    int unit, 
    bcm_l3_nat_egress_t *info, 
    int nstat, 
    bcm_l3_nat_egress_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_egress_traverse(
    int unit, 
    uint32 flags, 
    uint32 start, 
    uint32 end, 
    bcm_l3_nat_egress_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_ingress_add(
    int unit, 
    bcm_l3_nat_ingress_t *nat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_ingress_age(
    int unit, 
    uint32 flags, 
    bcm_l3_nat_ingress_traverse_cb age_cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_ingress_delete(
    int unit, 
    bcm_l3_nat_ingress_t *nat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_ingress_delete_all(
    int unit, 
    bcm_l3_nat_ingress_t *nat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_ingress_find(
    int unit, 
    bcm_l3_nat_ingress_t *nat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_nat_ingress_traverse(
    int unit, 
    uint32 flags, 
    uint32 start, 
    uint32 end, 
    bcm_l3_nat_ingress_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_add(
    int unit, 
    bcm_l3_route_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_age(
    int unit, 
    uint32 flags, 
    bcm_l3_route_traverse_cb age_out, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_delete(
    int unit, 
    bcm_l3_route_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_delete_all(
    int unit, 
    bcm_l3_route_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_delete_by_interface(
    int unit, 
    bcm_l3_route_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_find(
    int unit, 
    bcm_l3_host_t *host, 
    bcm_l3_route_t *route)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_get(
    int unit, 
    bcm_l3_route_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_max_ecmp_get(
    int unit, 
    int *max)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_max_ecmp_set(
    int unit, 
    int max)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_multipath_get(
    int unit, 
    bcm_l3_route_t *the_route, 
    bcm_l3_route_t *path_array, 
    int max_path, 
    int *path_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_attach(
    int unit, 
    bcm_l3_route_t *info, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_counter_get(
    int unit, 
    bcm_l3_route_t *info, 
    bcm_l3_route_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_counter_set(
    int unit, 
    bcm_l3_route_t *info, 
    bcm_l3_route_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_counter_sync_get(
    int unit, 
    bcm_l3_route_t *info, 
    bcm_l3_route_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_detach(
    int unit, 
    bcm_l3_route_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_enable_set(
    int unit, 
    bcm_l3_route_t *route, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_get(
    int unit, 
    bcm_l3_route_t *route, 
    bcm_l3_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_get32(
    int unit, 
    bcm_l3_route_t *route, 
    bcm_l3_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_id_get(
    int unit, 
    bcm_l3_route_t *info, 
    bcm_l3_route_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_multi_get(
    int unit, 
    bcm_l3_route_t *info, 
    int nstat, 
    bcm_l3_route_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_multi_get32(
    int unit, 
    bcm_l3_route_t *info, 
    int nstat, 
    bcm_l3_route_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_multi_set(
    int unit, 
    bcm_l3_route_t *info, 
    int nstat, 
    bcm_l3_route_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_multi_set32(
    int unit, 
    bcm_l3_route_t *info, 
    int nstat, 
    bcm_l3_route_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_set(
    int unit, 
    bcm_l3_route_t *route, 
    bcm_l3_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_stat_set32(
    int unit, 
    bcm_l3_route_t *route, 
    bcm_l3_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_route_traverse(
    int unit, 
    uint32 flags, 
    uint32 start, 
    uint32 end, 
    bcm_l3_route_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_add(
    int unit, 
    bcm_l3_source_bind_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_delete(
    int unit, 
    bcm_l3_source_bind_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_enable_get(
    int unit, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_enable_set(
    int unit, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_get(
    int unit, 
    bcm_l3_source_bind_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_source_bind_traverse(
    int unit, 
    bcm_l3_source_bind_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_subnet_route_find(
    int unit, 
    bcm_l3_route_t *input, 
    bcm_l3_route_t *route)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_attach(
    int unit, 
    bcm_vrf_t vrf, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_counter_get(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_counter_set(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_counter_sync_get(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_detach(
    int unit, 
    bcm_vrf_t vrf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_enable_set(
    int unit, 
    bcm_vrf_t vrf, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_get(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_get32(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_id_get(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_multi_get(
    int unit, 
    bcm_vrf_t vrf, 
    int nstat, 
    bcm_l3_vrf_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_multi_get32(
    int unit, 
    bcm_vrf_t vrf, 
    int nstat, 
    bcm_l3_vrf_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_multi_set(
    int unit, 
    bcm_vrf_t vrf, 
    int nstat, 
    bcm_l3_vrf_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_multi_set32(
    int unit, 
    bcm_vrf_t vrf, 
    int nstat, 
    bcm_l3_vrf_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_set(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_set32(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_sync_get(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrf_stat_sync_get32(
    int unit, 
    bcm_vrf_t vrf, 
    bcm_l3_vrf_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_add(
    int unit, 
    bcm_vlan_t vlan, 
    uint32 vrid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_config_add(
    int unit, 
    uint32 flags, 
    bcm_vlan_t vlan, 
    uint32 vrid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_config_delete(
    int unit, 
    uint32 flags, 
    bcm_vlan_t vlan, 
    uint32 vrid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_config_delete_all(
    int unit, 
    uint32 flags, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_config_get(
    int unit, 
    uint32 flags, 
    bcm_vlan_t vlan, 
    uint32 alloc_size, 
    uint32 *vrid_array, 
    uint32 *count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_delete(
    int unit, 
    bcm_vlan_t vlan, 
    uint32 vrid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_delete_all(
    int unit, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_l3_vrrp_get(
    int unit, 
    bcm_vlan_t vlan, 
    int alloc_size, 
    int *vrid_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_lb_control_get(
    int unit, 
    bcm_lbg_t lbg_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_control_t lb_control, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_control_set(
    int unit, 
    bcm_lbg_t lbg_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_control_t lb_control, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_enable_get(
    int unit, 
    bcm_lbg_t lbg_id, 
    uint32 flags, 
    uint32 *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_enable_set(
    int unit, 
    bcm_lbg_t lbg_id, 
    uint32 flags, 
    uint32 enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_flush_configure_get(
    int unit, 
    bcm_lbg_t lbg_id, 
    uint32 flags, 
    bcm_lb_flush_type_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_flush_configure_set(
    int unit, 
    bcm_lbg_t lbg_id, 
    uint32 flags, 
    bcm_lb_flush_type_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_control_get(
    int unit, 
    bcm_modem_t modem_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_modem_control_t modem_control, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_control_set(
    int unit, 
    bcm_modem_t modem_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_modem_control_t modem_control, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_packet_config_get(
    int unit, 
    bcm_modem_t modem_id, 
    uint32 flags, 
    bcm_lb_modem_packet_config_t *packet_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_packet_config_set(
    int unit, 
    bcm_modem_t modem_id, 
    uint32 flags, 
    bcm_lb_modem_packet_config_t *packet_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_shaper_get(
    int unit, 
    bcm_modem_t modem_id, 
    uint32 flags, 
    bcm_lb_modem_shaper_config_t *shaper)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_shaper_set(
    int unit, 
    bcm_modem_t modem_id, 
    uint32 flags, 
    bcm_lb_modem_shaper_config_t *shaper)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_stat_get(
    int unit, 
    bcm_modem_t modem_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_modem_stat_val_t type, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_status_get(
    int unit, 
    bcm_modem_t modem_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_modem_status_type_t status_type, 
    int *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_to_lbg_map_get(
    int unit, 
    bcm_modem_t modem_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lbg_t *lbg_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_to_lbg_map_set(
    int unit, 
    bcm_modem_t modem_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lbg_t lbg_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_to_port_map_get(
    int unit, 
    bcm_modem_t modem_id, 
    uint32 flags, 
    bcm_gport_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_modem_to_port_map_set(
    int unit, 
    bcm_modem_t modem_id, 
    uint32 flags, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_packet_config_get(
    int unit, 
    uint32 flags, 
    bcm_lb_packet_config_t *packet_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_packet_config_set(
    int unit, 
    uint32 flags, 
    bcm_lb_packet_config_t *packet_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_rx_modem_map_get(
    int unit, 
    bcm_lb_rx_modem_map_index_t *map_index, 
    uint32 flags, 
    bcm_lb_rx_modem_map_config_t *map_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_rx_modem_map_set(
    int unit, 
    bcm_lb_rx_modem_map_index_t *map_index, 
    uint32 flags, 
    bcm_lb_rx_modem_map_config_t *map_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_sequence_number_width_get(
    int unit, 
    bcm_lbg_t lbg_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    int *number_width)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_sequence_number_width_set(
    int unit, 
    bcm_lbg_t lbg_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    int number_width)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_stat_get(
    int unit, 
    bcm_lbg_t lbg_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_stat_val_t type, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_status_get(
    int unit, 
    bcm_lbg_t lbg_id, 
    bcm_lb_direction_type_t direction, 
    uint32 flags, 
    bcm_lb_status_type_t status_type, 
    int *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_tc_dp_to_priority_config_get(
    int unit, 
    uint32 flags, 
    bcm_lb_tc_dp_t *tc_dp, 
    bcm_lb_pkt_pri_t *pkt_pri)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_tc_dp_to_priority_config_set(
    int unit, 
    uint32 flags, 
    bcm_lb_tc_dp_t *tc_dp, 
    bcm_lb_pkt_pri_t *pkt_pri)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_tx_sched_get(
    int unit, 
    uint32 flags, 
    int max_lbg_count, 
    bcm_lb_lbg_weight_t *lbg_weights, 
    int *lbg_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_lb_tx_sched_set(
    int unit, 
    uint32 flags, 
    int lbg_count, 
    bcm_lb_lbg_weight_t *lbg_weights)
{
    return BCM_E_UNAVAIL;
}

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_link_change(
    int unit, 
    bcm_pbmp_t pbmp)
{
    return bcm_common_link_change(unit, pbmp);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_link_wait(
    int unit, 
    bcm_pbmp_t *pbm, 
    int us)
{
    return bcm_common_link_wait(unit, pbm, us);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_detach(
    int unit)
{
    return bcm_common_linkscan_detach(unit);
}
#endif

#if defined(BROADCOM_DEBUG)
#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_dump(
    int unit)
{
    return bcm_common_linkscan_dump(unit);
}
#endif
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_enable_get(
    int unit, 
    int *us)
{
    return bcm_common_linkscan_enable_get(unit, us);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_enable_port_get(
    int unit, 
    bcm_port_t port)
{
    return bcm_common_linkscan_enable_port_get(unit, port);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_enable_set(
    int unit, 
    int us)
{
    return bcm_common_linkscan_enable_set(unit, us);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_mode_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return bcm_common_linkscan_mode_get(unit, port, mode);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_mode_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return bcm_common_linkscan_mode_set(unit, port, mode);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_mode_set_pbm(
    int unit, 
    bcm_pbmp_t pbm, 
    int mode)
{
    return bcm_common_linkscan_mode_set_pbm(unit, pbm, mode);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_port_register(
    int unit, 
    bcm_port_t port, 
    bcm_linkscan_port_handler_t f)
{
    return bcm_common_linkscan_port_register(unit, port, f);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_port_unregister(
    int unit, 
    bcm_port_t port, 
    bcm_linkscan_port_handler_t f)
{
    return bcm_common_linkscan_port_unregister(unit, port, f);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_register(
    int unit, 
    bcm_linkscan_handler_t f)
{
    return bcm_common_linkscan_register(unit, f);
}
#endif

int 
bcm_dfe_linkscan_trigger_event_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_linkscan_trigger_event_t trigger_event, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_linkscan_trigger_event_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_linkscan_trigger_event_t trigger_event, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_unregister(
    int unit, 
    bcm_linkscan_handler_t f)
{
    return bcm_common_linkscan_unregister(unit, f);
}
#endif

#ifdef BCM_DFE_SUPPORT
int 
bcm_dfe_linkscan_update(
    int unit, 
    bcm_pbmp_t pbm)
{
    return bcm_common_linkscan_update(unit, pbm);
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_event_enable_get(
    int unit, 
    bcm_macsec_event_t t, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_event_enable_set(
    int unit, 
    bcm_macsec_event_t t, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_event_register(
    int unit, 
    bcm_macsec_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_event_unregister(
    int unit, 
    bcm_macsec_event_cb cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_flow_create(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_macsec_flow_match_t *flow, 
    bcm_macsec_flow_action_t *action, 
    int *flowId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_flow_destroy(
    int unit, 
    bcm_port_t port, 
    int flowId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_flow_get(
    int unit, 
    bcm_port_t port, 
    int flowId, 
    bcm_macsec_flow_match_t *flow, 
    bcm_macsec_flow_action_t *a)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_flow_traverse(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_flow_traverse_cb callbk, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_port_capability_get(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_port_capability_t *cap)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_port_config_get(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_port_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_port_config_set(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_port_config_t *cfg)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_port_traverse(
    int unit, 
    bcm_macsec_port_traverse_cb callbk, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_assoc_create(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int chanId, 
    bcm_macsec_secure_assoc_t *assoc, 
    int *assocId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_assoc_destroy(
    int unit, 
    bcm_port_t port, 
    int assocId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_assoc_get(
    int unit, 
    bcm_port_t port, 
    int assocId, 
    bcm_macsec_secure_assoc_t *assoc, 
    int *chanId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_assoc_traverse(
    int unit, 
    bcm_port_t port, 
    int chanId, 
    bcm_macsec_secure_assoc_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_chan_create(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_macsec_secure_chan_t *chan, 
    int *chanId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_chan_destroy(
    int unit, 
    bcm_port_t port, 
    int chanId)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_chan_get(
    int unit, 
    bcm_port_t port, 
    int chanId, 
    bcm_macsec_secure_chan_t *chan)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_secure_chan_traverse(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_chan_traverse_cb calback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_stat_clear(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_stat_get(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_stat_t stat, 
    int chanId, 
    int assocId, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_stat_get32(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_stat_t stat, 
    int chanId, 
    int assocId, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_stat_set(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_stat_t stat, 
    int chanId, 
    int assocId, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_MACSEC)
int 
bcm_dfe_macsec_stat_set32(
    int unit, 
    bcm_port_t port, 
    bcm_macsec_stat_t stat, 
    int chanId, 
    int assocId, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_mcast_addr_add(
    int unit, 
    bcm_mcast_addr_t *mcaddr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_addr_add_w_l2mcindex(
    int unit, 
    bcm_mcast_addr_t *mcaddr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_addr_remove(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_addr_remove_w_l2mcindex(
    int unit, 
    bcm_mcast_addr_t *mcaddr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_bitmap_del(
    int unit, 
    int mc_idx, 
    bcm_port_t in_port, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_bitmap_get(
    int unit, 
    int mc_idx, 
    bcm_port_t in_port, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_bitmap_max_get(
    int unit, 
    int *max_index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_bitmap_set(
    int unit, 
    int mc_idx, 
    bcm_port_t in_port, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_join(
    int unit, 
    bcm_mac_t mcMacAddr, 
    bcm_vlan_t vlanId, 
    int srcPort, 
    bcm_mcast_addr_t *mcaddr, 
    bcm_pbmp_t *allRouterBmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_leave(
    int unit, 
    bcm_mac_t mcMacAddr, 
    bcm_vlan_t vlanId, 
    int srcPort)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_port_add(
    int unit, 
    bcm_mcast_addr_t *mcaddr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_port_get(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_t vid, 
    bcm_mcast_addr_t *mcaddr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mcast_port_remove(
    int unit, 
    bcm_mcast_addr_t *mcaddr)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_lookup_id_stat_attach(
    int unit, 
    int lookup_id, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_lookup_id_stat_counter_get(
    int unit, 
    int lookup_id, 
    bcm_mim_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_lookup_id_stat_counter_set(
    int unit, 
    int lookup_id, 
    bcm_mim_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_lookup_id_stat_counter_sync_get(
    int unit, 
    int lookup_id, 
    bcm_mim_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_lookup_id_stat_detach(
    int unit, 
    int lookup_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_lookup_id_stat_id_get(
    int unit, 
    int lookup_id, 
    bcm_mim_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_port_add(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_port_t *mim_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_port_delete(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_gport_t mim_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_port_delete_all(
    int unit, 
    bcm_mim_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_port_get(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_port_t *mim_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_port_get_all(
    int unit, 
    bcm_mim_vpn_t vpn, 
    int port_max, 
    bcm_mim_port_t *port_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_create(
    int unit, 
    bcm_mim_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_destroy(
    int unit, 
    bcm_mim_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_get(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_stat_attach(
    int unit, 
    bcm_mim_vpn_t vpn, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_stat_counter_get(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_stat_counter_set(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_stat_counter_sync_get(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_stat_detach(
    int unit, 
    bcm_mim_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_stat_id_get(
    int unit, 
    bcm_mim_vpn_t vpn, 
    bcm_mim_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mim_vpn_traverse(
    int unit, 
    bcm_mim_vpn_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_mirror_destination_create(
    int unit, 
    bcm_mirror_destination_t *mirror_dest)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_destination_destroy(
    int unit, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_destination_get(
    int unit, 
    bcm_gport_t mirror_dest_id, 
    bcm_mirror_destination_t *mirror_dest)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_destination_traverse(
    int unit, 
    bcm_mirror_destination_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_egress_get(
    int unit, 
    bcm_port_t port, 
    int *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_egress_set(
    int unit, 
    bcm_port_t port, 
    int val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_ingress_get(
    int unit, 
    bcm_port_t port, 
    int *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_ingress_set(
    int unit, 
    bcm_port_t port, 
    int val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_mode_get(
    int unit, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_mode_set(
    int unit, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_dest_add(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_dest_delete(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_gport_t mirror_dest_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_dest_delete_all(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_dest_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int mirror_dest_size, 
    bcm_gport_t *mirror_dest, 
    int *mirror_dest_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_destination_add(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_gport_t mirror_dest, 
    bcm_mirror_options_t options)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_destination_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int mirror_dest_size, 
    bcm_gport_t *mirror_dest, 
    int *mirror_dest_count, 
    bcm_mirror_options_t *options)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_get(
    int unit, 
    bcm_port_t port, 
    bcm_module_t *dest_mod, 
    bcm_port_t *dest_port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_info_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_mirror_port_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_info_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_mirror_port_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_set(
    int unit, 
    bcm_port_t port, 
    bcm_module_t dest_mod, 
    bcm_port_t dest_port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_dest_add(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    uint32 flags, 
    bcm_gport_t destid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_dest_delete(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    uint32 flags, 
    bcm_gport_t destid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_dest_delete_all(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_dest_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    uint32 flags, 
    uint32 mirror_dest_size, 
    bcm_gport_t *destid, 
    uint32 *destcount)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_destination_add(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    uint32 flags, 
    bcm_gport_t destid, 
    bcm_mirror_options_t options)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_destination_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    uint32 flags, 
    uint32 mirror_dest_size, 
    bcm_gport_t *destid, 
    uint32 *destcount, 
    bcm_mirror_options_t *options)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    bcm_gport_t *dest_port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_port_vlan_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    bcm_gport_t destport, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_to_get(
    int unit, 
    bcm_port_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_to_pbmp_get(
    int unit, 
    bcm_port_t port, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_to_pbmp_set(
    int unit, 
    bcm_port_t port, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_to_set(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_vlan_get(
    int unit, 
    bcm_port_t port, 
    uint16 *tpid, 
    uint16 *vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_mirror_vlan_set(
    int unit, 
    bcm_port_t port, 
    uint16 tpid, 
    uint16 vlan)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_entropy_identifier_add(
    int unit, 
    uint32 options, 
    bcm_mpls_entropy_identifier_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_entropy_identifier_delete(
    int unit, 
    bcm_mpls_entropy_identifier_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_entropy_identifier_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_entropy_identifier_get(
    int unit, 
    bcm_mpls_entropy_identifier_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_entropy_identifier_traverse(
    int unit, 
    bcm_mpls_entropy_identifier_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_exp_map_create(
    int unit, 
    uint32 flags, 
    int *exp_map_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_exp_map_destroy(
    int unit, 
    int exp_map_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_exp_map_get(
    int unit, 
    int exp_map_id, 
    bcm_mpls_exp_map_t *exp_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_exp_map_set(
    int unit, 
    int exp_map_id, 
    bcm_mpls_exp_map_t *exp_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_attach(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_clear(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_counter_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_counter_set(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_counter_sync_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_detach(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_enable_set(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_get32(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_id_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_sync_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_label_stat_sync_get32(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_add(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_mpls_port_t *mpls_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_delete(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t mpls_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_delete_all(
    int unit, 
    bcm_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_mpls_port_t *mpls_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_get_all(
    int unit, 
    bcm_vpn_t vpn, 
    int port_max, 
    bcm_mpls_port_t *port_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_attach(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_counter_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_counter_set(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_counter_sync_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_detach(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_enable_set(
    int unit, 
    bcm_gport_t mpls_port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_get(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_get32(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_id_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_set(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_port_stat_set32(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_range_action_add(
    int unit, 
    bcm_mpls_label_t label_low, 
    bcm_mpls_label_t label_high, 
    bcm_mpls_range_action_t *action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_range_action_get(
    int unit, 
    bcm_mpls_label_t label_low, 
    bcm_mpls_label_t label_high, 
    bcm_mpls_range_action_t *action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_range_action_remove(
    int unit, 
    bcm_mpls_label_t label_low, 
    bcm_mpls_label_t label_high)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_initiator_clear(
    int unit, 
    bcm_if_t intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_initiator_clear_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_initiator_create(
    int unit, 
    bcm_if_t intf, 
    int num_labels, 
    bcm_mpls_egress_label_t *label_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_initiator_get(
    int unit, 
    bcm_if_t intf, 
    int label_max, 
    bcm_mpls_egress_label_t *label_array, 
    int *label_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_initiator_set(
    int unit, 
    bcm_if_t intf, 
    int num_labels, 
    bcm_mpls_egress_label_t *label_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_label_counter_id_detach(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_label_counter_id_num_get(
    int unit, 
    bcm_if_t intf_id, 
    int *num_counters, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_label_counter_id_stat_get(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id, 
    bcm_mpls_stat_info_t *stat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_label_counter_id_stat_set(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id, 
    bcm_mpls_stat_info_t *stat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_label_counter_id_stat_sync_get(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id, 
    bcm_mpls_stat_info_t *stat_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_stat_attach(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_stat_counter_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_stat_counter_set(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_stat_counter_sync_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_stat_detach(
    int unit, 
    bcm_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_stat_id_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_switch_add(
    int unit, 
    bcm_mpls_tunnel_switch_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_switch_create(
    int unit, 
    bcm_mpls_tunnel_switch_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_switch_delete(
    int unit, 
    bcm_mpls_tunnel_switch_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_switch_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_switch_get(
    int unit, 
    bcm_mpls_tunnel_switch_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_tunnel_switch_traverse(
    int unit, 
    bcm_mpls_tunnel_switch_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_vpn_id_create(
    int unit, 
    bcm_mpls_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_vpn_id_destroy(
    int unit, 
    bcm_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_vpn_id_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_vpn_id_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_mpls_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_mpls_vpn_traverse(
    int unit, 
    bcm_mpls_vpn_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_multicast_add(
    int unit, 
    bcm_multicast_t group, 
    uint32 flags, 
    int nof_replications, 
    bcm_multicast_replication_t *rep_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_control_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_multicast_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_control_set(
    int unit, 
    bcm_multicast_t group, 
    bcm_multicast_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_delete(
    int unit, 
    bcm_multicast_t group, 
    uint32 flags, 
    int nof_replications, 
    bcm_multicast_replication_t *rep_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_object_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_if_t intf, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_subscriber_add(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t encap_id, 
    bcm_gport_t subscriber_queue)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_subscriber_delete(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t encap_id, 
    bcm_gport_t subscriber_queue)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_subscriber_get(
    int unit, 
    bcm_multicast_t group, 
    int port_max, 
    bcm_gport_t *port_array, 
    bcm_if_t *encap_id_array, 
    bcm_gport_t *subscriber_queue_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_subscriber_qos_map_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t subscriber_queue, 
    int *qos_map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_subscriber_qos_map_set(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t subscriber_queue, 
    int qos_map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_egress_subscriber_set(
    int unit, 
    bcm_multicast_t group, 
    int port_count, 
    bcm_gport_t *port_array, 
    bcm_if_t *encap_id_array, 
    bcm_gport_t *subscriber_queue_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_extender_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t extender_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_fabric_distribution_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_fabric_distribution_t *ds_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_fabric_distribution_set(
    int unit, 
    bcm_multicast_t group, 
    bcm_fabric_distribution_t ds_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_get(
    int unit, 
    bcm_multicast_t group, 
    uint32 flags, 
    int replication_max, 
    bcm_multicast_replication_t *out_rep_array, 
    int *rep_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_group_free_range_get(
    int unit, 
    uint32 type_flag, 
    bcm_multicast_t *group_min, 
    bcm_multicast_t *group_max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_group_get(
    int unit, 
    bcm_multicast_t group, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_group_is_free(
    int unit, 
    bcm_multicast_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_group_traverse(
    int unit, 
    bcm_multicast_group_traverse_cb_t trav_fn, 
    uint32 flags, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_ingress_add(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_ingress_delete(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_ingress_delete_all(
    int unit, 
    bcm_multicast_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_ingress_get(
    int unit, 
    bcm_multicast_t group, 
    int port_max, 
    bcm_gport_t *port_array, 
    bcm_if_t *encap_id_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_ingress_set(
    int unit, 
    bcm_multicast_t group, 
    int port_count, 
    bcm_gport_t *port_array, 
    bcm_if_t *encap_id_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_l2_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_vlan_t vlan, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_l2gre_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t l2gre_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_l3_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t intf, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_mac_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t mac_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_mim_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t mim_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_multi_alloc(
    int unit, 
    bcm_multicast_multi_info_t mc_multi_info, 
    bcm_multicast_t *base_mc_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_multi_free(
    int unit, 
    bcm_multicast_t base_mc_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_niv_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t niv_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_repl_get(
    int unit, 
    int index, 
    bcm_port_t port, 
    bcm_vlan_vector_t vlan_vec)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_repl_set(
    int unit, 
    int mc_index, 
    bcm_port_t port, 
    bcm_vlan_vector_t vlan_vec)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_set(
    int unit, 
    bcm_multicast_t group, 
    uint32 flags, 
    int nof_replications, 
    bcm_multicast_replication_t *rep_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_subport_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t subport, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_trill_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t intf, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_vlan_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t vlan_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_vpls_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t mpls_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_vxlan_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t vxlan_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_multicast_wlan_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t wlan_port_id, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_egress_add(
    int unit, 
    bcm_gport_t niv_port, 
    bcm_niv_egress_t *niv_egress)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_egress_delete(
    int unit, 
    bcm_gport_t niv_port, 
    bcm_niv_egress_t *niv_egress)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_egress_delete_all(
    int unit, 
    bcm_gport_t niv_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_egress_get(
    int unit, 
    bcm_gport_t niv_port, 
    int array_size, 
    bcm_niv_egress_t *niv_egress_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_egress_set(
    int unit, 
    bcm_gport_t niv_port, 
    int array_size, 
    bcm_niv_egress_t *niv_egress_array)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_forward_add(
    int unit, 
    bcm_niv_forward_t *iv_fwd_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_forward_delete(
    int unit, 
    bcm_niv_forward_t *iv_fwd_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_forward_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_forward_get(
    int unit, 
    bcm_niv_forward_t *iv_fwd_entry)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_forward_traverse(
    int unit, 
    bcm_niv_forward_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_port_add(
    int unit, 
    bcm_niv_port_t *niv_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_port_delete(
    int unit, 
    bcm_gport_t niv_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_port_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_port_get(
    int unit, 
    bcm_niv_port_t *niv_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_niv_port_traverse(
    int unit, 
    bcm_niv_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_oam_ais_add(
    int unit, 
    bcm_oam_ais_t *ais_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_ais_delete(
    int unit, 
    bcm_oam_ais_t *ais_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_ais_get(
    int unit, 
    bcm_oam_ais_t *ais_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_control_get(
    int unit, 
    bcm_oam_control_type_t type, 
    uint64 *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_control_set(
    int unit, 
    bcm_oam_control_type_t type, 
    uint64 arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_csf_add(
    int unit, 
    bcm_oam_csf_t *csf_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_csf_delete(
    int unit, 
    bcm_oam_csf_t *csf_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_csf_get(
    int unit, 
    bcm_oam_csf_t *csf_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_delay_add(
    int unit, 
    bcm_oam_delay_t *delay_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_delay_delete(
    int unit, 
    bcm_oam_delay_t *delay_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_delay_get(
    int unit, 
    bcm_oam_delay_t *delay_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_action_set(
    int unit, 
    bcm_oam_endpoint_t id, 
    bcm_oam_endpoint_action_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_create(
    int unit, 
    bcm_oam_endpoint_info_t *endpoint_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_destroy(
    int unit, 
    bcm_oam_endpoint_t endpoint)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_destroy_all(
    int unit, 
    bcm_oam_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_egress_intf_egress_attach(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    bcm_if_t egress_intf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_egress_intf_egress_attach_get(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    int max_count, 
    bcm_if_t *egress_intf, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_egress_intf_egress_detach(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    bcm_if_t egress_intf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_faults_multi_get(
    int unit, 
    uint32 flags, 
    bcm_oam_protocol_type_t endpoint_protocol, 
    uint32 max_endpoints, 
    bcm_oam_endpoint_fault_t *faults, 
    uint32 *endpoint_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_get(
    int unit, 
    bcm_oam_endpoint_t endpoint, 
    bcm_oam_endpoint_info_t *endpoint_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_gport_egress_attach(
    int unit, 
    bcm_oam_endpoint_t endpoint, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_gport_egress_attach_get(
    int unit, 
    bcm_oam_endpoint_t endpoint, 
    int max_count, 
    bcm_gport_t *gport, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_gport_egress_detach(
    int unit, 
    bcm_oam_endpoint_t endpoint, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_endpoint_traverse(
    int unit, 
    bcm_oam_group_t group, 
    bcm_oam_endpoint_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_event_register(
    int unit, 
    bcm_oam_event_types_t event_types, 
    bcm_oam_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_event_unregister(
    int unit, 
    bcm_oam_event_types_t event_types, 
    bcm_oam_event_cb cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_group_create(
    int unit, 
    bcm_oam_group_info_t *group_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_group_destroy(
    int unit, 
    bcm_oam_group_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_group_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_group_get(
    int unit, 
    bcm_oam_group_t group, 
    bcm_oam_group_info_t *group_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_group_traverse(
    int unit, 
    bcm_oam_group_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_lookup_enable_get(
    int unit, 
    bcm_oam_lookup_type_t type, 
    bcm_oam_conditions_t *condition)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_lookup_enable_multi_set(
    int unit, 
    bcm_oam_lookup_types_t types, 
    bcm_oam_conditions_t conditions, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_lookup_enable_set(
    int unit, 
    bcm_oam_lookup_type_t type, 
    bcm_oam_condition_t condition, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_loopback_add(
    int unit, 
    bcm_oam_loopback_t *loopback_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_loopback_delete(
    int unit, 
    bcm_oam_loopback_t *loopback_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_loopback_get(
    int unit, 
    bcm_oam_loopback_t *loopback_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_loss_add(
    int unit, 
    bcm_oam_loss_t *loss_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_loss_delete(
    int unit, 
    bcm_oam_loss_t *loss_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_loss_get(
    int unit, 
    bcm_oam_loss_t *loss_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_mpls_tp_channel_type_rx_get(
    int unit, 
    bcm_oam_mpls_tp_channel_type_t  channel_type, 
    int num_values, 
    int *list_of_values, 
    int *value_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_mpls_tp_channel_type_rx_set(
    int unit, 
    bcm_oam_mpls_tp_channel_type_t  channel_type, 
    int num_values, 
    int *list_of_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_mpls_tp_channel_type_tx_get(
    int unit, 
    bcm_oam_mpls_tp_channel_type_t  channel_type, 
    int *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_mpls_tp_channel_type_tx_set(
    int unit, 
    bcm_oam_mpls_tp_channel_type_t  channel_type, 
    int value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcode_group_get(
    int unit, 
    bcm_oam_protocol_type_t protocol, 
    bcm_oam_opcode_t opcode, 
    uint8 *opcode_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcode_group_set(
    int unit, 
    bcm_oam_protocol_type_t protocol, 
    bcm_oam_opcodes_t opcodes, 
    uint8 opcode_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcode_map_get(
    int unit, 
    int opcode, 
    int *profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcode_map_set(
    int unit, 
    int opcode, 
    int profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcodes_count_profile_create(
    int unit, 
    uint8 *lm_count_profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcodes_count_profile_delete(
    int unit, 
    uint8 lm_count_profile)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcodes_count_profile_get(
    int unit, 
    uint8 lm_count_profile, 
    uint8 count_enable, 
    bcm_oam_opcodes_t *opcodes_bitmap)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_opcodes_count_profile_set(
    int unit, 
    uint8 lm_count_profile, 
    uint8 count_enable, 
    bcm_oam_opcodes_t *opcodes_bitmap)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_performance_event_register(
    int unit, 
    bcm_oam_event_types_t event_types, 
    bcm_oam_performance_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_performance_event_unregister(
    int unit, 
    bcm_oam_event_types_t event_types, 
    bcm_oam_performance_event_cb cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_event_register(
    int unit, 
    bcm_oam_event_types_t event_types, 
    bcm_oam_pm_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_event_unregister(
    int unit, 
    bcm_oam_event_types_t event_types, 
    bcm_oam_pm_event_cb cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_attach(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    int profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_attach_get(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    int *profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_create(
    int unit, 
    bcm_oam_pm_profile_info_t *profile_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_delete(
    int unit, 
    bcm_oam_pm_profile_t profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_detach(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    int profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_get(
    int unit, 
    bcm_oam_pm_profile_info_t *profile_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_profile_traverse(
    int unit, 
    bcm_oam_pm_profile_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_raw_data_read_done(
    int unit, 
    bcm_oam_event_types_t event_types, 
    uint32 read_index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pm_stats_get(
    int unit, 
    bcm_oam_endpoint_t endpoint_id, 
    bcm_oam_pm_stats_t *stats_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_protection_packet_header_get(
    int unit, 
    bcm_pkt_blk_t *packet_header)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_protection_packet_header_set(
    int unit, 
    bcm_pkt_blk_t *packet_header)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_psc_add(
    int unit, 
    bcm_oam_psc_t *psc_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_psc_delete(
    int unit, 
    bcm_oam_psc_t *psc_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_psc_get(
    int unit, 
    bcm_oam_psc_t *psc_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pw_status_add(
    int unit, 
    bcm_oam_pw_status_t *pw_status_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pw_status_delete(
    int unit, 
    bcm_oam_pw_status_t *pw_status_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_pw_status_get(
    int unit, 
    bcm_oam_pw_status_t *pw_status_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_sd_sf_detection_add(
    int unit, 
    bcm_oam_sd_sf_detection_t *sd_sf_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_sd_sf_detection_delete(
    int unit, 
    bcm_oam_sd_sf_detection_t *sd_sf_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_sd_sf_detection_get(
    int unit, 
    bcm_oam_sd_sf_detection_t *sd_sf_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_trunk_ports_add(
    int unit, 
    bcm_gport_t trunk_gport, 
    int max_ports, 
    bcm_gport_t *port_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_trunk_ports_delete(
    int unit, 
    bcm_gport_t trunk_gport, 
    int max_ports, 
    bcm_gport_t *port_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_trunk_ports_get(
    int unit, 
    bcm_gport_t trunk_gport, 
    int max_ports, 
    bcm_gport_t *port_arr, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_tst_rx_add(
    int unit, 
    bcm_oam_tst_rx_t *tst_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_tst_rx_delete(
    int unit, 
    bcm_oam_tst_rx_t *tst_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_tst_rx_get(
    int unit, 
    bcm_oam_tst_rx_t *tst_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_tst_tx_add(
    int unit, 
    bcm_oam_tst_tx_t *tst_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_tst_tx_delete(
    int unit, 
    bcm_oam_tst_tx_t *tst_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_tst_tx_get(
    int unit, 
    bcm_oam_tst_tx_t *tst_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_y_1711_alarm_add(
    int unit, 
    bcm_oam_y_1711_alarm_t *alarm_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_y_1711_alarm_delete(
    int unit, 
    bcm_oam_y_1711_alarm_t *alarm_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oam_y_1711_alarm_get(
    int unit, 
    bcm_oam_y_1711_alarm_t *alarm_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_config_get(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_oob_fc_rx_config_t *config, 
    int array_max, 
    bcm_gport_t *gport_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_config_set(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_oob_fc_rx_config_t *config, 
    int array_count, 
    bcm_gport_t *gport_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_port_offset_get(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_gport_t gport, 
    uint32 *offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_port_tc_mapping_get(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_gport_t gport, 
    uint32 tc, 
    uint32 *pri_bmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_port_tc_mapping_multi_get(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_gport_t gport, 
    int array_max, 
    uint32 *tc, 
    uint32 *pri_bmp, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_port_tc_mapping_multi_set(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_gport_t gport, 
    int array_count, 
    uint32 *tc, 
    uint32 *pri_bmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_rx_port_tc_mapping_set(
    int unit, 
    bcm_oob_fc_rx_intf_id_t intf_id, 
    bcm_gport_t gport, 
    uint32 tc, 
    uint32 pri_bmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_tx_config_get(
    int unit, 
    bcm_oob_fc_tx_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_tx_config_set(
    int unit, 
    bcm_oob_fc_tx_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_fc_tx_info_get(
    int unit, 
    bcm_oob_fc_tx_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_config_get(
    int unit, 
    bcm_oob_stats_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_config_set(
    int unit, 
    bcm_oob_stats_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_pool_mapping_get(
    int unit, 
    int offset, 
    uint8 *dir, 
    bcm_service_pool_id_t *pool)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_pool_mapping_multi_get(
    int unit, 
    int array_max, 
    int *offset_array, 
    uint8 *dir_array, 
    bcm_service_pool_id_t *pool_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_pool_mapping_multi_set(
    int unit, 
    int array_count, 
    int *offset_array, 
    uint8 *dir_array, 
    bcm_service_pool_id_t *pool_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_pool_mapping_set(
    int unit, 
    int offset, 
    uint8 dir, 
    bcm_service_pool_id_t pool)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_queue_mapping_get(
    int unit, 
    int offset, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_queue_mapping_multi_get(
    int unit, 
    int array_max, 
    int *offset_array, 
    bcm_gport_t *gport_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_queue_mapping_multi_set(
    int unit, 
    int array_count, 
    int *offset_array, 
    bcm_gport_t *gport_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_oob_stats_queue_mapping_set(
    int unit, 
    int offset, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_add(
    int unit, 
    uint32 action_id, 
    bcm_policer_action_t action, 
    uint32 param0)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_attach(
    int unit, 
    bcm_policer_t policer_id, 
    uint32 action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_attach_get(
    int unit, 
    bcm_policer_t policer_id, 
    uint32 *action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_create(
    int unit, 
    uint32 *action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_destroy(
    int unit, 
    uint32 action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_detach(
    int unit, 
    bcm_policer_t policer_id, 
    uint32 action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_action_get(
    int unit, 
    uint32 action_id, 
    bcm_policer_action_t action, 
    uint32 *param0)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_aggregate_group_create(
    int unit, 
    bcm_policer_aggregate_group_info_t *info, 
    bcm_policer_t *policer_id, 
    int *npolicers)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_color_decision_get(
    int unit, 
    bcm_policer_color_decision_t *policer_color_decision)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_color_decision_set(
    int unit, 
    bcm_policer_color_decision_t *policer_color_decision)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_color_resolution_get(
    int unit, 
    bcm_policer_color_resolution_t *policer_color_resolution)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_color_resolution_set(
    int unit, 
    bcm_policer_color_resolution_t *policer_color_resolution)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_create(
    int unit, 
    bcm_policer_config_t *pol_cfg, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_custom_group_create(
    int unit, 
    uint32 flags, 
    uint32 mode_id, 
    bcm_policer_t macro_flow_policer_id, 
    bcm_policer_t *policer_id, 
    uint32 *npolicers)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_destroy(
    int unit, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_envelop_create(
    int unit, 
    uint32 flag, 
    bcm_policer_t macro_flow_policer_id, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_envelop_group_create(
    int unit, 
    uint32 flag, 
    bcm_policer_group_mode_t mode, 
    bcm_policer_t macro_flow_policer_id, 
    bcm_policer_t *policer_id, 
    int *npolicers)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_get(
    int unit, 
    bcm_policer_t policer_id, 
    bcm_policer_config_t *pol_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_global_meter_config_get(
    int unit, 
    bcm_policer_global_meter_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_global_meter_config_set(
    int unit, 
    bcm_policer_global_meter_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_group_create(
    int unit, 
    bcm_policer_group_mode_t mode, 
    bcm_policer_t *policer_id, 
    int *npolicers)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_group_create_with_map(
    int unit, 
    bcm_policer_group_mode_t mode, 
    bcm_policer_map_t *offset_map, 
    bcm_policer_t *policer_id, 
    int *num_policers)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_group_get(
    int unit, 
    bcm_policer_t base_policer_id, 
    int member_max, 
    bcm_policer_t *member_array, 
    int *member_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_group_mode_id_create(
    int unit, 
    uint32 flags, 
    bcm_policer_group_mode_type_t type, 
    uint32 total_policers, 
    uint32 num_selectors, 
    bcm_policer_group_mode_attr_selector_t *attr_selectors, 
    uint32 *mode_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_group_mode_id_destroy(
    int unit, 
    uint32 mode_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_group_mode_id_get(
    int unit, 
    uint32 mode_id, 
    uint32 num_selectors, 
    uint32 *flags, 
    bcm_policer_group_mode_type_t *type, 
    uint32 *total_policers, 
    bcm_policer_group_mode_attr_selector_t *attr_selectors, 
    uint32 *actual_num_selectors)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_packet_counter_get32(
    int unit, 
    bcm_policer_t policer_id, 
    uint32 *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_packet_reset_counter_get32(
    int unit, 
    bcm_policer_t policer_id, 
    uint32 *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_set(
    int unit, 
    bcm_policer_t policer_id, 
    bcm_policer_config_t *pol_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_stat_enable_get(
    int unit, 
    bcm_policer_t policer_id, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_stat_enable_set(
    int unit, 
    bcm_policer_t policer_id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_stat_get(
    int unit, 
    bcm_policer_t policer_id, 
    bcm_cos_t int_pri, 
    bcm_policer_stat_t stat, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_stat_get32(
    int unit, 
    bcm_policer_t policer_id, 
    bcm_cos_t int_pri, 
    bcm_policer_stat_t stat, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_stat_set(
    int unit, 
    bcm_policer_t policer_id, 
    bcm_cos_t int_pri, 
    bcm_policer_stat_t stat, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_stat_set32(
    int unit, 
    bcm_policer_t policer_id, 
    bcm_cos_t int_pri, 
    bcm_policer_stat_t stat, 
    uint32 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_policer_traverse(
    int unit, 
    bcm_policer_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ability_advert_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_ability_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ability_advert_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_ability_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ability_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_abil_t *local_ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ability_local_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_ability_t *local_ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ability_remote_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_ability_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_add(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_port_interface_info_t *interface_info, 
    bcm_port_mapping_info_t *mapping_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_advert_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_abil_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_advert_remote_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_abil_t *ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_advert_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_abil_t ability_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_autoneg_get(
    int unit, 
    bcm_port_t port, 
    int *autoneg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_autoneg_set(
    int unit, 
    bcm_port_t port, 
    int autoneg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_bpdu_enable_get(
    int unit, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_bpdu_enable_set(
    int unit, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_cable_diag(
    int unit, 
    bcm_port_t port, 
    bcm_port_cable_diag_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_cfi_color_get(
    int unit, 
    bcm_port_t port, 
    int cfi, 
    bcm_color_t *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_cfi_color_set(
    int unit, 
    bcm_port_t port, 
    int cfi, 
    bcm_color_t color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_class_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_class_t pclass, 
    uint32 *class_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_class_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_class_t pclass, 
    uint32 class_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_clear(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_config_phy_oam_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_config_phy_oam_t *conf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_config_phy_oam_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_config_phy_oam_t *conf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_congestion_config_get(
    int unit, 
    bcm_gport_t port, 
    bcm_port_congestion_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_congestion_config_set(
    int unit, 
    bcm_gport_t port, 
    bcm_port_congestion_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_congestion_get(
    int unit, 
    bcm_gport_t congestion_port, 
    bcm_gport_t port, 
    uint32 flags, 
    int *channel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_congestion_set(
    int unit, 
    bcm_gport_t congestion_port, 
    bcm_gport_t port, 
    uint32 flags, 
    int channel_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_control_phy_oam_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_control_phy_oam_t type, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_control_phy_oam_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_control_phy_oam_t type, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_control_phy_timesync_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_control_phy_timesync_t type, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_control_phy_timesync_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_control_phy_timesync_t type, 
    uint64 value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_discard_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_discard_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dscp_map_get(
    int unit, 
    bcm_port_t port, 
    int srccp, 
    int *mapcp, 
    int *prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dscp_map_mode_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dscp_map_mode_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dscp_map_set(
    int unit, 
    bcm_port_t port, 
    int srccp, 
    int mapcp, 
    int prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dscp_unmap_get(
    int unit, 
    bcm_port_t port, 
    int internal_pri, 
    bcm_color_t color, 
    int *pkt_dscp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dscp_unmap_set(
    int unit, 
    bcm_port_t port, 
    int internal_pri, 
    bcm_color_t color, 
    int pkt_dscp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dtag_mode_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_dtag_mode_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_duplex_get(
    int unit, 
    bcm_port_t port, 
    int *duplex)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_duplex_set(
    int unit, 
    bcm_port_t port, 
    int duplex)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_module_enable_get(
    int unit, 
    bcm_module_t remote_module, 
    bcm_port_e2efc_mode_t mode, 
    int *enable, 
    bcm_port_e2efc_remote_module_config_t *e2efc_rmod_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_module_enable_set(
    int unit, 
    bcm_module_t remote_module, 
    bcm_port_e2efc_mode_t mode, 
    int enable, 
    bcm_port_e2efc_remote_module_config_t *e2efc_rmod_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_module_traverse(
    int unit, 
    bcm_port_e2efc_remote_module_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_port_add(
    int unit, 
    bcm_port_e2efc_remote_port_config_t *e2efc_rport_cfg, 
    int *rport_handle_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_port_delete(
    int unit, 
    int rport_handle_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_port_get(
    int unit, 
    int rport_handle_id, 
    bcm_port_e2efc_remote_port_config_t *e2efc_rport_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_port_set(
    int unit, 
    int rport_handle_id, 
    bcm_port_e2efc_remote_port_config_t *e2efc_rport_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_e2efc_remote_port_traverse(
    int unit, 
    bcm_port_e2efc_remote_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_egress_get(
    int unit, 
    bcm_port_t port, 
    int modid, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_egress_policer_set(
    int unit, 
    bcm_port_t port, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_egress_set(
    int unit, 
    bcm_port_t port, 
    int modid, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_encap_config_t *encap_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_config_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_encap_config_t *encap_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_local_get(
    int unit, 
    bcm_gport_t gport, 
    uint32 flags, 
    int *encap_local_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_map_get(
    int unit, 
    uint32 flags, 
    bcm_if_t encap_id, 
    bcm_gport_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_map_set(
    int unit, 
    uint32 flags, 
    bcm_if_t encap_id, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_encap_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_extender_mapping_info_get(
    int unit, 
    uint32 flags, 
    bcm_port_extender_mapping_type_t type, 
    bcm_port_extender_mapping_info_t *mapping_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_extender_mapping_info_set(
    int unit, 
    uint32 flags, 
    bcm_port_extender_mapping_type_t type, 
    bcm_port_extender_mapping_info_t *mapping_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_flood_block_get(
    int unit, 
    bcm_port_t ingress_port, 
    bcm_port_t egress_port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_flood_block_set(
    int unit, 
    bcm_port_t ingress_port, 
    bcm_port_t egress_port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_dest_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_dest_info_t *dest_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_dest_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_dest_info_t *dest_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_forward_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_t *egr_port, 
    int *enabled)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_forward_mode_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_t *egr_port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_forward_mode_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_t egr_port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_forward_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_t egr_port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_vlan_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t *vlan, 
    int *pkt_prio, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_force_vlan_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    int pkt_prio, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_frame_max_get(
    int unit, 
    bcm_port_t port, 
    int *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_frame_max_set(
    int unit, 
    bcm_port_t port, 
    int size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_get(
    int unit, 
    bcm_port_t port, 
    uint32 *flags, 
    bcm_port_interface_info_t *interface_info, 
    bcm_port_mapping_info_t *mapping_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_add(
    int unit, 
    bcm_port_t local_port, 
    bcm_gport_t modport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_delete(
    int unit, 
    bcm_port_t local_port, 
    bcm_gport_t modport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_delete_all(
    int unit, 
    bcm_port_t local_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_free_range_get(
    int unit, 
    uint32 gport_type, 
    bcm_gport_t *gport_min, 
    bcm_gport_t *gport_max)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_get(
    int unit, 
    bcm_port_t port, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_get_all(
    int unit, 
    bcm_port_t local_port, 
    int size, 
    bcm_gport_t *gport_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_gport_is_free(
    int unit, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ifg_get(
    int unit, 
    bcm_port_t port, 
    int speed, 
    bcm_port_duplex_t duplex, 
    int *bit_times)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ifg_set(
    int unit, 
    bcm_port_t port, 
    int speed, 
    bcm_port_duplex_t duplex, 
    int bit_times)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ifilter_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ifilter_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ingress_tdm_failover_get(
    int unit, 
    int flag, 
    bcm_pbmp_t *tdm_enable_pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ingress_tdm_failover_set(
    int unit, 
    int flag, 
    bcm_pbmp_t tdm_enable_pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_inner_tpid_get(
    int unit, 
    bcm_port_t port, 
    uint16 *tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_inner_tpid_set(
    int unit, 
    bcm_port_t port, 
    uint16 tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_interface_config_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_interface_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_interface_config_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_interface_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_internal_get(
    int unit, 
    uint32 flags, 
    int internal_ports_max, 
    bcm_gport_t *internal_gport, 
    int *internal_ports_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ipmc_modify_get(
    int unit, 
    bcm_port_t port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_ipmc_modify_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_jam_get(
    int unit, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_jam_set(
    int unit, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_enable_get(
    int unit, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_enable_set(
    int unit, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_encapsulated_mtu_get(
    int unit, 
    bcm_port_t port, 
    int *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_encapsulated_mtu_set(
    int unit, 
    bcm_port_t port, 
    int size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_modify_get(
    int unit, 
    bcm_port_t port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_modify_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_mtu_get(
    int unit, 
    bcm_port_t port, 
    int *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_l3_mtu_set(
    int unit, 
    bcm_port_t port, 
    int size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_learn_get(
    int unit, 
    bcm_port_t port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_learn_modify(
    int unit, 
    bcm_port_t port, 
    uint32 add, 
    uint32 remove)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_learn_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_link_failed_clear(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_link_state_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    bcm_port_link_state_t *state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_local_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_t *local_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_management_packet_config_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_management_packet_config_t *config_array, 
    int max_config, 
    int *config_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_management_packet_config_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_management_packet_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_master_get(
    int unit, 
    bcm_port_t port, 
    int *ms)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_master_set(
    int unit, 
    bcm_port_t port, 
    int ms)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_match_add(
    int unit, 
    bcm_gport_t port, 
    bcm_port_match_info_t *match)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_match_delete(
    int unit, 
    bcm_gport_t port, 
    bcm_port_match_info_t *match)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_match_delete_all(
    int unit, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_match_multi_get(
    int unit, 
    bcm_gport_t port, 
    int size, 
    bcm_port_match_info_t *match_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_match_replace(
    int unit, 
    bcm_gport_t port, 
    bcm_port_match_info_t *old_match, 
    bcm_port_match_info_t *new_match)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_match_set(
    int unit, 
    bcm_gport_t port, 
    int size, 
    bcm_port_match_info_t *match_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_mdix_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_mdix_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_mdix_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_mdix_t mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_mdix_status_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_mdix_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_medium_config_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_medium_t medium, 
    bcm_phy_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_medium_config_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_medium_t medium, 
    bcm_phy_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_medium_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_medium_t *medium)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_medium_status_register(
    int unit, 
    bcm_port_t port, 
    bcm_port_medium_status_cb_t callback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_medium_status_unregister(
    int unit, 
    bcm_port_t port, 
    bcm_port_medium_status_cb_t callback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_modid_egress_get(
    int unit, 
    bcm_port_t port, 
    bcm_module_t modid, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_modid_egress_set(
    int unit, 
    bcm_port_t port, 
    bcm_module_t modid, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_modid_enable_get(
    int unit, 
    bcm_port_t port, 
    int modid, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_modid_enable_set(
    int unit, 
    bcm_port_t port, 
    int modid, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_nif_priority_get(
    int unit, 
    bcm_gport_t local_port, 
    uint32 flags, 
    bcm_port_nif_prio_t *priority, 
    bcm_pbmp_t *affected_ports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_nif_priority_set(
    int unit, 
    bcm_gport_t local_port, 
    uint32 flags, 
    bcm_port_nif_prio_t *priority, 
    bcm_pbmp_t *affected_ports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pause_addr_get(
    int unit, 
    bcm_port_t port, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pause_addr_set(
    int unit, 
    bcm_port_t port, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pause_get(
    int unit, 
    bcm_port_t port, 
    int *pause_tx, 
    int *pause_rx)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pause_set(
    int unit, 
    bcm_port_t port, 
    int pause_tx, 
    int pause_rx)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pause_sym_get(
    int unit, 
    bcm_port_t port, 
    int *pause)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pause_sym_set(
    int unit, 
    bcm_port_t port, 
    int pause)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pfm_get(
    int unit, 
    bcm_port_t port, 
    int *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pfm_set(
    int unit, 
    bcm_port_t port, 
    int mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_phy_drv_name_get(
    int unit, 
    bcm_port_t port, 
    char *name, 
    int len)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_phy_firmware_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    int offset, 
    uint8 *array, 
    int length)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_phy_multi_get(
    int unit, 
    bcm_port_t port, 
    uint32 flags, 
    uint32 dev_addr, 
    uint32 offset, 
    int max_size, 
    uint8 *data, 
    int *actual_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_phy_timesync_config_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_phy_timesync_config_t *conf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_phy_timesync_config_set(
    int unit, 
    bcm_port_t port, 
    bcm_port_phy_timesync_config_t *conf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_phy_timesync_enhanced_capture_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_phy_timesync_enhanced_capture_t *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_policer_get(
    int unit, 
    bcm_port_t port, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_policer_set(
    int unit, 
    bcm_port_t port, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pon_info_get(
    int unit, 
    bcm_port_t pon_port, 
    bcm_port_pon_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pon_info_set(
    int unit, 
    bcm_port_t pon_port, 
    bcm_port_pon_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pon_tunnel_add(
    int unit, 
    bcm_gport_t pon_port, 
    uint32 flags, 
    bcm_gport_t *tunnel_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pon_tunnel_map_get(
    int unit, 
    bcm_gport_t pon_port, 
    bcm_tunnel_id_t tunnel_id, 
    bcm_gport_t *tunnel_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pon_tunnel_map_set(
    int unit, 
    bcm_gport_t pon_port, 
    bcm_tunnel_id_t tunnel_id, 
    bcm_gport_t tunnel_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_pon_tunnel_remove(
    int unit, 
    bcm_gport_t tunnel_port_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_preemption_control_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_preempt_control_t type, 
    uint32 *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_preemption_control_set(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_preempt_control_t type, 
    uint32 arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_preemption_status_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_preempt_status_t type, 
    uint32 *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_priority_color_get(
    int unit, 
    bcm_port_t port, 
    int prio, 
    bcm_color_t *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_priority_color_set(
    int unit, 
    bcm_port_t port, 
    int prio, 
    bcm_color_t color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_priority_group_config_get(
    int unit, 
    bcm_gport_t gport, 
    int priority_group, 
    bcm_port_priority_group_config_t *prigrp_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_priority_group_config_set(
    int unit, 
    bcm_gport_t gport, 
    int priority_group, 
    bcm_port_priority_group_config_t *prigrp_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_priority_group_mapping_get(
    int unit, 
    bcm_gport_t gport, 
    int prio, 
    int *priority_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_priority_group_mapping_set(
    int unit, 
    bcm_gport_t gport, 
    int prio, 
    int priority_group )
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_protocol_vlan_add(
    int unit, 
    bcm_port_t port, 
    bcm_port_frametype_t frame, 
    bcm_port_ethertype_t ether, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_protocol_vlan_delete(
    int unit, 
    bcm_port_t port, 
    bcm_port_frametype_t frame, 
    bcm_port_ethertype_t ether)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_protocol_vlan_delete_all(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_queued_count_get(
    int unit, 
    bcm_port_t port, 
    uint32 *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_egress_get(
    int unit, 
    bcm_port_t port, 
    uint32 *kbits_sec, 
    uint32 *kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_egress_set(
    int unit, 
    bcm_port_t port, 
    uint32 kbits_sec, 
    uint32 kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_egress_traffic_get(
    int unit, 
    bcm_port_t port, 
    uint32 *traffic_types, 
    uint32 *kbits_sec, 
    uint32 *kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_egress_traffic_set(
    int unit, 
    bcm_port_t port, 
    uint32 traffic_types, 
    uint32 kbits_sec, 
    uint32 kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_ingress_get(
    int unit, 
    bcm_port_t port, 
    uint32 *kbits_sec, 
    uint32 *kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_ingress_set(
    int unit, 
    bcm_port_t port, 
    uint32 kbits_sec, 
    uint32 kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_pause_get(
    int unit, 
    bcm_port_t port, 
    uint32 *kbits_pause, 
    uint32 *kbits_resume)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_rate_pause_set(
    int unit, 
    bcm_port_t port, 
    uint32 kbits_pause, 
    uint32 kbits_resume)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_redirect_config_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_port_redirect_config_t *redirect_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_redirect_config_set(
    int unit, 
    bcm_gport_t port, 
    bcm_port_redirect_config_t *redirect_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_remove(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_resource_get(
    int unit, 
    bcm_gport_t port, 
    bcm_port_resource_t *resource)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_resource_multi_set(
    int unit, 
    int nport, 
    bcm_port_resource_t *resource)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_resource_set(
    int unit, 
    bcm_gport_t port, 
    bcm_port_resource_t *resource)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_resource_traverse(
    int unit, 
    bcm_port_resource_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_sample_rate_get(
    int unit, 
    bcm_port_t port, 
    int *ingress_rate, 
    int *egress_rate)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_sample_rate_set(
    int unit, 
    bcm_port_t port, 
    int ingress_rate, 
    int egress_rate)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_attach(
    int unit, 
    bcm_gport_t port, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_counter_get(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_counter_set(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_counter_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_detach(
    int unit, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_detach_with_id(
    int unit, 
    bcm_gport_t port, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_enable_set(
    int unit, 
    bcm_gport_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_id_get(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_multi_set(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_port_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_multi_set32(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_port_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_set(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_set32(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stat_sync_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_port_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stp_get(
    int unit, 
    bcm_port_t port, 
    int *state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_stp_set(
    int unit, 
    bcm_port_t port, 
    int state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_subsidiary_ports_get(
    int unit, 
    bcm_port_t port, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tgid_get(
    int unit, 
    bcm_port_t port, 
    int *tgid, 
    int *psc)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tgid_set(
    int unit, 
    bcm_port_t port, 
    int tgid, 
    int psc)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_timesync_config_get(
    int unit, 
    bcm_port_t port, 
    int array_size, 
    bcm_port_timesync_config_t *config_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_timesync_config_set(
    int unit, 
    bcm_port_t port, 
    int config_count, 
    bcm_port_timesync_config_t *config_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_add(
    int unit, 
    bcm_port_t port, 
    uint16 tpid, 
    int color_select)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_class_get(
    int unit, 
    bcm_port_tpid_class_t *tpid_class)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_class_set(
    int unit, 
    bcm_port_tpid_class_t *tpid_class)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_delete(
    int unit, 
    bcm_port_t port, 
    uint16 tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_delete_all(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_get(
    int unit, 
    bcm_port_t port, 
    uint16 *tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_get_all(
    int unit, 
    bcm_port_t port, 
    int size, 
    uint16 *tpid_array, 
    int *color_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_tpid_set(
    int unit, 
    bcm_port_t port, 
    uint16 tpid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_trunk_index_get(
    int unit, 
    bcm_port_t port, 
    int *port_index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_trunk_index_set(
    int unit, 
    bcm_port_t port, 
    int port_index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_untagged_priority_get(
    int unit, 
    bcm_port_t port, 
    int *priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_untagged_priority_set(
    int unit, 
    bcm_port_t port, 
    int priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_untagged_vlan_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t *vid_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_untagged_vlan_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_dscp_map_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    int dscp, 
    int *internal_pri, 
    bcm_color_t *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_dscp_map_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    int dscp, 
    int internal_pri, 
    bcm_color_t color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_inner_tag_get(
    int unit, 
    bcm_port_t port, 
    uint16 *inner_tag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_inner_tag_set(
    int unit, 
    bcm_port_t port, 
    uint16 inner_tag)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_member_get(
    int unit, 
    bcm_port_t port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_member_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_pri_map_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    int pkt_pri, 
    int cfi, 
    int *internal_pri, 
    bcm_color_t *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_pri_map_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vlan, 
    int pkt_pri, 
    int cfi, 
    int internal_pri, 
    bcm_color_t color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_priority_map_get(
    int unit, 
    bcm_port_t port, 
    int pkt_pri, 
    int cfi, 
    int *internal_pri, 
    bcm_color_t *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_priority_map_set(
    int unit, 
    bcm_port_t port, 
    int pkt_pri, 
    int cfi, 
    int internal_pri, 
    bcm_color_t color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_priority_mapping_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vid, 
    int pkt_pri, 
    int cfi, 
    bcm_priority_mapping_t *pri_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_priority_mapping_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vid, 
    int pkt_pri, 
    int cfi, 
    bcm_priority_mapping_t *pri_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_priority_unmap_get(
    int unit, 
    bcm_port_t port, 
    int internal_pri, 
    bcm_color_t color, 
    int *pkt_pri, 
    int *cfi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_priority_unmap_set(
    int unit, 
    bcm_port_t port, 
    int internal_pri, 
    bcm_color_t color, 
    int pkt_pri, 
    int cfi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_vector_get(
    int unit, 
    bcm_gport_t port_id, 
    bcm_vlan_vector_t vlan_vec)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_vlan_vector_set(
    int unit, 
    bcm_gport_t port_id, 
    bcm_vlan_vector_t vlan_vec)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_wide_data_get(
    int unit, 
    bcm_gport_t gport, 
    uint32 flags, 
    uint64 *data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_port_wide_data_set(
    int unit, 
    bcm_gport_t gport, 
    uint32 flags, 
    uint64 data)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_client_set(
    int unit, 
    bcm_port_t client_port, 
    bcm_proxy_proto_type_t proto_type, 
    bcm_module_t server_modid, 
    bcm_port_t server_port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_egress_create(
    int unit, 
    uint32 flags, 
    bcm_proxy_egress_t *proxy_egress, 
    bcm_if_t *proxy_if_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_egress_destroy(
    int unit, 
    bcm_if_t proxy_if_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_egress_get(
    int unit, 
    bcm_if_t proxy_if_id, 
    bcm_proxy_egress_t *proxy_egress)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_egress_traverse(
    int unit, 
    bcm_proxy_egress_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_server_get(
    int unit, 
    bcm_port_t server_port, 
    bcm_proxy_mode_t mode, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_server_port_get(
    int unit, 
    bcm_gport_t local_ingress_port, 
    bcm_proxy_server_t *proxy_server, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_server_port_set(
    int unit, 
    bcm_gport_t local_ingress_port, 
    bcm_proxy_server_t *proxy_server, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_proxy_server_set(
    int unit, 
    bcm_port_t server_port, 
    bcm_proxy_mode_t mode, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_data_sync(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_create(
    int unit, 
    int options, 
    int array_count, 
    bcm_pstats_session_element_t *element_array, 
    bcm_pstats_session_id_t *session_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_data_clear(
    int unit, 
    bcm_pstats_session_id_t session_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_data_get(
    int unit, 
    bcm_pstats_session_id_t session_id, 
    bcm_pstats_timestamp_t *timestamp, 
    int array_max, 
    bcm_pstats_data_t *data_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_data_sync_get(
    int unit, 
    bcm_pstats_session_id_t session_id, 
    bcm_pstats_timestamp_t *timestamp, 
    int array_max, 
    bcm_pstats_data_t *data_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_destroy(
    int unit, 
    bcm_pstats_session_id_t session_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_get(
    int unit, 
    bcm_pstats_session_id_t session_id, 
    int array_max, 
    bcm_pstats_session_element_t *element_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PSTATS)
int 
bcm_dfe_pstats_session_traverse(
    int unit, 
    bcm_pstats_session_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_add(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int priority1_alt_value, 
    bcm_ptp_clock_peer_address_t *master_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_enabled_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint8 *enabled)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_enabled_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint8 enabled)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_list(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int max_num_masters, 
    int *num_masters, 
    bcm_ptp_clock_peer_address_t *master_addr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_peer_address_t *master_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_table_clear(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_acceptable_master_table_size_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int *max_table_entries)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_cb_register(
    int unit, 
    bcm_ptp_cb_types_t cb_types, 
    bcm_ptp_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_cb_unregister(
    int unit, 
    bcm_ptp_cb_types_t cb_types, 
    bcm_ptp_cb cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_accuracy_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_clock_accuracy_t *accuracy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_accuracy_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_clock_accuracy_t *accuracy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_create(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    bcm_ptp_clock_info_t *clock_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_current_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_current_dataset_t *dataset)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_default_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_default_dataset_t *dataset)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_domain_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 *domain)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_domain_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 domain)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_clock_info_t *clock_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_local_priority_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint8 *local_priority)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_local_priority_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint8 local_priority)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_parent_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_parent_dataset_t *dataset)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_announce_receipt_timeout_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    uint32 *timeout)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_announce_receipt_timeout_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    uint32 timeout)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_configure(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_ptp_clock_port_info_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_ptp_port_dataset_t *dataset)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_delay_mechanism_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    uint32 *delay_mechanism)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_delay_mechanism_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    uint32 delay_mechanism)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_disable(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_enable(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_identity_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_ptp_port_identity_t *identity)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_info_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_ptp_clock_port_info_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_latency_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    uint32 latency_in, 
    uint32 latency_out)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_announce_interval_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int *interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_announce_interval_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_min_delay_req_interval_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int *interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_min_delay_req_interval_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_min_pdelay_req_interval_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int *interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_min_pdelay_req_interval_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_sync_interval_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int *interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_log_sync_interval_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    int interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_mac_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_protocol_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_ptp_protocol_t *protocol)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_type_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    bcm_ptp_port_type_t *type)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_port_version_number_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 clock_port, 
    uint32 *version)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_priority1_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 *priority1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_priority1_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 priority1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_priority2_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 *priority2)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_priority2_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 priority2)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_quality_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_clock_quality_t *clock_quality, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_quality_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_clock_quality_t clock_quality, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_slaveonly_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 *slaveonly)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_slaveonly_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint32 slaveonly)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_time_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_timestamp_t *time)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_time_properties_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_time_properties_t *data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_time_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_timestamp_t *time)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_timescale_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_timescale_t *timescale)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_timescale_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_timescale_t *timescale)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_traceability_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_trace_t *trace)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_traceability_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_trace_t *trace)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_user_description_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint8 *desc)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_utc_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_utc_t *utc)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_clock_utc_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_utc_t *utc)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_alarm_callback_register(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_ctdev_alarm_cb alarm_cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_alarm_callback_unregister(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_alpha_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint16 *alpha_numerator, 
    uint16 *alpha_denominator)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_alpha_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint16 alpha_numerator, 
    uint16 alpha_denominator)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_enable_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *enable, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_enable_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int enable, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_verbose_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *verbose)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_ctdev_verbose_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int verbose)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_foreign_master_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_foreign_master_dataset_t *data_set)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_g8275p1_traceability_info_clock_class_map(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_g8275p1_clock_traceability_info_t traceability_info, 
    uint8 *clock_class)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_input_channel_precedence_mode_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int channel_select_mode)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_input_channel_switching_mode_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int channel_switching_mode)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_input_channels_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *num_channels, 
    bcm_ptp_channel_t *channels)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_input_channels_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int num_channels, 
    bcm_ptp_channel_t *channels)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_enable_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *enable, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_enable_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int enable, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_phyts_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *phyts, 
    int *framesync_pin)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_phyts_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int phyts, 
    int framesync_pin)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_portbitmap_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_portbitmap_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_verbose_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *verbose)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_modular_verbose_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int verbose)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_packet_counters_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_packet_counters_t *counters)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_peer_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int max_num_peers, 
    bcm_ptp_peer_entry_t *peers, 
    int *num_peers)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_phase_offset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_phase_offset_t *offset)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_phase_offset_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    const bcm_ptp_phase_offset_t *offset)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_primary_domain_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *primary_domain)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_primary_domain_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int primary_domain)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_servo_configuration_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_servo_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_servo_configuration_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_servo_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_servo_status_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_servo_status_t *status)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_servo_threshold_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_servo_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_servo_threshold_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_servo_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signal_output_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *signal_output_count, 
    bcm_ptp_signal_output_t *signal_output_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signal_output_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int signal_output_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signal_output_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *signal_output_id, 
    bcm_ptp_signal_output_t *output_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signaled_unicast_master_add(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_unicast_master_t *master_info, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signaled_unicast_master_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_peer_address_t *master_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signaled_unicast_slave_list(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int max_num_slaves, 
    int *num_slaves, 
    bcm_ptp_clock_peer_t *slave_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signaled_unicast_slave_table_clear(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int callstack)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signaling_arbiter_register(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_signaling_arbiter_t arb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_signaling_arbiter_unregister(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_stack_create(
    int unit, 
    bcm_ptp_stack_info_t *ptp_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_stack_destroy(
    int unit, 
    bcm_ptp_stack_id_t ptp_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_stack_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    bcm_ptp_stack_info_t *ptp_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_stack_get_all(
    int unit, 
    int max_size, 
    bcm_ptp_stack_info_t *ptp_info, 
    int *no_of_stacks)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_master_add(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_unicast_master_t *master_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_master_list(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int max_num_masters, 
    int *num_masters, 
    bcm_ptp_clock_peer_address_t *master_addr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_master_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_peer_address_t *master_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_master_table_clear(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_master_table_size_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int *max_table_entries)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_slave_add(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_peer_t *slave_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_slave_list(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    int max_num_slaves, 
    int *num_slaves, 
    bcm_ptp_clock_peer_t *slave_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_slave_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_peer_t *slave_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_static_unicast_slave_table_clear(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_sync_phy(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_sync_phy_input_t sync_input)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_init(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_network_option_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_telecom_g8265_network_option_t *network_option)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_network_option_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_telecom_g8265_network_option_t network_option)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_add(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_best_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_telecom_g8265_pktmaster_t *pktmaster)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_clock_port_address_t *address, 
    bcm_ptp_telecom_g8265_pktmaster_t *pktmaster)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_list(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int max_master_count, 
    int *num_masters, 
    int *best_master, 
    bcm_ptp_telecom_g8265_pktmaster_t *pktmaster)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_lockout_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint8 lockout, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_non_reversion_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint8 nonres, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_priority_override(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint8 override, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_priority_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint16 priority, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_packet_master_wait_duration_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint64 wait_sec, 
    bcm_ptp_clock_port_address_t *address)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_pktstats_thresholds_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_telecom_g8265_pktstats_t *thresholds)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_pktstats_thresholds_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_telecom_g8265_pktstats_t thresholds)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_quality_level_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_telecom_g8265_quality_level_t ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_receipt_timeout_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_message_type_t message_type, 
    uint32 *receipt_timeout)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_receipt_timeout_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_message_type_t message_type, 
    uint32 receipt_timeout)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_telecom_g8265_shutdown(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_time_format_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    bcm_ptp_time_type_t type)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_timesource_input_status_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_timesource_status_t *status)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_tod_input_sources_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *num_tod_sources, 
    bcm_ptp_tod_input_t *tod_sources)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_tod_input_sources_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int num_tod_sources, 
    bcm_ptp_tod_input_t *tod_sources)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_tod_output_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *tod_output_count, 
    bcm_ptp_tod_output_t *tod_output)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_tod_output_remove(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int tod_output_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_tod_output_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int *tod_output_id, 
    bcm_ptp_tod_output_t *output_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_transparent_clock_default_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    bcm_ptp_transparent_clock_default_dataset_t *data_set)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_transparent_clock_port_dataset_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    uint16 clock_port, 
    bcm_ptp_transparent_clock_port_dataset_t *data_set)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_unicast_request_duration_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint32 *duration)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_unicast_request_duration_max_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint32 *duration_max)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_unicast_request_duration_max_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint32 duration_max)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_unicast_request_duration_min_get(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint32 *duration_min)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_unicast_request_duration_min_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint32 duration_min)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_ptp_unicast_request_duration_set(
    int unit, 
    bcm_ptp_stack_id_t ptp_id, 
    int clock_num, 
    int port_num, 
    uint32 duration)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_qos_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_map_add(
    int unit, 
    uint32 flags, 
    bcm_qos_map_t *map, 
    int map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_map_create(
    int unit, 
    uint32 flags, 
    int *map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_map_delete(
    int unit, 
    uint32 flags, 
    bcm_qos_map_t *map, 
    int map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_map_destroy(
    int unit, 
    int map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_map_multi_get(
    int unit, 
    uint32 flags, 
    int map_id, 
    int array_size, 
    bcm_qos_map_t *array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_multi_get(
    int unit, 
    int array_size, 
    int *map_ids_array, 
    int *flags_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_port_map_get(
    int unit, 
    bcm_gport_t port, 
    int *ing_map, 
    int *egr_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_port_map_set(
    int unit, 
    bcm_gport_t port, 
    int ing_map, 
    int egr_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_port_map_type_get(
    int unit, 
    bcm_gport_t port, 
    uint32 flags, 
    int *map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_port_vlan_map_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vid, 
    int *ing_map, 
    int *egr_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_qos_port_vlan_map_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_t vid, 
    int ing_map, 
    int egr_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_range_create(
    int unit, 
    int flags, 
    bcm_range_config_t *range_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_range_destroy(
    int unit, 
    bcm_range_t rid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_range_get(
    int unit, 
    bcm_range_config_t *range_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_range_oper_mode_get(
    int unit, 
    bcm_range_oper_mode_t *oper_mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_range_oper_mode_set(
    int unit, 
    bcm_range_oper_mode_t oper_mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_range_traverse(
    int unit, 
    bcm_range_traverse_cb callback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_bandwidth_get(
    int unit, 
    bcm_port_t port, 
    int flags, 
    uint32 *kbits_sec, 
    uint32 *kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_bandwidth_set(
    int unit, 
    bcm_port_t port, 
    int flags, 
    uint32 kbits_sec, 
    uint32 kbits_burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_bcast_get(
    int unit, 
    int *pps, 
    int *flags, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_bcast_set(
    int unit, 
    int pps, 
    int flags, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_dlfbc_get(
    int unit, 
    int *pps, 
    int *flags, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_dlfbc_set(
    int unit, 
    int pps, 
    int flags, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_get(
    int unit, 
    int *pps, 
    int *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_mcast_get(
    int unit, 
    int *pps, 
    int *flags, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_mcast_set(
    int unit, 
    int pps, 
    int flags, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_packet_get(
    int unit, 
    bcm_port_t port, 
    bcm_rate_packet_t *pkt_rate)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_packet_set(
    int unit, 
    bcm_port_t port, 
    bcm_rate_packet_t *pkt_rate)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_set(
    int unit, 
    int pps, 
    int flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_type_get(
    int unit, 
    bcm_rate_limit_t *rl)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rate_type_set(
    int unit, 
    bcm_rate_limit_t *rl)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_config_get(
    int unit, 
    bcm_regex_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_config_set(
    int unit, 
    bcm_regex_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_engine_create(
    int unit, 
    bcm_regex_engine_config_t *config, 
    bcm_regex_engine_t *engid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_engine_destroy(
    int unit, 
    bcm_regex_engine_t engid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_engine_get(
    int unit, 
    bcm_regex_engine_t engid, 
    bcm_regex_engine_config_t *config)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_engine_info_get(
    int unit, 
    int engine_id, 
    bcm_regex_engine_info_t *regex_engine_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_engine_traverse(
    int unit, 
    bcm_regex_engine_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_exclude_add(
    int unit, 
    uint8 protocol, 
    uint16 l4_start, 
    uint16 l4_end)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_exclude_delete(
    int unit, 
    uint8 protocol, 
    uint16 l4_start, 
    uint16 l4_end)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_exclude_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_exclude_get(
    int unit, 
    int array_size, 
    uint8 *protocol, 
    uint16 *l4low, 
    uint16 *l4high, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_get_match_id(
    int unit, 
    int signature_id, 
    int *match_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_get_sig_id(
    int unit, 
    int match_id, 
    int *signature_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_info_get(
    int unit, 
    bcm_regex_info_t *regex_info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_match_check(
    int unit, 
    bcm_regex_match_t *matches, 
    int count, 
    int *metric)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_match_set(
    int unit, 
    bcm_regex_engine_t engid, 
    bcm_regex_match_t *matches, 
    int count)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_add(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    uint32 param0, 
    uint32 param1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_delete(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    uint32 param0, 
    uint32 param1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_get(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    uint32 *param0, 
    uint32 *param1)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_mac_add(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_mac_get(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_ports_add(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_ports_get(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_remove(
    int unit, 
    bcm_regex_policy_t policy, 
    bcm_field_action_t action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_action_remove_all(
    int unit, 
    bcm_regex_policy_t policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_create(
    int unit, 
    int flags, 
    bcm_regex_policy_t *policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_destroy(
    int unit, 
    bcm_regex_policy_t policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_install(
    int unit, 
    bcm_regex_policy_t policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_policer_attach(
    int unit, 
    bcm_regex_policy_t policy, 
    int level, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_policer_detach(
    int unit, 
    bcm_regex_policy_t policy, 
    int level)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_policer_detach_all(
    int unit, 
    bcm_regex_policy_t policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_policer_get(
    int unit, 
    bcm_regex_policy_t policy, 
    int level, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_remove(
    int unit, 
    bcm_regex_policy_t policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_stat_attach(
    int unit, 
    bcm_regex_policy_t policy, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_stat_detach(
    int unit, 
    bcm_regex_policy_t policy, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_policy_stat_get(
    int unit, 
    bcm_regex_policy_t policy, 
    int *stat_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_report_register(
    int unit, 
    uint32 reports, 
    bcm_regex_report_cb callback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_report_unregister(
    int unit, 
    uint32 reports, 
    bcm_regex_report_cb callback, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_session_add(
    int unit, 
    int flags, 
    bcm_regex_session_key_t *key, 
    bcm_regex_session_t *session)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_session_delete(
    int unit, 
    bcm_regex_session_key_t *key)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_session_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_session_get(
    int unit, 
    int flags, 
    bcm_regex_session_key_t *key, 
    bcm_regex_session_t *session)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_session_policy_update(
    int unit, 
    int flags, 
    int flow_index, 
    bcm_regex_policy_t policy)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_session_traverse(
    int unit, 
    int flags, 
    bcm_regex_session_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_stat_create(
    int unit, 
    int flags, 
    int nstat, 
    bcm_field_stat_t *stat_arr, 
    int *stat_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_stat_destroy(
    int unit, 
    int stat_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_stat_get(
    int unit, 
    bcm_regex_stat_t type, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_REGEX)
int 
bcm_dfe_regex_stat_set(
    int unit, 
    bcm_regex_stat_t type, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_rx_CopyToCpu_config_add(
    int unit, 
    uint32 options, 
    bcm_rx_CopyToCpu_config_t *copyToCpu_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_CopyToCpu_config_delete(
    int unit, 
    int index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_CopyToCpu_config_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_CopyToCpu_config_get(
    int unit, 
    int index, 
    bcm_rx_CopyToCpu_config_t *copyToCpu_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_CopyToCpu_config_get_all(
    int unit, 
    int entries_max, 
    bcm_rx_CopyToCpu_config_t *copyToCpu_config, 
    int *entries_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_active(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_alloc(
    int unit, 
    int pkt_size, 
    uint32 flags, 
    void **buf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_burst_get(
    int unit, 
    int *burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_burst_set(
    int unit, 
    int burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cfg_get(
    int unit, 
    bcm_rx_cfg_t *cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cfg_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_channels_running(
    int unit, 
    uint32 *channels)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_clear(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_control_get(
    int unit, 
    bcm_rx_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_control_set(
    int unit, 
    bcm_rx_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cos_burst_get(
    int unit, 
    int cos, 
    int *burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cos_burst_set(
    int unit, 
    int cos, 
    int burst)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cos_max_len_get(
    int unit, 
    int cos, 
    int *max_q_len)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cos_max_len_set(
    int unit, 
    int cos, 
    int max_q_len)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cos_rate_get(
    int unit, 
    int cos, 
    int *pps)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cos_rate_set(
    int unit, 
    int cos, 
    int pps)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_delete(
    int unit, 
    int index)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_extended_get(
    int unit, 
    bcm_rx_cosq_mapping_t *rx_cosq_mapping)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_extended_set(
    int unit, 
    uint32 options, 
    bcm_rx_cosq_mapping_t *rx_cosq_mapping)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_get(
    int unit, 
    int index, 
    bcm_rx_reasons_t *reasons, 
    bcm_rx_reasons_t *reasons_mask, 
    uint8 *int_prio, 
    uint8 *int_prio_mask, 
    uint32 *packet_type, 
    uint32 *packet_type_mask, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_reasons_get(
    int unit, 
    bcm_rx_reasons_t *reasons)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_set(
    int unit, 
    int index, 
    bcm_rx_reasons_t reasons, 
    bcm_rx_reasons_t reasons_mask, 
    uint8 int_prio, 
    uint8 int_prio_mask, 
    uint32 packet_type, 
    uint32 packet_type_mask, 
    bcm_cos_queue_t cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cosq_mapping_size_get(
    int unit, 
    int *size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cpu_rate_get(
    int unit, 
    int *pps)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_cpu_rate_set(
    int unit, 
    int pps)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_free(
    int unit, 
    void *pkt_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_free_enqueue(
    int unit, 
    void *pkt_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_mtu_get(
    int unit, 
    bcm_rx_mtu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_mtu_set(
    int unit, 
    bcm_rx_mtu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_channel_get(
    int unit, 
    bcm_cos_queue_t queue_id, 
    bcm_rx_chan_t *chan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_channel_set(
    int unit, 
    bcm_cos_queue_t queue_id, 
    bcm_rx_chan_t chan_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_max_get(
    int unit, 
    bcm_cos_queue_t *cosq)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_packet_count_get(
    int unit, 
    bcm_cos_queue_t cosq, 
    int *packet_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_rate_limit_status_get(
    int unit, 
    bcm_cos_queue_t cosq, 
    int *packet_tokens)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_register(
    int unit, 
    const char *name, 
    bcm_cos_queue_t cosq, 
    bcm_rx_cb_f callback, 
    uint8 priority, 
    void *cookie, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_queue_unregister(
    int unit, 
    bcm_cos_queue_t cosq, 
    bcm_rx_cb_f callback, 
    uint8 priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_rate_get(
    int unit, 
    int *pps)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_rate_set(
    int unit, 
    int pps)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_reasons_get(
    int unit, 
    bcm_rx_reasons_t *reasons)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_reasons_policer_set(
    int unit, 
    bcm_rx_reasons_t rx_reasons, 
    bcm_policer_t polid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_redirect_reasons_get(
    int unit, 
    bcm_rx_redirect_t mode, 
    bcm_rx_reasons_t *reasons)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_redirect_reasons_set(
    int unit, 
    bcm_rx_redirect_t mode, 
    bcm_rx_reasons_t reasons)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_remote_pkt_enqueue(
    int unit, 
    bcm_pkt_t *pkt)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_sched_register(
    int unit, 
    bcm_rx_sched_cb sched_cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_sched_unregister(
    int unit)
{
    return BCM_E_UNAVAIL;
}

#if defined(BROADCOM_DEBUG)
int 
bcm_dfe_rx_show(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_rx_snoop_create(
    int unit, 
    int flags, 
    int *snoop_cmnd)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_snoop_destroy(
    int unit, 
    int flags, 
    int snoop_cmnd)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_snoop_get(
    int unit, 
    int snoop_cmnd, 
    bcm_rx_snoop_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_snoop_set(
    int unit, 
    int snoop_cmnd, 
    bcm_rx_snoop_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_get(
    int unit, 
    int trap_id, 
    bcm_rx_trap_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_set(
    int unit, 
    int trap_id, 
    bcm_rx_trap_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_sw_to_hw_id_map_get(
    int unit, 
    uint32 flags, 
    int sw_trap_id, 
    int *hw_trap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_type_create(
    int unit, 
    int flags, 
    bcm_rx_trap_t type, 
    int *trap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_type_destroy(
    int unit, 
    int trap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_type_from_id_get(
    int unit, 
    int flags, 
    int trap_id, 
    bcm_rx_trap_t *trap_type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_trap_type_get(
    int unit, 
    int flags, 
    bcm_rx_trap_t type, 
    int *trap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_rx_unit_next_get(
    int unit, 
    int *next_unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_config_get(
    int unit, 
    bcm_sat_config_t *conf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_config_set(
    int unit, 
    bcm_sat_config_t *conf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_availability_config_set(
    int unit, 
    bcm_sat_ctf_t ctf_id, 
    bcm_sat_ctf_availability_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_bin_limit_get(
    int unit, 
    int max_bins_count, 
    bcm_sat_ctf_bin_limit_t *bins, 
    int *bins_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_bin_limit_set(
    int unit, 
    int bins_count, 
    bcm_sat_ctf_bin_limit_t *bins)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_create(
    int unit, 
    uint32 flags, 
    bcm_sat_ctf_t *ctf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_destroy(
    int unit, 
    bcm_sat_ctf_t ctf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_identifier_map(
    int unit, 
    bcm_sat_ctf_identifier_t *identifier, 
    bcm_sat_ctf_t ctf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_identifier_unmap(
    int unit, 
    bcm_sat_ctf_identifier_t *identifier)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_packet_config(
    int unit, 
    bcm_sat_ctf_t ctf_id, 
    bcm_sat_ctf_packet_info_t *packet_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_reports_config_set(
    int unit, 
    bcm_sat_ctf_t ctf_id, 
    bcm_sat_ctf_report_config_t *reports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_stat_config_set(
    int unit, 
    bcm_sat_ctf_t ctf_id, 
    bcm_sat_ctf_stat_config_t *stat)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_stat_get(
    int unit, 
    bcm_sat_ctf_t ctf_id, 
    uint32 flags, 
    bcm_sat_ctf_stat_t *stat)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_trap_add(
    int unit, 
    uint32 trap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_trap_data_to_session_map(
    int unit, 
    uint32 trap_data, 
    uint32 trap_data_mask, 
    uint32 session_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_trap_data_to_session_unmap(
    int unit, 
    uint32 trap_data, 
    uint32 trap_data_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_trap_remove(
    int unit, 
    uint32 trap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_trap_remove_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_ctf_traverse(
    int unit, 
    bcm_sat_ctf_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_endpoint_create(
    int unit, 
    bcm_sat_endpoint_info_t *endpoint_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_endpoint_destroy(
    int unit, 
    bcm_sat_endpoint_t endpoint, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_endpoint_destroy_all(
    int unit, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_endpoint_get(
    int unit, 
    bcm_sat_endpoint_t endpoint, 
    uint32 flags, 
    bcm_sat_endpoint_info_t *endpoint_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_endpoint_traverse(
    int unit, 
    uint32 flags, 
    bcm_sat_endpoint_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_event_register(
    int unit, 
    bcm_sat_event_type_t event_type, 
    bcm_sat_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_event_unregister(
    int unit, 
    bcm_sat_event_type_t event_type, 
    bcm_sat_event_cb cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_bandwidth_get(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    int priority, 
    bcm_sat_gtf_bandwidth_t *bw)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_bandwidth_set(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    int priority, 
    bcm_sat_gtf_bandwidth_t *bw)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_create(
    int unit, 
    uint32 flags, 
    bcm_sat_gtf_t *gtf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_destroy(
    int unit, 
    bcm_sat_gtf_t gtf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_packet_config(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    bcm_sat_gtf_packet_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_packet_start(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    bcm_sat_gtf_pri_t priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_packet_stop(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    bcm_sat_gtf_pri_t priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_rate_pattern_get(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    int priority, 
    bcm_sat_gtf_rate_pattern_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_rate_pattern_set(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    int priority, 
    bcm_sat_gtf_rate_pattern_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_stat_get(
    int unit, 
    bcm_sat_gtf_t gtf_id, 
    int priority, 
    uint32 flags, 
    bcm_sat_gtf_stat_counter_t type, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_sat_gtf_traverse(
    int unit, 
    bcm_sat_gtf_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_clear_single(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_config_get(
    int unit, 
    bcm_stat_counter_engine_t *engine, 
    bcm_stat_counter_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_config_set(
    int unit, 
    bcm_stat_counter_engine_t *engine, 
    bcm_stat_counter_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_filter_get(
    int unit, 
    bcm_stat_counter_source_t source, 
    int filter_max_count, 
    bcm_stat_counter_filter_t *filter_array, 
    int *filter_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_filter_is_active_get(
    int unit, 
    bcm_stat_counter_source_t source, 
    bcm_stat_counter_filter_t filter, 
    int *is_active)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_filter_set(
    int unit, 
    bcm_stat_counter_source_t source, 
    bcm_stat_counter_filter_t *filter_array, 
    int filter_count, 
    int is_active)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_get(
    int unit, 
    uint32 flags, 
    bcm_stat_counter_input_data_t *stat_counter_input_data, 
    bcm_stat_counter_output_data_t *stat_counter_output_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_lif_counting_get(
    int unit, 
    uint32 flags, 
    bcm_stat_counter_source_t *source, 
    bcm_stat_counter_lif_mask_t *counting_mask, 
    bcm_stat_counter_lif_stack_id_t *lif_stack_id_to_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_lif_counting_range_get(
    int unit, 
    uint32 flags, 
    bcm_stat_counter_source_type_t source, 
    bcm_stat_counter_lif_range_id_t range_id, 
    bcm_stat_counter_lif_counting_range_t *lif_range)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_lif_counting_range_set(
    int unit, 
    uint32 flags, 
    bcm_stat_counter_source_type_t source, 
    bcm_stat_counter_lif_range_id_t range_id, 
    bcm_stat_counter_lif_counting_range_t *lif_range)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_counter_lif_counting_set(
    int unit, 
    uint32 flags, 
    bcm_stat_counter_source_t *source, 
    bcm_stat_counter_lif_mask_t *counting_mask, 
    bcm_stat_counter_lif_stack_id_t lif_stack_id_to_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_add(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    bcm_custom_stat_trigger_t trigger)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_check(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    bcm_custom_stat_trigger_t trigger, 
    int *result)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_delete(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    bcm_custom_stat_trigger_t trigger)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_delete_all(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_get(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_group_create(
    int unit, 
    uint32 mode_id, 
    bcm_stat_object_t object, 
    uint32 *stat_counter_id, 
    uint32 *num_entries)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_custom_set(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_egress_receive_tm_pointer_format_get(
    int unit, 
    int flags, 
    bcm_stat_egress_receive_tm_pointer_format_t *pointer_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_egress_receive_tm_pointer_format_set(
    int unit, 
    int flags, 
    bcm_stat_egress_receive_tm_pointer_format_t *pointer_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_flex_counter_get(
    int unit, 
    uint32 stat_counter_id, 
    bcm_stat_flex_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_flex_counter_set(
    int unit, 
    uint32 stat_counter_id, 
    bcm_stat_flex_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_flex_counter_sync_get(
    int unit, 
    uint32 stat_counter_id, 
    bcm_stat_flex_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_flex_pool_info_multi_get(
    int unit, 
    bcm_stat_flex_direction_t direction, 
    uint32 num_pools, 
    bcm_stat_flex_pool_stat_info_t *flex_pool_stat, 
    uint32 *actual_num_pools)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_create(
    int unit, 
    bcm_stat_object_t object, 
    bcm_stat_group_mode_t group_mode, 
    uint32 *stat_counter_id, 
    uint32 *num_entries)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_destroy(
    int unit, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_dump(
    int unit, 
    bcm_stat_object_t object, 
    bcm_stat_group_mode_t group_mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_dump_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_mode_id_config_create(
    int unit, 
    uint32 options, 
    bcm_stat_group_mode_id_config_t *stat_config, 
    uint32 num_selectors, 
    bcm_stat_group_mode_attr_selector_t *attr_sel, 
    uint32 *mode_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_mode_id_config_get(
    int unit, 
    uint32 mode_id, 
    bcm_stat_group_mode_id_config_t *config, 
    uint32 num_selectors, 
    bcm_stat_group_mode_attr_selector_t *attr_sel, 
    uint32 *actual_num_selectors)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_mode_id_create(
    int unit, 
    uint32 flags, 
    uint32 total_counters, 
    uint32 num_selectors, 
    bcm_stat_group_mode_attr_selector_t *attr_selectors, 
    uint32 *mode_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_mode_id_destroy(
    int unit, 
    uint32 mode_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_group_mode_id_get(
    int unit, 
    uint32 mode_id, 
    uint32 *flags, 
    uint32 *total_counters, 
    uint32 num_selectors, 
    bcm_stat_group_mode_attr_selector_t *attr_selectors, 
    uint32 *actual_num_selectors)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_id_get_all(
    int unit, 
    bcm_stat_object_t object, 
    int stat_max, 
    uint32 *stat_array, 
    int *stat_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_lif_counting_profile_get(
    int unit, 
    uint32 flags, 
    int lif_counting_profile, 
    bcm_stat_lif_counting_t *lif_counting)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_lif_counting_profile_set(
    int unit, 
    uint32 flags, 
    int lif_counting_profile, 
    bcm_stat_lif_counting_t *lif_counting)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_lif_counting_stack_level_priority_get(
    int unit, 
    uint32 flags, 
    bcm_stat_lif_counting_source_t *source, 
    bcm_stat_counter_lif_stack_id_t lif_stack_level, 
    int *priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_lif_counting_stack_level_priority_set(
    int unit, 
    uint32 flags, 
    bcm_stat_lif_counting_source_t *source, 
    bcm_stat_counter_lif_stack_id_t lif_stack_level, 
    int priority)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_sync_get(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    uint64 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_sync_get32(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t type, 
    uint32 *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_sync_multi_get(
    int unit, 
    bcm_port_t port, 
    int nstat, 
    bcm_stat_val_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_sync_multi_get32(
    int unit, 
    bcm_port_t port, 
    int nstat, 
    bcm_stat_val_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_threshold_get(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t stat, 
    bcm_stat_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stat_threshold_set(
    int unit, 
    bcm_port_t port, 
    bcm_stat_val_t stat, 
    bcm_stat_threshold_t *threshold)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_clear(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_count_get(
    int unit, 
    int *max_stg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_create(
    int unit, 
    bcm_stg_t *stg_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_create_id(
    int unit, 
    bcm_stg_t stg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_default_get(
    int unit, 
    bcm_stg_t *stg_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_default_set(
    int unit, 
    bcm_stg_t stg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_destroy(
    int unit, 
    bcm_stg_t stg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_list(
    int unit, 
    bcm_stg_t **list, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_list_destroy(
    int unit, 
    bcm_stg_t *list, 
    int count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_stp_get(
    int unit, 
    bcm_stg_t stg, 
    bcm_port_t port, 
    int *stp_state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_stp_set(
    int unit, 
    bcm_stg_t stg, 
    bcm_port_t port, 
    int stp_state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_vlan_add(
    int unit, 
    bcm_stg_t stg, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_vlan_list(
    int unit, 
    bcm_stg_t stg, 
    bcm_vlan_t **list, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_vlan_list_destroy(
    int unit, 
    bcm_vlan_t *list, 
    int count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_vlan_remove(
    int unit, 
    bcm_stg_t stg, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stg_vlan_remove_all(
    int unit, 
    bcm_stg_t stg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_domain_stk_trunk_add(
    int unit, 
    int tm_domain, 
    bcm_trunk_t stk_trunk)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_domain_stk_trunk_delete(
    int unit, 
    int tm_domain, 
    bcm_trunk_t stk_trunk)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_domain_stk_trunk_get(
    int unit, 
    bcm_trunk_t stk_trunk, 
    int domain_max, 
    int *domain_array, 
    int *domain_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_fabric_map_get(
    int unit, 
    bcm_gport_t switch_port, 
    bcm_gport_t *fabric_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_fabric_map_set(
    int unit, 
    bcm_gport_t switch_port, 
    bcm_gport_t fabric_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_fmod_lmod_mapping_get(
    int unit, 
    bcm_port_t port, 
    bcm_module_t *fmod, 
    bcm_module_t *lmod)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_fmod_lmod_mapping_set(
    int unit, 
    bcm_port_t port, 
    bcm_module_t fmod, 
    bcm_module_t lmod)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_fmod_smod_mapping_get(
    int unit, 
    bcm_port_t port, 
    bcm_module_t fmod, 
    bcm_module_t *smod, 
    bcm_port_t *sport, 
    uint32 *nports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_fmod_smod_mapping_set(
    int unit, 
    bcm_port_t port, 
    bcm_module_t fmod, 
    bcm_module_t smod, 
    bcm_port_t sport, 
    uint32 nports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_gport_sysport_get(
    int unit, 
    bcm_gport_t gport, 
    bcm_gport_t *sysport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_mode_get(
    int unit, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_mode_set(
    int unit, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_config_add(
    int unit, 
    bcm_stk_modid_config_t *modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_config_delete(
    int unit, 
    bcm_stk_modid_config_t *modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_config_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_config_get(
    int unit, 
    bcm_stk_modid_config_t *modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_config_get_all(
    int unit, 
    int modid_max, 
    bcm_stk_modid_config_t *modid_array, 
    int *modid_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_config_set(
    int unit, 
    bcm_stk_modid_config_t *modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_count(
    int unit, 
    int *num_modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_domain_add(
    int unit, 
    int modid, 
    int tm_domain)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_domain_delete(
    int unit, 
    int modid, 
    int tm_domain)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modid_domain_get(
    int unit, 
    int tm_domain, 
    int mod_max, 
    int *mod_array, 
    int *mod_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modmap_enable_get(
    int unit, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modmap_enable_set(
    int unit, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modmap_map(
    int unit, 
    int setget, 
    bcm_module_t mod_in, 
    bcm_port_t port_in, 
    bcm_module_t *mod_out, 
    bcm_port_t *port_out)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modmap_register(
    int unit, 
    bcm_stk_modmap_cb_t func)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modmap_unregister(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_add(
    int unit, 
    int modid, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_clear(
    int unit, 
    int modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_clear_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_delete(
    int unit, 
    int modid, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_get(
    int unit, 
    int modid, 
    int *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_get_all(
    int unit, 
    int modid, 
    int port_max, 
    int *port_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_remote_map_get(
    int unit, 
    bcm_gport_t port, 
    uint32 flags, 
    int *remote_modid, 
    bcm_port_t *remote_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_remote_map_set(
    int unit, 
    bcm_gport_t port, 
    uint32 flags, 
    int remote_modid, 
    bcm_port_t remote_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_modport_set(
    int unit, 
    int modid, 
    int port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_module_protocol_get(
    int unit, 
    bcm_module_t modid, 
    bcm_module_protocol_t *protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_module_protocol_set(
    int unit, 
    bcm_module_t modid, 
    bcm_module_protocol_t protocol)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_pbmp_get(
    int unit, 
    bcm_pbmp_t *cur_pbm, 
    bcm_pbmp_t *inactive_pbm)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_get(
    int unit, 
    bcm_port_t port, 
    uint32 *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modmap_group_get(
    int unit, 
    bcm_port_t port, 
    int *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modmap_group_max_get(
    int unit, 
    int *max_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modmap_group_set(
    int unit, 
    bcm_port_t port, 
    int group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_add(
    int unit, 
    bcm_port_t ing_port, 
    bcm_module_t dest_modid, 
    bcm_port_t dest_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_clear(
    int unit, 
    bcm_port_t ing_port, 
    bcm_module_t dest_modid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_clear_all(
    int unit, 
    bcm_port_t ing_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_delete(
    int unit, 
    bcm_port_t ing_port, 
    bcm_module_t dest_modid, 
    bcm_port_t dest_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_get(
    int unit, 
    bcm_port_t ing_port, 
    bcm_module_t dest_modid, 
    bcm_port_t *dest_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_get_all(
    int unit, 
    bcm_port_t ing_port, 
    bcm_module_t dest_modid, 
    int dest_port_max, 
    bcm_port_t *dest_port_array, 
    int *dest_port_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_modport_set(
    int unit, 
    bcm_port_t ing_port, 
    bcm_module_t dest_modid, 
    bcm_port_t dest_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_port_set(
    int unit, 
    bcm_port_t port, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_steering_clear(
    int unit, 
    int steer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_steering_clear_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_steering_multicast_set(
    int unit, 
    int steer_id, 
    bcm_multicast_t mgid_lo, 
    bcm_multicast_t mgid_hi, 
    int num_queue_groups, 
    bcm_gport_t *queue_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_steering_unicast_set(
    int unit, 
    int steer_id, 
    bcm_module_t destmod_lo, 
    bcm_module_t destmod_hi, 
    int num_queue_groups, 
    bcm_gport_t *queue_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_sysport_gport_get(
    int unit, 
    bcm_gport_t sysport, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_sysport_gport_set(
    int unit, 
    bcm_gport_t sysport, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_system_gport_map_create(
    int unit, 
    bcm_stk_system_gport_map_t *sys_gport_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_system_gport_map_destroy(
    int unit, 
    bcm_gport_t system_gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_system_gport_map_get(
    int unit, 
    bcm_stk_system_gport_map_t *sys_gport_map)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_ucbitmap_del(
    int unit, 
    bcm_port_t port, 
    int modid, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_ucbitmap_get(
    int unit, 
    int port, 
    int modid, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_ucbitmap_set(
    int unit, 
    int port, 
    int modid, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_update_callback_register(
    int unit, 
    bcm_stk_cb_f cb, 
    void *cookie)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_stk_update_callback_unregister(
    int unit, 
    bcm_stk_cb_f cb, 
    void *cookie)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_gport_modport_get(
    int unit, 
    bcm_gport_t subport_gport, 
    bcm_module_t *module, 
    bcm_port_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_group_create(
    int unit, 
    bcm_subport_group_config_t *config, 
    bcm_gport_t *group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_group_destroy(
    int unit, 
    bcm_gport_t group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_group_get(
    int unit, 
    bcm_gport_t group, 
    bcm_subport_group_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_group_linkphy_config_get(
    int unit, 
    bcm_gport_t port, 
    bcm_subport_group_linkphy_config_t *linkphy_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_group_linkphy_config_set(
    int unit, 
    bcm_gport_t port, 
    bcm_subport_group_linkphy_config_t *linkphy_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_group_traverse(
    int unit, 
    bcm_gport_t subport_group, 
    bcm_subport_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_linkphy_rx_error_register(
    int unit, 
    bcm_subport_linkphy_rx_errors_t errors, 
    bcm_subport_linkphy_rx_error_reg_info_t *reg_info, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_linkphy_rx_error_unregister(
    int unit, 
    bcm_subport_linkphy_rx_errors_t errors)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_port_add(
    int unit, 
    bcm_subport_config_t *config, 
    bcm_gport_t *port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_port_delete(
    int unit, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_port_get(
    int unit, 
    bcm_gport_t port, 
    bcm_subport_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_port_stat_get(
    int unit, 
    bcm_gport_t port, 
    int stream_id, 
    bcm_subport_stat_t stat_type, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_port_stat_set(
    int unit, 
    bcm_gport_t port, 
    int stream_id, 
    bcm_subport_stat_t stat_type, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_subport_port_traverse(
    int unit, 
    bcm_subport_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_create(
    int unit, 
    uint32 options, 
    bcm_switch_agm_info_t *agm_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_destroy(
    int unit, 
    bcm_switch_agm_id_t agm_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_enable_get(
    int unit, 
    bcm_switch_agm_id_t agm_id, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_enable_set(
    int unit, 
    bcm_switch_agm_id_t agm_id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_get(
    int unit, 
    bcm_switch_agm_info_t *agm_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_l3_ecmp_attach_get(
    int unit, 
    bcm_switch_agm_id_t agm_id, 
    bcm_if_t *l3_ecmp_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_stat_clear(
    int unit, 
    bcm_switch_agm_id_t agm_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_stat_get(
    int unit, 
    bcm_switch_agm_id_t agm_id, 
    int nstat, 
    bcm_switch_agm_stat_t *stat_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_traverse(
    int unit, 
    int flags, 
    bcm_switch_agm_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_agm_trunk_attach_get(
    int unit, 
    bcm_switch_agm_id_t agm_id, 
    bcm_trunk_t *trunk_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_control_indexed_get(
    int unit, 
    bcm_switch_control_key_t key, 
    bcm_switch_control_info_t *value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_control_indexed_set(
    int unit, 
    bcm_switch_control_key_t key, 
    bcm_switch_control_info_t value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_control_port_get(
    int unit, 
    bcm_port_t port, 
    bcm_switch_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_control_port_set(
    int unit, 
    bcm_port_t port, 
    bcm_switch_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_dram_vendor_info_get(
    int unit, 
    bcm_switch_dram_vendor_info_t *info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_encap_create(
    int unit, 
    bcm_switch_encap_info_t *encap_info, 
    bcm_if_t *encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_encap_destroy(
    int unit, 
    bcm_if_t encap_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_encap_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_encap_get(
    int unit, 
    bcm_if_t encap_id, 
    bcm_switch_encap_info_t *encap_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_encap_set(
    int unit, 
    bcm_if_t encap_id, 
    bcm_switch_encap_info_t *encap_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_encap_traverse(
    int unit, 
    bcm_switch_encap_traverse_cb cb_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_banks_config_get(
    int unit, 
    bcm_switch_hash_table_t hash_table, 
    uint32 bank_num, 
    int *hash_type, 
    uint32 *hash_offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_banks_config_set(
    int unit, 
    bcm_switch_hash_table_t hash_table, 
    uint32 bank_num, 
    int hash_type, 
    uint32 hash_offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_banks_max_get(
    int unit, 
    bcm_switch_hash_table_t hash_table, 
    uint32 *bank_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_create(
    int unit, 
    bcm_field_group_t group, 
    bcm_hash_entry_t *entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_create_qset(
    int unit, 
    bcm_field_qset_t qset, 
    bcm_hash_entry_t *entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_destroy(
    int unit, 
    bcm_hash_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_get(
    int unit, 
    bcm_hash_entry_t entry, 
    bcm_switch_hash_entry_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_install(
    int unit, 
    bcm_hash_entry_t entry, 
    uint32 offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_reinstall(
    int unit, 
    bcm_hash_entry_t entry, 
    uint32 offset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_remove(
    int unit, 
    bcm_hash_entry_t entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_set(
    int unit, 
    bcm_hash_entry_t entry, 
    bcm_switch_hash_entry_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_entry_traverse(
    int unit, 
    int flags, 
    bcm_switch_hash_entry_traverse_cb cb_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_qualify_data(
    int unit, 
    bcm_hash_entry_t entry, 
    int qual_id, 
    uint32 data, 
    uint32 mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_qualify_udf(
    int unit, 
    bcm_hash_entry_t entry, 
    bcm_udf_id_t udf_id, 
    int length, 
    uint8 *data, 
    uint8 *mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_hash_qualify_udf_get(
    int unit, 
    bcm_hash_entry_t entry, 
    bcm_udf_id_t udf_id, 
    int max_length, 
    uint8 *data, 
    uint8 *mask, 
    int *actual_length)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_ipv6_reserved_multicast_addr_get(
    int unit, 
    bcm_ip6_t *ip6_addr, 
    bcm_ip6_t *ip6_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_ipv6_reserved_multicast_addr_set(
    int unit, 
    bcm_ip6_t ip6_addr, 
    bcm_ip6_t ip6_mask)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_l3_protocol_group_get(
    int unit, 
    uint32 *group_members, 
    bcm_l3_protocol_group_id_t *group_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_l3_protocol_group_set(
    int unit, 
    uint32 group_members, 
    bcm_l3_protocol_group_id_t group_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_lif_property_get(
    int unit, 
    bcm_switch_lif_property_t lif_property, 
    bcm_switch_lif_property_config_t *lif_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_lif_property_set(
    int unit, 
    bcm_switch_lif_property_t lif_property, 
    bcm_switch_lif_property_config_t *lif_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_config_add(
    int unit, 
    bcm_switch_match_service_t match_service, 
    bcm_switch_match_config_info_t *config_info, 
    int *match_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_config_delete(
    int unit, 
    bcm_switch_match_service_t match_service, 
    int match_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_config_delete_all(
    int unit, 
    bcm_switch_match_service_t match_service)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_config_get(
    int unit, 
    bcm_switch_match_service_t match_service, 
    int match_id, 
    bcm_switch_match_config_info_t *config_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_config_set(
    int unit, 
    bcm_switch_match_service_t match_service, 
    int match_id, 
    bcm_switch_match_config_info_t *config_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_config_traverse(
    int unit, 
    bcm_switch_match_service_t match_service, 
    bcm_switch_match_config_traverse_cb cb_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_control_get(
    int unit, 
    bcm_switch_match_service_t match_service, 
    bcm_switch_match_control_type_t control_type, 
    bcm_gport_t gport, 
    bcm_switch_match_control_info_t *control_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_control_set(
    int unit, 
    bcm_switch_match_service_t match_service, 
    bcm_switch_match_control_type_t control_type, 
    bcm_gport_t gport, 
    bcm_switch_match_control_info_t *control_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_match_control_traverse(
    int unit, 
    bcm_switch_match_service_t match_service, 
    bcm_switch_match_control_traverse_cb cb_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_network_group_config_get(
    int unit, 
    bcm_switch_network_group_t source_network_group_id, 
    bcm_switch_network_group_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_network_group_config_set(
    int unit, 
    bcm_switch_network_group_t source_network_group_id, 
    bcm_switch_network_group_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_object_count_get(
    int unit, 
    bcm_switch_object_t object, 
    int *entries)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_object_count_multi_get(
    int unit, 
    int object_size, 
    bcm_switch_object_t *object_array, 
    int *entries)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_olp_l2_addr_add(
    int unit, 
    uint32 options, 
    bcm_switch_olp_l2_addr_t *l2_addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_olp_l2_addr_delete(
    int unit, 
    bcm_switch_olp_l2_addr_t *l2_addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_olp_l2_addr_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_olp_l2_addr_get(
    int unit, 
    bcm_switch_olp_l2_addr_t *l2_addr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_olp_l2_addr_traverse(
    int unit, 
    bcm_switch_olp_l2_addr_traverse_cb cb_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_pkt_info_hash_get(
    int unit, 
    bcm_switch_pkt_info_t *pkt_info, 
    bcm_gport_t *dst_gport, 
    bcm_if_t *dst_intf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_pkt_trace_info_get(
    int unit, 
    uint32 options, 
    uint8 port, 
    int len, 
    uint8 *data, 
    bcm_switch_pkt_trace_info_t *pkt_trace_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_rcpu_decap_priority_map_get(
    int unit, 
    int decap_pri, 
    int *internal_cpu_pri)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_rcpu_decap_priority_map_set(
    int unit, 
    int decap_pri, 
    int internal_cpu_pri)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_rcpu_encap_priority_map_get(
    int unit, 
    uint32 flags, 
    int internal_cpu_pri, 
    int *encap_pri)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_rcpu_encap_priority_map_set(
    int unit, 
    uint32 flags, 
    int internal_cpu_pri, 
    int encap_pri)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_service_get(
    int unit, 
    bcm_switch_service_t service, 
    bcm_switch_service_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_service_set(
    int unit, 
    bcm_switch_service_t service, 
    bcm_switch_service_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_stable_register(
    int unit, 
    bcm_switch_read_func_t rf, 
    bcm_switch_write_func_t wf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_thermo_sensor_read(
    int unit, 
    bcm_switch_thermo_sensor_type_t sensor_type, 
    int interface_id, 
    bcm_switch_thermo_sensor_t *sensor_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_tpid_add(
    int unit, 
    uint32 options, 
    bcm_switch_tpid_info_t *tpid_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_tpid_class_get(
    int unit, 
    bcm_switch_tpid_class_t *tpid_class)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_tpid_delete(
    int unit, 
    bcm_switch_tpid_info_t *tpid_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_tpid_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_tpid_get(
    int unit, 
    bcm_switch_tpid_info_t *tpid_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_tpid_get_all(
    int unit, 
    int size, 
    bcm_switch_tpid_info_t *tpid_info_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_user_buffer_read(
    int unit, 
    uint32 flags, 
    bcm_switch_user_buffer_type_t buff_type, 
    uint8 *buf, 
    int offset, 
    int nbytes)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_switch_user_buffer_write(
    int unit, 
    uint32 flags, 
    bcm_switch_user_buffer_type_t buff_type, 
    uint8 *buf, 
    int offset, 
    int nbytes)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_bandwidth_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_tdpll_dpll_bandwidth_t *bandwidth)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_bandwidth_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_tdpll_dpll_bandwidth_t *bandwidth)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_bindings_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_tdpll_dpll_bindings_t *bindings)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_bindings_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_tdpll_dpll_bindings_t *bindings)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_phase_control_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_tdpll_dpll_phase_control_t *phase_control)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_phase_control_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_tdpll_dpll_phase_control_t *phase_control)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_dpll_reference_get(
    int unit, 
    int stack_id, 
    int max_num_dpll, 
    int *dpll_ref, 
    int *num_dpll)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_holdover_ql_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_esmc_quality_level_t *ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_holdover_ql_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_esmc_quality_level_t ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_mac_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_mac_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_ql_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_esmc_quality_level_t *ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_ql_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_esmc_quality_level_t ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_rx_enable_get(
    int unit, 
    int stack_id, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_rx_enable_set(
    int unit, 
    int stack_id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_rx_portbitmap_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_rx_portbitmap_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_rx_state_machine(
    int unit, 
    int stack_id, 
    int ingress_port, 
    bcm_esmc_pdu_data_t *esmc_pdu_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_tx_enable_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_tx_enable_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_tx_portbitmap_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_esmc_tx_portbitmap_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_best_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int *best_clock)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_control(
    int unit, 
    int stack_id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_enable_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_enable_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_frequency_error_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    int *freq_error_ppb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_frequency_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    uint32 *clock_frequency, 
    uint32 *tsevent_frequency)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_frequency_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    uint32 clock_frequency, 
    uint32 tsevent_frequency)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_l1mux_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_input_clock_l1mux_t *l1mux)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_l1mux_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_input_clock_l1mux_t *l1mux)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_lockout_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    int *lockout)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_lockout_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    int lockout)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_mac_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_mac_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_mac_t *mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_monitor_callback_register(
    int unit, 
    int stack_id, 
    bcm_tdpll_input_clock_monitor_cb monitor_cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_monitor_callback_unregister(
    int unit, 
    int stack_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_monitor_interval_get(
    int unit, 
    int stack_id, 
    uint32 *monitor_interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_monitor_interval_set(
    int unit, 
    int stack_id, 
    uint32 monitor_interval)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_monitor_threshold_get(
    int unit, 
    int stack_id, 
    bcm_tdpll_input_clock_monitor_type_t threshold_type, 
    uint32 *threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_monitor_threshold_set(
    int unit, 
    int stack_id, 
    bcm_tdpll_input_clock_monitor_type_t threshold_type, 
    uint32 threshold)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_priority_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    int *priority)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_priority_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    int priority)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_ql_enabled_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int *ql_enabled)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_ql_enabled_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int ql_enabled)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_ql_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_esmc_quality_level_t *ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_ql_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_esmc_quality_level_t ql)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_revertive_get(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int *revertive)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_revertive_set(
    int unit, 
    int stack_id, 
    int dpll_index, 
    int revertive)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_selector_callback_register(
    int unit, 
    int stack_id, 
    bcm_tdpll_input_clock_selector_cb selector_cb)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_selector_callback_unregister(
    int unit, 
    int stack_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_threshold_state_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_input_clock_monitor_type_t threshold_type, 
    int *threshold_state)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_valid_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    int *valid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_input_clock_valid_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    int valid)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_deriv_frequency_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    uint32 *deriv_frequency)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_deriv_frequency_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    uint32 deriv_frequency)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_enable_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_enable_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_holdover_data_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_holdover_data_t *hdata)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_holdover_frequency_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_frequency_correction_t hfreq)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_holdover_mode_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_holdover_mode_t *hmode)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_holdover_mode_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    bcm_tdpll_holdover_mode_t hmode)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_holdover_reset(
    int unit, 
    int stack_id, 
    int clock_index)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_synth_frequency_get(
    int unit, 
    int stack_id, 
    int clock_index, 
    uint32 *synth_frequency, 
    uint32 *tsevent_frequency)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_PTP)
int 
bcm_dfe_tdpll_output_clock_synth_frequency_set(
    int unit, 
    int stack_id, 
    int clock_index, 
    uint32 synth_frequency, 
    uint32 tsevent_frequency)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_time_bs_log_configure_get(
    int unit, 
    bcm_time_bs_log_cfg_t *bs_log_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_bs_log_configure_set(
    int unit, 
    bcm_time_bs_log_cfg_t bs_log_cfg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_capture_get(
    int unit, 
    bcm_time_if_t intf_id, 
    bcm_time_capture_t *time)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_deinit(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_heartbeat_enable_get(
    int unit, 
    bcm_time_if_t id, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_heartbeat_enable_set(
    int unit, 
    bcm_time_if_t id, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_heartbeat_register(
    int unit, 
    bcm_time_if_t id, 
    bcm_time_heartbeat_cb f, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_heartbeat_unregister(
    int unit, 
    bcm_time_if_t id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_interface_add(
    int unit, 
    bcm_time_interface_t *intf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_interface_delete(
    int unit, 
    bcm_time_if_t intf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_interface_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_interface_get(
    int unit, 
    bcm_time_interface_t *intf)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_interface_traverse(
    int unit, 
    bcm_time_interface_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_synce_clock_get(
    int unit, 
    bcm_time_synce_clock_src_type_t clk_src, 
    bcm_time_synce_divisor_setting_t *divisor_setting)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_synce_clock_set(
    int unit, 
    bcm_time_synce_clock_src_type_t clk_src, 
    bcm_time_synce_divisor_setting_t *divisor_setting)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_trigger_enable_get(
    int unit, 
    bcm_time_if_t id, 
    uint32 *mode_flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_time_trigger_enable_set(
    int unit, 
    bcm_time_if_t id, 
    uint32 mode_flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_topo_port_get(
    int unit, 
    int dest_modid, 
    bcm_port_t *exit_port)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_adjacency_add(
    int unit, 
    bcm_trill_multicast_adjacency_t *trill_multicast_adjacency)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_adjacency_delete(
    int unit, 
    bcm_trill_multicast_adjacency_t *trill_multicast_adjacency)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_adjacency_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_adjacency_traverse(
    int unit, 
    bcm_trill_multicast_adjacency_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_delete_all(
    int unit, 
    bcm_trill_name_t root_name)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_entry_add(
    int unit, 
    bcm_trill_multicast_entry_t *trill_mc_entry)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_entry_delete(
    int unit, 
    bcm_trill_multicast_entry_t *trill_mc_entry)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_entry_get(
    int unit, 
    bcm_trill_multicast_entry_t *trill_mc_entry)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_entry_traverse(
    int unit, 
    bcm_trill_multicast_entry_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_source_add(
    int unit, 
    bcm_trill_name_t root_name, 
    bcm_trill_name_t source_rbridge_name, 
    bcm_gport_t port, 
    bcm_if_t encap_intf)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_source_delete(
    int unit, 
    bcm_trill_name_t root_name, 
    bcm_trill_name_t source_rbridge_name, 
    bcm_gport_t port, 
    bcm_if_t encap_intf)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_source_get(
    int unit, 
    bcm_trill_name_t root_name, 
    bcm_trill_name_t source_rbridge_name, 
    bcm_gport_t *port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_multicast_source_traverse(
    int unit, 
    bcm_trill_multicast_source_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_port_add(
    int unit, 
    bcm_trill_port_t *trill_port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_port_delete(
    int unit, 
    bcm_gport_t trill_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_port_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_port_get(
    int unit, 
    bcm_trill_port_t *trill_port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_port_get_all(
    int unit, 
    int port_max, 
    bcm_trill_port_t *port_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_rbridge_entry_add(
    int unit, 
    bcm_trill_rbridge_t *trill_entry)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_rbridge_entry_delete(
    int unit, 
    bcm_trill_rbridge_t *trill_entry)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_rbridge_entry_get(
    int unit, 
    bcm_trill_rbridge_t *trill_entry)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_stat_clear(
    int unit, 
    bcm_port_t port, 
    bcm_trill_stat_t stat)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_stat_get(
    int unit, 
    bcm_port_t port, 
    bcm_trill_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_stat_get32(
    int unit, 
    bcm_port_t port, 
    bcm_trill_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_vpn_create(
    int unit, 
    bcm_trill_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_vpn_destroy(
    int unit, 
    bcm_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_vpn_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_vpn_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_trill_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_trill_vpn_traverse(
    int unit, 
    bcm_trill_vpn_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

int 
bcm_dfe_trunk_agm_attach(
    int unit, 
    bcm_trunk_t trunk_id, 
    bcm_switch_agm_id_t agm_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_agm_attach_get(
    int unit, 
    bcm_trunk_t trunk_id, 
    bcm_switch_agm_id_t *agm_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_agm_detach(
    int unit, 
    bcm_trunk_t trunk_id, 
    bcm_switch_agm_id_t agm_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_bitmap_expand(
    int unit, 
    bcm_pbmp_t *pbmp_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_chip_info_get(
    int unit, 
    bcm_trunk_chip_info_t *ta_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_create(
    int unit, 
    uint32 flags, 
    bcm_trunk_t *tid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_destroy(
    int unit, 
    bcm_trunk_t tid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_egress_get(
    int unit, 
    bcm_trunk_t tid, 
    bcm_pbmp_t *pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_egress_set(
    int unit, 
    bcm_trunk_t tid, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_ethertype_get(
    int unit, 
    uint32 *flags, 
    int ethertype_max, 
    int *ethertype_array, 
    int *ethertype_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_ethertype_set(
    int unit, 
    uint32 flags, 
    int ethertype_count, 
    int *ethertype_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_failover_get(
    int unit, 
    bcm_trunk_t tid, 
    bcm_gport_t failport, 
    int *psc, 
    uint32 *flags, 
    int array_size, 
    bcm_gport_t *fail_to_array, 
    int *array_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_failover_set(
    int unit, 
    bcm_trunk_t tid, 
    bcm_gport_t failport, 
    int psc, 
    uint32 flags, 
    int count, 
    bcm_gport_t *fail_to_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_find(
    int unit, 
    bcm_module_t modid, 
    bcm_port_t port, 
    bcm_trunk_t *tid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_get(
    int unit, 
    bcm_trunk_t tid, 
    bcm_trunk_info_t *t_data, 
    int member_max, 
    bcm_trunk_member_t *member_array, 
    int *member_count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_gport_add(
    int unit, 
    bcm_trunk_t tid, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_gport_delete(
    int unit, 
    bcm_trunk_t tid, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_gport_delete_all(
    int unit, 
    bcm_trunk_t tid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_gport_get_all(
    int unit, 
    bcm_trunk_t tid, 
    int gport_size, 
    bcm_gport_t *gport_array, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_mcast_join(
    int unit, 
    bcm_trunk_t tid, 
    bcm_vlan_t vid, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_member_add(
    int unit, 
    bcm_trunk_t tid, 
    bcm_trunk_member_t *member)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_member_delete(
    int unit, 
    bcm_trunk_t tid, 
    bcm_trunk_member_t *member)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_member_delete_all(
    int unit, 
    bcm_trunk_t tid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_member_status_get(
    int unit, 
    bcm_gport_t member, 
    int *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_member_status_set(
    int unit, 
    bcm_gport_t member, 
    int status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_ipmc_get(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int idx, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_ipmc_set(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int idx, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_mcast_get(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int idx, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_mcast_set(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int idx, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_ucast_get(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int modid, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_ucast_set(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int modid, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_vlan_get(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    bcm_vlan_t vid, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_override_vlan_set(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    bcm_vlan_t vid, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_pool_get(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int *size, 
    int weights[BCM_TRUNK_MAX_PORTCNT])
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_pool_set(
    int unit, 
    bcm_port_t port, 
    bcm_trunk_t tid, 
    int size, 
    const int weights[BCM_TRUNK_MAX_PORTCNT])
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_psc_get(
    int unit, 
    bcm_trunk_t tid, 
    int *psc)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_psc_set(
    int unit, 
    bcm_trunk_t tid, 
    int psc)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_resilient_replace(
    int unit, 
    uint32 flags, 
    bcm_trunk_resilient_entry_t *match_entry, 
    int *num_entries, 
    bcm_trunk_resilient_entry_t *replace_entry)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_resilient_traverse(
    int unit, 
    uint32 flags, 
    bcm_trunk_resilient_entry_t *match_entry, 
    bcm_trunk_resilient_traverse_cb trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_set(
    int unit, 
    bcm_trunk_t tid, 
    bcm_trunk_info_t *trunk_info, 
    int member_count, 
    bcm_trunk_member_t *member_array)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_trunk_spa_to_system_phys_port_map_get(
    int unit, 
    uint32 flags, 
    uint32 system_port_aggregate, 
    bcm_gport_t *gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_control_get(
    int unit, 
    bcm_tsn_control_t type, 
    uint32 *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_control_set(
    int unit, 
    bcm_tsn_control_t type, 
    uint32 arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_event_notification_traverse(
    int unit, 
    bcm_tsn_event_notification_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_event_register(
    int unit, 
    bcm_tsn_event_type_t event, 
    bcm_tsn_event_source_t *src, 
    bcm_tsn_event_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_event_unregister(
    int unit, 
    bcm_tsn_event_type_t event, 
    bcm_tsn_event_source_t *src, 
    bcm_tsn_event_cb cb)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flow_config_get(
    int unit, 
    bcm_tsn_flow_t flow_id, 
    bcm_tsn_flow_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flow_config_set(
    int unit, 
    bcm_tsn_flow_t flow_id, 
    bcm_tsn_flow_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flowset_config_get(
    int unit, 
    bcm_tsn_flowset_t flowset, 
    bcm_tsn_pri_map_t *pri_map, 
    bcm_tsn_flow_config_t *default_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flowset_create(
    int unit, 
    bcm_tsn_pri_map_t pri_map, 
    bcm_tsn_flow_config_t *default_config, 
    bcm_tsn_flowset_t *flowset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flowset_destroy(
    int unit, 
    bcm_tsn_flowset_t flowset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flowset_flow_get(
    int unit, 
    bcm_tsn_flowset_t flowset, 
    int index, 
    bcm_tsn_flow_t *flow_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flowset_status_get(
    int unit, 
    bcm_tsn_flowset_t flowset, 
    bcm_tsn_flowset_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_flowset_traverse(
    int unit, 
    bcm_tsn_flowset_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_ingress_mtu_config_get(
    int unit, 
    bcm_tsn_ingress_mtu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_ingress_mtu_config_set(
    int unit, 
    bcm_tsn_ingress_mtu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_ingress_stu_config_get(
    int unit, 
    bcm_tsn_ingress_stu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_ingress_stu_config_set(
    int unit, 
    bcm_tsn_ingress_stu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_mtu_profile_create(
    int unit, 
    bcm_tsn_mtu_profile_type_t type, 
    bcm_tsn_mtu_config_t *config, 
    int *mtu_profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_mtu_profile_destroy(
    int unit, 
    int mtu_profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_mtu_profile_get(
    int unit, 
    int mtu_profile_id, 
    bcm_tsn_mtu_profile_type_t *type, 
    bcm_tsn_mtu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_mtu_profile_set(
    int unit, 
    int mtu_profile_id, 
    bcm_tsn_mtu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_mtu_profile_traverse(
    int unit, 
    bcm_tsn_mtu_profile_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_control_get(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_control_t type, 
    uint32 *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_control_set(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_control_t type, 
    uint32 arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_get(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_multi_get(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_multi_get32(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_multi_set(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_multi_set32(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_set(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_set32(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_sync_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_sync_multi_get(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_port_stat_sync_multi_get32(
    int unit, 
    bcm_gport_t port, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_pri_map_create(
    int unit, 
    bcm_tsn_pri_map_config_t *config, 
    bcm_tsn_pri_map_t *map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_pri_map_destroy(
    int unit, 
    bcm_tsn_pri_map_t map_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_pri_map_get(
    int unit, 
    bcm_tsn_pri_map_t map_id, 
    bcm_tsn_pri_map_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_pri_map_set(
    int unit, 
    bcm_tsn_pri_map_t map_id, 
    bcm_tsn_pri_map_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_pri_map_traverse(
    int unit, 
    bcm_tsn_pri_map_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_enable(
    int unit, 
    int enable, 
    bcm_tsn_sr_auto_learn_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_enable_get(
    int unit, 
    int *enabled, 
    bcm_tsn_sr_auto_learn_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_group_create(
    int unit, 
    bcm_tsn_sr_auto_learn_group_config_t *config, 
    int *group_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_group_destroy(
    int unit, 
    int group_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_group_get(
    int unit, 
    int group_id, 
    bcm_tsn_sr_auto_learn_group_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_group_set(
    int unit, 
    int group_id, 
    bcm_tsn_sr_auto_learn_group_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_auto_learn_group_traverse(
    int unit, 
    bcm_tsn_sr_auto_learn_group_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_get(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_get32(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_group_get(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_group_type_t group_type, 
    bcm_tsn_stat_group_t *stat_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_group_set(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_group_type_t group_type, 
    bcm_tsn_stat_group_t stat_group)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_multi_get(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_multi_get32(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_multi_set(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_multi_set32(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_set(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_set32(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_sync_get(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_sync_get32(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    bcm_tsn_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_sync_multi_get(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flow_stat_sync_multi_get32(
    int unit, 
    bcm_tsn_sr_flow_t flow, 
    int nstat, 
    bcm_tsn_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flowset_destroy(
    int unit, 
    bcm_tsn_sr_flowset_t flowset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flowset_flow_get(
    int unit, 
    bcm_tsn_sr_flowset_t flowset, 
    int index, 
    bcm_tsn_sr_flow_t *flow_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flowset_status_get(
    int unit, 
    bcm_tsn_sr_flowset_t flowset, 
    bcm_tsn_sr_flowset_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_flowset_traverse(
    int unit, 
    int is_rx, 
    bcm_tsn_sr_flowset_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_port_config_get(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_sr_port_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_port_config_set(
    int unit, 
    bcm_gport_t port, 
    bcm_tsn_sr_port_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flow_config_get(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    bcm_tsn_sr_rx_flow_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flow_config_set(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    bcm_tsn_sr_rx_flow_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flow_reset(
    int unit, 
    uint32 flags, 
    bcm_tsn_sr_flow_t flow_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flow_seqnum_history_get(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    int offset_in_bits, 
    int max_size_in_bits, 
    uint8 *history_bits, 
    int *actual_size_in_bits)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flow_seqnum_history_set(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    int offset_in_bits, 
    int size_in_bits, 
    uint8 *history_bits)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flow_status_get(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    bcm_tsn_sr_rx_flow_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flowset_config_get(
    int unit, 
    bcm_tsn_sr_flowset_t flowset, 
    bcm_tsn_pri_map_t *pri_map, 
    bcm_tsn_sr_rx_flow_config_t *default_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_rx_flowset_create(
    int unit, 
    bcm_tsn_pri_map_t pri_map, 
    bcm_tsn_sr_rx_flow_config_t *default_config, 
    bcm_tsn_sr_flowset_t *flowset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_tx_flow_config_get(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    bcm_tsn_sr_tx_flow_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_tx_flow_config_set(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    bcm_tsn_sr_tx_flow_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_tx_flow_status_get(
    int unit, 
    bcm_tsn_sr_flow_t flow_id, 
    bcm_tsn_sr_tx_flow_status_t *status)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_tx_flowset_config_get(
    int unit, 
    bcm_tsn_sr_flowset_t flowset, 
    bcm_tsn_pri_map_t *pri_map, 
    bcm_tsn_sr_tx_flow_config_t *default_config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_sr_tx_flowset_create(
    int unit, 
    bcm_tsn_pri_map_t pri_map, 
    bcm_tsn_sr_tx_flow_config_t *default_config, 
    bcm_tsn_sr_flowset_t *flowset)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_group_create(
    int unit, 
    bcm_tsn_stat_group_type_t group_type, 
    int count, 
    bcm_tsn_stat_t *stat_arr, 
    bcm_tsn_stat_group_t *id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_group_destroy(
    int unit, 
    bcm_tsn_stat_group_t id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_group_get(
    int unit, 
    bcm_tsn_stat_group_t id, 
    bcm_tsn_stat_group_type_t *group_type, 
    int max, 
    bcm_tsn_stat_t *stat_arr, 
    int *count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_group_set(
    int unit, 
    bcm_tsn_stat_group_t id, 
    int count, 
    bcm_tsn_stat_t *stat_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_group_traverse(
    int unit, 
    bcm_tsn_stat_group_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_threshold_get(
    int unit, 
    bcm_tsn_stat_threshold_source_t source, 
    bcm_tsn_stat_t stat, 
    bcm_tsn_stat_threshold_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stat_threshold_set(
    int unit, 
    bcm_tsn_stat_threshold_source_t source, 
    bcm_tsn_stat_t stat, 
    bcm_tsn_stat_threshold_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stu_profile_create(
    int unit, 
    bcm_tsn_stu_profile_type_t type, 
    bcm_tsn_stu_config_t *config, 
    int *stu_profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stu_profile_destroy(
    int unit, 
    int stu_profile_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stu_profile_get(
    int unit, 
    int stu_profile_id, 
    bcm_tsn_stu_profile_type_t *type, 
    bcm_tsn_stu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stu_profile_set(
    int unit, 
    int stu_profile_id, 
    bcm_tsn_stu_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tsn_stu_profile_traverse(
    int unit, 
    bcm_tsn_stu_profile_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_config_get(
    int unit, 
    bcm_tunnel_config_t *tconfig)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_config_set(
    int unit, 
    bcm_tunnel_config_t *tconfig)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_dscp_map_create(
    int unit, 
    uint32 flags, 
    int *dscp_map_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_dscp_map_destroy(
    int unit, 
    int dscp_map_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_dscp_map_get(
    int unit, 
    int dscp_map_id, 
    bcm_tunnel_dscp_map_t *dscp_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_dscp_map_port_get(
    int unit, 
    bcm_port_t port, 
    bcm_tunnel_dscp_map_t *dscp_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_dscp_map_port_set(
    int unit, 
    bcm_port_t port, 
    bcm_tunnel_dscp_map_t *dscp_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_dscp_map_set(
    int unit, 
    int dscp_map_id, 
    bcm_tunnel_dscp_map_t *dscp_map)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_initiator_clear(
    int unit, 
    bcm_l3_intf_t *intf)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_initiator_create(
    int unit, 
    bcm_l3_intf_t *intf, 
    bcm_tunnel_initiator_t *tunnel)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_initiator_get(
    int unit, 
    bcm_l3_intf_t *intf, 
    bcm_tunnel_initiator_t *tunnel)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_initiator_set(
    int unit, 
    bcm_l3_intf_t *intf, 
    bcm_tunnel_initiator_t *tunnel)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_initiator_traverse(
    int unit, 
    bcm_tunnel_initiator_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_add(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_config_add(
    int unit, 
    uint32 flags, 
    bcm_tunnel_terminator_config_key_t *config_key, 
    bcm_tunnel_terminator_config_action_t *config_action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_config_delete(
    int unit, 
    bcm_tunnel_terminator_config_key_t *config_key)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_config_get(
    int unit, 
    bcm_tunnel_terminator_config_key_t *config_key, 
    bcm_tunnel_terminator_config_action_t *config_action)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_create(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_delete(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_get(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_traverse(
    int unit, 
    bcm_tunnel_terminator_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_update(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_vlan_get(
    int unit, 
    bcm_gport_t tunnel, 
    bcm_vlan_vector_t *vlan_vec)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_tunnel_terminator_vlan_set(
    int unit, 
    bcm_gport_t tunnel, 
    bcm_vlan_vector_t vlan_vec)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_tx(
    int unit, 
    bcm_pkt_t *tx_pkt, 
    void *cookie)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tx_array(
    int unit, 
    bcm_pkt_t **pkt, 
    int count, 
    bcm_pkt_cb_f all_done_cb, 
    void *cookie)
{
    return BCM_E_UNAVAIL;
}

#if defined(BROADCOM_DEBUG)
int 
bcm_dfe_tx_dv_dump(
    int unit, 
    void *dv_p)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_tx_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tx_list(
    int unit, 
    bcm_pkt_t *pkt, 
    bcm_pkt_cb_f all_done_cb, 
    void *cookie)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tx_pkt_l2_map(
    int unit, 
    bcm_pkt_t *pkt, 
    bcm_mac_t dest_mac, 
    int vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_tx_pkt_setup(
    int unit, 
    bcm_pkt_t *tx_pkt)
{
    return BCM_E_UNAVAIL;
}

#if defined(BROADCOM_DEBUG)
int 
bcm_dfe_tx_show(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_txbeacon_destroy(
    int unit, 
    bcm_txbeacon_pkt_id_t pkt_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_txbeacon_init(
    int unit, 
    int uC)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_txbeacon_pkt_get(
    int unit, 
    bcm_txbeacon_t *txbeacon)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_txbeacon_pkt_setup(
    int unit, 
    bcm_txbeacon_t *txbeacon)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_txbeacon_start(
    int unit, 
    bcm_txbeacon_pkt_id_t pkt_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_txbeacon_stop(
    int unit, 
    bcm_txbeacon_pkt_id_t pkt_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_txbeacon_traverse(
    int unit, 
    bcm_txbeacon_traverse_cb_t trav_fn, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_create(
    int unit, 
    bcm_udf_alloc_hints_t *hints, 
    bcm_udf_t *udf_info, 
    bcm_udf_id_t *udf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_destroy(
    int unit, 
    bcm_udf_id_t udf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_get(
    int unit, 
    bcm_udf_id_t udf_id, 
    bcm_udf_t *udf_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_get_all(
    int unit, 
    int max, 
    bcm_udf_id_t *udf_id_list, 
    int *actual)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_hash_config_add(
    int unit, 
    uint32 options, 
    bcm_udf_hash_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_hash_config_delete(
    int unit, 
    bcm_udf_hash_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_hash_config_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_hash_config_get(
    int unit, 
    bcm_udf_hash_config_t *config)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_hash_config_get_all(
    int unit, 
    int max, 
    bcm_udf_hash_config_t *config_list, 
    int *actual)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_oper_mode_get(
    int unit, 
    bcm_udf_oper_mode_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_oper_mode_set(
    int unit, 
    bcm_udf_oper_mode_t mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_add(
    int unit, 
    bcm_udf_id_t udf_id, 
    bcm_udf_pkt_format_id_t pkt_format_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_create(
    int unit, 
    bcm_udf_pkt_format_options_t options, 
    bcm_udf_pkt_format_info_t *pkt_format, 
    bcm_udf_pkt_format_id_t *pkt_format_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_delete(
    int unit, 
    bcm_udf_id_t udf_id, 
    bcm_udf_pkt_format_id_t pkt_format_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_delete_all(
    int unit, 
    bcm_udf_id_t udf_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_destroy(
    int unit, 
    bcm_udf_pkt_format_id_t pkt_format_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_get(
    int unit, 
    bcm_udf_pkt_format_id_t pkt_format_id, 
    int max, 
    bcm_udf_id_t *udf_id_list, 
    int *actual)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_get_all(
    int unit, 
    bcm_udf_id_t udf_id, 
    int max, 
    bcm_udf_pkt_format_id_t *pkt_format_id_list, 
    int *actual)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_udf_pkt_format_info_get(
    int unit, 
    bcm_udf_pkt_format_id_t pkt_format_id, 
    bcm_udf_pkt_format_info_t *pkt_format)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_block_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_block_t *vlan_block)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_block_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_block_t *vlan_block)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_get(
    int unit, 
    bcm_vlan_control_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_port_get(
    int unit, 
    int port, 
    bcm_vlan_control_port_t type, 
    int *arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_port_set(
    int unit, 
    int port, 
    bcm_vlan_control_port_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_set(
    int unit, 
    bcm_vlan_control_t type, 
    int arg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_vlan_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_control_vlan_t *control)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_vlan_selective_get(
    int unit, 
    bcm_vlan_t vlan, 
    uint32 valid_fields, 
    bcm_vlan_control_vlan_t *control)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_vlan_selective_set(
    int unit, 
    bcm_vlan_t vlan, 
    uint32 valid_fields, 
    bcm_vlan_control_vlan_t *control)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_control_vlan_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_control_vlan_t control)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_create(
    int unit, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_cross_connect_add(
    int unit, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_gport_t port_1, 
    bcm_gport_t port_2)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_cross_connect_delete(
    int unit, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_cross_connect_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_cross_connect_traverse(
    int unit, 
    bcm_vlan_cross_connect_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_default_get(
    int unit, 
    bcm_vlan_t *vid_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_default_set(
    int unit, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_destroy(
    int unit, 
    bcm_vlan_t vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_add(
    int unit, 
    int port, 
    bcm_vlan_t old_vid, 
    bcm_vlan_t new_vid, 
    int prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_delete(
    int unit, 
    int port, 
    bcm_vlan_t old_vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_get(
    int unit, 
    int port, 
    bcm_vlan_t old_vid, 
    bcm_vlan_t *new_vid, 
    int *prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_range_add(
    int unit, 
    int port, 
    bcm_vlan_t old_vid_low, 
    bcm_vlan_t old_vid_high, 
    bcm_vlan_t new_vid, 
    int int_prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_range_delete(
    int unit, 
    int port, 
    bcm_vlan_t old_vid_low, 
    bcm_vlan_t old_vid_high)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_range_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_range_get(
    int unit, 
    int port, 
    bcm_vlan_t old_vid_low, 
    bcm_vlan_t old_vid_high, 
    bcm_vlan_t *new_vid, 
    int *prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_range_traverse(
    int unit, 
    bcm_vlan_dtag_range_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_dtag_traverse(
    int unit, 
    bcm_vlan_dtag_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_egress_policer_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_egress_policer_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_add(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_gport_t port, 
    int flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_delete(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_delete_all(
    int unit, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_extended_delete(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_gport_t port, 
    int flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_gport_t port, 
    int *flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_get_all(
    int unit, 
    bcm_vlan_t vlan, 
    int array_max, 
    bcm_gport_t *gport_array, 
    int *flags_array, 
    int *array_size)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_gport_info_get(
    int unit, 
    bcm_vlan_gport_info_t *vlan_gport_info)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_action_add(
    int unit, 
    bcm_vlan_ip_t *vlan_ip, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_action_delete(
    int unit, 
    bcm_vlan_ip_t *vlan_ip)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_action_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_action_get(
    int unit, 
    bcm_vlan_ip_t *vlan_ip, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_action_traverse(
    int unit, 
    bcm_vlan_ip_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_add(
    int unit, 
    bcm_vlan_ip_t *vlan_ip)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_delete(
    int unit, 
    bcm_vlan_ip_t *vlan_ip)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_ip_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_list(
    int unit, 
    bcm_vlan_data_t **listp, 
    int *countp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_list_by_pbmp(
    int unit, 
    bcm_pbmp_t ports, 
    bcm_vlan_data_t **listp, 
    int *countp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_list_destroy(
    int unit, 
    bcm_vlan_data_t *list, 
    int count)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_action_add(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_action_delete(
    int unit, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_action_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_action_get(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_action_traverse(
    int unit, 
    bcm_vlan_mac_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_add(
    int unit, 
    bcm_mac_t mac, 
    bcm_vlan_t vid, 
    int prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_delete(
    int unit, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mac_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mcast_flood_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_mcast_flood_t *mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_mcast_flood_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_mcast_flood_t mode)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_policer_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_policer_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_add(
    int unit, 
    bcm_vlan_t vid, 
    bcm_pbmp_t pbmp, 
    bcm_pbmp_t ubmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_create(
    int unit, 
    bcm_vlan_port_t *vlan_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_default_action_delete(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_default_action_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_default_action_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_destroy(
    int unit, 
    bcm_gport_t gport)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_egress_default_action_delete(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_egress_default_action_get(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_egress_default_action_set(
    int unit, 
    bcm_port_t port, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_egress_policer_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_egress_policer_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_find(
    int unit, 
    bcm_vlan_port_t *vlan_port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_get(
    int unit, 
    bcm_vlan_t vid, 
    bcm_pbmp_t *pbmp, 
    bcm_pbmp_t *ubmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_policer_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_policer_t *policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_policer_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_policer_t policer_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_protocol_action_add(
    int unit, 
    bcm_port_t port, 
    bcm_port_frametype_t frame, 
    bcm_port_ethertype_t ether, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_protocol_action_delete(
    int unit, 
    bcm_port_t port, 
    bcm_port_frametype_t frame, 
    bcm_port_ethertype_t ether)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_protocol_action_delete_all(
    int unit, 
    bcm_port_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_protocol_action_get(
    int unit, 
    bcm_port_t port, 
    bcm_port_frametype_t frame, 
    bcm_port_ethertype_t ether, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_protocol_action_traverse(
    int unit, 
    bcm_vlan_port_protocol_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_remove(
    int unit, 
    bcm_vlan_t vid, 
    bcm_pbmp_t pbmp)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_enable_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    int *enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_enable_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_get32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_multi_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_multi_get32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_multi_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_multi_set32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_stat_set32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_port_t port, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_translation_get(
    int unit, 
    bcm_vlan_port_translation_t *vlan_port_translation)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_port_translation_set(
    int unit, 
    bcm_vlan_port_translation_t *vlan_port_translation)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_attach(
    int unit, 
    bcm_vlan_t vlan, 
    int qmid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_attach_get(
    int unit, 
    bcm_vlan_t vlan, 
    int *qmid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_create(
    int unit, 
    uint32 flags, 
    int *qmid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_destroy(
    int unit, 
    int qmid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_detach(
    int unit, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_detach_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_get(
    int unit, 
    int qmid, 
    int pkt_pri, 
    int cfi, 
    int *queue, 
    int *color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_queue_map_set(
    int unit, 
    int qmid, 
    int pkt_pri, 
    int cfi, 
    int queue, 
    int color)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_attach(
    int unit, 
    bcm_vlan_t vlan, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_counter_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_counter_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_counter_sync_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_detach(
    int unit, 
    bcm_vlan_t vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_detach_with_id(
    int unit, 
    bcm_vlan_t vlan, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_enable_set(
    int unit, 
    bcm_vlan_t vlan, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_get32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_id_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_multi_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_multi_get32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_multi_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_multi_set32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_set(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_set32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_sync_get(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stat_sync_get32(
    int unit, 
    bcm_vlan_t vlan, 
    bcm_cos_t cos, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stg_get(
    int unit, 
    bcm_vlan_t vid, 
    bcm_stg_t *stg_ptr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stg_set(
    int unit, 
    bcm_vlan_t vid, 
    bcm_stg_t stg)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stp_get(
    int unit, 
    bcm_vlan_t vid, 
    bcm_port_t port, 
    int *stp_state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_stp_set(
    int unit, 
    bcm_vlan_t vid, 
    bcm_port_t port, 
    int stp_state)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_add(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_class_get(
    int unit, 
    bcm_vlan_translate_action_class_t *action_class)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_class_set(
    int unit, 
    bcm_vlan_translate_action_class_t *action_class)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_create(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_delete(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_id_create(
    int unit, 
    uint32 flags, 
    int *action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_id_destroy(
    int unit, 
    uint32 flags, 
    int action_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_id_destroy_all(
    int unit, 
    uint32 flags)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_id_get(
    int unit, 
    uint32 flags, 
    int action_id, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_id_set(
    int unit, 
    uint32 flags, 
    int action_id, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_range_add(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t outer_vlan_low, 
    bcm_vlan_t outer_vlan_high, 
    bcm_vlan_t inner_vlan_low, 
    bcm_vlan_t inner_vlan_high, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_range_delete(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t outer_vlan_low, 
    bcm_vlan_t outer_vlan_high, 
    bcm_vlan_t inner_vlan_low, 
    bcm_vlan_t inner_vlan_high)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_range_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_range_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t outer_vlan_low, 
    bcm_vlan_t outer_vlan_high, 
    bcm_vlan_t inner_vlan_low, 
    bcm_vlan_t inner_vlan_high, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_range_traverse(
    int unit, 
    bcm_vlan_translate_action_range_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_action_traverse(
    int unit, 
    bcm_vlan_translate_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_add(
    int unit, 
    int port, 
    bcm_vlan_t old_vid, 
    bcm_vlan_t new_vid, 
    int prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_delete(
    int unit, 
    int port, 
    bcm_vlan_t old_vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_action_add(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_action_delete(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_action_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_action_traverse(
    int unit, 
    bcm_vlan_translate_egress_action_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_add(
    int unit, 
    int port, 
    bcm_vlan_t old_vid, 
    bcm_vlan_t new_vid, 
    int prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_delete(
    int unit, 
    int port, 
    bcm_vlan_t old_vid)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_get(
    int unit, 
    int port, 
    bcm_vlan_t old_vid, 
    bcm_vlan_t *new_vid, 
    int *prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_gport_action_add(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_gport_action_delete(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_gport_action_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_action_set_t *action)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_attach(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_counter_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_counter_set(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_counter_sync_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_detach(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_enable_set(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_get32(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_id_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_multi_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_multi_get32(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_multi_set(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_multi_set32(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_set(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_set32(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_sync_get(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_stat_sync_get32(
    int unit, 
    int port_class, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_egress_traverse(
    int unit, 
    bcm_vlan_translate_egress_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_get(
    int unit, 
    int port, 
    bcm_vlan_t old_vid, 
    bcm_vlan_t *new_vid, 
    int *prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_range_add(
    int unit, 
    int port, 
    bcm_vlan_t old_vid_low, 
    bcm_vlan_t old_vid_high, 
    bcm_vlan_t new_vid, 
    int int_prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_range_delete(
    int unit, 
    int port, 
    bcm_vlan_t old_vid_low, 
    bcm_vlan_t old_vid_high)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_range_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_range_get(
    int unit, 
    int port, 
    bcm_vlan_t old_vid_low, 
    bcm_vlan_t old_vid_high, 
    bcm_vlan_t *new_vid, 
    int *int_prio)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_range_traverse(
    int unit, 
    bcm_vlan_translate_range_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_attach(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_counter_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_counter_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_counter_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_detach(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_enable_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int enable)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_id_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_multi_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_multi_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_multi_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_multi_set32(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    int nstat, 
    bcm_vlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint64 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_set32(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint64 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_stat_sync_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_translate_key_t key_type, 
    bcm_vlan_t outer_vlan, 
    bcm_vlan_t inner_vlan, 
    bcm_vlan_stat_t stat, 
    uint32 *val)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_translate_traverse(
    int unit, 
    bcm_vlan_translate_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_vector_flags_set(
    int unit, 
    bcm_vlan_vector_t vlan_vector, 
    uint32 flags_mask, 
    uint32 flags_value)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vlan_vector_stp_set(
    int unit, 
    bcm_vlan_vector_t vlan_vector, 
    bcm_port_t port, 
    int stp_state)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
int 
bcm_dfe_vlan_vpn_create(
    int unit, 
    bcm_vlan_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vlan_vpn_destroy(
    int unit, 
    bcm_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vlan_vpn_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vlan_vpn_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_vlan_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vlan_vpn_traverse(
    int unit, 
    bcm_vlan_vpn_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

int 
bcm_dfe_vswitch_create(
    int unit, 
    bcm_vlan_t *vsi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_create_with_id(
    int unit, 
    bcm_vlan_t vsi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_cross_connect_add(
    int unit, 
    bcm_vswitch_cross_connect_t *gports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_cross_connect_delete(
    int unit, 
    bcm_vswitch_cross_connect_t *gports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_cross_connect_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_cross_connect_get(
    int unit, 
    bcm_vswitch_cross_connect_t *gports)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_cross_connect_traverse(
    int unit, 
    bcm_vswitch_cross_connect_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_destroy(
    int unit, 
    bcm_vlan_t vsi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_flexible_connect_add(
    int unit, 
    uint32 flags, 
    bcm_vswitch_flexible_connect_match_t *port_match, 
    bcm_vswitch_flexible_connect_fwd_t *port_fwd)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_flexible_connect_delete(
    int unit, 
    bcm_vswitch_flexible_connect_match_t *port_match)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_flexible_connect_get(
    int unit, 
    uint32 flags, 
    bcm_vswitch_flexible_connect_match_t *port_match, 
    bcm_vswitch_flexible_connect_fwd_t *port_fwd)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_port_add(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_port_delete(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_gport_t port)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_port_delete_all(
    int unit, 
    bcm_vlan_t vsi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_port_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vlan_t *vsi)
{
    return BCM_E_UNAVAIL;
}

int 
bcm_dfe_vswitch_port_traverse(
    int unit, 
    bcm_vlan_t vsi, 
    bcm_vswitch_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_cleanup(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_attach(
    int unit, 
    bcm_ip_t vxlan_dip, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_counter_get(
    int unit, 
    bcm_ip_t vxlan_dip, 
    bcm_vxlan_dip_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_counter_set(
    int unit, 
    bcm_ip_t vxlan_dip, 
    bcm_vxlan_dip_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_detach(
    int unit, 
    bcm_ip_t vxlan_dip)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_id_get(
    int unit, 
    bcm_ip_t vxlan_dip, 
    bcm_vxlan_dip_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_multi_get(
    int unit, 
    bcm_ip_t vxlan_dip, 
    int nstat, 
    bcm_vxlan_dip_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_multi_get32(
    int unit, 
    bcm_ip_t vxlan_dip, 
    int nstat, 
    bcm_vxlan_dip_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_multi_set(
    int unit, 
    bcm_ip_t vxlan_dip, 
    int nstat, 
    bcm_vxlan_dip_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_dip_stat_multi_set32(
    int unit, 
    bcm_ip_t vxlan_dip, 
    int nstat, 
    bcm_vxlan_dip_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_port_add(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_vxlan_port_t *vxlan_port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_port_delete(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_gport_t vxlan_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_port_delete_all(
    int unit, 
    bcm_vpn_t l2vpn)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_port_get(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_vxlan_port_t *vxlan_port)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_port_get_all(
    int unit, 
    bcm_vpn_t l2vpn, 
    int port_max, 
    bcm_vxlan_port_t *port_array, 
    int *port_count)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_port_traverse(
    int unit, 
    bcm_vxlan_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_attach(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    uint32 stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_counter_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_vxlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_counter_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_vxlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_counter_sync_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_vxlan_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_detach(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_enable_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int enable)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_id_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    bcm_vxlan_stat_t stat, 
    uint32 *stat_counter_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_multi_get(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_vxlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_multi_get32(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_vxlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_multi_set(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_vxlan_stat_t *stat_arr, 
    uint64 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_stat_multi_set32(
    int unit, 
    bcm_gport_t port, 
    bcm_vpn_t vpn, 
    int nstat, 
    bcm_vxlan_stat_t *stat_arr, 
    uint32 *value_arr)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_initiator_create(
    int unit, 
    bcm_tunnel_initiator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_initiator_destroy(
    int unit, 
    bcm_gport_t vxlan_tunnel_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_initiator_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_initiator_get(
    int unit, 
    bcm_tunnel_initiator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_initiator_traverse(
    int unit, 
    bcm_tunnel_initiator_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_terminator_create(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_terminator_destroy(
    int unit, 
    bcm_gport_t vxlan_tunnel_id)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_terminator_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_terminator_get(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_terminator_traverse(
    int unit, 
    bcm_tunnel_terminator_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_tunnel_terminator_update(
    int unit, 
    bcm_tunnel_terminator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_vpn_create(
    int unit, 
    bcm_vxlan_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_vpn_destroy(
    int unit, 
    bcm_vpn_t l2vpn)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_vpn_destroy_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_vpn_get(
    int unit, 
    bcm_vpn_t l2vpn, 
    bcm_vxlan_vpn_config_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
#if defined(INCLUDE_L3)
int 
bcm_dfe_vxlan_vpn_traverse(
    int unit, 
    bcm_vxlan_vpn_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_client_add(
    int unit, 
    bcm_wlan_client_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_client_delete(
    int unit, 
    bcm_mac_t mac)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_client_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_client_get(
    int unit, 
    bcm_mac_t mac, 
    bcm_wlan_client_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_client_traverse(
    int unit, 
    bcm_wlan_client_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_detach(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_init(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_port_add(
    int unit, 
    bcm_wlan_port_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_port_delete(
    int unit, 
    bcm_gport_t wlan_port_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_port_delete_all(
    int unit)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_port_get(
    int unit, 
    bcm_gport_t wlan_port_id, 
    bcm_wlan_port_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_port_traverse(
    int unit, 
    bcm_wlan_port_traverse_cb cb, 
    void *user_data)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_tunnel_initiator_create(
    int unit, 
    bcm_tunnel_initiator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_tunnel_initiator_destroy(
    int unit, 
    bcm_gport_t wlan_tunnel_id)
{
    return BCM_E_UNAVAIL;
}
#endif

#if defined(INCLUDE_L3)
int 
bcm_dfe_wlan_tunnel_initiator_get(
    int unit, 
    bcm_tunnel_initiator_t *info)
{
    return BCM_E_UNAVAIL;
}
#endif

