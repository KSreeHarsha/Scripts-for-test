           zpool-31988 [008] 162723.059971: funcgraph_entry:                   |            vdev_open() {
           zpool-31988 [008] 162723.059973: funcgraph_entry:                   |                vdev_open_children() {
     vdev_open/0-31989 [010] 162723.060139: funcgraph_entry:                   |  vdev_open_child() {
     vdev_open/0-31989 [010] 162723.060140: funcgraph_entry:                   |    vdev_open() {
     vdev_open/0-31989 [010] 162723.060141: funcgraph_entry:        0.663 us   |      vdev_get_min_asize();
     vdev_open/0-31989 [010] 162723.060143: funcgraph_entry:                   |      vdev_tier_open() {
     vdev_open/0-31989 [010] 162723.060144: funcgraph_entry:                   |        vdev_open_children() {
     vdev_open/0-31989 [010] 162723.060144: funcgraph_entry:                   |          vdev_uses_zvols() {
     vdev_open/0-31989 [010] 162723.060145: funcgraph_entry:        0.620 us   |            zvol_is_zvol();
     vdev_open/0-31989 [010] 162723.060146: funcgraph_entry:                   |            vdev_uses_zvols() {
     vdev_open/0-31989 [010] 162723.060147: funcgraph_entry:        7.514 us   |              zvol_is_zvol();
     vdev_open/0-31989 [010] 162723.060155: funcgraph_exit:         8.755 us   |            }
     vdev_open/0-31989 [010] 162723.060156: funcgraph_entry:                   |            vdev_uses_zvols() {
     vdev_open/0-31989 [010] 162723.060156: funcgraph_entry:        2.518 us   |              zvol_is_zvol();
     vdev_open/0-31989 [010] 162723.060159: funcgraph_exit:         3.708 us   |            }
     vdev_open/0-31989 [010] 162723.060160: funcgraph_exit:       + 15.745 us  |          }
     vdev_open/0-31990 [010] 162723.060390: funcgraph_entry:                   |  vdev_open_child() {
     vdev_open/0-31990 [010] 162723.060391: funcgraph_entry:                   |    vdev_open() {
     vdev_open/0-31990 [010] 162723.060392: funcgraph_entry:        0.913 us   |      vdev_get_min_asize();
     vdev_open/0-31990 [010] 162723.060395: funcgraph_entry:        3.992 us   |      vdev_disk_open();
     vdev_open/0-31990 [010] 162723.060400: funcgraph_entry:        0.809 us   |      vdev_set_state();
     vdev_open/0-31990 [010] 162723.060401: funcgraph_entry:                   |      vdev_set_min_asize() {
     vdev_open/0-31990 [010] 162723.060402: funcgraph_entry:        0.642 us   |        vdev_get_min_asize();
     vdev_open/0-31990 [010] 162723.060403: funcgraph_exit:         1.779 us   |      }
     vdev_open/0-31990 [010] 162723.060404: funcgraph_entry:                   |      vdev_probe() {
     vdev_open/0-31990 [010] 162723.060405: funcgraph_entry:        0.677 us   |        spa_config_held();
     vdev_open/0-31990 [010] 162723.060407: funcgraph_entry:                   |        zio_null() {
     vdev_open/0-31990 [010] 162723.060407: funcgraph_entry:        2.379 us   |          zio_create();
     vdev_open/0-31990 [010] 162723.060410: funcgraph_exit:         3.575 us   |        }
     vdev_open/0-31990 [010] 162723.060411: funcgraph_entry:        1.367 us   |        zio_buf_alloc();
     vdev_open/0-31990 [010] 162723.060413: funcgraph_entry:        0.560 us   |        vdev_label_offset();
     vdev_open/0-31990 [010] 162723.060414: funcgraph_entry:                   |        zio_read_phys() {
     vdev_open/0-31990 [010] 162723.060415: funcgraph_entry:                   |          zio_create() {
     vdev_open/0-31990 [010] 162723.060416: funcgraph_entry:        1.236 us   |            zio_add_child();
     vdev_open/0-31990 [010] 162723.060418: funcgraph_exit:         3.208 us   |          }
     vdev_open/0-31990 [010] 162723.060418: funcgraph_exit:         4.258 us   |        }
     vdev_open/0-31990 [010] 162723.060419: funcgraph_entry:                   |        zio_nowait() {
     vdev_open/0-31990 [010] 162723.060419: funcgraph_entry:        0.560 us   |          spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060421: funcgraph_entry:        0.529 us   |          spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060422: funcgraph_entry:                   |          zio_ready() {
     vdev_open/0-31990 [010] 162723.060422: funcgraph_entry:        0.629 us   |            zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060424: funcgraph_entry:        0.520 us   |            zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060425: funcgraph_entry:        0.522 us   |            zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060426: funcgraph_entry:        0.510 us   |            zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060427: funcgraph_exit:         5.344 us   |          }
     vdev_open/0-31990 [010] 162723.060428: funcgraph_entry:        0.560 us   |          spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060429: funcgraph_entry:        0.500 us   |          spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060430: funcgraph_entry:                   |          zio_vdev_io_start() {
     vdev_open/0-31990 [010] 162723.060431: funcgraph_entry:        0.549 us   |            vdev_cache_read();
     vdev_open/0-31990 [010] 162723.060432: funcgraph_entry:                   |            vdev_queue_io() {
     vdev_open/0-31990 [010] 162723.060434: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
     vdev_open/0-31990 [010] 162723.060435: funcgraph_entry:        1.143 us   |                zio_buf_alloc();
     vdev_open/0-31990 [010] 162723.060437: funcgraph_entry:        0.475 us   |                vdev_queue_timestamp_compare();
     vdev_open/0-31990 [010] 162723.060438: funcgraph_entry:        1.044 us   |                zio_buf_free();
     vdev_open/0-31990 [010] 162723.060440: funcgraph_entry:        1.047 us   |                vdev_queue_io_remove();
     vdev_open/0-31990 [010] 162723.060442: funcgraph_exit:         7.173 us   |              }
     vdev_open/0-31990 [010] 162723.060442: funcgraph_exit:       + 10.272 us  |            }
     vdev_open/0-31990 [010] 162723.060443: funcgraph_entry:        0.685 us   |            vdev_accessible();
     vdev_open/0-31990 [010] 162723.060444: funcgraph_entry:                   |            vdev_disk_io_start() {
     vdev_open/0-31990 [010] 162723.060445: funcgraph_entry:                   |              __vdev_disk_physio() {
     vdev_open/0-31990 [010] 162723.060483: funcgraph_entry:        0.794 us   |                vdev_disk_dio_put();
     vdev_open/0-31990 [010] 162723.060485: funcgraph_exit:       + 39.903 us  |              }
     vdev_open/0-31990 [010] 162723.060486: funcgraph_exit:       + 41.664 us  |            }
     vdev_open/0-31990 [010] 162723.060486: funcgraph_exit:       + 56.415 us  |          }
     vdev_open/0-31990 [010] 162723.060487: funcgraph_exit:       + 68.386 us  |        }
     vdev_open/0-31990 [010] 162723.060488: funcgraph_entry:        0.892 us   |        zio_buf_alloc();
     vdev_open/0-31990 [010] 162723.060489: funcgraph_entry:        0.593 us   |        vdev_label_offset();
     vdev_open/0-31990 [010] 162723.060490: funcgraph_entry:                   |        zio_read_phys() {
     vdev_open/0-31990 [010] 162723.060490: funcgraph_entry:                   |          zio_create() {
     vdev_open/0-31990 [010] 162723.060491: funcgraph_entry:        0.917 us   |            zio_add_child();
     vdev_open/0-31990 [010] 162723.060493: funcgraph_exit:         2.548 us   |          }
     vdev_open/0-31990 [010] 162723.060493: funcgraph_exit:         3.518 us   |        }
     vdev_open/0-31990 [010] 162723.060494: funcgraph_entry:                   |        zio_nowait() {
     vdev_open/0-31990 [010] 162723.060495: funcgraph_entry:        0.504 us   |          spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060496: funcgraph_entry:        0.523 us   |          spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060497: funcgraph_entry:                   |          zio_ready() {
     vdev_open/0-31990 [010] 162723.060497: funcgraph_entry:        0.536 us   |            zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060498: funcgraph_entry:        0.509 us   |            zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060500: funcgraph_entry:        0.503 us   |            zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060501: funcgraph_entry:        0.566 us   |            zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060502: funcgraph_exit:         4.714 us   |          }
     vdev_open/0-31990 [010] 162723.060502: funcgraph_entry:        0.476 us   |          spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060503: funcgraph_entry:        0.477 us   |          spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060504: funcgraph_entry:                   |          zio_vdev_io_start() {
     vdev_open/0-31990 [010] 162723.060505: funcgraph_entry:        0.489 us   |            vdev_cache_read();
     vdev_open/0-31990 [010] 162723.060506: funcgraph_entry:                   |            vdev_queue_io() {
     vdev_open/0-31990 [010] 162723.060507: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
     vdev_open/0-31990 [010] 162723.060507: funcgraph_entry:        0.544 us   |                zio_buf_alloc();
     vdev_open/0-31990 [010] 162723.060508: funcgraph_entry:        0.480 us   |                vdev_queue_timestamp_compare();
     vdev_open/0-31990 [010] 162723.060509: funcgraph_entry:        0.687 us   |                zio_buf_free();
     vdev_open/0-31990 [010] 162723.060510: funcgraph_entry:        0.639 us   |                vdev_queue_io_remove();
     vdev_open/0-31990 [010] 162723.060512: funcgraph_entry:        0.507 us   |                vdev_queue_offset_compare();
     vdev_open/0-31990 [010] 162723.060513: funcgraph_exit:         6.320 us   |              }
     vdev_open/0-31990 [010] 162723.060513: funcgraph_exit:         7.806 us   |            }
     vdev_open/0-31990 [010] 162723.060514: funcgraph_entry:        0.537 us   |            vdev_accessible();
     vdev_open/0-31990 [010] 162723.060515: funcgraph_entry:                   |            vdev_disk_io_start() {
     vdev_open/0-31990 [010] 162723.060515: funcgraph_entry:                   |              __vdev_disk_physio() {
     vdev_open/0-31990 [010] 162723.060522: funcgraph_entry:        0.656 us   |                vdev_disk_dio_put();
     vdev_open/0-31990 [010] 162723.060524: funcgraph_exit:         8.116 us   |              }
     vdev_open/0-31990 [010] 162723.060524: funcgraph_exit:         9.078 us   |            }
     vdev_open/0-31990 [010] 162723.060525: funcgraph_exit:       + 20.453 us  |          }
     vdev_open/0-31990 [010] 162723.060525: funcgraph_exit:       + 31.101 us  |        }
     vdev_open/0-31990 [010] 162723.060526: funcgraph_entry:        0.633 us   |        zio_buf_alloc();
     vdev_open/0-31990 [010] 162723.060527: funcgraph_entry:        0.566 us   |        vdev_label_offset();
     vdev_open/0-31990 [010] 162723.060528: funcgraph_entry:                   |        zio_read_phys() {
     vdev_open/0-31990 [010] 162723.060528: funcgraph_entry:                   |          zio_create() {
     vdev_open/0-31990 [010] 162723.060529: funcgraph_entry:        0.869 us   |            zio_add_child();
     vdev_open/0-31990 [010] 162723.060531: funcgraph_exit:         2.245 us   |          }
     vdev_open/0-31990 [010] 162723.060531: funcgraph_exit:         3.253 us   |        }
     vdev_open/0-31990 [010] 162723.060532: funcgraph_entry:                   |        zio_nowait() {
     vdev_open/0-31990 [010] 162723.060532: funcgraph_entry:        0.506 us   |          spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060533: funcgraph_entry:        0.485 us   |          spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060534: funcgraph_entry:                   |          zio_ready() {
     vdev_open/0-31990 [010] 162723.060535: funcgraph_entry:        0.556 us   |            zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060536: funcgraph_entry:        0.583 us   |            zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060537: funcgraph_entry:        0.457 us   |            zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060538: funcgraph_entry:        0.494 us   |            zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060539: funcgraph_exit:         4.461 us   |          }
     vdev_open/0-31990 [010] 162723.060539: funcgraph_entry:        0.482 us   |          spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060540: funcgraph_entry:        0.496 us   |          spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060541: funcgraph_entry:                   |          zio_vdev_io_start() {
     vdev_open/0-31990 [010] 162723.060542: funcgraph_entry:        0.497 us   |            vdev_cache_read();
     vdev_open/0-31990 [010] 162723.060543: funcgraph_entry:                   |            vdev_queue_io() {
     vdev_open/0-31990 [010] 162723.060544: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
     vdev_open/0-31990 [010] 162723.060544: funcgraph_entry:        0.570 us   |                zio_buf_alloc();
     vdev_open/0-31990 [010] 162723.060545: funcgraph_entry:        0.472 us   |                vdev_queue_timestamp_compare();
     vdev_open/0-31990 [010] 162723.060546: funcgraph_entry:        0.590 us   |                zio_buf_free();
     vdev_open/0-31990 [010] 162723.060547: funcgraph_entry:        0.676 us   |                vdev_queue_io_remove();
     vdev_open/0-31990 [010] 162723.060549: funcgraph_entry:        0.460 us   |                vdev_queue_offset_compare();
     vdev_open/0-31990 [010] 162723.060549: funcgraph_entry:        0.453 us   |                vdev_queue_offset_compare();
     vdev_open/0-31990 [010] 162723.060551: funcgraph_exit:         7.157 us   |              }
     vdev_open/0-31990 [010] 162723.060551: funcgraph_exit:         8.443 us   |            }
     vdev_open/0-31990 [010] 162723.060552: funcgraph_entry:        0.459 us   |            vdev_accessible();
     vdev_open/0-31990 [010] 162723.060553: funcgraph_entry:                   |            vdev_disk_io_start() {
     vdev_open/0-31990 [010] 162723.060553: funcgraph_entry:                   |              __vdev_disk_physio() {
     vdev_open/0-31990 [010] 162723.060559: funcgraph_entry:        0.594 us   |                vdev_disk_dio_put();
     vdev_open/0-31990 [010] 162723.060560: funcgraph_exit:         6.926 us   |              }
     vdev_open/0-31990 [010] 162723.060561: funcgraph_exit:         7.879 us   |            }
     vdev_open/0-31990 [010] 162723.060561: funcgraph_exit:       + 19.794 us  |          }
     vdev_open/0-31990 [010] 162723.060562: funcgraph_exit:       + 30.240 us  |        }
     vdev_open/0-31990 [010] 162723.060562: funcgraph_exit:       ! 158.498 us |      }
     vdev_open/0-31990 [010] 162723.060563: funcgraph_entry:                   |      zio_wait() {
     vdev_open/0-31990 [010] 162723.060563: funcgraph_entry:        0.570 us   |        spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060565: funcgraph_entry:        0.474 us   |        spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060566: funcgraph_entry:                   |        zio_ready() {
     vdev_open/0-31990 [010] 162723.060566: funcgraph_entry:        0.516 us   |          zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060567: funcgraph_entry:        0.557 us   |          zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060568: funcgraph_entry:        0.543 us   |          zio_walk_parents();
     vdev_open/0-31990 [010] 162723.060569: funcgraph_exit:         3.724 us   |        }
     vdev_open/0-31990 [010] 162723.060570: funcgraph_entry:        0.486 us   |        spa_get_dsl();
     vdev_open/0-31990 [010] 162723.060571: funcgraph_entry:        0.467 us   |        spa_is_initializing();
     vdev_open/0-31990 [010] 162723.060572: funcgraph_entry:                   |        zio_done() {
     vdev_open/0-31990 [010] 162723.060572: funcgraph_entry:        0.533 us   |          zio_wait_for_children();
     vdev_open/0-31990 [010] 162723.060574: funcgraph_exit:         1.596 us   |        }
     vdev_open/1-31991 [010] 162723.060578: funcgraph_entry:                   |  vdev_open_child() {
     vdev_open/1-31991 [010] 162723.060579: funcgraph_entry:                   |    vdev_open() {
     vdev_open/1-31991 [010] 162723.060580: funcgraph_entry:        0.553 us   |      vdev_get_min_asize();
     vdev_open/1-31991 [010] 162723.060581: funcgraph_entry:        1.830 us   |      vdev_disk_open();
     vdev_open/1-31991 [010] 162723.060583: funcgraph_entry:        0.513 us   |      vdev_set_state();
     vdev_open/1-31991 [010] 162723.060584: funcgraph_entry:                   |      vdev_set_min_asize() {
     vdev_open/1-31991 [010] 162723.060585: funcgraph_entry:        0.643 us   |        vdev_get_min_asize();
     vdev_open/1-31991 [010] 162723.060586: funcgraph_exit:         1.712 us   |      }
     vdev_open/1-31991 [010] 162723.060586: funcgraph_entry:                   |      vdev_probe() {
     vdev_open/1-31991 [010] 162723.060587: funcgraph_entry:        0.540 us   |        spa_config_held();
     vdev_open/1-31991 [010] 162723.060588: funcgraph_entry:                   |        zio_null() {
     vdev_open/1-31991 [010] 162723.060589: funcgraph_entry:        0.893 us   |          zio_create();
     vdev_open/1-31991 [010] 162723.060590: funcgraph_exit:         1.832 us   |        }
     vdev_open/1-31991 [010] 162723.060591: funcgraph_entry:        0.639 us   |        zio_buf_alloc();
     vdev_open/1-31991 [010] 162723.060592: funcgraph_entry:        0.580 us   |        vdev_label_offset();
     vdev_open/1-31991 [010] 162723.060593: funcgraph_entry:                   |        zio_read_phys() {
     vdev_open/1-31991 [010] 162723.060593: funcgraph_entry:                   |          zio_create() {
     vdev_open/1-31991 [010] 162723.060594: funcgraph_entry:        0.922 us   |            zio_add_child();
     vdev_open/1-31991 [010] 162723.060596: funcgraph_exit:         2.529 us   |          }
     vdev_open/1-31991 [010] 162723.060596: funcgraph_exit:         3.565 us   |        }
     vdev_open/1-31991 [010] 162723.060597: funcgraph_entry:                   |        zio_nowait() {
     vdev_open/1-31991 [010] 162723.060598: funcgraph_entry:        0.520 us   |          spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060599: funcgraph_entry:        0.489 us   |          spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060600: funcgraph_entry:                   |          zio_ready() {
     vdev_open/1-31991 [010] 162723.060600: funcgraph_entry:        0.533 us   |            zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060601: funcgraph_entry:        0.547 us   |            zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060602: funcgraph_entry:        0.590 us   |            zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060603: funcgraph_entry:        0.483 us   |            zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060604: funcgraph_exit:         4.611 us   |          }
     vdev_open/1-31991 [010] 162723.060605: funcgraph_entry:        0.492 us   |          spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060606: funcgraph_entry:        0.567 us   |          spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060607: funcgraph_entry:                   |          zio_vdev_io_start() {
     vdev_open/1-31991 [010] 162723.060607: funcgraph_entry:        0.483 us   |            vdev_cache_read();
     vdev_open/1-31991 [010] 162723.060608: funcgraph_entry:                   |            vdev_queue_io() {
     vdev_open/1-31991 [010] 162723.060609: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
     vdev_open/1-31991 [010] 162723.060610: funcgraph_entry:        0.557 us   |                zio_buf_alloc();
     vdev_open/1-31991 [010] 162723.060611: funcgraph_entry:        0.489 us   |                vdev_queue_timestamp_compare();
     vdev_open/1-31991 [010] 162723.060612: funcgraph_entry:        0.573 us   |                zio_buf_free();
     vdev_open/1-31991 [010] 162723.060613: funcgraph_entry:        0.626 us   |                vdev_queue_io_remove();
     vdev_open/1-31991 [010] 162723.060614: funcgraph_exit:         5.088 us   |              }
     vdev_open/1-31991 [010] 162723.060615: funcgraph_exit:         6.444 us   |            }
     vdev_open/1-31991 [010] 162723.060615: funcgraph_entry:        0.483 us   |            vdev_accessible();
     vdev_open/1-31991 [010] 162723.060616: funcgraph_entry:                   |            vdev_disk_io_start() {
     vdev_open/1-31991 [010] 162723.060617: funcgraph_entry:                   |              __vdev_disk_physio() {
     vdev_open/1-31991 [010] 162723.060622: funcgraph_entry:        0.527 us   |                vdev_disk_dio_put();
     vdev_open/1-31991 [010] 162723.060623: funcgraph_exit:         6.280 us   |              }
     vdev_open/1-31991 [010] 162723.060623: funcgraph_exit:         7.276 us   |            }
     vdev_open/1-31991 [010] 162723.060624: funcgraph_exit:       + 17.155 us  |          }
     vdev_open/1-31991 [010] 162723.060625: funcgraph_exit:       + 27.839 us  |        }
     vdev_open/1-31991 [010] 162723.060625: funcgraph_entry:        0.966 us   |        zio_buf_alloc();
     vdev_open/1-31991 [010] 162723.060627: funcgraph_entry:        0.586 us   |        vdev_label_offset();
     vdev_open/1-31991 [010] 162723.060628: funcgraph_entry:                   |        zio_read_phys() {
     vdev_open/1-31991 [010] 162723.060628: funcgraph_entry:                   |          zio_create() {
     vdev_open/1-31991 [010] 162723.060629: funcgraph_entry:        0.913 us   |            zio_add_child();
     vdev_open/1-31991 [010] 162723.060630: funcgraph_exit:         2.426 us   |          }
     vdev_open/1-31991 [010] 162723.060631: funcgraph_exit:         3.405 us   |        }
     vdev_open/1-31991 [010] 162723.060631: funcgraph_entry:                   |        zio_nowait() {
     vdev_open/1-31991 [010] 162723.060632: funcgraph_entry:        0.487 us   |          spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060633: funcgraph_entry:        0.490 us   |          spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060634: funcgraph_entry:                   |          zio_ready() {
     vdev_open/1-31991 [010] 162723.060634: funcgraph_entry:        0.533 us   |            zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060636: funcgraph_entry:        0.606 us   |            zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060637: funcgraph_entry:        0.480 us   |            zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060638: funcgraph_entry:        0.492 us   |            zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060639: funcgraph_exit:         4.632 us   |          }
     vdev_open/1-31991 [010] 162723.060639: funcgraph_entry:        0.560 us   |          spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060640: funcgraph_entry:        0.477 us   |          spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060641: funcgraph_entry:                   |          zio_vdev_io_start() {
     vdev_open/1-31991 [010] 162723.060642: funcgraph_entry:        0.465 us   |            vdev_cache_read();
     vdev_open/1-31991 [010] 162723.060643: funcgraph_entry:                   |            vdev_queue_io() {
     vdev_open/1-31991 [010] 162723.060643: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
     vdev_open/1-31991 [010] 162723.060644: funcgraph_entry:        0.513 us   |                zio_buf_alloc();
     vdev_open/1-31991 [010] 162723.060645: funcgraph_entry:        0.467 us   |                vdev_queue_timestamp_compare();
     vdev_open/1-31991 [010] 162723.060646: funcgraph_entry:        0.545 us   |                zio_buf_free();
     vdev_open/1-31991 [010] 162723.060647: funcgraph_entry:        0.600 us   |                vdev_queue_io_remove();
     vdev_open/1-31991 [010] 162723.060648: funcgraph_entry:        0.979 us   |                vdev_queue_offset_compare();
     vdev_open/1-31991 [010] 162723.060650: funcgraph_exit:         6.307 us   |              }
     vdev_open/1-31991 [010] 162723.060650: funcgraph_exit:         7.559 us   |            }
     vdev_open/1-31991 [010] 162723.060651: funcgraph_entry:        0.564 us   |            vdev_accessible();
     vdev_open/1-31991 [010] 162723.060652: funcgraph_entry:                   |            vdev_disk_io_start() {
     vdev_open/1-31991 [010] 162723.060652: funcgraph_entry:                   |              __vdev_disk_physio() {
     vdev_open/1-31991 [010] 162723.060656: funcgraph_entry:        0.593 us   |                vdev_disk_dio_put();
     vdev_open/1-31991 [010] 162723.060657: funcgraph_exit:         4.928 us   |              }
     vdev_open/1-31991 [010] 162723.060658: funcgraph_exit:         5.921 us   |            }
     vdev_open/1-31991 [010] 162723.060658: funcgraph_exit:       + 17.059 us  |          }
     vdev_open/1-31991 [010] 162723.060659: funcgraph_exit:       + 27.279 us  |        }
     vdev_open/1-31991 [010] 162723.060659: funcgraph_entry:        0.696 us   |        zio_buf_alloc();
     vdev_open/1-31991 [010] 162723.060660: funcgraph_entry:        0.556 us   |        vdev_label_offset();
     vdev_open/1-31991 [010] 162723.060661: funcgraph_entry:                   |        zio_read_phys() {
     vdev_open/1-31991 [010] 162723.060662: funcgraph_entry:                   |          zio_create() {
     vdev_open/1-31991 [010] 162723.060663: funcgraph_entry:        0.880 us   |            zio_add_child();
     vdev_open/1-31991 [010] 162723.060664: funcgraph_exit:         2.568 us   |          }
     vdev_open/1-31991 [010] 162723.060665: funcgraph_exit:         3.631 us   |        }
     vdev_open/1-31991 [010] 162723.060665: funcgraph_entry:                   |        zio_nowait() {
     vdev_open/1-31991 [010] 162723.060666: funcgraph_entry:        0.486 us   |          spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060667: funcgraph_entry:        0.496 us   |          spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060668: funcgraph_entry:                   |          zio_ready() {
     vdev_open/1-31991 [010] 162723.060668: funcgraph_entry:        0.519 us   |            zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060669: funcgraph_entry:        0.584 us   |            zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060670: funcgraph_entry:        0.489 us   |            zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060671: funcgraph_entry:        0.490 us   |            zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060672: funcgraph_exit:         4.494 us   |          }
     vdev_open/1-31991 [010] 162723.060673: funcgraph_entry:        0.500 us   |          spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060674: funcgraph_entry:        0.520 us   |          spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060675: funcgraph_entry:                   |          zio_vdev_io_start() {
     vdev_open/1-31991 [010] 162723.060675: funcgraph_entry:        0.483 us   |            vdev_cache_read();
     vdev_open/1-31991 [010] 162723.060676: funcgraph_entry:                   |            vdev_queue_io() {
     vdev_open/1-31991 [010] 162723.060677: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
     vdev_open/1-31991 [010] 162723.060677: funcgraph_entry:        0.606 us   |                zio_buf_alloc();
     vdev_open/1-31991 [010] 162723.060679: funcgraph_entry:        0.615 us   |                vdev_queue_timestamp_compare();
     vdev_open/1-31991 [010] 162723.060680: funcgraph_entry:        0.570 us   |                zio_buf_free();
     vdev_open/1-31991 [010] 162723.060681: funcgraph_entry:        0.666 us   |                vdev_queue_io_remove();
     vdev_open/1-31991 [010] 162723.060682: funcgraph_entry:        0.476 us   |                vdev_queue_offset_compare();
     vdev_open/1-31991 [010] 162723.060683: funcgraph_entry:        0.543 us   |                vdev_queue_offset_compare();
     vdev_open/1-31991 [010] 162723.060684: funcgraph_exit:         7.214 us   |              }
     vdev_open/1-31991 [010] 162723.060685: funcgraph_exit:         8.436 us   |            }
     vdev_open/1-31991 [010] 162723.060685: funcgraph_entry:        0.503 us   |            vdev_accessible();
     vdev_open/1-31991 [010] 162723.060686: funcgraph_entry:                   |            vdev_disk_io_start() {
     vdev_open/1-31991 [010] 162723.060687: funcgraph_entry:                   |              __vdev_disk_physio() {
     vdev_open/1-31991 [010] 162723.060690: funcgraph_entry:        0.486 us   |                vdev_disk_dio_put();
     vdev_open/1-31991 [010] 162723.060691: funcgraph_exit:         3.858 us   |              }
     vdev_open/1-31991 [010] 162723.060691: funcgraph_exit:         4.831 us   |            }
     vdev_open/1-31991 [010] 162723.060692: funcgraph_exit:       + 16.752 us  |          }
     vdev_open/1-31991 [010] 162723.060692: funcgraph_exit:       + 26.791 us  |        }
     vdev_open/1-31991 [010] 162723.060693: funcgraph_exit:       ! 106.282 us |      }
     vdev_open/1-31991 [010] 162723.060693: funcgraph_entry:                   |      zio_wait() {
     vdev_open/1-31991 [010] 162723.060694: funcgraph_entry:        0.553 us   |        spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060695: funcgraph_entry:        0.503 us   |        spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060696: funcgraph_entry:                   |        zio_ready() {
     vdev_open/1-31991 [010] 162723.060696: funcgraph_entry:        0.503 us   |          zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060697: funcgraph_entry:        0.510 us   |          zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060698: funcgraph_entry:        0.510 us   |          zio_walk_parents();
     vdev_open/1-31991 [010] 162723.060700: funcgraph_exit:         3.858 us   |        }
     vdev_open/1-31991 [010] 162723.060700: funcgraph_entry:        0.540 us   |        spa_get_dsl();
     vdev_open/1-31991 [010] 162723.060701: funcgraph_entry:        0.576 us   |        spa_is_initializing();
     vdev_open/1-31991 [010] 162723.060702: funcgraph_entry:                   |        zio_done() {
     vdev_open/1-31991 [010] 162723.060716: funcgraph_entry:      + 14.299 us  |          zio_wait_for_children();
     vdev_open/1-31991 [010] 162723.060718: funcgraph_exit:       + 15.636 us  |        }
     vdev_open/0-31990 [010] 162723.061395: funcgraph_exit:       + 16.599 us  |      }
     vdev_open/0-31990 [010] 162723.061396: funcgraph_exit:       ! 189.137 us |    }
     vdev_open/0-31990 [010] 162723.061396: funcgraph_exit:       ! 192.456 us |  }
     vdev_open/1-31991 [004] 162723.082530: funcgraph_exit:       + 32.434 us  |      }
     vdev_open/1-31991 [004] 162723.082532: funcgraph_exit:       ! 149.166 us |    }
     vdev_open/1-31991 [004] 162723.082533: funcgraph_exit:       ! 150.625 us |  }
     vdev_open/0-31989 [010] 162723.082594: funcgraph_exit:       + 88.002 us  |        }
     vdev_open/0-31989 [010] 162723.082595: funcgraph_exit:       + 90.075 us  |      }
     vdev_open/0-31989 [010] 162723.082596: funcgraph_entry:        1.236 us   |      vdev_set_state();
     vdev_open/0-31989 [010] 162723.082598: funcgraph_entry:                   |      vdev_set_min_asize() {
     vdev_open/0-31989 [010] 162723.082598: funcgraph_entry:        0.506 us   |        vdev_get_min_asize();
     vdev_open/0-31989 [010] 162723.082600: funcgraph_entry:                   |        vdev_set_min_asize() {
     vdev_open/0-31989 [010] 162723.082600: funcgraph_entry:        0.596 us   |          vdev_get_min_asize();
     vdev_open/0-31989 [010] 162723.082601: funcgraph_exit:         1.515 us   |        }
     vdev_open/0-31989 [010] 162723.082602: funcgraph_entry:                   |        vdev_set_min_asize() {
     vdev_open/0-31989 [010] 162723.082602: funcgraph_entry:        0.496 us   |          vdev_get_min_asize();
     vdev_open/0-31989 [010] 162723.082603: funcgraph_exit:         1.382 us   |        }
     vdev_open/0-31989 [010] 162723.082604: funcgraph_exit:         5.620 us   |      }
     vdev_open/0-31989 [010] 162723.082604: funcgraph_exit:       ! 101.960 us |    }
     vdev_open/0-31989 [010] 162723.082605: funcgraph_exit:       ! 105.173 us |  }
