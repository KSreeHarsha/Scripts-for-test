      z_rd_int/0-2102  [010] 501241.896960: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/0-2102  [010] 501241.896961: funcgraph_entry:        0.540 us   |    spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.896962: funcgraph_entry:        0.577 us   |    spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.896964: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/0-2102  [010] 501241.896965: funcgraph_entry:        0.800 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.896966: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/0-2102  [010] 501241.896968: funcgraph_entry:        1.139 us   |        vdev_queue_io_to_issue();
      z_rd_int/0-2102  [010] 501241.896970: funcgraph_exit:         3.461 us   |      }
      z_rd_int/0-2102  [010] 501241.896970: funcgraph_entry:        0.493 us   |      vdev_disk_io_done();
      z_rd_int/0-2102  [010] 501241.896971: funcgraph_exit:         7.256 us   |    }
      z_rd_int/0-2102  [010] 501241.896972: funcgraph_entry:        0.460 us   |    spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.896973: funcgraph_entry:        0.477 us   |    spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.896974: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/0-2102  [010] 501241.896974: funcgraph_entry:        0.459 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.896975: funcgraph_exit:         1.452 us   |    }
      z_rd_int/0-2102  [010] 501241.896975: funcgraph_entry:        0.460 us   |    spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.896977: funcgraph_entry:        1.086 us   |    spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.896978: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/0-2102  [010] 501241.896979: funcgraph_entry:        2.176 us   |      zio_checksum_error();
      z_rd_int/0-2102  [010] 501241.896982: funcgraph_entry:                   |      zfs_ereport_start_checksum() {
      z_rd_int/0-2102  [010] 501241.896983: funcgraph_entry:                   |        zio_vsd_default_cksum_report() {
      z_rd_int/0-2102  [010] 501241.896984: funcgraph_entry:        1.129 us   |          zio_buf_alloc();
      z_rd_int/0-2102  [010] 501241.896986: funcgraph_exit:         3.026 us   |        }
      z_rd_int/0-2102  [010] 501241.896987: funcgraph_entry:                   |        zfs_ereport_start() {
      z_rd_int/0-2102  [010] 501241.896988: funcgraph_entry:        0.470 us   |          spa_load_state();
      z_rd_int/0-2102  [010] 501241.896989: funcgraph_entry:        0.510 us   |          spa_load_state();
      z_rd_int/0-2102  [010] 501241.896990: funcgraph_entry:        0.436 us   |          spa_load_state();
      z_rd_int/0-2102  [010] 501241.896991: funcgraph_entry:        0.600 us   |          vdev_accessible();
      z_rd_int/0-2102  [010] 501241.896992: funcgraph_entry:        0.646 us   |          vdev_dtl_contains();
      z_rd_int/0-2102  [010] 501241.896994: funcgraph_entry:                   |          fm_nvlist_create() {
      z_rd_int/0-2102  [010] 501241.896995: funcgraph_entry:        0.950 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.896997: funcgraph_entry:        0.629 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.896998: funcgraph_exit:         3.942 us   |          }
      z_rd_int/0-2102  [010] 501241.896998: funcgraph_entry:                   |          fm_nvlist_create() {
      z_rd_int/0-2102  [010] 501241.896999: funcgraph_entry:        0.679 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897000: funcgraph_entry:        0.817 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897002: funcgraph_exit:         3.251 us   |          }
      z_rd_int/0-2102  [010] 501241.897002: funcgraph_entry:        0.467 us   |          spa_load_state();
      z_rd_int/0-2102  [010] 501241.897003: funcgraph_entry:                   |          fm_ena_generate() {
      z_rd_int/0-2102  [010] 501241.897004: funcgraph_entry:        0.527 us   |            fm_ena_generate_cpu();
      z_rd_int/0-2102  [010] 501241.897005: funcgraph_exit:         1.407 us   |          }
      z_rd_int/0-2102  [010] 501241.897007: funcgraph_entry:                   |          spa_guid() {
      z_rd_int/0-2102  [010] 501241.897008: funcgraph_entry:                   |            dsl_pool_sync_context() {
      z_rd_int/0-2102  [010] 501241.897008: funcgraph_entry:        0.510 us   |              spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.897009: funcgraph_exit:         1.486 us   |            }
      z_rd_int/0-2102  [010] 501241.897010: funcgraph_exit:         2.792 us   |          }
      z_rd_int/0-2102  [010] 501241.897010: funcgraph_entry:                   |          fm_fmri_zfs_set() {
      z_rd_int/0-2102  [010] 501241.897011: funcgraph_entry:        0.600 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897013: funcgraph_entry:        0.773 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897015: funcgraph_entry:        0.659 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897017: funcgraph_entry:        0.672 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897019: funcgraph_exit:         8.286 us   |          }
      z_rd_int/0-2102  [010] 501241.897019: funcgraph_entry:                   |          fm_ereport_set() {
      z_rd_int/0-2102  [010] 501241.897020: funcgraph_entry:        0.756 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897022: funcgraph_entry:        0.597 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897023: funcgraph_entry:        0.943 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897025: funcgraph_entry:        0.899 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897027: funcgraph_entry:        0.800 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897028: funcgraph_entry:        0.813 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897030: funcgraph_entry:        0.910 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897032: funcgraph_entry:        0.986 us   |            i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897034: funcgraph_entry:        0.459 us   |            i_fm_payload_set();
      z_rd_int/0-2102  [010] 501241.897034: funcgraph_exit:       + 15.409 us  |          }
      z_rd_int/0-2102  [010] 501241.897035: funcgraph_entry:        0.470 us   |          spa_load_state();
      z_rd_int/0-2102  [010] 501241.897036: funcgraph_entry:                   |          spa_guid() {
      z_rd_int/0-2102  [010] 501241.897036: funcgraph_entry:                   |            dsl_pool_sync_context() {
      z_rd_int/0-2102  [010] 501241.897037: funcgraph_entry:        0.464 us   |              spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.897038: funcgraph_exit:         1.390 us   |            }
      z_rd_int/0-2102  [010] 501241.897038: funcgraph_exit:         2.295 us   |          }
      z_rd_int/0-2102  [010] 501241.897039: funcgraph_entry:        0.410 us   |          spa_name();
      z_rd_int/0-2102  [010] 501241.897039: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897040: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897041: funcgraph_entry:        0.700 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897043: funcgraph_entry:        0.703 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897045: funcgraph_entry:        0.697 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897047: funcgraph_exit:         6.816 us   |            }
      z_rd_int/0-2102  [010] 501241.897047: funcgraph_exit:         7.819 us   |          }
      z_rd_int/0-2102  [010] 501241.897048: funcgraph_entry:        0.489 us   |          spa_get_failmode();
      z_rd_int/0-2102  [010] 501241.897049: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897049: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897050: funcgraph_entry:        0.686 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897051: funcgraph_exit:         2.186 us   |            }
      z_rd_int/0-2102  [010] 501241.897052: funcgraph_exit:         3.022 us   |          }
      z_rd_int/0-2102  [010] 501241.897052: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897053: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897053: funcgraph_entry:        0.660 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897055: funcgraph_entry:        0.713 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897057: funcgraph_exit:         4.178 us   |            }
      z_rd_int/0-2102  [010] 501241.897057: funcgraph_exit:         5.094 us   |          }
      z_rd_int/0-2102  [010] 501241.897058: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897058: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897059: funcgraph_entry:        0.850 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897061: funcgraph_exit:         2.502 us   |            }
      z_rd_int/0-2102  [010] 501241.897061: funcgraph_exit:         3.382 us   |          }
      z_rd_int/0-2102  [010] 501241.897062: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897062: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897063: funcgraph_entry:        0.646 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897064: funcgraph_exit:         2.202 us   |            }
      z_rd_int/0-2102  [010] 501241.897065: funcgraph_exit:         3.134 us   |          }
      z_rd_int/0-2102  [010] 501241.897065: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897066: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897066: funcgraph_entry:        0.672 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897068: funcgraph_exit:         2.289 us   |            }
      z_rd_int/0-2102  [010] 501241.897068: funcgraph_exit:         3.152 us   |          }
      z_rd_int/0-2102  [010] 501241.897069: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897069: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897070: funcgraph_entry:        0.816 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897072: funcgraph_exit:         2.349 us   |            }
      z_rd_int/0-2102  [010] 501241.897072: funcgraph_exit:         3.222 us   |          }
      z_rd_int/0-2102  [010] 501241.897073: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897073: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897074: funcgraph_entry:        0.770 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897076: funcgraph_entry:        0.664 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897077: funcgraph_entry:        0.710 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897079: funcgraph_exit:         6.237 us   |            }
      z_rd_int/0-2102  [010] 501241.897080: funcgraph_exit:         7.206 us   |          }
      z_rd_int/0-2102  [010] 501241.897080: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897081: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897081: funcgraph_entry:        0.650 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897083: funcgraph_entry:        0.817 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897085: funcgraph_exit:         4.577 us   |            }
      z_rd_int/0-2102  [010] 501241.897086: funcgraph_exit:         5.527 us   |          }
      z_rd_int/0-2102  [010] 501241.897087: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897087: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897088: funcgraph_entry:        0.696 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897090: funcgraph_entry:        0.640 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897092: funcgraph_exit:         5.254 us   |            }
      z_rd_int/0-2102  [010] 501241.897093: funcgraph_exit:         6.107 us   |          }
      z_rd_int/0-2102  [010] 501241.897093: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897094: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897094: funcgraph_entry:        0.704 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897096: funcgraph_exit:         2.489 us   |            }
      z_rd_int/0-2102  [010] 501241.897097: funcgraph_exit:         3.359 us   |          }
      z_rd_int/0-2102  [010] 501241.897097: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897097: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897098: funcgraph_entry:        0.677 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897100: funcgraph_exit:         2.362 us   |            }
      z_rd_int/0-2102  [010] 501241.897101: funcgraph_exit:         3.802 us   |          }
      z_rd_int/0-2102  [010] 501241.897101: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897102: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897102: funcgraph_entry:        0.663 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897104: funcgraph_exit:         2.456 us   |            }
      z_rd_int/0-2102  [010] 501241.897105: funcgraph_exit:         3.322 us   |          }
      z_rd_int/0-2102  [010] 501241.897105: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897105: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897106: funcgraph_entry:        0.830 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897108: funcgraph_exit:         2.662 us   |            }
      z_rd_int/0-2102  [010] 501241.897109: funcgraph_exit:         3.891 us   |          }
      z_rd_int/0-2102  [010] 501241.897110: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897110: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897110: funcgraph_entry:        0.654 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897112: funcgraph_exit:         2.496 us   |            }
      z_rd_int/0-2102  [010] 501241.897113: funcgraph_exit:         3.332 us   |          }
      z_rd_int/0-2102  [010] 501241.897113: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897114: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897114: funcgraph_entry:        0.780 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897116: funcgraph_exit:         2.479 us   |            }
      z_rd_int/0-2102  [010] 501241.897117: funcgraph_exit:         3.321 us   |          }
      z_rd_int/0-2102  [010] 501241.897117: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897117: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897118: funcgraph_entry:        0.674 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897120: funcgraph_exit:         2.415 us   |            }
      z_rd_int/0-2102  [010] 501241.897120: funcgraph_exit:         3.278 us   |          }
      z_rd_int/0-2102  [010] 501241.897121: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897121: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897122: funcgraph_entry:        0.662 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897124: funcgraph_entry:        0.679 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897126: funcgraph_exit:         4.465 us   |            }
      z_rd_int/0-2102  [010] 501241.897126: funcgraph_exit:         5.343 us   |          }
      z_rd_int/0-2102  [010] 501241.897127: funcgraph_entry:                   |          fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897127: funcgraph_entry:                   |            i_fm_payload_set() {
      z_rd_int/0-2102  [010] 501241.897127: funcgraph_entry:        0.676 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897130: funcgraph_entry:        0.662 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897132: funcgraph_entry:        0.696 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897134: funcgraph_entry:        0.679 us   |              i_fm_alloc();
      z_rd_int/0-2102  [010] 501241.897136: funcgraph_exit:         8.933 us   |            }
      z_rd_int/0-2102  [010] 501241.897136: funcgraph_exit:         9.788 us   |          }
      z_rd_int/0-2102  [010] 501241.897137: funcgraph_exit:       ! 149.550 us |        }
      z_rd_int/0-2102  [010] 501241.897137: funcgraph_exit:       ! 155.951 us |      }
      z_rd_int/0-2102  [010] 501241.897138: funcgraph_exit:       ! 159.795 us |    }
      z_rd_int/0-2102  [010] 501241.897138: funcgraph_entry:        0.444 us   |    spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.897139: funcgraph_entry:        0.473 us   |    spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.897140: funcgraph_entry:                   |    zio_done() {
      z_rd_int/0-2102  [010] 501241.897141: funcgraph_entry:        0.504 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.897142: funcgraph_entry:        0.454 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.897142: funcgraph_entry:        0.536 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.897143: funcgraph_entry:        0.450 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.897145: funcgraph_entry:        0.463 us   |      zio_pop_transforms();
      z_rd_int/0-2102  [010] 501241.897146: funcgraph_entry:        0.920 us   |      vdev_stat_update();
      z_rd_int/0-2102  [010] 501241.897147: funcgraph_entry:        0.427 us   |      zio_gang_tree_free();
      z_rd_int/0-2102  [010] 501241.897148: funcgraph_entry:        0.489 us   |      vdev_tier_child_done();
      z_rd_int/0-2102  [010] 501241.897149: funcgraph_entry:        0.546 us   |      zio_walk_parents();
      z_rd_int/0-2102  [010] 501241.897150: funcgraph_entry:        0.472 us   |      zio_walk_parents();
      z_rd_int/0-2102  [010] 501241.897151: funcgraph_entry:        1.210 us   |      zio_remove_child();
      z_rd_int/0-2102  [010] 501241.897153: funcgraph_entry:        0.443 us   |      spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.897155: funcgraph_entry:        0.932 us   |      spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.897156: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/0-2102  [010] 501241.897156: funcgraph_entry:        0.460 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.897157: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/0-2102  [010] 501241.897158: funcgraph_entry:                   |          vdev_tier_child_select() {
      z_rd_int/0-2102  [010] 501241.897158: funcgraph_entry:        0.543 us   |            vdev_readable();
      z_rd_int/0-2102  [010] 501241.897159: funcgraph_entry:        0.613 us   |            vdev_dtl_contains();
      z_rd_int/0-2102  [010] 501241.897160: funcgraph_exit:         2.746 us   |          }
      z_rd_int/0-2102  [010] 501241.897161: funcgraph_entry:        0.416 us   |          zio_vdev_io_redone();
      z_rd_int/0-2102  [010] 501241.897162: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_rd_int/0-2102  [010] 501241.897162: funcgraph_entry:                   |            zio_create() {
      z_rd_int/0-2102  [010] 501241.897163: funcgraph_entry:        0.680 us   |              zio_add_child();
      z_rd_int/0-2102  [010] 501241.897165: funcgraph_exit:         2.419 us   |            }
      z_rd_int/0-2102  [010] 501241.897165: funcgraph_exit:         3.418 us   |          }
      z_rd_int/0-2102  [010] 501241.897166: funcgraph_entry:                   |          zio_nowait() {
      z_rd_int/0-2102  [010] 501241.897166: funcgraph_entry:        0.407 us   |            spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.897167: funcgraph_entry:        0.407 us   |            spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.897168: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_rd_int/0-2102  [010] 501241.897169: funcgraph_entry:        1.389 us   |              vdev_cache_read();
      z_rd_int/0-2102  [010] 501241.897171: funcgraph_entry:                   |              vdev_queue_io() {
      z_rd_int/0-2102  [010] 501241.897172: funcgraph_entry:                   |                vdev_queue_io_to_issue() {
      z_rd_int/0-2102  [010] 501241.897172: funcgraph_entry:        1.033 us   |                  zio_buf_alloc();
      z_rd_int/0-2102  [010] 501241.897174: funcgraph_entry:        0.540 us   |                  vdev_queue_timestamp_compare();
      z_rd_int/0-2102  [010] 501241.897175: funcgraph_entry:        0.546 us   |                  zio_buf_free();
      z_rd_int/0-2102  [010] 501241.897176: funcgraph_entry:        0.783 us   |                  vdev_queue_io_remove();
      z_rd_int/0-2102  [010] 501241.897178: funcgraph_exit:         5.913 us   |                }
      z_rd_int/0-2102  [010] 501241.897178: funcgraph_exit:         7.603 us   |              }
      z_rd_int/0-2102  [010] 501241.897179: funcgraph_entry:        0.457 us   |              vdev_accessible();
      z_rd_int/0-2102  [010] 501241.897180: funcgraph_entry:                   |              vdev_disk_io_start() {
      z_rd_int/0-2102  [010] 501241.897180: funcgraph_entry:                   |                __vdev_disk_physio() {
      z_rd_int/0-2102  [010] 501241.897197: funcgraph_entry:        0.646 us   |                  vdev_disk_dio_put();
      z_rd_int/0-2102  [010] 501241.897198: funcgraph_exit:       + 18.138 us  |                }
      z_rd_int/0-2102  [010] 501241.897199: funcgraph_exit:       + 19.114 us  |              }
      z_rd_int/0-2102  [010] 501241.897199: funcgraph_exit:       + 31.252 us  |            }
      z_rd_int/0-2102  [010] 501241.897200: funcgraph_exit:       + 34.033 us  |          }
      z_rd_int/0-2102  [010] 501241.897200: funcgraph_exit:       + 43.106 us  |        }
      z_rd_int/0-2102  [010] 501241.897201: funcgraph_exit:       + 44.995 us  |      }
      z_rd_int/0-2102  [010] 501241.897201: funcgraph_entry:        0.460 us   |      spa_get_dsl();
      z_rd_int/0-2102  [010] 501241.897202: funcgraph_entry:        0.443 us   |      spa_is_initializing();
      z_rd_int/0-2102  [010] 501241.897203: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/0-2102  [010] 501241.897203: funcgraph_entry:        0.476 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [010] 501241.897204: funcgraph_exit:         1.356 us   |      }
      z_rd_int/0-2102  [010] 501241.897205: funcgraph_exit:       + 64.756 us  |    }
      z_rd_int/0-2102  [010] 501241.897205: funcgraph_exit:       ! 245.164 us |  }
      z_rd_int/1-2103  [000] 501241.897313: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/1-2103  [000] 501241.897313: funcgraph_entry:        0.493 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897314: funcgraph_entry:        0.477 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897316: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/1-2103  [000] 501241.897316: funcgraph_entry:        0.783 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897318: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/1-2103  [000] 501241.897320: funcgraph_entry:        0.925 us   |        vdev_queue_io_to_issue();
      z_rd_int/1-2103  [000] 501241.897321: funcgraph_exit:         3.504 us   |      }
      z_rd_int/1-2103  [000] 501241.897322: funcgraph_entry:        0.446 us   |      vdev_disk_io_done();
      z_rd_int/1-2103  [000] 501241.897323: funcgraph_exit:         6.976 us   |    }
      z_rd_int/1-2103  [000] 501241.897323: funcgraph_entry:        0.493 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897324: funcgraph_entry:        0.433 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897325: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/1-2103  [000] 501241.897326: funcgraph_entry:        0.450 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897327: funcgraph_exit:         1.485 us   |    }
      z_rd_int/1-2103  [000] 501241.897327: funcgraph_entry:        0.414 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897328: funcgraph_entry:        0.446 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897329: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/1-2103  [000] 501241.897330: funcgraph_entry:        1.679 us   |      zio_checksum_error();
      z_rd_int/1-2103  [000] 501241.897332: funcgraph_exit:         2.662 us   |    }
      z_rd_int/1-2103  [000] 501241.897332: funcgraph_entry:        0.409 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897333: funcgraph_entry:        0.503 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897334: funcgraph_entry:                   |    zio_done() {
      z_rd_int/1-2103  [000] 501241.897335: funcgraph_entry:        0.447 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897336: funcgraph_entry:        0.450 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897337: funcgraph_entry:        0.449 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897338: funcgraph_entry:        0.517 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897339: funcgraph_entry:        0.449 us   |      zio_pop_transforms();
      z_rd_int/1-2103  [000] 501241.897340: funcgraph_entry:        0.743 us   |      vdev_stat_update();
      z_rd_int/1-2103  [000] 501241.897341: funcgraph_entry:        0.417 us   |      zio_gang_tree_free();
      z_rd_int/1-2103  [000] 501241.897342: funcgraph_entry:        0.440 us   |      vdev_tier_child_done();
      z_rd_int/1-2103  [000] 501241.897343: funcgraph_entry:        0.560 us   |      zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.897344: funcgraph_entry:        0.563 us   |      zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.897346: funcgraph_entry:        1.373 us   |      zio_remove_child();
      z_rd_int/1-2103  [000] 501241.897348: funcgraph_entry:        0.473 us   |      spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897349: funcgraph_entry:        0.436 us   |      spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897350: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/1-2103  [000] 501241.897351: funcgraph_entry:        0.473 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897352: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/1-2103  [000] 501241.897352: funcgraph_entry:        0.526 us   |          spa_writeable();
      z_rd_int/1-2103  [000] 501241.897354: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_rd_int/1-2103  [000] 501241.897354: funcgraph_entry:                   |            zio_create() {
      z_rd_int/1-2103  [000] 501241.897355: funcgraph_entry:        0.720 us   |              zio_add_child();
      z_rd_int/1-2103  [000] 501241.897357: funcgraph_exit:         2.705 us   |            }
      z_rd_int/1-2103  [000] 501241.897357: funcgraph_exit:         3.824 us   |          }
      z_rd_int/1-2103  [000] 501241.897358: funcgraph_entry:                   |          zio_nowait() {
      z_rd_int/1-2103  [000] 501241.897358: funcgraph_entry:        0.406 us   |            spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897359: funcgraph_entry:        0.430 us   |            spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897360: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_rd_int/1-2103  [000] 501241.897361: funcgraph_entry:        0.426 us   |              spa_writeable();
      z_rd_int/1-2103  [000] 501241.897362: funcgraph_entry:                   |              vdev_queue_io() {
      z_rd_int/1-2103  [000] 501241.897363: funcgraph_entry:                   |                vdev_queue_io_to_issue() {
      z_rd_int/1-2103  [000] 501241.897364: funcgraph_entry:        0.934 us   |                  zio_buf_alloc();
      z_rd_int/1-2103  [000] 501241.897366: funcgraph_entry:        0.514 us   |                  vdev_queue_offset_compare();
      z_rd_int/1-2103  [000] 501241.897367: funcgraph_entry:        0.530 us   |                  zio_buf_free();
      z_rd_int/1-2103  [000] 501241.897368: funcgraph_entry:        0.760 us   |                  vdev_queue_io_remove();
      z_rd_int/1-2103  [000] 501241.897370: funcgraph_exit:         6.553 us   |                }
      z_rd_int/1-2103  [000] 501241.897370: funcgraph_exit:         8.422 us   |              }
      z_rd_int/1-2103  [000] 501241.897371: funcgraph_entry:        0.569 us   |              vdev_accessible();
      z_rd_int/1-2103  [000] 501241.897372: funcgraph_entry:                   |              vdev_disk_io_start() {
      z_rd_int/1-2103  [000] 501241.897373: funcgraph_entry:                   |                __vdev_disk_physio() {
      z_rd_int/1-2103  [000] 501241.897382: funcgraph_entry:        0.573 us   |                  vdev_disk_dio_put();
      z_rd_int/1-2103  [000] 501241.897383: funcgraph_exit:       + 10.035 us  |                }
      z_rd_int/1-2103  [000] 501241.897383: funcgraph_exit:       + 11.002 us  |              }
      z_rd_int/1-2103  [000] 501241.897384: funcgraph_exit:       + 23.375 us  |            }
      z_rd_int/1-2103  [000] 501241.897384: funcgraph_exit:       + 26.373 us  |          }
      z_rd_int/1-2103  [000] 501241.897385: funcgraph_exit:       + 33.160 us  |        }
      z_rd_int/1-2103  [000] 501241.897385: funcgraph_exit:       + 35.153 us  |      }
      z_rd_int/1-2103  [000] 501241.897386: funcgraph_entry:        0.406 us   |      spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.897387: funcgraph_entry:        0.460 us   |      spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.897388: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/1-2103  [000] 501241.897388: funcgraph_entry:        0.483 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.897389: funcgraph_exit:         1.353 us   |      }
      z_rd_int/1-2103  [000] 501241.897390: funcgraph_exit:       + 55.319 us  |    }
      z_rd_int/1-2103  [000] 501241.897390: funcgraph_exit:       + 77.579 us  |  }
      z_rd_int/2-2104  [007] 501241.900183: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/2-2104  [007] 501241.900184: funcgraph_entry:        0.596 us   |    spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900185: funcgraph_entry:        0.600 us   |    spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900186: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/2-2104  [007] 501241.900187: funcgraph_entry:        0.617 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900188: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/2-2104  [007] 501241.900190: funcgraph_entry:        1.065 us   |        vdev_queue_io_to_issue();
      z_rd_int/2-2104  [007] 501241.900192: funcgraph_exit:         3.319 us   |      }
      z_rd_int/2-2104  [007] 501241.900192: funcgraph_entry:        0.592 us   |      vdev_disk_io_done();
      z_rd_int/2-2104  [007] 501241.900193: funcgraph_exit:         7.180 us   |    }
      z_rd_int/2-2104  [007] 501241.900194: funcgraph_entry:        0.563 us   |    spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900195: funcgraph_entry:        0.610 us   |    spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900196: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/2-2104  [007] 501241.900197: funcgraph_entry:        0.667 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900198: funcgraph_exit:         2.009 us   |    }
      z_rd_int/2-2104  [007] 501241.900199: funcgraph_entry:        0.517 us   |    spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900200: funcgraph_entry:        0.546 us   |    spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900201: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/2-2104  [007] 501241.900202: funcgraph_entry:        1.936 us   |      zio_checksum_error();
      z_rd_int/2-2104  [007] 501241.900204: funcgraph_exit:         3.219 us   |    }
      z_rd_int/2-2104  [007] 501241.900205: funcgraph_entry:        0.550 us   |    spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900206: funcgraph_entry:        0.589 us   |    spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900207: funcgraph_entry:                   |    zio_done() {
      z_rd_int/2-2104  [007] 501241.900208: funcgraph_entry:        0.770 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900209: funcgraph_entry:        0.620 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900211: funcgraph_entry:        1.046 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900212: funcgraph_entry:        0.630 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900213: funcgraph_entry:        0.467 us   |      zio_pop_transforms();
      z_rd_int/2-2104  [007] 501241.900214: funcgraph_entry:        0.706 us   |      vdev_stat_update();
      z_rd_int/2-2104  [007] 501241.900215: funcgraph_entry:        0.476 us   |      zio_gang_tree_free();
      z_rd_int/2-2104  [007] 501241.900217: funcgraph_entry:        0.489 us   |      vdev_tier_child_done();
      z_rd_int/2-2104  [007] 501241.900218: funcgraph_entry:        0.653 us   |      zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900219: funcgraph_entry:        0.529 us   |      zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900220: funcgraph_entry:        1.329 us   |      zio_remove_child();
      z_rd_int/2-2104  [007] 501241.900222: funcgraph_entry:        0.467 us   |      spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900223: funcgraph_entry:        0.436 us   |      spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900224: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/2-2104  [007] 501241.900224: funcgraph_entry:        0.630 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900225: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/2-2104  [007] 501241.900226: funcgraph_entry:        0.496 us   |          spa_writeable();
      z_rd_int/2-2104  [007] 501241.900227: funcgraph_exit:         1.646 us   |        }
      z_rd_int/2-2104  [007] 501241.900228: funcgraph_exit:         3.838 us   |      }
      z_rd_int/2-2104  [007] 501241.900228: funcgraph_entry:        0.490 us   |      spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900229: funcgraph_entry:        0.422 us   |      spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900230: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/2-2104  [007] 501241.900230: funcgraph_entry:        0.600 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900232: funcgraph_entry:        0.864 us   |        vdev_tier_map_free();
      z_rd_int/2-2104  [007] 501241.900233: funcgraph_exit:         2.929 us   |      }
      z_rd_int/2-2104  [007] 501241.900233: funcgraph_entry:        0.520 us   |      spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900234: funcgraph_entry:        0.443 us   |      spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900235: funcgraph_entry:                   |      zio_done() {
      z_rd_int/2-2104  [007] 501241.900236: funcgraph_entry:        0.563 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900237: funcgraph_entry:        0.556 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900238: funcgraph_entry:        0.603 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900239: funcgraph_entry:        0.562 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900240: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/2-2104  [007] 501241.900241: funcgraph_entry:        0.993 us   |          zio_subblock();
      z_rd_int/2-2104  [007] 501241.900242: funcgraph_entry:        0.737 us   |          zio_buf_free();
      z_rd_int/2-2104  [007] 501241.900244: funcgraph_exit:         3.781 us   |        }
      z_rd_int/2-2104  [007] 501241.900244: funcgraph_entry:        0.750 us   |        vdev_stat_update();
      z_rd_int/2-2104  [007] 501241.900246: funcgraph_entry:        0.579 us   |        zio_gang_tree_free();
      z_rd_int/2-2104  [007] 501241.900247: funcgraph_entry:        0.493 us   |        vdev_mirror_child_done();
      z_rd_int/2-2104  [007] 501241.900248: funcgraph_entry:        0.507 us   |        zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900249: funcgraph_entry:        0.526 us   |        zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900250: funcgraph_entry:        1.107 us   |        zio_remove_child();
      z_rd_int/2-2104  [007] 501241.900252: funcgraph_entry:        0.547 us   |        spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900253: funcgraph_entry:        0.493 us   |        spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900254: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/2-2104  [007] 501241.900255: funcgraph_entry:        0.503 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900256: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/2-2104  [007] 501241.900256: funcgraph_entry:        0.467 us   |            spa_writeable();
      z_rd_int/2-2104  [007] 501241.900257: funcgraph_exit:         1.546 us   |          }
      z_rd_int/2-2104  [007] 501241.900258: funcgraph_exit:         3.805 us   |        }
      z_rd_int/2-2104  [007] 501241.900258: funcgraph_entry:        0.457 us   |        spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900260: funcgraph_entry:        1.119 us   |        spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900262: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/2-2104  [007] 501241.900263: funcgraph_entry:        0.953 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900265: funcgraph_entry:        1.325 us   |          spa_config_exit();
      z_rd_int/2-2104  [007] 501241.900267: funcgraph_entry:        0.929 us   |          vdev_mirror_map_free();
      z_rd_int/2-2104  [007] 501241.900269: funcgraph_exit:         7.793 us   |        }
      z_rd_int/2-2104  [007] 501241.900271: funcgraph_entry:        0.943 us   |        spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900272: funcgraph_entry:        1.010 us   |        spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900274: funcgraph_entry:                   |        zio_done() {
      z_rd_int/2-2104  [007] 501241.900276: funcgraph_entry:        1.289 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900278: funcgraph_entry:        1.036 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900280: funcgraph_entry:        1.262 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900282: funcgraph_entry:        1.259 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900285: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/2-2104  [007] 501241.900286: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/2-2104  [007] 501241.900287: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/2-2104  [007] 501241.900289: funcgraph_entry:      + 48.932 us  |                lzjb_decompress();
      z_rd_int/2-2104  [007] 501241.900338: funcgraph_exit:       + 50.895 us  |              }
      z_rd_int/2-2104  [007] 501241.900339: funcgraph_exit:       + 52.474 us  |            }
      z_rd_int/2-2104  [007] 501241.900339: funcgraph_entry:        0.879 us   |            zio_buf_free();
      z_rd_int/2-2104  [007] 501241.900341: funcgraph_exit:       + 56.306 us  |          }
      z_rd_int/2-2104  [007] 501241.900342: funcgraph_entry:        0.629 us   |          vdev_stat_update();
      z_rd_int/2-2104  [007] 501241.900343: funcgraph_entry:        0.580 us   |          zio_gang_tree_free();
      z_rd_int/2-2104  [007] 501241.900344: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/2-2104  [007] 501241.900345: funcgraph_entry:        1.472 us   |            buf_hash_find();
      z_rd_int/2-2104  [007] 501241.900347: funcgraph_entry:        0.677 us   |            arc_cksum_compute();
      z_rd_int/2-2104  [007] 501241.900349: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/2-2104  [007] 501241.900350: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/2-2104  [007] 501241.900350: funcgraph_entry:        0.763 us   |                arc_released();
      z_rd_int/2-2104  [007] 501241.900352: funcgraph_entry:        0.629 us   |                arc_set_callback();
      z_rd_int/2-2104  [007] 501241.900353: funcgraph_exit:         3.345 us   |              }
      z_rd_int/2-2104  [007] 501241.900354: funcgraph_entry:        0.762 us   |              dbuf_rele_and_unlock();
      z_rd_int/2-2104  [007] 501241.900355: funcgraph_exit:         6.167 us   |            }
      z_rd_int/2-2104  [007] 501241.900356: funcgraph_exit:       + 11.592 us  |          }
      z_rd_int/2-2104  [007] 501241.900356: funcgraph_entry:        0.780 us   |          zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900358: funcgraph_entry:        0.642 us   |          zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900359: funcgraph_entry:        1.423 us   |          zio_remove_child();
      z_rd_int/2-2104  [007] 501241.900361: funcgraph_entry:        0.707 us   |          spa_get_dsl();
      z_rd_int/2-2104  [007] 501241.900362: funcgraph_entry:        0.579 us   |          spa_is_initializing();
      z_rd_int/2-2104  [007] 501241.900364: funcgraph_entry:                   |          zio_done() {
      z_rd_int/2-2104  [007] 501241.900364: funcgraph_entry:        0.712 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900365: funcgraph_entry:        0.573 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900367: funcgraph_entry:        0.620 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900368: funcgraph_entry:        0.603 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [007] 501241.900369: funcgraph_entry:        0.770 us   |            zio_pop_transforms();
      z_rd_int/2-2104  [007] 501241.900370: funcgraph_entry:        0.706 us   |            vdev_stat_update();
      z_rd_int/2-2104  [007] 501241.900372: funcgraph_entry:        0.577 us   |            zio_gang_tree_free();
      z_rd_int/2-2104  [007] 501241.900373: funcgraph_entry:        0.630 us   |            zio_walk_parents();
      z_rd_int/2-2104  [007] 501241.900377: funcgraph_exit:       + 13.026 us  |          }
      z_rd_int/2-2104  [007] 501241.900377: funcgraph_exit:       ! 103.306 us |        }
      z_rd_int/2-2104  [007] 501241.900378: funcgraph_exit:       ! 142.780 us |      }
      z_rd_int/2-2104  [007] 501241.900379: funcgraph_exit:       ! 171.403 us |    }
      z_rd_int/2-2104  [007] 501241.900380: funcgraph_exit:       ! 196.661 us |  }
      z_rd_int/3-2105  [000] 501241.900582: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/3-2105  [000] 501241.900582: funcgraph_entry:        0.560 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900584: funcgraph_entry:        0.520 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900585: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/3-2105  [000] 501241.900586: funcgraph_entry:        0.857 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900587: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/3-2105  [000] 501241.900589: funcgraph_entry:        1.029 us   |        vdev_queue_io_to_issue();
      z_rd_int/3-2105  [000] 501241.900591: funcgraph_exit:         3.651 us   |      }
      z_rd_int/3-2105  [000] 501241.900592: funcgraph_entry:        0.584 us   |      vdev_disk_io_done();
      z_rd_int/3-2105  [000] 501241.900593: funcgraph_exit:         7.769 us   |    }
      z_rd_int/3-2105  [000] 501241.900593: funcgraph_entry:        0.549 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900594: funcgraph_entry:        0.480 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900595: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/3-2105  [000] 501241.900596: funcgraph_entry:        0.530 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900597: funcgraph_exit:         1.669 us   |    }
      z_rd_int/3-2105  [000] 501241.900597: funcgraph_entry:        0.476 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900598: funcgraph_entry:        0.494 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900599: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/3-2105  [000] 501241.900600: funcgraph_entry:        1.650 us   |      zio_checksum_error();
      z_rd_int/3-2105  [000] 501241.900602: funcgraph_exit:         2.678 us   |    }
      z_rd_int/3-2105  [000] 501241.900602: funcgraph_entry:        0.490 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900603: funcgraph_entry:        0.479 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900604: funcgraph_entry:                   |    zio_done() {
      z_rd_int/3-2105  [000] 501241.900605: funcgraph_entry:        0.507 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900606: funcgraph_entry:        0.556 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900607: funcgraph_entry:        0.526 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900608: funcgraph_entry:        0.519 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900609: funcgraph_entry:        0.507 us   |      zio_pop_transforms();
      z_rd_int/3-2105  [000] 501241.900610: funcgraph_entry:        0.833 us   |      vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.900611: funcgraph_entry:        0.596 us   |      zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.900613: funcgraph_entry:        0.683 us   |      vdev_tier_child_done();
      z_rd_int/3-2105  [000] 501241.900614: funcgraph_entry:        0.559 us   |      zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900615: funcgraph_entry:        0.547 us   |      zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900616: funcgraph_entry:        1.503 us   |      zio_remove_child();
      z_rd_int/3-2105  [000] 501241.900619: funcgraph_entry:        0.497 us   |      spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900620: funcgraph_entry:        0.602 us   |      spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900621: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/3-2105  [000] 501241.900621: funcgraph_entry:        0.576 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900623: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/3-2105  [000] 501241.900623: funcgraph_entry:        0.556 us   |          spa_writeable();
      z_rd_int/3-2105  [000] 501241.900624: funcgraph_exit:         1.906 us   |        }
      z_rd_int/3-2105  [000] 501241.900625: funcgraph_exit:         4.191 us   |      }
      z_rd_int/3-2105  [000] 501241.900625: funcgraph_entry:        0.493 us   |      spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900627: funcgraph_entry:        0.477 us   |      spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900628: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/3-2105  [000] 501241.900628: funcgraph_entry:        0.676 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900629: funcgraph_entry:        0.820 us   |        vdev_tier_map_free();
      z_rd_int/3-2105  [000] 501241.900631: funcgraph_exit:         3.038 us   |      }
      z_rd_int/3-2105  [000] 501241.900631: funcgraph_entry:        0.513 us   |      spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900632: funcgraph_entry:        0.526 us   |      spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900634: funcgraph_entry:                   |      zio_done() {
      z_rd_int/3-2105  [000] 501241.900634: funcgraph_entry:        0.652 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900635: funcgraph_entry:        0.614 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900637: funcgraph_entry:        0.696 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900638: funcgraph_entry:        0.667 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900639: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/3-2105  [000] 501241.900640: funcgraph_entry:        1.079 us   |          zio_subblock();
      z_rd_int/3-2105  [000] 501241.900642: funcgraph_entry:        0.973 us   |          zio_buf_free();
      z_rd_int/3-2105  [000] 501241.900643: funcgraph_exit:         4.225 us   |        }
      z_rd_int/3-2105  [000] 501241.900644: funcgraph_entry:        0.799 us   |        vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.900645: funcgraph_entry:        0.604 us   |        zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.900647: funcgraph_entry:        0.672 us   |        vdev_mirror_child_done();
      z_rd_int/3-2105  [000] 501241.900648: funcgraph_entry:        0.673 us   |        zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900649: funcgraph_entry:        0.650 us   |        zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900650: funcgraph_entry:        1.379 us   |        zio_remove_child();
      z_rd_int/3-2105  [000] 501241.900652: funcgraph_entry:        0.563 us   |        spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900653: funcgraph_entry:        0.624 us   |        spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900655: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/3-2105  [000] 501241.900655: funcgraph_entry:        0.647 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900657: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/3-2105  [000] 501241.900658: funcgraph_entry:        0.614 us   |            spa_writeable();
      z_rd_int/3-2105  [000] 501241.900659: funcgraph_exit:         2.233 us   |          }
      z_rd_int/3-2105  [000] 501241.900659: funcgraph_exit:         4.720 us   |        }
      z_rd_int/3-2105  [000] 501241.900660: funcgraph_entry:        0.590 us   |        spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900661: funcgraph_entry:        0.620 us   |        spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900662: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/3-2105  [000] 501241.900663: funcgraph_entry:        0.599 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900664: funcgraph_entry:        0.927 us   |          spa_config_exit();
      z_rd_int/3-2105  [000] 501241.900666: funcgraph_entry:        0.806 us   |          vdev_mirror_map_free();
      z_rd_int/3-2105  [000] 501241.900667: funcgraph_exit:         4.848 us   |        }
      z_rd_int/3-2105  [000] 501241.900668: funcgraph_entry:        0.617 us   |        spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900669: funcgraph_entry:        0.552 us   |        spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900670: funcgraph_entry:                   |        zio_done() {
      z_rd_int/3-2105  [000] 501241.900671: funcgraph_entry:        0.573 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900672: funcgraph_entry:        0.586 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900673: funcgraph_entry:        0.739 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900674: funcgraph_entry:        0.596 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900676: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/3-2105  [000] 501241.900676: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/3-2105  [000] 501241.900677: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/3-2105  [000] 501241.900678: funcgraph_entry:      + 40.976 us  |                lzjb_decompress();
      z_rd_int/3-2105  [000] 501241.900719: funcgraph_exit:       + 42.399 us  |              }
      z_rd_int/3-2105  [000] 501241.900720: funcgraph_exit:       + 43.555 us  |            }
      z_rd_int/3-2105  [000] 501241.900720: funcgraph_entry:        0.960 us   |            zio_buf_free();
      z_rd_int/3-2105  [000] 501241.900722: funcgraph_exit:       + 46.751 us  |          }
      z_rd_int/3-2105  [000] 501241.900723: funcgraph_entry:        0.617 us   |          vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.900724: funcgraph_entry:        0.596 us   |          zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.900725: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/3-2105  [000] 501241.900726: funcgraph_entry:        1.589 us   |            buf_hash_find();
      z_rd_int/3-2105  [000] 501241.900728: funcgraph_entry:        0.602 us   |            arc_cksum_compute();
      z_rd_int/3-2105  [000] 501241.900730: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/3-2105  [000] 501241.900731: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/3-2105  [000] 501241.900731: funcgraph_entry:        0.767 us   |                arc_released();
      z_rd_int/3-2105  [000] 501241.900733: funcgraph_entry:        0.560 us   |                arc_set_callback();
      z_rd_int/3-2105  [000] 501241.900734: funcgraph_exit:         3.772 us   |              }
      z_rd_int/3-2105  [000] 501241.900735: funcgraph_entry:        0.890 us   |              dbuf_rele_and_unlock();
      z_rd_int/3-2105  [000] 501241.900737: funcgraph_exit:         6.670 us   |            }
      z_rd_int/3-2105  [000] 501241.900737: funcgraph_exit:       + 12.221 us  |          }
      z_rd_int/3-2105  [000] 501241.900738: funcgraph_entry:        0.690 us   |          zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900739: funcgraph_entry:        0.600 us   |          zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900741: funcgraph_entry:        1.276 us   |          zio_remove_child();
      z_rd_int/3-2105  [000] 501241.900742: funcgraph_entry:        0.659 us   |          spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.900744: funcgraph_entry:        0.640 us   |          spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.900745: funcgraph_entry:                   |          zio_done() {
      z_rd_int/3-2105  [000] 501241.900746: funcgraph_entry:        0.670 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900747: funcgraph_entry:        0.659 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900748: funcgraph_entry:        0.630 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900749: funcgraph_entry:        0.626 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.900750: funcgraph_entry:        0.670 us   |            zio_pop_transforms();
      z_rd_int/3-2105  [000] 501241.900751: funcgraph_entry:        0.594 us   |            vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.900753: funcgraph_entry:        0.633 us   |            zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.900754: funcgraph_entry:        0.573 us   |            zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.900766: funcgraph_exit:       + 20.646 us  |          }
      z_rd_int/3-2105  [000] 501241.900767: funcgraph_exit:       + 97.140 us  |        }
      z_rd_int/3-2105  [000] 501241.900769: funcgraph_exit:       ! 135.207 us |      }
      z_rd_int/3-2105  [000] 501241.900770: funcgraph_exit:       ! 165.189 us |    }
      z_rd_int/3-2105  [000] 501241.900771: funcgraph_exit:       ! 189.112 us |  }
      z_rd_int/4-2106  [000] 501241.901004: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/4-2106  [000] 501241.901004: funcgraph_entry:        0.556 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901006: funcgraph_entry:        0.470 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901007: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/4-2106  [000] 501241.901008: funcgraph_entry:        0.797 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901009: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/4-2106  [000] 501241.901011: funcgraph_entry:        1.189 us   |        vdev_queue_io_to_issue();
      z_rd_int/4-2106  [000] 501241.901013: funcgraph_exit:         3.775 us   |      }
      z_rd_int/4-2106  [000] 501241.901014: funcgraph_entry:        0.616 us   |      vdev_disk_io_done();
      z_rd_int/4-2106  [000] 501241.901015: funcgraph_exit:         7.723 us   |    }
      z_rd_int/4-2106  [000] 501241.901015: funcgraph_entry:        0.509 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901016: funcgraph_entry:        0.497 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901017: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/4-2106  [000] 501241.901018: funcgraph_entry:        0.524 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901019: funcgraph_exit:         1.689 us   |    }
      z_rd_int/4-2106  [000] 501241.901019: funcgraph_entry:        0.600 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901020: funcgraph_entry:        0.494 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901022: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/4-2106  [000] 501241.901022: funcgraph_entry:        1.756 us   |      zio_checksum_error();
      z_rd_int/4-2106  [000] 501241.901024: funcgraph_exit:         2.786 us   |    }
      z_rd_int/4-2106  [000] 501241.901025: funcgraph_entry:        1.062 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901026: funcgraph_entry:        0.444 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901027: funcgraph_entry:                   |    zio_done() {
      z_rd_int/4-2106  [000] 501241.901028: funcgraph_entry:        0.520 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901029: funcgraph_entry:        0.544 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901030: funcgraph_entry:        0.553 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901031: funcgraph_entry:        0.550 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901032: funcgraph_entry:        0.606 us   |      zio_pop_transforms();
      z_rd_int/4-2106  [000] 501241.901033: funcgraph_entry:        0.706 us   |      vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.901035: funcgraph_entry:        0.530 us   |      zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.901036: funcgraph_entry:        0.493 us   |      vdev_tier_child_done();
      z_rd_int/4-2106  [000] 501241.901037: funcgraph_entry:        0.643 us   |      zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901038: funcgraph_entry:        0.644 us   |      zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901040: funcgraph_entry:        1.352 us   |      zio_remove_child();
      z_rd_int/4-2106  [000] 501241.901042: funcgraph_entry:        0.495 us   |      spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901043: funcgraph_entry:        0.473 us   |      spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901044: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/4-2106  [000] 501241.901044: funcgraph_entry:        0.617 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901046: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/4-2106  [000] 501241.901046: funcgraph_entry:        0.483 us   |          spa_writeable();
      z_rd_int/4-2106  [000] 501241.901047: funcgraph_exit:         1.789 us   |        }
      z_rd_int/4-2106  [000] 501241.901048: funcgraph_exit:         4.098 us   |      }
      z_rd_int/4-2106  [000] 501241.901048: funcgraph_entry:        0.450 us   |      spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901049: funcgraph_entry:        0.434 us   |      spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901050: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/4-2106  [000] 501241.901051: funcgraph_entry:        0.580 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901052: funcgraph_entry:        0.792 us   |        vdev_tier_map_free();
      z_rd_int/4-2106  [000] 501241.901053: funcgraph_exit:         2.835 us   |      }
      z_rd_int/4-2106  [000] 501241.901054: funcgraph_entry:        0.559 us   |      spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901054: funcgraph_entry:        0.530 us   |      spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901056: funcgraph_entry:                   |      zio_done() {
      z_rd_int/4-2106  [000] 501241.901056: funcgraph_entry:        0.533 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901057: funcgraph_entry:        0.590 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901058: funcgraph_entry:        0.659 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901059: funcgraph_entry:        0.580 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901060: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/4-2106  [000] 501241.901061: funcgraph_entry:        1.034 us   |          zio_subblock();
      z_rd_int/4-2106  [000] 501241.901063: funcgraph_entry:        0.693 us   |          zio_buf_free();
      z_rd_int/4-2106  [000] 501241.901064: funcgraph_exit:         4.005 us   |        }
      z_rd_int/4-2106  [000] 501241.901065: funcgraph_entry:        0.647 us   |        vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.901066: funcgraph_entry:        0.559 us   |        zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.901067: funcgraph_entry:        0.503 us   |        vdev_mirror_child_done();
      z_rd_int/4-2106  [000] 501241.901068: funcgraph_entry:        0.619 us   |        zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901069: funcgraph_entry:        0.530 us   |        zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901070: funcgraph_entry:        1.126 us   |        zio_remove_child();
      z_rd_int/4-2106  [000] 501241.901072: funcgraph_entry:        0.533 us   |        spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901073: funcgraph_entry:        0.460 us   |        spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901074: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/4-2106  [000] 501241.901075: funcgraph_entry:        0.567 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901076: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/4-2106  [000] 501241.901077: funcgraph_entry:        0.560 us   |            spa_writeable();
      z_rd_int/4-2106  [000] 501241.901078: funcgraph_exit:         1.893 us   |          }
      z_rd_int/4-2106  [000] 501241.901079: funcgraph_exit:         4.531 us   |        }
      z_rd_int/4-2106  [000] 501241.901079: funcgraph_entry:        0.567 us   |        spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901080: funcgraph_entry:        0.516 us   |        spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901081: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/4-2106  [000] 501241.901082: funcgraph_entry:        0.486 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901083: funcgraph_entry:        0.813 us   |          spa_config_exit();
      z_rd_int/4-2106  [000] 501241.901084: funcgraph_entry:        0.659 us   |          vdev_mirror_map_free();
      z_rd_int/4-2106  [000] 501241.901086: funcgraph_exit:         4.282 us   |        }
      z_rd_int/4-2106  [000] 501241.901086: funcgraph_entry:        0.503 us   |        spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901087: funcgraph_entry:        0.430 us   |        spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901088: funcgraph_entry:                   |        zio_done() {
      z_rd_int/4-2106  [000] 501241.901088: funcgraph_entry:        0.513 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901089: funcgraph_entry:        0.510 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901090: funcgraph_entry:        0.590 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901092: funcgraph_entry:        0.583 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901093: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/4-2106  [000] 501241.901093: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/4-2106  [000] 501241.901094: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/4-2106  [000] 501241.901095: funcgraph_entry:      + 41.180 us  |                lzjb_decompress();
      z_rd_int/4-2106  [000] 501241.901136: funcgraph_exit:       + 42.419 us  |              }
      z_rd_int/4-2106  [000] 501241.901137: funcgraph_exit:       + 43.572 us  |            }
      z_rd_int/4-2106  [000] 501241.901137: funcgraph_entry:        0.723 us   |            zio_buf_free();
      z_rd_int/4-2106  [000] 501241.901139: funcgraph_exit:       + 46.274 us  |          }
      z_rd_int/4-2106  [000] 501241.901139: funcgraph_entry:        0.560 us   |          vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.901140: funcgraph_entry:        0.547 us   |          zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.901142: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/4-2106  [000] 501241.901142: funcgraph_entry:        1.543 us   |            buf_hash_find();
      z_rd_int/4-2106  [000] 501241.901144: funcgraph_entry:        0.567 us   |            arc_cksum_compute();
      z_rd_int/4-2106  [000] 501241.901146: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/4-2106  [000] 501241.901147: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/4-2106  [000] 501241.901147: funcgraph_entry:        0.680 us   |                arc_released();
      z_rd_int/4-2106  [000] 501241.901149: funcgraph_entry:        0.586 us   |                arc_set_callback();
      z_rd_int/4-2106  [000] 501241.901150: funcgraph_exit:         3.173 us   |              }
      z_rd_int/4-2106  [000] 501241.901150: funcgraph_entry:        0.956 us   |              dbuf_rele_and_unlock();
      z_rd_int/4-2106  [000] 501241.901152: funcgraph_exit:         6.057 us   |            }
      z_rd_int/4-2106  [000] 501241.901153: funcgraph_exit:       + 11.057 us  |          }
      z_rd_int/4-2106  [000] 501241.901153: funcgraph_entry:        0.754 us   |          zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901154: funcgraph_entry:        0.489 us   |          zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901155: funcgraph_entry:        1.073 us   |          zio_remove_child();
      z_rd_int/4-2106  [000] 501241.901157: funcgraph_entry:        0.467 us   |          spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.901158: funcgraph_entry:        0.433 us   |          spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.901159: funcgraph_entry:                   |          zio_done() {
      z_rd_int/4-2106  [000] 501241.901159: funcgraph_entry:        0.540 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901160: funcgraph_entry:        0.552 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901161: funcgraph_entry:        0.527 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901162: funcgraph_entry:        0.529 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.901164: funcgraph_entry:        0.744 us   |            zio_pop_transforms();
      z_rd_int/4-2106  [000] 501241.901165: funcgraph_entry:        0.486 us   |            vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.901166: funcgraph_entry:        0.507 us   |            zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.901167: funcgraph_entry:        0.563 us   |            zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.901171: funcgraph_exit:       + 12.207 us  |          }
      z_rd_int/4-2106  [000] 501241.901172: funcgraph_exit:       + 84.065 us  |        }
      z_rd_int/4-2106  [000] 501241.901173: funcgraph_exit:       ! 116.893 us |      }
      z_rd_int/4-2106  [000] 501241.901173: funcgraph_exit:       ! 145.811 us |    }
      z_rd_int/4-2106  [000] 501241.901174: funcgraph_exit:       ! 170.260 us |  }
      z_rd_int/5-2107  [000] 501241.901404: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/5-2107  [000] 501241.901405: funcgraph_entry:        0.493 us   |    spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901406: funcgraph_entry:        0.453 us   |    spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901408: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/5-2107  [000] 501241.901408: funcgraph_entry:        0.829 us   |      zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901410: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/5-2107  [000] 501241.901412: funcgraph_entry:        1.023 us   |        vdev_queue_io_to_issue();
      z_rd_int/5-2107  [000] 501241.901413: funcgraph_exit:         3.655 us   |      }
      z_rd_int/5-2107  [000] 501241.901414: funcgraph_entry:        0.460 us   |      vdev_disk_io_done();
      z_rd_int/5-2107  [000] 501241.901415: funcgraph_exit:         7.256 us   |    }
      z_rd_int/5-2107  [000] 501241.901415: funcgraph_entry:        0.426 us   |    spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901416: funcgraph_entry:        0.449 us   |    spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901417: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/5-2107  [000] 501241.901418: funcgraph_entry:        0.520 us   |      zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901419: funcgraph_exit:         1.626 us   |    }
      z_rd_int/5-2107  [000] 501241.901419: funcgraph_entry:        0.413 us   |    spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901420: funcgraph_entry:        0.439 us   |    spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901421: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/5-2107  [000] 501241.901422: funcgraph_entry:        1.549 us   |      zio_checksum_error();
      z_rd_int/5-2107  [000] 501241.901424: funcgraph_exit:         2.536 us   |    }
      z_rd_int/5-2107  [000] 501241.901424: funcgraph_entry:        0.416 us   |    spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901425: funcgraph_entry:        0.446 us   |    spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901426: funcgraph_entry:                   |    zio_done() {
      z_rd_int/5-2107  [000] 501241.901426: funcgraph_entry:        0.449 us   |      zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901427: funcgraph_entry:        0.440 us   |      zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901428: funcgraph_entry:        0.449 us   |      zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901429: funcgraph_entry:        0.503 us   |      zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901430: funcgraph_entry:        0.533 us   |      zio_pop_transforms();
      z_rd_int/5-2107  [000] 501241.901431: funcgraph_entry:        0.660 us   |      vdev_stat_update();
      z_rd_int/5-2107  [000] 501241.901433: funcgraph_entry:        0.412 us   |      zio_gang_tree_free();
      z_rd_int/5-2107  [000] 501241.901434: funcgraph_entry:        0.446 us   |      vdev_tier_child_done();
      z_rd_int/5-2107  [000] 501241.901435: funcgraph_entry:        0.675 us   |      zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901436: funcgraph_entry:        0.454 us   |      zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901437: funcgraph_entry:        1.366 us   |      zio_remove_child();
      z_rd_int/5-2107  [000] 501241.901439: funcgraph_entry:        0.426 us   |      spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901440: funcgraph_entry:        0.560 us   |      spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901441: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/5-2107  [000] 501241.901441: funcgraph_entry:        0.494 us   |        zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901443: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/5-2107  [000] 501241.901444: funcgraph_entry:        0.547 us   |          spa_writeable();
      z_rd_int/5-2107  [000] 501241.901445: funcgraph_exit:         1.810 us   |        }
      z_rd_int/5-2107  [000] 501241.901445: funcgraph_exit:         4.571 us   |      }
      z_rd_int/5-2107  [000] 501241.901446: funcgraph_entry:        0.396 us   |      spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901447: funcgraph_entry:        0.463 us   |      spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901448: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/5-2107  [000] 501241.901448: funcgraph_entry:        0.466 us   |        zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901449: funcgraph_entry:        0.676 us   |        vdev_tier_map_free();
      z_rd_int/5-2107  [000] 501241.901460: funcgraph_exit:       + 12.557 us  |      }
      z_rd_int/5-2107  [000] 501241.901461: funcgraph_entry:        0.413 us   |      spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901462: funcgraph_entry:        0.477 us   |      spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901463: funcgraph_entry:                   |      zio_done() {
      z_rd_int/5-2107  [000] 501241.901463: funcgraph_entry:        0.459 us   |        zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901464: funcgraph_entry:        0.460 us   |        zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901465: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901466: funcgraph_entry:        0.460 us   |        zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901467: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/5-2107  [000] 501241.901467: funcgraph_entry:        0.812 us   |          zio_subblock();
      z_rd_int/5-2107  [000] 501241.901469: funcgraph_entry:        0.633 us   |          zio_buf_free();
      z_rd_int/5-2107  [000] 501241.901470: funcgraph_exit:         3.408 us   |        }
      z_rd_int/5-2107  [000] 501241.901471: funcgraph_entry:        0.627 us   |        vdev_stat_update();
      z_rd_int/5-2107  [000] 501241.901472: funcgraph_entry:        0.413 us   |        zio_gang_tree_free();
      z_rd_int/5-2107  [000] 501241.901473: funcgraph_entry:        0.530 us   |        vdev_mirror_child_done();
      z_rd_int/5-2107  [000] 501241.901474: funcgraph_entry:        0.526 us   |        zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901475: funcgraph_entry:        0.444 us   |        zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901476: funcgraph_entry:        1.239 us   |        zio_remove_child();
      z_rd_int/5-2107  [000] 501241.901478: funcgraph_entry:        0.422 us   |        spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901479: funcgraph_entry:        0.510 us   |        spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901480: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/5-2107  [000] 501241.901480: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901481: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/5-2107  [000] 501241.901482: funcgraph_entry:        0.422 us   |            spa_writeable();
      z_rd_int/5-2107  [000] 501241.901483: funcgraph_exit:         1.606 us   |          }
      z_rd_int/5-2107  [000] 501241.901483: funcgraph_exit:         3.571 us   |        }
      z_rd_int/5-2107  [000] 501241.901484: funcgraph_entry:        0.409 us   |        spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901485: funcgraph_entry:        0.543 us   |        spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901486: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/5-2107  [000] 501241.901486: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901487: funcgraph_entry:        0.683 us   |          spa_config_exit();
      z_rd_int/5-2107  [000] 501241.901488: funcgraph_entry:        0.570 us   |          vdev_mirror_map_free();
      z_rd_int/5-2107  [000] 501241.901490: funcgraph_exit:         3.858 us   |        }
      z_rd_int/5-2107  [000] 501241.901490: funcgraph_entry:        0.436 us   |        spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901491: funcgraph_entry:        0.470 us   |        spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901492: funcgraph_entry:                   |        zio_done() {
      z_rd_int/5-2107  [000] 501241.901492: funcgraph_entry:        0.444 us   |          zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901493: funcgraph_entry:        0.446 us   |          zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901494: funcgraph_entry:        0.526 us   |          zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901495: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901496: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/5-2107  [000] 501241.901497: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/5-2107  [000] 501241.901498: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/5-2107  [000] 501241.901498: funcgraph_entry:      + 40.936 us  |                lzjb_decompress();
      z_rd_int/5-2107  [000] 501241.901540: funcgraph_exit:       + 41.976 us  |              }
      z_rd_int/5-2107  [000] 501241.901540: funcgraph_exit:       + 43.496 us  |            }
      z_rd_int/5-2107  [000] 501241.901540: funcgraph_entry:        0.743 us   |            zio_buf_free();
      z_rd_int/5-2107  [000] 501241.901542: funcgraph_exit:       + 45.934 us  |          }
      z_rd_int/5-2107  [000] 501241.901542: funcgraph_entry:        0.457 us   |          vdev_stat_update();
      z_rd_int/5-2107  [000] 501241.901543: funcgraph_entry:        0.416 us   |          zio_gang_tree_free();
      z_rd_int/5-2107  [000] 501241.901544: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/5-2107  [000] 501241.901545: funcgraph_entry:        1.445 us   |            buf_hash_find();
      z_rd_int/5-2107  [000] 501241.901547: funcgraph_entry:        0.453 us   |            arc_cksum_compute();
      z_rd_int/5-2107  [000] 501241.901548: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/5-2107  [000] 501241.901549: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/5-2107  [000] 501241.901550: funcgraph_entry:        0.576 us   |                arc_released();
      z_rd_int/5-2107  [000] 501241.901551: funcgraph_entry:        0.420 us   |                arc_set_callback();
      z_rd_int/5-2107  [000] 501241.901551: funcgraph_exit:         2.446 us   |              }
      z_rd_int/5-2107  [000] 501241.901552: funcgraph_entry:        0.564 us   |              dbuf_rele_and_unlock();
      z_rd_int/5-2107  [000] 501241.901553: funcgraph_exit:         4.558 us   |            }
      z_rd_int/5-2107  [000] 501241.901554: funcgraph_exit:         9.312 us   |          }
      z_rd_int/5-2107  [000] 501241.901554: funcgraph_entry:        0.573 us   |          zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901555: funcgraph_entry:        0.420 us   |          zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901556: funcgraph_entry:        1.126 us   |          zio_remove_child();
      z_rd_int/5-2107  [000] 501241.901558: funcgraph_entry:        0.416 us   |          spa_get_dsl();
      z_rd_int/5-2107  [000] 501241.901559: funcgraph_entry:        0.410 us   |          spa_is_initializing();
      z_rd_int/5-2107  [000] 501241.901560: funcgraph_entry:                   |          zio_done() {
      z_rd_int/5-2107  [000] 501241.901560: funcgraph_entry:        0.517 us   |            zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901561: funcgraph_entry:        0.460 us   |            zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901562: funcgraph_entry:        0.446 us   |            zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901563: funcgraph_entry:        0.453 us   |            zio_wait_for_children();
      z_rd_int/5-2107  [000] 501241.901564: funcgraph_entry:        0.462 us   |            zio_pop_transforms();
      z_rd_int/5-2107  [000] 501241.901564: funcgraph_entry:        0.414 us   |            vdev_stat_update();
      z_rd_int/5-2107  [000] 501241.901565: funcgraph_entry:        0.410 us   |            zio_gang_tree_free();
      z_rd_int/5-2107  [000] 501241.901566: funcgraph_entry:        0.447 us   |            zio_walk_parents();
      z_rd_int/5-2107  [000] 501241.901570: funcgraph_exit:       + 10.508 us  |          }
      z_rd_int/5-2107  [000] 501241.901571: funcgraph_exit:       + 78.858 us  |        }
      z_rd_int/5-2107  [000] 501241.901571: funcgraph_exit:       ! 108.444 us |      }
      z_rd_int/5-2107  [000] 501241.901572: funcgraph_exit:       ! 145.739 us |    }
      z_rd_int/5-2107  [000] 501241.901572: funcgraph_exit:       ! 167.991 us |  }
      z_rd_int/6-2108  [000] 501241.901797: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/6-2108  [000] 501241.901798: funcgraph_entry:        0.510 us   |    spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901799: funcgraph_entry:        0.443 us   |    spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901801: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/6-2108  [000] 501241.901801: funcgraph_entry:        0.746 us   |      zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901802: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/6-2108  [000] 501241.901804: funcgraph_entry:        0.973 us   |        vdev_queue_io_to_issue();
      z_rd_int/6-2108  [000] 501241.901806: funcgraph_exit:         3.301 us   |      }
      z_rd_int/6-2108  [000] 501241.901807: funcgraph_entry:        0.463 us   |      vdev_disk_io_done();
      z_rd_int/6-2108  [000] 501241.901808: funcgraph_exit:         7.336 us   |    }
      z_rd_int/6-2108  [000] 501241.901808: funcgraph_entry:        0.446 us   |    spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901809: funcgraph_entry:        0.423 us   |    spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901810: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/6-2108  [000] 501241.901811: funcgraph_entry:        0.457 us   |      zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901812: funcgraph_exit:         1.562 us   |    }
      z_rd_int/6-2108  [000] 501241.901812: funcgraph_entry:        0.416 us   |    spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901813: funcgraph_entry:        0.414 us   |    spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901814: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/6-2108  [000] 501241.901815: funcgraph_entry:        1.545 us   |      zio_checksum_error();
      z_rd_int/6-2108  [000] 501241.901817: funcgraph_exit:         2.516 us   |    }
      z_rd_int/6-2108  [000] 501241.901817: funcgraph_entry:        0.416 us   |    spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901818: funcgraph_entry:        0.407 us   |    spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901819: funcgraph_entry:                   |    zio_done() {
      z_rd_int/6-2108  [000] 501241.901819: funcgraph_entry:        0.446 us   |      zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901820: funcgraph_entry:        0.446 us   |      zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901821: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901822: funcgraph_entry:        0.443 us   |      zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901823: funcgraph_entry:        0.450 us   |      zio_pop_transforms();
      z_rd_int/6-2108  [000] 501241.901824: funcgraph_entry:        0.666 us   |      vdev_stat_update();
      z_rd_int/6-2108  [000] 501241.901825: funcgraph_entry:        0.420 us   |      zio_gang_tree_free();
      z_rd_int/6-2108  [000] 501241.901826: funcgraph_entry:        0.417 us   |      vdev_tier_child_done();
      z_rd_int/6-2108  [000] 501241.901827: funcgraph_entry:        0.497 us   |      zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901828: funcgraph_entry:        0.450 us   |      zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901829: funcgraph_entry:        1.289 us   |      zio_remove_child();
      z_rd_int/6-2108  [000] 501241.901831: funcgraph_entry:        0.414 us   |      spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901832: funcgraph_entry:        0.419 us   |      spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901833: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/6-2108  [000] 501241.901833: funcgraph_entry:        0.473 us   |        zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901834: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/6-2108  [000] 501241.901835: funcgraph_entry:        0.460 us   |          spa_writeable();
      z_rd_int/6-2108  [000] 501241.901836: funcgraph_exit:         1.587 us   |        }
      z_rd_int/6-2108  [000] 501241.901836: funcgraph_exit:         3.491 us   |      }
      z_rd_int/6-2108  [000] 501241.901837: funcgraph_entry:        0.407 us   |      spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901837: funcgraph_entry:        0.413 us   |      spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901838: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/6-2108  [000] 501241.901839: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901840: funcgraph_entry:        0.672 us   |        vdev_tier_map_free();
      z_rd_int/6-2108  [000] 501241.901841: funcgraph_exit:         2.609 us   |      }
      z_rd_int/6-2108  [000] 501241.901842: funcgraph_entry:        0.410 us   |      spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901842: funcgraph_entry:      + 12.560 us  |      spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901855: funcgraph_entry:                   |      zio_done() {
      z_rd_int/6-2108  [000] 501241.901856: funcgraph_entry:        0.261 us   |        zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901856: funcgraph_entry:        0.240 us   |        zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901857: funcgraph_entry:        0.237 us   |        zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901857: funcgraph_entry:        0.276 us   |        zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901858: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/6-2108  [000] 501241.901858: funcgraph_entry:        0.463 us   |          zio_subblock();
      z_rd_int/6-2108  [000] 501241.901859: funcgraph_entry:        0.683 us   |          zio_buf_free();
      z_rd_int/6-2108  [000] 501241.901860: funcgraph_exit:         2.190 us   |        }
      z_rd_int/6-2108  [000] 501241.901860: funcgraph_entry:        0.306 us   |        vdev_stat_update();
      z_rd_int/6-2108  [000] 501241.901861: funcgraph_entry:        0.219 us   |        zio_gang_tree_free();
      z_rd_int/6-2108  [000] 501241.901861: funcgraph_entry:        0.231 us   |        vdev_mirror_child_done();
      z_rd_int/6-2108  [000] 501241.901861: funcgraph_entry:        0.245 us   |        zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901862: funcgraph_entry:        0.235 us   |        zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901862: funcgraph_entry:        0.490 us   |        zio_remove_child();
      z_rd_int/6-2108  [000] 501241.901863: funcgraph_entry:        0.217 us   |        spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901864: funcgraph_entry:        0.217 us   |        spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901864: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/6-2108  [000] 501241.901864: funcgraph_entry:        0.230 us   |          zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901865: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/6-2108  [000] 501241.901865: funcgraph_entry:        0.212 us   |            spa_writeable();
      z_rd_int/6-2108  [000] 501241.901866: funcgraph_exit:         0.779 us   |          }
      z_rd_int/6-2108  [000] 501241.901866: funcgraph_exit:         1.803 us   |        }
      z_rd_int/6-2108  [000] 501241.901866: funcgraph_entry:        0.216 us   |        spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901867: funcgraph_entry:        0.330 us   |        spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901867: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/6-2108  [000] 501241.901868: funcgraph_entry:        0.302 us   |          zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901868: funcgraph_entry:        0.532 us   |          spa_config_exit();
      z_rd_int/6-2108  [000] 501241.901869: funcgraph_entry:        0.399 us   |          vdev_mirror_map_free();
      z_rd_int/6-2108  [000] 501241.901870: funcgraph_exit:         2.633 us   |        }
      z_rd_int/6-2108  [000] 501241.901870: funcgraph_entry:        0.311 us   |        spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901871: funcgraph_entry:        0.356 us   |        spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901872: funcgraph_entry:                   |        zio_done() {
      z_rd_int/6-2108  [000] 501241.901872: funcgraph_entry:        0.345 us   |          zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901873: funcgraph_entry:        0.337 us   |          zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901873: funcgraph_entry:        0.365 us   |          zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901874: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901875: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/6-2108  [000] 501241.901875: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/6-2108  [000] 501241.901876: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/6-2108  [000] 501241.901876: funcgraph_entry:      + 45.179 us  |                lzjb_decompress();
      z_rd_int/6-2108  [000] 501241.901922: funcgraph_exit:       + 46.532 us  |              }
      z_rd_int/6-2108  [000] 501241.901923: funcgraph_exit:       + 47.351 us  |            }
      z_rd_int/6-2108  [000] 501241.901923: funcgraph_entry:        0.696 us   |            zio_buf_free();
      z_rd_int/6-2108  [000] 501241.901925: funcgraph_exit:       + 49.949 us  |          }
      z_rd_int/6-2108  [000] 501241.901925: funcgraph_entry:        0.517 us   |          vdev_stat_update();
      z_rd_int/6-2108  [000] 501241.901926: funcgraph_entry:        0.413 us   |          zio_gang_tree_free();
      z_rd_int/6-2108  [000] 501241.901928: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/6-2108  [000] 501241.901928: funcgraph_entry:        1.410 us   |            buf_hash_find();
      z_rd_int/6-2108  [000] 501241.901930: funcgraph_entry:        0.452 us   |            arc_cksum_compute();
      z_rd_int/6-2108  [000] 501241.901932: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/6-2108  [000] 501241.901932: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/6-2108  [000] 501241.901933: funcgraph_entry:        0.510 us   |                arc_released();
      z_rd_int/6-2108  [000] 501241.901934: funcgraph_entry:        0.414 us   |                arc_set_callback();
      z_rd_int/6-2108  [000] 501241.901935: funcgraph_exit:         2.408 us   |              }
      z_rd_int/6-2108  [000] 501241.901935: funcgraph_entry:        0.567 us   |              dbuf_rele_and_unlock();
      z_rd_int/6-2108  [000] 501241.901936: funcgraph_exit:         4.544 us   |            }
      z_rd_int/6-2108  [000] 501241.901937: funcgraph_exit:         9.312 us   |          }
      z_rd_int/6-2108  [000] 501241.901937: funcgraph_entry:        0.533 us   |          zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901938: funcgraph_entry:        0.555 us   |          zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901940: funcgraph_entry:        1.109 us   |          zio_remove_child();
      z_rd_int/6-2108  [000] 501241.901942: funcgraph_entry:        0.423 us   |          spa_get_dsl();
      z_rd_int/6-2108  [000] 501241.901942: funcgraph_entry:        0.412 us   |          spa_is_initializing();
      z_rd_int/6-2108  [000] 501241.901943: funcgraph_entry:                   |          zio_done() {
      z_rd_int/6-2108  [000] 501241.901944: funcgraph_entry:        0.533 us   |            zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901945: funcgraph_entry:        0.456 us   |            zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901946: funcgraph_entry:        0.453 us   |            zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901947: funcgraph_entry:        0.456 us   |            zio_wait_for_children();
      z_rd_int/6-2108  [000] 501241.901947: funcgraph_entry:        0.417 us   |            zio_pop_transforms();
      z_rd_int/6-2108  [000] 501241.901948: funcgraph_entry:        0.420 us   |            vdev_stat_update();
      z_rd_int/6-2108  [000] 501241.901949: funcgraph_entry:        0.414 us   |            zio_gang_tree_free();
      z_rd_int/6-2108  [000] 501241.901950: funcgraph_entry:        0.447 us   |            zio_walk_parents();
      z_rd_int/6-2108  [000] 501241.901954: funcgraph_exit:       + 10.962 us  |          }
      z_rd_int/6-2108  [000] 501241.901955: funcgraph_exit:       + 83.372 us  |        }
      z_rd_int/6-2108  [000] 501241.901956: funcgraph_exit:       ! 100.171 us |      }
      z_rd_int/6-2108  [000] 501241.901956: funcgraph_exit:       ! 137.370 us |    }
      z_rd_int/6-2108  [000] 501241.901957: funcgraph_exit:       ! 159.246 us |  }
      z_rd_int/7-2109  [000] 501241.902159: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/7-2109  [000] 501241.902159: funcgraph_entry:        0.466 us   |    spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902160: funcgraph_entry:        0.474 us   |    spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902161: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/7-2109  [000] 501241.902162: funcgraph_entry:        0.657 us   |      zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902163: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/7-2109  [000] 501241.902165: funcgraph_entry:        0.786 us   |        vdev_queue_io_to_issue();
      z_rd_int/7-2109  [000] 501241.902166: funcgraph_exit:         2.905 us   |      }
      z_rd_int/7-2109  [000] 501241.902167: funcgraph_entry:        0.413 us   |      vdev_disk_io_done();
      z_rd_int/7-2109  [000] 501241.902167: funcgraph_exit:         5.983 us   |    }
      z_rd_int/7-2109  [000] 501241.902168: funcgraph_entry:        0.407 us   |    spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902169: funcgraph_entry:        0.430 us   |    spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902170: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/7-2109  [000] 501241.902170: funcgraph_entry:        0.586 us   |      zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902171: funcgraph_exit:         1.713 us   |    }
      z_rd_int/7-2109  [000] 501241.902172: funcgraph_entry:        0.450 us   |    spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902173: funcgraph_entry:        0.610 us   |    spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902174: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/7-2109  [000] 501241.902174: funcgraph_entry:        1.619 us   |      zio_checksum_error();
      z_rd_int/7-2109  [000] 501241.902176: funcgraph_exit:         2.523 us   |    }
      z_rd_int/7-2109  [000] 501241.902177: funcgraph_entry:        0.417 us   |    spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902178: funcgraph_entry:        0.456 us   |    spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902179: funcgraph_entry:                   |    zio_done() {
      z_rd_int/7-2109  [000] 501241.902179: funcgraph_entry:        0.440 us   |      zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902180: funcgraph_entry:        0.436 us   |      zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902181: funcgraph_entry:        0.447 us   |      zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902182: funcgraph_entry:        0.443 us   |      zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902183: funcgraph_entry:        0.403 us   |      zio_pop_transforms();
      z_rd_int/7-2109  [000] 501241.902184: funcgraph_entry:        0.683 us   |      vdev_stat_update();
      z_rd_int/7-2109  [000] 501241.902185: funcgraph_entry:        0.457 us   |      zio_gang_tree_free();
      z_rd_int/7-2109  [000] 501241.902186: funcgraph_entry:        0.477 us   |      vdev_tier_child_done();
      z_rd_int/7-2109  [000] 501241.902187: funcgraph_entry:        0.490 us   |      zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902188: funcgraph_entry:        0.424 us   |      zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902189: funcgraph_entry:        1.192 us   |      zio_remove_child();
      z_rd_int/7-2109  [000] 501241.902191: funcgraph_entry:        0.444 us   |      spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902192: funcgraph_entry:        0.469 us   |      spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902193: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/7-2109  [000] 501241.902194: funcgraph_entry:        0.490 us   |        zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902195: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/7-2109  [000] 501241.902195: funcgraph_entry:        0.490 us   |          spa_writeable();
      z_rd_int/7-2109  [000] 501241.902196: funcgraph_exit:         1.553 us   |        }
      z_rd_int/7-2109  [000] 501241.902197: funcgraph_exit:         3.551 us   |      }
      z_rd_int/7-2109  [000] 501241.902197: funcgraph_entry:        0.443 us   |      spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902198: funcgraph_entry:        0.447 us   |      spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902199: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/7-2109  [000] 501241.902199: funcgraph_entry:        0.490 us   |        zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902200: funcgraph_entry:        0.669 us   |        vdev_tier_map_free();
      z_rd_int/7-2109  [000] 501241.902201: funcgraph_exit:         2.482 us   |      }
      z_rd_int/7-2109  [000] 501241.902202: funcgraph_entry:        0.460 us   |      spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902203: funcgraph_entry:        0.560 us   |      spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902204: funcgraph_entry:                   |      zio_done() {
      z_rd_int/7-2109  [000] 501241.902204: funcgraph_entry:        0.445 us   |        zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902205: funcgraph_entry:        0.440 us   |        zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902206: funcgraph_entry:        0.444 us   |        zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902207: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902208: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/7-2109  [000] 501241.902208: funcgraph_entry:        0.936 us   |          zio_subblock();
      z_rd_int/7-2109  [000] 501241.902210: funcgraph_entry:        0.664 us   |          zio_buf_free();
      z_rd_int/7-2109  [000] 501241.902211: funcgraph_exit:         3.392 us   |        }
      z_rd_int/7-2109  [000] 501241.902212: funcgraph_entry:        0.650 us   |        vdev_stat_update();
      z_rd_int/7-2109  [000] 501241.902213: funcgraph_entry:        0.566 us   |        zio_gang_tree_free();
      z_rd_int/7-2109  [000] 501241.902214: funcgraph_entry:        0.420 us   |        vdev_mirror_child_done();
      z_rd_int/7-2109  [000] 501241.902215: funcgraph_entry:        0.620 us   |        zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902216: funcgraph_entry:        0.497 us   |        zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902217: funcgraph_entry:        1.027 us   |        zio_remove_child();
      z_rd_int/7-2109  [000] 501241.902219: funcgraph_entry:        0.465 us   |        spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902220: funcgraph_entry:        0.470 us   |        spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902221: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/7-2109  [000] 501241.902221: funcgraph_entry:        0.450 us   |          zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902222: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/7-2109  [000] 501241.902223: funcgraph_entry:        0.456 us   |            spa_writeable();
      z_rd_int/7-2109  [000] 501241.902224: funcgraph_exit:         1.669 us   |          }
      z_rd_int/7-2109  [000] 501241.902224: funcgraph_exit:         3.531 us   |        }
      z_rd_int/7-2109  [000] 501241.902224: funcgraph_entry:        0.467 us   |        spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902225: funcgraph_entry:        0.517 us   |        spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902226: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/7-2109  [000] 501241.902227: funcgraph_entry:        0.899 us   |          zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902228: funcgraph_entry:        0.680 us   |          spa_config_exit();
      z_rd_int/7-2109  [000] 501241.902230: funcgraph_entry:        0.587 us   |          vdev_mirror_map_free();
      z_rd_int/7-2109  [000] 501241.902231: funcgraph_exit:         4.132 us   |        }
      z_rd_int/7-2109  [000] 501241.902231: funcgraph_entry:        0.425 us   |        spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902232: funcgraph_entry:        0.476 us   |        spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902233: funcgraph_entry:                   |        zio_done() {
      z_rd_int/7-2109  [000] 501241.902233: funcgraph_entry:        0.440 us   |          zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902234: funcgraph_entry:        0.444 us   |          zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902235: funcgraph_entry:        0.446 us   |          zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902236: funcgraph_entry:        0.446 us   |          zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902237: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/7-2109  [000] 501241.902237: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/7-2109  [000] 501241.902238: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/7-2109  [000] 501241.902238: funcgraph_entry:      + 45.252 us  |                lzjb_decompress();
      z_rd_int/7-2109  [000] 501241.902284: funcgraph_exit:       + 46.201 us  |              }
      z_rd_int/7-2109  [000] 501241.902285: funcgraph_exit:       + 47.107 us  |            }
      z_rd_int/7-2109  [000] 501241.902285: funcgraph_entry:        0.736 us   |            zio_buf_free();
      z_rd_int/7-2109  [000] 501241.902286: funcgraph_exit:       + 49.499 us  |          }
      z_rd_int/7-2109  [000] 501241.902287: funcgraph_entry:        0.463 us   |          vdev_stat_update();
      z_rd_int/7-2109  [000] 501241.902288: funcgraph_entry:        0.456 us   |          zio_gang_tree_free();
      z_rd_int/7-2109  [000] 501241.902289: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/7-2109  [000] 501241.902289: funcgraph_entry:        1.442 us   |            buf_hash_find();
      z_rd_int/7-2109  [000] 501241.902291: funcgraph_entry:        0.496 us   |            arc_cksum_compute();
      z_rd_int/7-2109  [000] 501241.902293: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/7-2109  [000] 501241.902294: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/7-2109  [000] 501241.902294: funcgraph_entry:        0.673 us   |                arc_released();
      z_rd_int/7-2109  [000] 501241.902295: funcgraph_entry:        0.473 us   |                arc_set_callback();
      z_rd_int/7-2109  [000] 501241.902296: funcgraph_exit:         2.692 us   |              }
      z_rd_int/7-2109  [000] 501241.902297: funcgraph_entry:        0.623 us   |              dbuf_rele_and_unlock();
      z_rd_int/7-2109  [000] 501241.902298: funcgraph_exit:         5.242 us   |            }
      z_rd_int/7-2109  [000] 501241.902299: funcgraph_exit:       + 10.025 us  |          }
      z_rd_int/7-2109  [000] 501241.902299: funcgraph_entry:        0.507 us   |          zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902300: funcgraph_entry:        0.450 us   |          zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902301: funcgraph_entry:        1.017 us   |          zio_remove_child();
      z_rd_int/7-2109  [000] 501241.902303: funcgraph_entry:        0.536 us   |          spa_get_dsl();
      z_rd_int/7-2109  [000] 501241.902304: funcgraph_entry:        0.490 us   |          spa_is_initializing();
      z_rd_int/7-2109  [000] 501241.902305: funcgraph_entry:                   |          zio_done() {
      z_rd_int/7-2109  [000] 501241.902305: funcgraph_entry:        0.520 us   |            zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902306: funcgraph_entry:        0.486 us   |            zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902307: funcgraph_entry:        0.456 us   |            zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902308: funcgraph_entry:        0.450 us   |            zio_wait_for_children();
      z_rd_int/7-2109  [000] 501241.902309: funcgraph_entry:        0.423 us   |            zio_pop_transforms();
      z_rd_int/7-2109  [000] 501241.902310: funcgraph_entry:        0.426 us   |            vdev_stat_update();
      z_rd_int/7-2109  [000] 501241.902311: funcgraph_entry:        0.422 us   |            zio_gang_tree_free();
      z_rd_int/7-2109  [000] 501241.902312: funcgraph_entry:        0.417 us   |            zio_walk_parents();
      z_rd_int/7-2109  [000] 501241.902315: funcgraph_exit:         9.755 us   |          }
      z_rd_int/7-2109  [000] 501241.902315: funcgraph_exit:       + 82.409 us  |        }
      z_rd_int/7-2109  [000] 501241.902316: funcgraph_exit:       ! 112.078 us |      }
      z_rd_int/7-2109  [000] 501241.902316: funcgraph_exit:       ! 137.657 us |    }
      z_rd_int/7-2109  [000] 501241.902317: funcgraph_exit:       ! 158.203 us |  }
      z_rd_int/8-2110  [000] 501241.902545: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/8-2110  [000] 501241.902546: funcgraph_entry:        0.557 us   |    spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902547: funcgraph_entry:        0.467 us   |    spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902548: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/8-2110  [000] 501241.902548: funcgraph_entry:        0.662 us   |      zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902550: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/8-2110  [000] 501241.902551: funcgraph_entry:        0.857 us   |        vdev_queue_io_to_issue();
      z_rd_int/8-2110  [000] 501241.902553: funcgraph_exit:         3.014 us   |      }
      z_rd_int/8-2110  [000] 501241.902553: funcgraph_entry:        0.557 us   |      vdev_disk_io_done();
      z_rd_int/8-2110  [000] 501241.902554: funcgraph_exit:         6.573 us   |    }
      z_rd_int/8-2110  [000] 501241.902555: funcgraph_entry:        0.520 us   |    spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902556: funcgraph_entry:        0.470 us   |    spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902557: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/8-2110  [000] 501241.902557: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902558: funcgraph_exit:         1.546 us   |    }
      z_rd_int/8-2110  [000] 501241.902559: funcgraph_entry:        0.469 us   |    spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902560: funcgraph_entry:        0.514 us   |    spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902561: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/8-2110  [000] 501241.902561: funcgraph_entry:        1.144 us   |      zio_checksum_error();
      z_rd_int/8-2110  [000] 501241.902563: funcgraph_exit:         2.209 us   |    }
      z_rd_int/8-2110  [000] 501241.902563: funcgraph_entry:        0.547 us   |    spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902564: funcgraph_entry:        0.502 us   |    spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902565: funcgraph_entry:                   |    zio_done() {
      z_rd_int/8-2110  [000] 501241.902566: funcgraph_entry:        0.630 us   |      zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902567: funcgraph_entry:        0.570 us   |      zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902568: funcgraph_entry:        0.567 us   |      zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902569: funcgraph_entry:        0.513 us   |      zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902570: funcgraph_entry:        0.520 us   |      zio_pop_transforms();
      z_rd_int/8-2110  [000] 501241.902571: funcgraph_entry:        0.810 us   |      vdev_stat_update();
      z_rd_int/8-2110  [000] 501241.902572: funcgraph_entry:        0.480 us   |      zio_gang_tree_free();
      z_rd_int/8-2110  [000] 501241.902573: funcgraph_entry:        0.610 us   |      vdev_tier_child_done();
      z_rd_int/8-2110  [000] 501241.902575: funcgraph_entry:        0.535 us   |      zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902576: funcgraph_entry:        0.480 us   |      zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902577: funcgraph_entry:        1.133 us   |      zio_remove_child();
      z_rd_int/8-2110  [000] 501241.902579: funcgraph_entry:        0.493 us   |      spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902580: funcgraph_entry:        0.474 us   |      spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902581: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/8-2110  [000] 501241.902581: funcgraph_entry:        0.532 us   |        zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902582: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/8-2110  [000] 501241.902583: funcgraph_entry:        0.622 us   |          spa_writeable();
      z_rd_int/8-2110  [000] 501241.902584: funcgraph_exit:         1.692 us   |        }
      z_rd_int/8-2110  [000] 501241.902584: funcgraph_exit:         3.905 us   |      }
      z_rd_int/8-2110  [000] 501241.902585: funcgraph_entry:        0.536 us   |      spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902586: funcgraph_entry:        0.473 us   |      spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902587: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/8-2110  [000] 501241.902588: funcgraph_entry:        1.146 us   |        zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902589: funcgraph_entry:        1.766 us   |        vdev_tier_map_free();
      z_rd_int/8-2110  [000] 501241.902591: funcgraph_exit:         4.321 us   |      }
      z_rd_int/8-2110  [000] 501241.902592: funcgraph_entry:        0.566 us   |      spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902593: funcgraph_entry:        0.490 us   |      spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902594: funcgraph_entry:                   |      zio_done() {
      z_rd_int/8-2110  [000] 501241.902594: funcgraph_entry:        0.560 us   |        zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902595: funcgraph_entry:        0.632 us   |        zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902596: funcgraph_entry:        0.594 us   |        zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902597: funcgraph_entry:        0.572 us   |        zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902598: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/8-2110  [000] 501241.902599: funcgraph_entry:        0.593 us   |          zio_subblock();
      z_rd_int/8-2110  [000] 501241.902600: funcgraph_entry:        0.933 us   |          zio_buf_free();
      z_rd_int/8-2110  [000] 501241.902602: funcgraph_exit:         3.588 us   |        }
      z_rd_int/8-2110  [000] 501241.902603: funcgraph_entry:        0.737 us   |        vdev_stat_update();
      z_rd_int/8-2110  [000] 501241.902604: funcgraph_entry:        0.493 us   |        zio_gang_tree_free();
      z_rd_int/8-2110  [000] 501241.902605: funcgraph_entry:        0.510 us   |        vdev_mirror_child_done();
      z_rd_int/8-2110  [000] 501241.902606: funcgraph_entry:        0.550 us   |        zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902607: funcgraph_entry:        0.550 us   |        zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902608: funcgraph_entry:        1.180 us   |        zio_remove_child();
      z_rd_int/8-2110  [000] 501241.902610: funcgraph_entry:        0.566 us   |        spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902611: funcgraph_entry:        0.550 us   |        spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902612: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/8-2110  [000] 501241.902613: funcgraph_entry:        0.520 us   |          zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902614: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/8-2110  [000] 501241.902614: funcgraph_entry:        0.507 us   |            spa_writeable();
      z_rd_int/8-2110  [000] 501241.902615: funcgraph_exit:         1.703 us   |          }
      z_rd_int/8-2110  [000] 501241.902616: funcgraph_exit:         3.839 us   |        }
      z_rd_int/8-2110  [000] 501241.902616: funcgraph_entry:        0.507 us   |        spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902617: funcgraph_entry:        0.483 us   |        spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902618: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/8-2110  [000] 501241.902619: funcgraph_entry:        0.550 us   |          zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902620: funcgraph_entry:        0.656 us   |          spa_config_exit();
      z_rd_int/8-2110  [000] 501241.902621: funcgraph_entry:        0.596 us   |          vdev_mirror_map_free();
      z_rd_int/8-2110  [000] 501241.902622: funcgraph_exit:         3.955 us   |        }
      z_rd_int/8-2110  [000] 501241.902623: funcgraph_entry:        0.483 us   |        spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902624: funcgraph_entry:        0.562 us   |        spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902625: funcgraph_entry:                   |        zio_done() {
      z_rd_int/8-2110  [000] 501241.902625: funcgraph_entry:        0.573 us   |          zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902626: funcgraph_entry:        0.580 us   |          zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902628: funcgraph_entry:        0.570 us   |          zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902629: funcgraph_entry:        0.587 us   |          zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902630: funcgraph_entry:        0.583 us   |          zio_pop_transforms();
      z_rd_int/8-2110  [000] 501241.902631: funcgraph_entry:        0.583 us   |          vdev_stat_update();
      z_rd_int/8-2110  [000] 501241.902632: funcgraph_entry:        0.563 us   |          zio_gang_tree_free();
      z_rd_int/8-2110  [000] 501241.902633: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/8-2110  [000] 501241.902634: funcgraph_entry:        1.413 us   |            buf_hash_find();
      z_rd_int/8-2110  [000] 501241.902636: funcgraph_entry:        0.563 us   |            arc_cksum_compute();
      z_rd_int/8-2110  [000] 501241.902637: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/8-2110  [000] 501241.902638: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/8-2110  [000] 501241.902639: funcgraph_entry:        1.020 us   |                arc_released();
      z_rd_int/8-2110  [000] 501241.902640: funcgraph_entry:        0.539 us   |                arc_set_callback();
      z_rd_int/8-2110  [000] 501241.902641: funcgraph_exit:         3.404 us   |              }
      z_rd_int/8-2110  [000] 501241.902642: funcgraph_entry:        0.584 us   |              dbuf_rele_and_unlock();
      z_rd_int/8-2110  [000] 501241.902643: funcgraph_exit:         5.983 us   |            }
      z_rd_int/8-2110  [000] 501241.902644: funcgraph_exit:       + 10.799 us  |          }
      z_rd_int/8-2110  [000] 501241.902644: funcgraph_entry:        0.522 us   |          zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902645: funcgraph_entry:        0.576 us   |          zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902646: funcgraph_entry:        1.003 us   |          zio_remove_child();
      z_rd_int/8-2110  [000] 501241.902648: funcgraph_entry:        0.563 us   |          spa_get_dsl();
      z_rd_int/8-2110  [000] 501241.902649: funcgraph_entry:        0.557 us   |          spa_is_initializing();
      z_rd_int/8-2110  [000] 501241.902650: funcgraph_entry:                   |          zio_done() {
      z_rd_int/8-2110  [000] 501241.902651: funcgraph_entry:        0.659 us   |            zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902652: funcgraph_entry:        0.634 us   |            zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902653: funcgraph_entry:        0.609 us   |            zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902654: funcgraph_entry:        0.530 us   |            zio_wait_for_children();
      z_rd_int/8-2110  [000] 501241.902655: funcgraph_entry:        0.547 us   |            zio_pop_transforms();
      z_rd_int/8-2110  [000] 501241.902656: funcgraph_entry:        0.560 us   |            vdev_stat_update();
      z_rd_int/8-2110  [000] 501241.902657: funcgraph_entry:        0.556 us   |            zio_gang_tree_free();
      z_rd_int/8-2110  [000] 501241.902658: funcgraph_entry:        0.523 us   |            zio_walk_parents();
      z_rd_int/8-2110  [000] 501241.902661: funcgraph_exit:       + 10.854 us  |          }
      z_rd_int/8-2110  [000] 501241.902662: funcgraph_exit:       + 37.022 us  |        }
      z_rd_int/8-2110  [000] 501241.902662: funcgraph_exit:       + 68.604 us  |      }
      z_rd_int/8-2110  [000] 501241.902663: funcgraph_exit:       + 97.550 us  |    }
      z_rd_int/8-2110  [000] 501241.902663: funcgraph_exit:       ! 118.565 us |  }
      z_rd_int/0-2102  [000] 501241.903189: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/0-2102  [000] 501241.903189: funcgraph_entry:        0.537 us   |    spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903190: funcgraph_entry:        0.514 us   |    spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903192: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/0-2102  [000] 501241.903192: funcgraph_entry:        0.687 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903194: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/0-2102  [000] 501241.903195: funcgraph_entry:        0.749 us   |        vdev_queue_io_to_issue();
      z_rd_int/0-2102  [000] 501241.903196: funcgraph_exit:         2.922 us   |      }
      z_rd_int/0-2102  [000] 501241.903197: funcgraph_entry:        0.576 us   |      vdev_disk_io_done();
      z_rd_int/0-2102  [000] 501241.903198: funcgraph_exit:         6.571 us   |    }
      z_rd_int/0-2102  [000] 501241.903199: funcgraph_entry:        0.494 us   |    spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903200: funcgraph_entry:        0.656 us   |    spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903201: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/0-2102  [000] 501241.903201: funcgraph_entry:        0.513 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903202: funcgraph_exit:         1.502 us   |    }
      z_rd_int/0-2102  [000] 501241.903203: funcgraph_entry:        0.513 us   |    spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903204: funcgraph_entry:        0.486 us   |    spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903205: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/0-2102  [000] 501241.903206: funcgraph_entry:        1.137 us   |      zio_checksum_error();
      z_rd_int/0-2102  [000] 501241.903208: funcgraph_exit:         2.203 us   |    }
      z_rd_int/0-2102  [000] 501241.903208: funcgraph_entry:        0.483 us   |    spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903209: funcgraph_entry:        0.503 us   |    spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903210: funcgraph_entry:                   |    zio_done() {
      z_rd_int/0-2102  [000] 501241.903211: funcgraph_entry:        0.560 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903212: funcgraph_entry:        0.567 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903213: funcgraph_entry:        0.607 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903214: funcgraph_entry:        0.584 us   |      zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903215: funcgraph_entry:        0.520 us   |      zio_pop_transforms();
      z_rd_int/0-2102  [000] 501241.903216: funcgraph_entry:        0.787 us   |      vdev_stat_update();
      z_rd_int/0-2102  [000] 501241.903218: funcgraph_entry:        0.452 us   |      zio_gang_tree_free();
      z_rd_int/0-2102  [000] 501241.903219: funcgraph_entry:        0.547 us   |      vdev_tier_child_done();
      z_rd_int/0-2102  [000] 501241.903220: funcgraph_entry:        0.575 us   |      zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903221: funcgraph_entry:        0.617 us   |      zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903222: funcgraph_entry:        1.283 us   |      zio_remove_child();
      z_rd_int/0-2102  [000] 501241.903224: funcgraph_entry:        0.482 us   |      spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903225: funcgraph_entry:        0.486 us   |      spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903226: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/0-2102  [000] 501241.903226: funcgraph_entry:        0.584 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903228: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/0-2102  [000] 501241.903228: funcgraph_entry:        0.569 us   |          spa_writeable();
      z_rd_int/0-2102  [000] 501241.903229: funcgraph_exit:         1.655 us   |        }
      z_rd_int/0-2102  [000] 501241.903230: funcgraph_exit:         3.872 us   |      }
      z_rd_int/0-2102  [000] 501241.903230: funcgraph_entry:        0.470 us   |      spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903231: funcgraph_entry:        0.490 us   |      spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903232: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/0-2102  [000] 501241.903233: funcgraph_entry:        0.606 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903234: funcgraph_entry:        0.756 us   |        vdev_tier_map_free();
      z_rd_int/0-2102  [000] 501241.903235: funcgraph_exit:         2.912 us   |      }
      z_rd_int/0-2102  [000] 501241.903235: funcgraph_entry:        0.587 us   |      spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903237: funcgraph_entry:        0.573 us   |      spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903238: funcgraph_entry:                   |      zio_done() {
      z_rd_int/0-2102  [000] 501241.903238: funcgraph_entry:        0.552 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903239: funcgraph_entry:        0.576 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903240: funcgraph_entry:        0.506 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903241: funcgraph_entry:        0.587 us   |        zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903242: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/0-2102  [000] 501241.903243: funcgraph_entry:        0.797 us   |          zio_subblock();
      z_rd_int/0-2102  [000] 501241.903244: funcgraph_entry:        0.752 us   |          zio_buf_free();
      z_rd_int/0-2102  [000] 501241.903246: funcgraph_exit:         3.486 us   |        }
      z_rd_int/0-2102  [000] 501241.903246: funcgraph_entry:        0.746 us   |        vdev_stat_update();
      z_rd_int/0-2102  [000] 501241.903248: funcgraph_entry:        0.553 us   |        zio_gang_tree_free();
      z_rd_int/0-2102  [000] 501241.903249: funcgraph_entry:        0.607 us   |        vdev_mirror_child_done();
      z_rd_int/0-2102  [000] 501241.903250: funcgraph_entry:        0.560 us   |        zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903251: funcgraph_entry:        0.610 us   |        zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903252: funcgraph_entry:        1.099 us   |        zio_remove_child();
      z_rd_int/0-2102  [000] 501241.903254: funcgraph_entry:        0.520 us   |        spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903255: funcgraph_entry:        0.520 us   |        spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903256: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/0-2102  [000] 501241.903257: funcgraph_entry:        0.573 us   |          zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903258: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/0-2102  [000] 501241.903259: funcgraph_entry:        0.516 us   |            spa_writeable();
      z_rd_int/0-2102  [000] 501241.903260: funcgraph_exit:         1.779 us   |          }
      z_rd_int/0-2102  [000] 501241.903260: funcgraph_exit:         4.391 us   |        }
      z_rd_int/0-2102  [000] 501241.903261: funcgraph_entry:        0.549 us   |        spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903262: funcgraph_entry:        0.557 us   |        spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903263: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/0-2102  [000] 501241.903263: funcgraph_entry:        0.533 us   |          zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903265: funcgraph_entry:        0.739 us   |          spa_config_exit();
      z_rd_int/0-2102  [000] 501241.903266: funcgraph_entry:        0.680 us   |          vdev_mirror_map_free();
      z_rd_int/0-2102  [000] 501241.903267: funcgraph_exit:         4.031 us   |        }
      z_rd_int/0-2102  [000] 501241.903267: funcgraph_entry:        0.517 us   |        spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903268: funcgraph_entry:        0.517 us   |        spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903270: funcgraph_entry:                   |        zio_done() {
      z_rd_int/0-2102  [000] 501241.903270: funcgraph_entry:        0.537 us   |          zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903271: funcgraph_entry:        0.620 us   |          zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903272: funcgraph_entry:        0.586 us   |          zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903273: funcgraph_entry:        0.584 us   |          zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903274: funcgraph_entry:        0.593 us   |          zio_pop_transforms();
      z_rd_int/0-2102  [000] 501241.903275: funcgraph_entry:        0.650 us   |          vdev_stat_update();
      z_rd_int/0-2102  [000] 501241.903277: funcgraph_entry:        0.533 us   |          zio_gang_tree_free();
      z_rd_int/0-2102  [000] 501241.903278: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/0-2102  [000] 501241.903278: funcgraph_entry:        1.413 us   |            buf_hash_find();
      z_rd_int/0-2102  [000] 501241.903280: funcgraph_entry:        0.597 us   |            arc_cksum_compute();
      z_rd_int/0-2102  [000] 501241.903282: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/0-2102  [000] 501241.903283: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/0-2102  [000] 501241.903283: funcgraph_entry:        0.585 us   |                arc_released();
      z_rd_int/0-2102  [000] 501241.903284: funcgraph_entry:        0.483 us   |                arc_set_callback();
      z_rd_int/0-2102  [000] 501241.903285: funcgraph_exit:         2.719 us   |              }
      z_rd_int/0-2102  [000] 501241.903286: funcgraph_entry:        0.584 us   |              dbuf_rele_and_unlock();
      z_rd_int/0-2102  [000] 501241.903287: funcgraph_exit:         5.095 us   |            }
      z_rd_int/0-2102  [000] 501241.903287: funcgraph_exit:         9.786 us   |          }
      z_rd_int/0-2102  [000] 501241.903288: funcgraph_entry:        0.503 us   |          zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903289: funcgraph_entry:        0.476 us   |          zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903290: funcgraph_entry:        1.083 us   |          zio_remove_child();
      z_rd_int/0-2102  [000] 501241.903292: funcgraph_entry:        0.504 us   |          spa_get_dsl();
      z_rd_int/0-2102  [000] 501241.903293: funcgraph_entry:        0.567 us   |          spa_is_initializing();
      z_rd_int/0-2102  [000] 501241.903294: funcgraph_entry:                   |          zio_done() {
      z_rd_int/0-2102  [000] 501241.903295: funcgraph_entry:        0.554 us   |            zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903296: funcgraph_entry:        0.589 us   |            zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903297: funcgraph_entry:        0.513 us   |            zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903298: funcgraph_entry:        0.586 us   |            zio_wait_for_children();
      z_rd_int/0-2102  [000] 501241.903299: funcgraph_entry:        0.563 us   |            zio_pop_transforms();
      z_rd_int/0-2102  [000] 501241.903300: funcgraph_entry:        0.483 us   |            vdev_stat_update();
      z_rd_int/0-2102  [000] 501241.903301: funcgraph_entry:        0.616 us   |            zio_gang_tree_free();
      z_rd_int/0-2102  [000] 501241.903302: funcgraph_entry:        0.466 us   |            zio_walk_parents();
      z_rd_int/0-2102  [000] 501241.903305: funcgraph_exit:       + 10.802 us  |          }
      z_rd_int/0-2102  [000] 501241.903306: funcgraph_exit:       + 36.037 us  |        }
      z_rd_int/0-2102  [000] 501241.903307: funcgraph_exit:       + 68.543 us  |      }
      z_rd_int/0-2102  [000] 501241.903307: funcgraph_exit:       + 97.043 us  |    }
      z_rd_int/0-2102  [000] 501241.903308: funcgraph_exit:       ! 119.172 us |  }
      z_rd_int/1-2103  [000] 501241.903576: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/1-2103  [000] 501241.903577: funcgraph_entry:        0.464 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903578: funcgraph_entry:        0.436 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903579: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/1-2103  [000] 501241.903580: funcgraph_entry:        0.546 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903581: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/1-2103  [000] 501241.903582: funcgraph_entry:        0.653 us   |        vdev_queue_io_to_issue();
      z_rd_int/1-2103  [000] 501241.903584: funcgraph_exit:         2.679 us   |      }
      z_rd_int/1-2103  [000] 501241.903584: funcgraph_entry:        0.420 us   |      vdev_disk_io_done();
      z_rd_int/1-2103  [000] 501241.903585: funcgraph_exit:         5.891 us   |    }
      z_rd_int/1-2103  [000] 501241.903585: funcgraph_entry:        0.410 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903586: funcgraph_entry:        0.433 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903587: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/1-2103  [000] 501241.903588: funcgraph_entry:        0.453 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903589: funcgraph_exit:         1.392 us   |    }
      z_rd_int/1-2103  [000] 501241.903589: funcgraph_entry:        0.413 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903590: funcgraph_entry:        0.426 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903591: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/1-2103  [000] 501241.903592: funcgraph_entry:        1.062 us   |      zio_checksum_error();
      z_rd_int/1-2103  [000] 501241.903593: funcgraph_exit:         1.959 us   |    }
      z_rd_int/1-2103  [000] 501241.903594: funcgraph_entry:        0.410 us   |    spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903594: funcgraph_entry:        0.473 us   |    spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903595: funcgraph_entry:                   |    zio_done() {
      z_rd_int/1-2103  [000] 501241.903596: funcgraph_entry:        0.436 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903597: funcgraph_entry:        0.500 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903598: funcgraph_entry:        0.443 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903598: funcgraph_entry:        0.446 us   |      zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903599: funcgraph_entry:        0.460 us   |      zio_pop_transforms();
      z_rd_int/1-2103  [000] 501241.903600: funcgraph_entry:        0.653 us   |      vdev_stat_update();
      z_rd_int/1-2103  [000] 501241.903601: funcgraph_entry:        0.413 us   |      zio_gang_tree_free();
      z_rd_int/1-2103  [000] 501241.903602: funcgraph_entry:        0.519 us   |      vdev_tier_child_done();
      z_rd_int/1-2103  [000] 501241.903604: funcgraph_entry:        0.500 us   |      zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903605: funcgraph_entry:        0.439 us   |      zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903605: funcgraph_entry:        1.180 us   |      zio_remove_child();
      z_rd_int/1-2103  [000] 501241.903607: funcgraph_entry:        0.400 us   |      spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903608: funcgraph_entry:        0.450 us   |      spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903609: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/1-2103  [000] 501241.903610: funcgraph_entry:        0.604 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903611: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/1-2103  [000] 501241.903612: funcgraph_entry:        0.467 us   |          spa_writeable();
      z_rd_int/1-2103  [000] 501241.903612: funcgraph_exit:         1.574 us   |        }
      z_rd_int/1-2103  [000] 501241.903613: funcgraph_exit:         3.632 us   |      }
      z_rd_int/1-2103  [000] 501241.903614: funcgraph_entry:        0.413 us   |      spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903615: funcgraph_entry:        0.442 us   |      spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903616: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/1-2103  [000] 501241.903616: funcgraph_entry:        0.460 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903617: funcgraph_entry:        0.660 us   |        vdev_tier_map_free();
      z_rd_int/1-2103  [000] 501241.903618: funcgraph_exit:         2.512 us   |      }
      z_rd_int/1-2103  [000] 501241.903619: funcgraph_entry:        0.419 us   |      spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903620: funcgraph_entry:        0.510 us   |      spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903621: funcgraph_entry:                   |      zio_done() {
      z_rd_int/1-2103  [000] 501241.903621: funcgraph_entry:        0.449 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903622: funcgraph_entry:        0.450 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903623: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903624: funcgraph_entry:        0.440 us   |        zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903625: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/1-2103  [000] 501241.903625: funcgraph_entry:        0.556 us   |          zio_subblock();
      z_rd_int/1-2103  [000] 501241.903626: funcgraph_entry:        0.673 us   |          zio_buf_free();
      z_rd_int/1-2103  [000] 501241.903628: funcgraph_exit:         3.171 us   |        }
      z_rd_int/1-2103  [000] 501241.903628: funcgraph_entry:        0.627 us   |        vdev_stat_update();
      z_rd_int/1-2103  [000] 501241.903629: funcgraph_entry:        0.417 us   |        zio_gang_tree_free();
      z_rd_int/1-2103  [000] 501241.903630: funcgraph_entry:        0.444 us   |        vdev_mirror_child_done();
      z_rd_int/1-2103  [000] 501241.903631: funcgraph_entry:        0.596 us   |        zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903632: funcgraph_entry:        0.416 us   |        zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903633: funcgraph_entry:        1.079 us   |        zio_remove_child();
      z_rd_int/1-2103  [000] 501241.903635: funcgraph_entry:        0.416 us   |        spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903636: funcgraph_entry:        0.493 us   |        spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903637: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/1-2103  [000] 501241.903637: funcgraph_entry:        0.439 us   |          zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903638: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/1-2103  [000] 501241.903639: funcgraph_entry:        0.510 us   |            spa_writeable();
      z_rd_int/1-2103  [000] 501241.903640: funcgraph_exit:         1.466 us   |          }
      z_rd_int/1-2103  [000] 501241.903640: funcgraph_exit:         3.352 us   |        }
      z_rd_int/1-2103  [000] 501241.903641: funcgraph_entry:        0.416 us   |        spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903642: funcgraph_entry:        0.463 us   |        spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903643: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/1-2103  [000] 501241.903643: funcgraph_entry:        0.446 us   |          zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903644: funcgraph_entry:        0.630 us   |          spa_config_exit();
      z_rd_int/1-2103  [000] 501241.903645: funcgraph_entry:        0.629 us   |          vdev_mirror_map_free();
      z_rd_int/1-2103  [000] 501241.903647: funcgraph_exit:         3.842 us   |        }
      z_rd_int/1-2103  [000] 501241.903647: funcgraph_entry:        0.410 us   |        spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903648: funcgraph_entry:        0.500 us   |        spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903649: funcgraph_entry:                   |        zio_done() {
      z_rd_int/1-2103  [000] 501241.903649: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903650: funcgraph_entry:        0.440 us   |          zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903651: funcgraph_entry:        0.490 us   |          zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903652: funcgraph_entry:        0.450 us   |          zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903653: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/1-2103  [000] 501241.903654: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/1-2103  [000] 501241.903654: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/1-2103  [000] 501241.903655: funcgraph_entry:        7.486 us   |                lzjb_decompress();
      z_rd_int/1-2103  [000] 501241.903663: funcgraph_exit:         8.536 us   |              }
      z_rd_int/1-2103  [000] 501241.903663: funcgraph_exit:         9.469 us   |            }
      z_rd_int/1-2103  [000] 501241.903664: funcgraph_entry:        0.806 us   |            zio_buf_free();
      z_rd_int/1-2103  [000] 501241.903665: funcgraph_exit:       + 12.294 us  |          }
      z_rd_int/1-2103  [000] 501241.903666: funcgraph_entry:        0.472 us   |          vdev_stat_update();
      z_rd_int/1-2103  [000] 501241.903667: funcgraph_entry:        0.417 us   |          zio_gang_tree_free();
      z_rd_int/1-2103  [000] 501241.903668: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/1-2103  [000] 501241.903668: funcgraph_entry:        1.174 us   |            buf_hash_find();
      z_rd_int/1-2103  [000] 501241.903670: funcgraph_entry:        0.429 us   |            arc_cksum_compute();
      z_rd_int/1-2103  [000] 501241.903671: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/1-2103  [000] 501241.903672: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/1-2103  [000] 501241.903672: funcgraph_entry:        0.552 us   |                arc_released();
      z_rd_int/1-2103  [000] 501241.903673: funcgraph_entry:        0.410 us   |                arc_set_callback();
      z_rd_int/1-2103  [000] 501241.903674: funcgraph_exit:         2.343 us   |              }
      z_rd_int/1-2103  [000] 501241.903675: funcgraph_entry:        0.496 us   |              dbuf_rele_and_unlock();
      z_rd_int/1-2103  [000] 501241.903675: funcgraph_exit:         4.414 us   |            }
      z_rd_int/1-2103  [000] 501241.903676: funcgraph_exit:         8.359 us   |          }
      z_rd_int/1-2103  [000] 501241.903676: funcgraph_entry:        0.587 us   |          zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903677: funcgraph_entry:        0.407 us   |          zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903678: funcgraph_entry:        0.963 us   |          zio_remove_child();
      z_rd_int/1-2103  [000] 501241.903680: funcgraph_entry:        0.410 us   |          spa_get_dsl();
      z_rd_int/1-2103  [000] 501241.903681: funcgraph_entry:        0.417 us   |          spa_is_initializing();
      z_rd_int/1-2103  [000] 501241.903682: funcgraph_entry:                   |          zio_done() {
      z_rd_int/1-2103  [000] 501241.903682: funcgraph_entry:        0.515 us   |            zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903683: funcgraph_entry:        0.450 us   |            zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903684: funcgraph_entry:        0.450 us   |            zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903685: funcgraph_entry:        0.450 us   |            zio_wait_for_children();
      z_rd_int/1-2103  [000] 501241.903686: funcgraph_entry:        0.420 us   |            zio_pop_transforms();
      z_rd_int/1-2103  [000] 501241.903687: funcgraph_entry:        0.423 us   |            vdev_stat_update();
      z_rd_int/1-2103  [000] 501241.903687: funcgraph_entry:        0.413 us   |            zio_gang_tree_free();
      z_rd_int/1-2103  [000] 501241.903688: funcgraph_entry:        0.419 us   |            zio_walk_parents();
      z_rd_int/1-2103  [000] 501241.903691: funcgraph_exit:         9.435 us   |          }
      z_rd_int/1-2103  [000] 501241.903692: funcgraph_exit:       + 42.909 us  |        }
      z_rd_int/1-2103  [000] 501241.903692: funcgraph_exit:       + 71.629 us  |      }
      z_rd_int/1-2103  [000] 501241.903693: funcgraph_exit:       + 97.436 us  |    }
      z_rd_int/1-2103  [000] 501241.903693: funcgraph_exit:       ! 116.899 us |  }
      z_rd_int/2-2104  [000] 501241.904416: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/2-2104  [000] 501241.904417: funcgraph_entry:        0.503 us   |    spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904418: funcgraph_entry:        0.433 us   |    spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904419: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/2-2104  [000] 501241.904420: funcgraph_entry:        0.646 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904421: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/2-2104  [000] 501241.904423: funcgraph_entry:        0.933 us   |        vdev_queue_io_to_issue();
      z_rd_int/2-2104  [000] 501241.904424: funcgraph_exit:         3.402 us   |      }
      z_rd_int/2-2104  [000] 501241.904425: funcgraph_entry:        0.496 us   |      vdev_disk_io_done();
      z_rd_int/2-2104  [000] 501241.904426: funcgraph_exit:         6.863 us   |    }
      z_rd_int/2-2104  [000] 501241.904427: funcgraph_entry:        0.480 us   |    spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904428: funcgraph_entry:        0.530 us   |    spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904429: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/2-2104  [000] 501241.904430: funcgraph_entry:        0.660 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904431: funcgraph_exit:         1.846 us   |    }
      z_rd_int/2-2104  [000] 501241.904432: funcgraph_entry:        0.576 us   |    spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904433: funcgraph_entry:        0.567 us   |    spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904434: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/2-2104  [000] 501241.904435: funcgraph_entry:        1.522 us   |      zio_checksum_error();
      z_rd_int/2-2104  [000] 501241.904437: funcgraph_exit:         2.712 us   |    }
      z_rd_int/2-2104  [000] 501241.904437: funcgraph_entry:        0.570 us   |    spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904438: funcgraph_entry:        0.566 us   |    spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904440: funcgraph_entry:                   |    zio_done() {
      z_rd_int/2-2104  [000] 501241.904440: funcgraph_entry:        0.623 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904441: funcgraph_entry:        0.556 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904443: funcgraph_entry:        0.670 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904444: funcgraph_entry:        0.672 us   |      zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904445: funcgraph_entry:        0.687 us   |      zio_pop_transforms();
      z_rd_int/2-2104  [000] 501241.904446: funcgraph_entry:        0.730 us   |      vdev_stat_update();
      z_rd_int/2-2104  [000] 501241.904448: funcgraph_entry:        0.579 us   |      zio_gang_tree_free();
      z_rd_int/2-2104  [000] 501241.904463: funcgraph_entry:        0.633 us   |      vdev_tier_child_done();
      z_rd_int/2-2104  [000] 501241.904472: funcgraph_entry:        0.666 us   |      zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904474: funcgraph_entry:        0.614 us   |      zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904475: funcgraph_entry:        1.510 us   |      zio_remove_child();
      z_rd_int/2-2104  [000] 501241.904477: funcgraph_entry:        0.547 us   |      spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904478: funcgraph_entry:        0.542 us   |      spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904479: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/2-2104  [000] 501241.904480: funcgraph_entry:        0.713 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904482: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/2-2104  [000] 501241.904482: funcgraph_entry:        0.557 us   |          spa_writeable();
      z_rd_int/2-2104  [000] 501241.904483: funcgraph_exit:         1.856 us   |        }
      z_rd_int/2-2104  [000] 501241.904484: funcgraph_exit:         4.395 us   |      }
      z_rd_int/2-2104  [000] 501241.904484: funcgraph_entry:        0.496 us   |      spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904485: funcgraph_entry:        0.570 us   |      spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904487: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/2-2104  [000] 501241.904487: funcgraph_entry:        0.687 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904489: funcgraph_entry:        0.939 us   |        vdev_tier_map_free();
      z_rd_int/2-2104  [000] 501241.904490: funcgraph_exit:         3.458 us   |      }
      z_rd_int/2-2104  [000] 501241.904491: funcgraph_entry:        0.639 us   |      spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904492: funcgraph_entry:        0.600 us   |      spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904493: funcgraph_entry:                   |      zio_done() {
      z_rd_int/2-2104  [000] 501241.904494: funcgraph_entry:        0.703 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904495: funcgraph_entry:        0.675 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904496: funcgraph_entry:        0.710 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904498: funcgraph_entry:        0.644 us   |        zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904499: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/2-2104  [000] 501241.904500: funcgraph_entry:        1.134 us   |          zio_subblock();
      z_rd_int/2-2104  [000] 501241.904501: funcgraph_entry:        0.893 us   |          zio_buf_free();
      z_rd_int/2-2104  [000] 501241.904503: funcgraph_exit:         4.465 us   |        }
      z_rd_int/2-2104  [000] 501241.904504: funcgraph_entry:        0.770 us   |        vdev_stat_update();
      z_rd_int/2-2104  [000] 501241.904506: funcgraph_entry:        1.135 us   |        zio_gang_tree_free();
      z_rd_int/2-2104  [000] 501241.904507: funcgraph_entry:        0.573 us   |        vdev_mirror_child_done();
      z_rd_int/2-2104  [000] 501241.904508: funcgraph_entry:        0.524 us   |        zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904509: funcgraph_entry:        0.469 us   |        zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904510: funcgraph_entry:        1.197 us   |        zio_remove_child();
      z_rd_int/2-2104  [000] 501241.904512: funcgraph_entry:        0.473 us   |        spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904513: funcgraph_entry:        0.450 us   |        spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904514: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/2-2104  [000] 501241.904514: funcgraph_entry:        0.526 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904515: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/2-2104  [000] 501241.904516: funcgraph_entry:        0.460 us   |            spa_writeable();
      z_rd_int/2-2104  [000] 501241.904517: funcgraph_exit:         1.542 us   |          }
      z_rd_int/2-2104  [000] 501241.904517: funcgraph_exit:         3.603 us   |        }
      z_rd_int/2-2104  [000] 501241.904518: funcgraph_entry:        0.469 us   |        spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904519: funcgraph_entry:        0.453 us   |        spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904520: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/2-2104  [000] 501241.904520: funcgraph_entry:        0.516 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904521: funcgraph_entry:        0.682 us   |          spa_config_exit();
      z_rd_int/2-2104  [000] 501241.904522: funcgraph_entry:        0.644 us   |          vdev_mirror_map_free();
      z_rd_int/2-2104  [000] 501241.904524: funcgraph_exit:         3.979 us   |        }
      z_rd_int/2-2104  [000] 501241.904524: funcgraph_entry:        0.470 us   |        spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904525: funcgraph_entry:        0.440 us   |        spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904526: funcgraph_entry:                   |        zio_done() {
      z_rd_int/2-2104  [000] 501241.904526: funcgraph_entry:        0.516 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904527: funcgraph_entry:        0.499 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904528: funcgraph_entry:        0.540 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904529: funcgraph_entry:        0.510 us   |          zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904530: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/2-2104  [000] 501241.904531: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/2-2104  [000] 501241.904532: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/2-2104  [000] 501241.904532: funcgraph_entry:      + 42.959 us  |                lzjb_decompress();
      z_rd_int/2-2104  [000] 501241.904576: funcgraph_exit:       + 44.018 us  |              }
      z_rd_int/2-2104  [000] 501241.904576: funcgraph_exit:       + 45.031 us  |            }
      z_rd_int/2-2104  [000] 501241.904577: funcgraph_entry:        0.716 us   |            zio_buf_free();
      z_rd_int/2-2104  [000] 501241.904578: funcgraph_exit:       + 47.577 us  |          }
      z_rd_int/2-2104  [000] 501241.904578: funcgraph_entry:        0.490 us   |          vdev_stat_update();
      z_rd_int/2-2104  [000] 501241.904579: funcgraph_entry:        0.534 us   |          zio_gang_tree_free();
      z_rd_int/2-2104  [000] 501241.904580: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/2-2104  [000] 501241.904581: funcgraph_entry:        1.384 us   |            buf_hash_find();
      z_rd_int/2-2104  [000] 501241.904583: funcgraph_entry:        0.487 us   |            arc_cksum_compute();
      z_rd_int/2-2104  [000] 501241.904585: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/2-2104  [000] 501241.904585: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/2-2104  [000] 501241.904586: funcgraph_entry:        0.657 us   |                arc_released();
      z_rd_int/2-2104  [000] 501241.904587: funcgraph_entry:        0.486 us   |                arc_set_callback();
      z_rd_int/2-2104  [000] 501241.904588: funcgraph_exit:         2.802 us   |              }
      z_rd_int/2-2104  [000] 501241.904589: funcgraph_entry:        0.583 us   |              dbuf_rele_and_unlock();
      z_rd_int/2-2104  [000] 501241.904590: funcgraph_exit:         5.131 us   |            }
      z_rd_int/2-2104  [000] 501241.904590: funcgraph_exit:         9.985 us   |          }
      z_rd_int/2-2104  [000] 501241.904591: funcgraph_entry:        0.582 us   |          zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904592: funcgraph_entry:        0.490 us   |          zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904593: funcgraph_entry:        1.402 us   |          zio_remove_child();
      z_rd_int/2-2104  [000] 501241.904595: funcgraph_entry:        0.499 us   |          spa_get_dsl();
      z_rd_int/2-2104  [000] 501241.904596: funcgraph_entry:        0.863 us   |          spa_is_initializing();
      z_rd_int/2-2104  [000] 501241.904597: funcgraph_entry:                   |          zio_done() {
      z_rd_int/2-2104  [000] 501241.904598: funcgraph_entry:        0.663 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904599: funcgraph_entry:        0.635 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904600: funcgraph_entry:        0.584 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904602: funcgraph_entry:        0.649 us   |            zio_wait_for_children();
      z_rd_int/2-2104  [000] 501241.904603: funcgraph_entry:        0.660 us   |            zio_pop_transforms();
      z_rd_int/2-2104  [000] 501241.904604: funcgraph_entry:        0.540 us   |            vdev_stat_update();
      z_rd_int/2-2104  [000] 501241.904605: funcgraph_entry:        0.643 us   |            zio_gang_tree_free();
      z_rd_int/2-2104  [000] 501241.904606: funcgraph_entry:        0.603 us   |            zio_walk_parents();
      z_rd_int/2-2104  [000] 501241.904610: funcgraph_exit:       + 12.291 us  |          }
      z_rd_int/2-2104  [000] 501241.904611: funcgraph_exit:       + 84.673 us  |        }
      z_rd_int/2-2104  [000] 501241.904611: funcgraph_exit:       ! 118.123 us |      }
      z_rd_int/2-2104  [000] 501241.904612: funcgraph_exit:       ! 165.968 us |    }
      z_rd_int/2-2104  [000] 501241.904613: funcgraph_exit:       ! 190.201 us |  }
      z_rd_int/3-2105  [000] 501241.904840: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/3-2105  [000] 501241.904840: funcgraph_entry:        0.266 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904841: funcgraph_entry:        0.264 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904841: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/3-2105  [000] 501241.904857: funcgraph_entry:        0.667 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904858: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/3-2105  [000] 501241.904859: funcgraph_entry:        0.633 us   |        vdev_queue_io_to_issue();
      z_rd_int/3-2105  [000] 501241.904861: funcgraph_exit:         2.876 us   |      }
      z_rd_int/3-2105  [000] 501241.904861: funcgraph_entry:        0.505 us   |      vdev_disk_io_done();
      z_rd_int/3-2105  [000] 501241.904862: funcgraph_exit:       + 20.767 us  |    }
      z_rd_int/3-2105  [000] 501241.904863: funcgraph_entry:        0.497 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904864: funcgraph_entry:        0.453 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904865: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/3-2105  [000] 501241.904865: funcgraph_entry:        0.509 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904866: funcgraph_exit:         1.496 us   |    }
      z_rd_int/3-2105  [000] 501241.904867: funcgraph_entry:        0.470 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904868: funcgraph_entry:        0.482 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904869: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/3-2105  [000] 501241.904869: funcgraph_entry:        2.126 us   |      zio_checksum_error();
      z_rd_int/3-2105  [000] 501241.904872: funcgraph_exit:         3.294 us   |    }
      z_rd_int/3-2105  [000] 501241.904872: funcgraph_entry:        0.580 us   |    spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904873: funcgraph_entry:        0.472 us   |    spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904874: funcgraph_entry:                   |    zio_done() {
      z_rd_int/3-2105  [000] 501241.904875: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904876: funcgraph_entry:        0.502 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904877: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904878: funcgraph_entry:        0.526 us   |      zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904879: funcgraph_entry:        0.550 us   |      zio_pop_transforms();
      z_rd_int/3-2105  [000] 501241.904880: funcgraph_entry:        0.782 us   |      vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.904882: funcgraph_entry:        1.116 us   |      zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.904883: funcgraph_entry:        0.704 us   |      vdev_tier_child_done();
      z_rd_int/3-2105  [000] 501241.904884: funcgraph_entry:        0.610 us   |      zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.904886: funcgraph_entry:        0.547 us   |      zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.904887: funcgraph_entry:        1.470 us   |      zio_remove_child();
      z_rd_int/3-2105  [000] 501241.904889: funcgraph_entry:        0.620 us   |      spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904890: funcgraph_entry:        0.682 us   |      spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904891: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/3-2105  [000] 501241.904892: funcgraph_entry:        0.632 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904893: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/3-2105  [000] 501241.904894: funcgraph_entry:        0.643 us   |          spa_writeable();
      z_rd_int/3-2105  [000] 501241.904895: funcgraph_exit:         1.886 us   |        }
      z_rd_int/3-2105  [000] 501241.904896: funcgraph_exit:         4.448 us   |      }
      z_rd_int/3-2105  [000] 501241.904896: funcgraph_entry:        0.622 us   |      spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904898: funcgraph_entry:        0.687 us   |      spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904899: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/3-2105  [000] 501241.904899: funcgraph_entry:        0.673 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904901: funcgraph_entry:        1.007 us   |        vdev_tier_map_free();
      z_rd_int/3-2105  [000] 501241.904902: funcgraph_exit:         3.389 us   |      }
      z_rd_int/3-2105  [000] 501241.904903: funcgraph_entry:        0.574 us   |      spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904904: funcgraph_entry:        0.633 us   |      spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904905: funcgraph_entry:                   |      zio_done() {
      z_rd_int/3-2105  [000] 501241.904906: funcgraph_entry:        0.597 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904907: funcgraph_entry:        0.640 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904908: funcgraph_entry:        0.589 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904909: funcgraph_entry:        0.634 us   |        zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904911: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/3-2105  [000] 501241.904911: funcgraph_entry:        1.203 us   |          zio_subblock();
      z_rd_int/3-2105  [000] 501241.904913: funcgraph_entry:        0.873 us   |          zio_buf_free();
      z_rd_int/3-2105  [000] 501241.904915: funcgraph_exit:         4.247 us   |        }
      z_rd_int/3-2105  [000] 501241.904915: funcgraph_entry:        0.797 us   |        vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.904917: funcgraph_entry:        0.639 us   |        zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.904918: funcgraph_entry:        0.567 us   |        vdev_mirror_child_done();
      z_rd_int/3-2105  [000] 501241.904919: funcgraph_entry:        0.626 us   |        zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.904920: funcgraph_entry:        0.745 us   |        zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.904922: funcgraph_entry:        1.419 us   |        zio_remove_child();
      z_rd_int/3-2105  [000] 501241.904924: funcgraph_entry:        0.640 us   |        spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904925: funcgraph_entry:        0.666 us   |        spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904926: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/3-2105  [000] 501241.904927: funcgraph_entry:        0.673 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904928: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/3-2105  [000] 501241.904929: funcgraph_entry:        0.599 us   |            spa_writeable();
      z_rd_int/3-2105  [000] 501241.904930: funcgraph_exit:         1.779 us   |          }
      z_rd_int/3-2105  [000] 501241.904931: funcgraph_exit:         4.392 us   |        }
      z_rd_int/3-2105  [000] 501241.904931: funcgraph_entry:        0.590 us   |        spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904933: funcgraph_entry:        0.636 us   |        spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904934: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/3-2105  [000] 501241.904934: funcgraph_entry:        0.587 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904936: funcgraph_entry:        0.760 us   |          spa_config_exit();
      z_rd_int/3-2105  [000] 501241.904937: funcgraph_entry:        0.712 us   |          vdev_mirror_map_free();
      z_rd_int/3-2105  [000] 501241.904938: funcgraph_exit:         4.694 us   |        }
      z_rd_int/3-2105  [000] 501241.904939: funcgraph_entry:        0.595 us   |        spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.904940: funcgraph_entry:        0.607 us   |        spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.904942: funcgraph_entry:                   |        zio_done() {
      z_rd_int/3-2105  [000] 501241.904942: funcgraph_entry:        0.640 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904943: funcgraph_entry:        0.639 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904944: funcgraph_entry:        0.577 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904946: funcgraph_entry:        0.603 us   |          zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.904947: funcgraph_entry:                   |          zio_pop_transforms() {
      z_rd_int/3-2105  [000] 501241.904948: funcgraph_entry:                   |            zio_decompress() {
      z_rd_int/3-2105  [000] 501241.904948: funcgraph_entry:                   |              zio_decompress_data() {
      z_rd_int/3-2105  [000] 501241.904949: funcgraph_entry:      + 48.940 us  |                lzjb_decompress();
      z_rd_int/3-2105  [000] 501241.904998: funcgraph_exit:       + 50.169 us  |              }
      z_rd_int/3-2105  [000] 501241.904999: funcgraph_exit:       + 51.465 us  |            }
      z_rd_int/3-2105  [000] 501241.905000: funcgraph_entry:        0.990 us   |            zio_buf_free();
      z_rd_int/3-2105  [000] 501241.905001: funcgraph_exit:       + 54.473 us  |          }
      z_rd_int/3-2105  [000] 501241.905002: funcgraph_entry:        0.746 us   |          vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.905003: funcgraph_entry:        0.563 us   |          zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.905005: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/3-2105  [000] 501241.905006: funcgraph_entry:        1.626 us   |            buf_hash_find();
      z_rd_int/3-2105  [000] 501241.905008: funcgraph_entry:        0.590 us   |            arc_cksum_compute();
      z_rd_int/3-2105  [000] 501241.905010: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/3-2105  [000] 501241.905010: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/3-2105  [000] 501241.905011: funcgraph_entry:        0.703 us   |                arc_released();
      z_rd_int/3-2105  [000] 501241.905012: funcgraph_entry:        0.563 us   |                arc_set_callback();
      z_rd_int/3-2105  [000] 501241.905014: funcgraph_exit:         3.254 us   |              }
      z_rd_int/3-2105  [000] 501241.905014: funcgraph_entry:        0.626 us   |              dbuf_rele_and_unlock();
      z_rd_int/3-2105  [000] 501241.905015: funcgraph_exit:         5.874 us   |            }
      z_rd_int/3-2105  [000] 501241.905016: funcgraph_exit:       + 11.235 us  |          }
      z_rd_int/3-2105  [000] 501241.905017: funcgraph_entry:        0.686 us   |          zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.905018: funcgraph_entry:        0.634 us   |          zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.905019: funcgraph_entry:        1.194 us   |          zio_remove_child();
      z_rd_int/3-2105  [000] 501241.905021: funcgraph_entry:        0.577 us   |          spa_get_dsl();
      z_rd_int/3-2105  [000] 501241.905023: funcgraph_entry:        0.610 us   |          spa_is_initializing();
      z_rd_int/3-2105  [000] 501241.905024: funcgraph_entry:                   |          zio_done() {
      z_rd_int/3-2105  [000] 501241.905024: funcgraph_entry:        0.687 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.905026: funcgraph_entry:        0.600 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.905027: funcgraph_entry:        0.655 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.905028: funcgraph_entry:        0.600 us   |            zio_wait_for_children();
      z_rd_int/3-2105  [000] 501241.905029: funcgraph_entry:        0.592 us   |            zio_pop_transforms();
      z_rd_int/3-2105  [000] 501241.905030: funcgraph_entry:        0.643 us   |            vdev_stat_update();
      z_rd_int/3-2105  [000] 501241.905032: funcgraph_entry:        0.610 us   |            zio_gang_tree_free();
      z_rd_int/3-2105  [000] 501241.905033: funcgraph_entry:        0.607 us   |            zio_walk_parents();
      z_rd_int/3-2105  [000] 501241.905036: funcgraph_exit:       + 12.427 us  |          }
      z_rd_int/3-2105  [000] 501241.905037: funcgraph_exit:       + 95.570 us  |        }
      z_rd_int/3-2105  [000] 501241.905038: funcgraph_exit:       ! 132.565 us |      }
      z_rd_int/3-2105  [000] 501241.905038: funcgraph_exit:       ! 164.047 us |    }
      z_rd_int/3-2105  [000] 501241.905039: funcgraph_exit:       ! 199.144 us |  }
      z_rd_int/4-2106  [000] 501241.907287: funcgraph_entry:                   |  zio_execute() {
      z_rd_int/4-2106  [000] 501241.907287: funcgraph_entry:        0.469 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907288: funcgraph_entry:        0.563 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907289: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_rd_int/4-2106  [000] 501241.907290: funcgraph_entry:        0.653 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907291: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_rd_int/4-2106  [000] 501241.907293: funcgraph_entry:        0.739 us   |        vdev_queue_io_to_issue();
      z_rd_int/4-2106  [000] 501241.907294: funcgraph_exit:         2.921 us   |      }
      z_rd_int/4-2106  [000] 501241.907295: funcgraph_entry:        0.427 us   |      vdev_disk_io_done();
      z_rd_int/4-2106  [000] 501241.907296: funcgraph_exit:         6.120 us   |    }
      z_rd_int/4-2106  [000] 501241.907296: funcgraph_entry:        0.407 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907297: funcgraph_entry:        0.410 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907298: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_rd_int/4-2106  [000] 501241.907298: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907299: funcgraph_exit:         1.460 us   |    }
      z_rd_int/4-2106  [000] 501241.907300: funcgraph_entry:        0.403 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907300: funcgraph_entry:        0.460 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907301: funcgraph_entry:                   |    zio_checksum_verify() {
      z_rd_int/4-2106  [000] 501241.907302: funcgraph_entry:        1.067 us   |      zio_checksum_error();
      z_rd_int/4-2106  [000] 501241.907304: funcgraph_exit:         2.043 us   |    }
      z_rd_int/4-2106  [000] 501241.907304: funcgraph_entry:        0.423 us   |    spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907305: funcgraph_entry:        0.410 us   |    spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907306: funcgraph_entry:                   |    zio_done() {
      z_rd_int/4-2106  [000] 501241.907306: funcgraph_entry:        0.446 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907307: funcgraph_entry:        0.440 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907308: funcgraph_entry:        0.484 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907309: funcgraph_entry:        0.514 us   |      zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907310: funcgraph_entry:        0.430 us   |      zio_pop_transforms();
      z_rd_int/4-2106  [000] 501241.907311: funcgraph_entry:        0.680 us   |      vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.907312: funcgraph_entry:        0.416 us   |      zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.907313: funcgraph_entry:        0.433 us   |      vdev_tier_child_done();
      z_rd_int/4-2106  [000] 501241.907314: funcgraph_entry:        0.496 us   |      zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907315: funcgraph_entry:        0.407 us   |      zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907316: funcgraph_entry:        1.297 us   |      zio_remove_child();
      z_rd_int/4-2106  [000] 501241.907318: funcgraph_entry:        0.430 us   |      spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907319: funcgraph_entry:        0.473 us   |      spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907320: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_rd_int/4-2106  [000] 501241.907320: funcgraph_entry:        0.516 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907321: funcgraph_entry:                   |        vdev_tier_io_done() {
      z_rd_int/4-2106  [000] 501241.907322: funcgraph_entry:        0.446 us   |          spa_writeable();
      z_rd_int/4-2106  [000] 501241.907323: funcgraph_exit:         1.472 us   |        }
      z_rd_int/4-2106  [000] 501241.907323: funcgraph_exit:         3.441 us   |      }
      z_rd_int/4-2106  [000] 501241.907324: funcgraph_entry:        0.402 us   |      spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907325: funcgraph_entry:        0.403 us   |      spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907325: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_rd_int/4-2106  [000] 501241.907326: funcgraph_entry:        0.452 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907327: funcgraph_entry:        0.726 us   |        vdev_tier_map_free();
      z_rd_int/4-2106  [000] 501241.907328: funcgraph_exit:         2.539 us   |      }
      z_rd_int/4-2106  [000] 501241.907329: funcgraph_entry:        0.567 us   |      spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907330: funcgraph_entry:        0.533 us   |      spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907331: funcgraph_entry:                   |      zio_done() {
      z_rd_int/4-2106  [000] 501241.907332: funcgraph_entry:        0.636 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907333: funcgraph_entry:        0.613 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907334: funcgraph_entry:        0.573 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907335: funcgraph_entry:        0.560 us   |        zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907336: funcgraph_entry:                   |        zio_pop_transforms() {
      z_rd_int/4-2106  [000] 501241.907337: funcgraph_entry:        0.717 us   |          zio_subblock();
      z_rd_int/4-2106  [000] 501241.907338: funcgraph_entry:        0.692 us   |          zio_buf_free();
      z_rd_int/4-2106  [000] 501241.907339: funcgraph_exit:         3.388 us   |        }
      z_rd_int/4-2106  [000] 501241.907340: funcgraph_entry:        0.746 us   |        vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.907341: funcgraph_entry:        0.663 us   |        zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.907342: funcgraph_entry:        0.482 us   |        vdev_mirror_child_done();
      z_rd_int/4-2106  [000] 501241.907343: funcgraph_entry:        0.543 us   |        zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907344: funcgraph_entry:        0.559 us   |        zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907345: funcgraph_entry:        1.326 us   |        zio_remove_child();
      z_rd_int/4-2106  [000] 501241.907347: funcgraph_entry:        0.540 us   |        spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907348: funcgraph_entry:        0.459 us   |        spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907349: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_rd_int/4-2106  [000] 501241.907350: funcgraph_entry:        0.567 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907351: funcgraph_entry:                   |          vdev_mirror_io_done() {
      z_rd_int/4-2106  [000] 501241.907352: funcgraph_entry:        0.494 us   |            spa_writeable();
      z_rd_int/4-2106  [000] 501241.907353: funcgraph_exit:         1.630 us   |          }
      z_rd_int/4-2106  [000] 501241.907353: funcgraph_exit:         3.892 us   |        }
      z_rd_int/4-2106  [000] 501241.907354: funcgraph_entry:        0.527 us   |        spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907355: funcgraph_entry:        0.489 us   |        spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907356: funcgraph_entry:                   |        zio_vdev_io_assess() {
      z_rd_int/4-2106  [000] 501241.907356: funcgraph_entry:        0.539 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907358: funcgraph_entry:        0.810 us   |          spa_config_exit();
      z_rd_int/4-2106  [000] 501241.907359: funcgraph_entry:        0.699 us   |          vdev_mirror_map_free();
      z_rd_int/4-2106  [000] 501241.907360: funcgraph_exit:         4.168 us   |        }
      z_rd_int/4-2106  [000] 501241.907360: funcgraph_entry:        0.457 us   |        spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907361: funcgraph_entry:        0.493 us   |        spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907362: funcgraph_entry:                   |        zio_done() {
      z_rd_int/4-2106  [000] 501241.907363: funcgraph_entry:        0.526 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907364: funcgraph_entry:        0.510 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907365: funcgraph_entry:        0.515 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907366: funcgraph_entry:        0.517 us   |          zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907367: funcgraph_entry:        0.605 us   |          zio_pop_transforms();
      z_rd_int/4-2106  [000] 501241.907368: funcgraph_entry:        0.496 us   |          vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.907369: funcgraph_entry:        0.486 us   |          zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.907370: funcgraph_entry:                   |          arc_read_done() {
      z_rd_int/4-2106  [000] 501241.907371: funcgraph_entry:        1.399 us   |            buf_hash_find();
      z_rd_int/4-2106  [000] 501241.907373: funcgraph_entry:        0.516 us   |            arc_cksum_compute();
      z_rd_int/4-2106  [000] 501241.907374: funcgraph_entry:                   |            dbuf_read_done() {
      z_rd_int/4-2106  [000] 501241.907375: funcgraph_entry:                   |              dbuf_set_data() {
      z_rd_int/4-2106  [000] 501241.907375: funcgraph_entry:        0.690 us   |                arc_released();
      z_rd_int/4-2106  [000] 501241.907377: funcgraph_entry:        0.509 us   |                arc_set_callback();
      z_rd_int/4-2106  [000] 501241.907378: funcgraph_exit:         3.028 us   |              }
      z_rd_int/4-2106  [000] 501241.907379: funcgraph_entry:        0.613 us   |              dbuf_rele_and_unlock();
      z_rd_int/4-2106  [000] 501241.907380: funcgraph_exit:         5.737 us   |            }
      z_rd_int/4-2106  [000] 501241.907380: funcgraph_exit:       + 10.495 us  |          }
      z_rd_int/4-2106  [000] 501241.907381: funcgraph_entry:        0.507 us   |          zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907382: funcgraph_entry:        0.417 us   |          zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907383: funcgraph_entry:        1.022 us   |          zio_remove_child();
      z_rd_int/4-2106  [000] 501241.907384: funcgraph_entry:        0.407 us   |          spa_get_dsl();
      z_rd_int/4-2106  [000] 501241.907385: funcgraph_entry:        0.409 us   |          spa_is_initializing();
      z_rd_int/4-2106  [000] 501241.907386: funcgraph_entry:                   |          zio_done() {
      z_rd_int/4-2106  [000] 501241.907387: funcgraph_entry:        0.524 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907388: funcgraph_entry:        0.456 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907388: funcgraph_entry:        0.500 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907389: funcgraph_entry:        0.466 us   |            zio_wait_for_children();
      z_rd_int/4-2106  [000] 501241.907390: funcgraph_entry:        0.420 us   |            zio_pop_transforms();
      z_rd_int/4-2106  [000] 501241.907391: funcgraph_entry:        0.426 us   |            vdev_stat_update();
      z_rd_int/4-2106  [000] 501241.907392: funcgraph_entry:        0.423 us   |            zio_gang_tree_free();
      z_rd_int/4-2106  [000] 501241.907393: funcgraph_entry:        0.440 us   |            zio_walk_parents();
      z_rd_int/4-2106  [000] 501241.907396: funcgraph_exit:       + 10.135 us  |          }
      z_rd_int/4-2106  [000] 501241.907397: funcgraph_exit:       + 34.493 us  |        }
      z_rd_int/4-2106  [000] 501241.907397: funcgraph_exit:       + 66.328 us  |      }
      z_rd_int/4-2106  [000] 501241.907398: funcgraph_exit:       + 92.278 us  |    }
      z_rd_int/4-2106  [000] 501241.907398: funcgraph_exit:       ! 111.822 us |  }
