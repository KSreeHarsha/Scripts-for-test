           <...>-31848 [001] 162723.124955: funcgraph_entry:                   |  zio_execute() {
           <...>-31848 [001] 162723.124955: funcgraph_entry:        0.490 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.124956: funcgraph_entry:        0.462 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.124957: funcgraph_entry:                   |    zio_vdev_io_done() {
           <...>-31848 [001] 162723.124958: funcgraph_entry:        0.492 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.124959: funcgraph_entry:                   |      vdev_queue_io_done() {
           <...>-31848 [001] 162723.124960: funcgraph_entry:                   |        vdev_queue_io_to_issue() {
           <...>-31848 [001] 162723.124961: funcgraph_entry:        0.877 us   |          zio_buf_alloc();
           <...>-31848 [001] 162723.124962: funcgraph_entry:        0.578 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124963: funcgraph_entry:        0.601 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124964: funcgraph_entry:        0.495 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124965: funcgraph_entry:        0.551 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124966: funcgraph_entry:        0.605 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124967: funcgraph_entry:        0.617 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124969: funcgraph_entry:        0.771 us   |          zio_buf_free();
           <...>-31848 [001] 162723.124970: funcgraph_entry:        1.001 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.124971: funcgraph_entry:        0.450 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.124973: funcgraph_exit:       + 12.351 us  |        }
           <...>-31848 [001] 162723.124973: funcgraph_entry:        0.537 us   |        zio_vdev_io_reissue();
           <...>-31848 [001] 162723.124974: funcgraph_entry:                   |        zio_execute() {
           <...>-31848 [001] 162723.124975: funcgraph_entry:        0.457 us   |          spa_get_dsl();
           <...>-31848 [001] 162723.124976: funcgraph_entry:        0.471 us   |          spa_is_initializing();
           <...>-31848 [001] 162723.124977: funcgraph_entry:                   |          zio_vdev_io_start() {
           <...>-31848 [001] 162723.124978: funcgraph_entry:        0.612 us   |            vdev_cache_read();
           <...>-31848 [001] 162723.124979: funcgraph_entry:        0.511 us   |            vdev_queue_io();
           <...>-31848 [001] 162723.124980: funcgraph_entry:        0.571 us   |            vdev_accessible();
           <...>-31848 [001] 162723.124981: funcgraph_entry:                   |            vdev_disk_io_start() {
           <...>-31848 [001] 162723.124981: funcgraph_entry:                   |              __vdev_disk_physio() {
           <...>-31848 [001] 162723.124996: funcgraph_entry:        0.626 us   |                vdev_disk_dio_put();
           <...>-31848 [001] 162723.124997: funcgraph_exit:       + 15.504 us  |              }
           <...>-31848 [001] 162723.124997: funcgraph_exit:       + 16.472 us  |            }
           <...>-31848 [001] 162723.124998: funcgraph_exit:       + 20.936 us  |          }
           <...>-31848 [001] 162723.124998: funcgraph_exit:       + 24.183 us  |        }
           <...>-31848 [001] 162723.124999: funcgraph_entry:        0.684 us   |        vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.125000: funcgraph_exit:       + 41.243 us  |      }
           <...>-31848 [001] 162723.125001: funcgraph_entry:        0.449 us   |      vdev_disk_io_done();
           <...>-31848 [001] 162723.125001: funcgraph_exit:       + 44.147 us  |    }
           <...>-31848 [001] 162723.125002: funcgraph_entry:        0.417 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.125003: funcgraph_entry:        0.642 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.125004: funcgraph_entry:                   |    zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125004: funcgraph_entry:        0.584 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.125006: funcgraph_exit:         1.914 us   |    }
           <...>-31848 [001] 162723.125006: funcgraph_entry:        0.524 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.125007: funcgraph_entry:        0.486 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.125008: funcgraph_entry:                   |    zio_done() {
           <...>-31848 [001] 162723.125009: funcgraph_entry:        0.487 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.125010: funcgraph_entry:        0.518 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.125011: funcgraph_entry:        0.478 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.125012: funcgraph_entry:        0.409 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.125013: funcgraph_entry:        0.663 us   |      zio_pop_transforms();
           <...>-31848 [001] 162723.125014: funcgraph_entry:        0.601 us   |      vdev_stat_update();
           <...>-31848 [001] 162723.125015: funcgraph_entry:        0.563 us   |      zio_gang_tree_free();
           <...>-31848 [001] 162723.125016: funcgraph_entry:                   |      vdev_queue_agg_io_done() {
           <...>-31848 [001] 162723.125017: funcgraph_entry:        0.470 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125019: funcgraph_entry:        0.445 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125020: funcgraph_entry:        0.629 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125022: funcgraph_entry:        0.537 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125024: funcgraph_entry:        0.565 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125026: funcgraph_entry:        0.637 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125028: funcgraph_entry:        0.564 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125030: funcgraph_entry:        0.650 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125031: funcgraph_entry:        0.527 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125033: funcgraph_entry:        0.465 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125035: funcgraph_entry:        0.541 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125037: funcgraph_entry:        0.457 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125038: funcgraph_entry:        0.445 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125040: funcgraph_entry:        0.617 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125042: funcgraph_entry:        0.513 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125043: funcgraph_exit:       + 26.836 us  |      }
           <...>-31848 [001] 162723.125044: funcgraph_entry:        0.545 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125045: funcgraph_entry:        0.634 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125046: funcgraph_entry:        0.770 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125047: funcgraph_entry:        0.587 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125048: funcgraph_entry:        0.447 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125049: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125049: funcgraph_entry:        0.362 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125050: funcgraph_exit:         1.237 us   |      }
           <...>-31848 [001] 162723.125051: funcgraph_entry:        0.392 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125051: funcgraph_entry:        0.390 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125052: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125053: funcgraph_entry:        0.944 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125054: funcgraph_exit:         2.053 us   |      }
           <...>-31848 [001] 162723.125055: funcgraph_entry:        0.443 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125056: funcgraph_entry:        0.471 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125057: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125057: funcgraph_entry:        0.487 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125058: funcgraph_entry:        0.422 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125059: funcgraph_entry:        0.511 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125060: funcgraph_entry:        0.483 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125061: funcgraph_entry:        0.635 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125062: funcgraph_entry:        0.374 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125063: funcgraph_entry:        0.560 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125064: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125065: funcgraph_entry:        0.458 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125066: funcgraph_entry:        0.457 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125067: funcgraph_entry:        0.786 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125069: funcgraph_exit:         4.469 us   |        }
           <...>-31848 [001] 162723.125069: funcgraph_entry:        0.549 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125070: funcgraph_entry:        0.542 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125071: funcgraph_entry:        0.767 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125073: funcgraph_exit:       + 15.797 us  |      }
           <...>-31848 [001] 162723.125073: funcgraph_entry:        0.514 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125074: funcgraph_entry:        0.808 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125076: funcgraph_entry:        0.466 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125077: funcgraph_entry:        0.400 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125078: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125078: funcgraph_entry:        0.619 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125080: funcgraph_exit:         1.966 us   |      }
           <...>-31848 [001] 162723.125080: funcgraph_entry:        0.479 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125081: funcgraph_entry:        0.577 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125082: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125083: funcgraph_entry:        0.873 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125084: funcgraph_exit:         1.724 us   |      }
           <...>-31848 [001] 162723.125084: funcgraph_entry:        0.657 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125086: funcgraph_entry:        0.542 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125086: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125087: funcgraph_entry:        0.513 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125088: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125089: funcgraph_entry:        0.511 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125090: funcgraph_entry:        0.696 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125091: funcgraph_entry:        0.730 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125093: funcgraph_entry:        0.608 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125094: funcgraph_entry:        0.489 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125095: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125095: funcgraph_entry:        0.609 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125097: funcgraph_entry:        0.540 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125098: funcgraph_entry:        0.574 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125099: funcgraph_exit:         4.371 us   |        }
           <...>-31848 [001] 162723.125100: funcgraph_entry:        0.784 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125101: funcgraph_entry:        0.569 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125102: funcgraph_entry:        0.691 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125104: funcgraph_exit:       + 17.076 us  |      }
           <...>-31848 [001] 162723.125104: funcgraph_entry:        0.537 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125105: funcgraph_entry:        0.929 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125107: funcgraph_entry:        0.466 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125108: funcgraph_entry:        0.856 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125109: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125109: funcgraph_entry:        0.407 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125110: funcgraph_exit:         1.408 us   |      }
           <...>-31848 [001] 162723.125111: funcgraph_entry:        0.563 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125112: funcgraph_entry:        0.511 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125113: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125113: funcgraph_entry:        0.787 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125115: funcgraph_exit:         1.672 us   |      }
           <...>-31848 [001] 162723.125115: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125116: funcgraph_entry:        0.422 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125117: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125117: funcgraph_entry:        0.549 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125118: funcgraph_entry:        0.707 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125119: funcgraph_entry:        0.546 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125120: funcgraph_entry:        0.545 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125121: funcgraph_entry:        0.604 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125122: funcgraph_entry:        0.564 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125123: funcgraph_entry:        0.576 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125125: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125125: funcgraph_entry:        0.645 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125127: funcgraph_entry:        0.475 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125128: funcgraph_entry:        0.838 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125129: funcgraph_exit:         5.059 us   |        }
           <...>-31848 [001] 162723.125130: funcgraph_entry:        0.488 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125131: funcgraph_entry:        0.525 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125132: funcgraph_entry:        0.933 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125134: funcgraph_exit:       + 17.030 us  |      }
           <...>-31848 [001] 162723.125134: funcgraph_entry:        0.513 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125135: funcgraph_entry:        0.895 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125137: funcgraph_entry:        0.518 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125138: funcgraph_entry:        0.548 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125139: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125140: funcgraph_entry:        0.582 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125141: funcgraph_exit:         1.677 us   |      }
           <...>-31848 [001] 162723.125141: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125142: funcgraph_entry:        0.507 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125143: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125144: funcgraph_entry:        0.789 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125145: funcgraph_exit:         1.694 us   |      }
           <...>-31848 [001] 162723.125146: funcgraph_entry:        0.386 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125146: funcgraph_entry:        0.405 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125147: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125148: funcgraph_entry:        0.330 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125148: funcgraph_entry:        0.365 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125149: funcgraph_entry:        0.362 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125150: funcgraph_entry:        0.294 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125150: funcgraph_entry:        0.262 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125151: funcgraph_entry:        0.260 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125152: funcgraph_entry:        0.407 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125152: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125152: funcgraph_entry:        0.262 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125154: funcgraph_entry:        0.332 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125154: funcgraph_entry:        0.393 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125155: funcgraph_exit:         2.847 us   |        }
           <...>-31848 [001] 162723.125155: funcgraph_entry:        0.266 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125156: funcgraph_entry:        0.248 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125156: funcgraph_entry:        0.492 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125157: funcgraph_exit:       + 10.029 us  |      }
           <...>-31848 [001] 162723.125157: funcgraph_entry:        0.280 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125158: funcgraph_entry:        0.541 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125159: funcgraph_entry:        0.313 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125159: funcgraph_entry:        0.245 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125160: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125160: funcgraph_entry:        0.292 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125161: funcgraph_exit:         0.825 us   |      }
           <...>-31848 [001] 162723.125161: funcgraph_entry:        0.273 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125162: funcgraph_entry:        0.292 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125162: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125162: funcgraph_entry:        0.459 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125163: funcgraph_exit:         0.981 us   |      }
           <...>-31848 [001] 162723.125163: funcgraph_entry:        0.256 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125164: funcgraph_entry:        0.291 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125164: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125165: funcgraph_entry:        0.269 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125165: funcgraph_entry:        0.275 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125166: funcgraph_entry:        0.275 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125166: funcgraph_entry:        0.299 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125167: funcgraph_entry:        0.261 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125167: funcgraph_entry:        0.249 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125168: funcgraph_entry:        0.251 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125168: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125168: funcgraph_entry:        0.295 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125170: funcgraph_entry:        0.304 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125170: funcgraph_entry:        0.395 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125171: funcgraph_exit:         2.618 us   |        }
           <...>-31848 [001] 162723.125171: funcgraph_entry:        0.263 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125172: funcgraph_entry:        0.254 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125172: funcgraph_entry:        0.516 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125173: funcgraph_exit:         8.664 us   |      }
           <...>-31848 [001] 162723.125173: funcgraph_entry:        0.277 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125174: funcgraph_entry:        0.454 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125175: funcgraph_entry:        0.261 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125175: funcgraph_entry:        0.290 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125176: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125176: funcgraph_entry:        0.263 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125177: funcgraph_exit:         0.771 us   |      }
           <...>-31848 [001] 162723.125177: funcgraph_entry:        0.261 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125178: funcgraph_entry:        0.252 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125178: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125178: funcgraph_entry:        0.434 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125179: funcgraph_exit:         0.992 us   |      }
           <...>-31848 [001] 162723.125179: funcgraph_entry:        0.310 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125180: funcgraph_entry:        0.240 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125181: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125181: funcgraph_entry:        0.258 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125181: funcgraph_entry:        0.267 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125182: funcgraph_entry:        0.288 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125182: funcgraph_entry:        0.298 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125183: funcgraph_entry:        0.259 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125184: funcgraph_entry:        0.243 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125184: funcgraph_entry:        0.262 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125185: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125185: funcgraph_entry:        0.265 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125186: funcgraph_entry:        0.304 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125187: funcgraph_entry:        0.359 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125187: funcgraph_exit:         2.599 us   |        }
           <...>-31848 [001] 162723.125187: funcgraph_entry:        0.266 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125188: funcgraph_entry:        0.247 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125188: funcgraph_entry:        0.544 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125189: funcgraph_exit:         8.909 us   |      }
           <...>-31848 [001] 162723.125190: funcgraph_entry:        0.322 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125190: funcgraph_entry:        0.544 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125191: funcgraph_entry:        0.254 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125192: funcgraph_entry:        0.296 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125192: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125193: funcgraph_entry:        0.299 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125193: funcgraph_exit:         0.902 us   |      }
           <...>-31848 [001] 162723.125194: funcgraph_entry:        0.277 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125194: funcgraph_entry:        0.271 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125195: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125195: funcgraph_entry:        3.391 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125199: funcgraph_exit:         4.025 us   |      }
           <...>-31848 [001] 162723.125199: funcgraph_entry:        0.516 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125200: funcgraph_entry:        0.419 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125201: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125201: funcgraph_entry:        0.439 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125202: funcgraph_entry:        0.505 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125203: funcgraph_entry:        0.503 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125204: funcgraph_entry:        0.648 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125205: funcgraph_entry:        0.615 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125206: funcgraph_entry:        0.501 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125207: funcgraph_entry:        0.447 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125208: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125209: funcgraph_entry:        0.683 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125211: funcgraph_entry:        0.553 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125212: funcgraph_entry:        1.135 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125214: funcgraph_exit:         5.243 us   |        }
           <...>-31848 [001] 162723.125214: funcgraph_entry:        0.478 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125215: funcgraph_entry:        0.666 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125216: funcgraph_entry:        0.774 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125218: funcgraph_exit:       + 16.830 us  |      }
           <...>-31848 [001] 162723.125218: funcgraph_entry:        0.499 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125219: funcgraph_entry:        0.748 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125221: funcgraph_entry:        0.429 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125221: funcgraph_entry:        0.303 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125222: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125222: funcgraph_entry:        0.341 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125223: funcgraph_exit:         1.086 us   |      }
           <...>-31848 [001] 162723.125223: funcgraph_entry:        0.469 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125224: funcgraph_entry:        0.255 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125225: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125225: funcgraph_entry:        0.546 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125226: funcgraph_exit:         1.062 us   |      }
           <...>-31848 [001] 162723.125226: funcgraph_entry:        0.252 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125226: funcgraph_entry:        0.240 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125227: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125227: funcgraph_entry:        0.318 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125228: funcgraph_entry:        0.271 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125228: funcgraph_entry:        0.281 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125229: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125229: funcgraph_entry:        0.259 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125230: funcgraph_entry:        0.252 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125230: funcgraph_entry:        0.250 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125231: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125231: funcgraph_entry:        0.263 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125232: funcgraph_entry:        0.254 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125233: funcgraph_entry:        0.384 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125233: funcgraph_exit:         2.525 us   |        }
           <...>-31848 [001] 162723.125234: funcgraph_entry:        0.339 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125234: funcgraph_entry:        0.261 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125235: funcgraph_entry:        0.674 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125236: funcgraph_exit:         8.924 us   |      }
           <...>-31848 [001] 162723.125236: funcgraph_entry:        0.303 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125237: funcgraph_entry:        0.483 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125238: funcgraph_entry:        0.257 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125238: funcgraph_entry:        0.256 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125239: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125239: funcgraph_entry:        0.275 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125239: funcgraph_exit:         0.784 us   |      }
           <...>-31848 [001] 162723.125240: funcgraph_entry:        0.249 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125240: funcgraph_entry:        0.266 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125241: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125241: funcgraph_entry:        0.431 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125241: funcgraph_exit:         0.904 us   |      }
           <...>-31848 [001] 162723.125242: funcgraph_entry:        0.411 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125242: funcgraph_entry:        0.264 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125243: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125243: funcgraph_entry:        0.278 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125244: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125244: funcgraph_entry:        0.276 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125245: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125245: funcgraph_entry:        0.259 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125246: funcgraph_entry:        0.296 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125246: funcgraph_entry:        0.257 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125247: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125247: funcgraph_entry:        0.274 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125248: funcgraph_entry:        0.278 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125249: funcgraph_entry:        0.366 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125249: funcgraph_exit:         2.635 us   |        }
           <...>-31848 [001] 162723.125250: funcgraph_entry:        0.259 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125250: funcgraph_entry:        0.254 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125251: funcgraph_entry:        0.654 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125252: funcgraph_exit:         8.837 us   |      }
           <...>-31848 [001] 162723.125252: funcgraph_entry:        0.250 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125252: funcgraph_entry:        0.509 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125253: funcgraph_entry:        0.242 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125254: funcgraph_entry:        0.238 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125254: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125254: funcgraph_entry:        0.266 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125255: funcgraph_exit:         0.759 us   |      }
           <...>-31848 [001] 162723.125255: funcgraph_entry:        0.260 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125256: funcgraph_entry:        0.241 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125256: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125256: funcgraph_entry:        0.412 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125257: funcgraph_exit:         0.904 us   |      }
           <...>-31848 [001] 162723.125257: funcgraph_entry:        0.240 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125258: funcgraph_entry:        0.242 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125258: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125259: funcgraph_entry:        0.253 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125259: funcgraph_entry:        0.329 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125260: funcgraph_entry:        0.266 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125260: funcgraph_entry:        0.262 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125261: funcgraph_entry:        0.247 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125261: funcgraph_entry:        0.273 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125262: funcgraph_entry:        0.254 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125262: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125262: funcgraph_entry:        0.291 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125264: funcgraph_entry:        0.261 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125264: funcgraph_entry:        0.369 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125265: funcgraph_exit:         2.585 us   |        }
           <...>-31848 [001] 162723.125265: funcgraph_entry:        0.250 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125266: funcgraph_entry:        0.415 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125266: funcgraph_entry:        0.680 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125267: funcgraph_exit:         9.001 us   |      }
           <...>-31848 [001] 162723.125268: funcgraph_entry:        0.334 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125268: funcgraph_entry:        0.525 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125269: funcgraph_entry:        0.251 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125270: funcgraph_entry:        0.254 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125270: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125270: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125271: funcgraph_exit:         0.843 us   |      }
           <...>-31848 [001] 162723.125271: funcgraph_entry:        0.259 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125272: funcgraph_entry:        0.254 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125272: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125272: funcgraph_entry:        0.444 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125273: funcgraph_exit:         0.920 us   |      }
           <...>-31848 [001] 162723.125273: funcgraph_entry:        0.266 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125274: funcgraph_entry:        0.294 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125274: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125275: funcgraph_entry:        0.272 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125275: funcgraph_entry:        0.276 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125276: funcgraph_entry:        0.268 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125276: funcgraph_entry:        0.274 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125277: funcgraph_entry:        0.257 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125277: funcgraph_entry:        0.271 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125278: funcgraph_entry:        0.259 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125278: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125279: funcgraph_entry:        0.258 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125280: funcgraph_entry:        0.260 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125280: funcgraph_entry:        0.359 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125281: funcgraph_exit:         2.563 us   |        }
           <...>-31848 [001] 162723.125281: funcgraph_entry:        0.252 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125282: funcgraph_entry:        0.257 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125282: funcgraph_entry:        0.561 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125283: funcgraph_exit:         8.652 us   |      }
           <...>-31848 [001] 162723.125283: funcgraph_entry:        0.273 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125284: funcgraph_entry:        0.441 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125285: funcgraph_entry:        0.285 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125285: funcgraph_entry:        0.306 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125286: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125286: funcgraph_entry:        0.291 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125287: funcgraph_exit:         0.817 us   |      }
           <...>-31848 [001] 162723.125287: funcgraph_entry:        0.252 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125287: funcgraph_entry:        0.268 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125288: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125288: funcgraph_entry:        0.445 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125289: funcgraph_exit:         0.939 us   |      }
           <...>-31848 [001] 162723.125289: funcgraph_entry:        0.288 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125290: funcgraph_entry:        0.255 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125290: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125290: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125291: funcgraph_entry:        0.269 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125291: funcgraph_entry:        0.271 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125292: funcgraph_entry:        0.278 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125292: funcgraph_entry:        0.261 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125293: funcgraph_entry:        0.262 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125293: funcgraph_entry:        0.257 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125294: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125294: funcgraph_entry:        0.262 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125295: funcgraph_entry:        0.311 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125296: funcgraph_entry:        6.772 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125303: funcgraph_exit:         9.075 us   |        }
           <...>-31848 [001] 162723.125310: funcgraph_entry:        0.363 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125311: funcgraph_entry:        0.266 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125311: funcgraph_entry:        0.511 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125312: funcgraph_exit:       + 16.618 us  |      }
           <...>-31848 [001] 162723.125313: funcgraph_entry:        0.292 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125313: funcgraph_entry:        0.598 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125314: funcgraph_entry:        0.306 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125315: funcgraph_entry:        0.269 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125315: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125315: funcgraph_entry:        0.325 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125316: funcgraph_exit:         0.820 us   |      }
           <...>-31848 [001] 162723.125316: funcgraph_entry:        0.236 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125317: funcgraph_entry:        0.285 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125317: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125318: funcgraph_entry:        0.458 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125318: funcgraph_exit:         0.971 us   |      }
           <...>-31848 [001] 162723.125319: funcgraph_entry:        0.247 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125319: funcgraph_entry:        0.314 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125320: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125320: funcgraph_entry:        0.255 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125320: funcgraph_entry:        0.285 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125321: funcgraph_entry:        0.266 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125321: funcgraph_entry:        0.299 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125322: funcgraph_entry:        0.257 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125323: funcgraph_entry:        0.356 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125323: funcgraph_entry:        0.257 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125324: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125324: funcgraph_entry:        0.267 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125325: funcgraph_entry:        0.277 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125326: funcgraph_entry:        0.363 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125326: funcgraph_exit:         2.582 us   |        }
           <...>-31848 [001] 162723.125327: funcgraph_entry:        0.252 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125327: funcgraph_entry:        0.258 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125328: funcgraph_entry:        0.516 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125328: funcgraph_exit:         8.782 us   |      }
           <...>-31848 [001] 162723.125329: funcgraph_entry:        0.271 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.125329: funcgraph_entry:        0.494 us   |      zio_remove_child();
           <...>-31848 [001] 162723.125330: funcgraph_entry:        0.428 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125331: funcgraph_entry:        0.253 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125331: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.125331: funcgraph_entry:        0.282 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125332: funcgraph_exit:         0.780 us   |      }
           <...>-31848 [001] 162723.125332: funcgraph_entry:        0.268 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125333: funcgraph_entry:        0.249 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125333: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.125334: funcgraph_entry:        0.428 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.125334: funcgraph_exit:         0.916 us   |      }
           <...>-31848 [001] 162723.125334: funcgraph_entry:        0.262 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.125335: funcgraph_entry:        0.265 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.125335: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.125336: funcgraph_entry:        0.264 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125336: funcgraph_entry:        0.268 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125337: funcgraph_entry:        0.266 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125337: funcgraph_entry:        0.269 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.125338: funcgraph_entry:        0.256 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.125338: funcgraph_entry:        0.278 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.125339: funcgraph_entry:        0.251 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.125339: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.125339: funcgraph_entry:        0.263 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125341: funcgraph_entry:        0.327 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.125341: funcgraph_entry:        0.355 us   |          zio_buf_free();
           <...>-31848 [001] 162723.125342: funcgraph_exit:         2.611 us   |        }
           <...>-31848 [001] 162723.125342: funcgraph_entry:        0.280 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125343: funcgraph_entry:        0.257 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.125343: funcgraph_entry:        0.466 us   |        zio_remove_child();
           <...>-31848 [001] 162723.125344: funcgraph_exit:         8.542 us   |      }
           <...>-31848 [001] 162723.125344: funcgraph_exit:       ! 330.373 us |    }
           <...>-31848 [001] 162723.125345: funcgraph_exit:       ! 384.511 us |  }
           <...>-31848 [001] 162723.127619: funcgraph_entry:                   |  zio_execute() {
           <...>-31848 [001] 162723.127620: funcgraph_entry:        0.313 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.127621: funcgraph_entry:        0.275 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.127622: funcgraph_entry:                   |    zio_vdev_io_done() {
           <...>-31848 [001] 162723.127622: funcgraph_entry:        0.419 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.127623: funcgraph_entry:                   |      vdev_queue_io_done() {
           <...>-31848 [001] 162723.127624: funcgraph_entry:                   |        vdev_queue_io_to_issue() {
           <...>-31848 [001] 162723.127624: funcgraph_entry:        0.556 us   |          zio_buf_alloc();
           <...>-31848 [001] 162723.127625: funcgraph_entry:        0.327 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.127626: funcgraph_entry:        0.318 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.127627: funcgraph_entry:        0.325 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.127627: funcgraph_entry:        0.426 us   |          zio_buf_free();
           <...>-31848 [001] 162723.127628: funcgraph_entry:                   |          zio_vdev_delegated_io() {
           <...>-31848 [001] 162723.127629: funcgraph_entry:        0.791 us   |            zio_create();
           <...>-31848 [001] 162723.127630: funcgraph_exit:         1.370 us   |          }
           <...>-31848 [001] 162723.127630: funcgraph_entry:        0.485 us   |          zio_add_child();
           <...>-31848 [001] 162723.127631: funcgraph_entry:        0.654 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.127632: funcgraph_entry:        0.254 us   |          zio_vdev_io_bypass();
           <...>-31848 [001] 162723.127632: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [001] 162723.127633: funcgraph_entry:        0.257 us   |            spa_get_dsl();
           <...>-31848 [001] 162723.127633: funcgraph_entry:        0.255 us   |            spa_is_initializing();
           <...>-31848 [001] 162723.127634: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127634: funcgraph_entry:        0.291 us   |              zio_wait_for_children();
           <...>-31848 [001] 162723.127635: funcgraph_exit:         0.893 us   |            }
           <...>-31848 [001] 162723.127635: funcgraph_exit:         2.543 us   |          }
           <...>-31848 [001] 162723.127636: funcgraph_entry:        0.535 us   |          zio_add_child();
           <...>-31848 [001] 162723.127636: funcgraph_entry:        0.471 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.127637: funcgraph_entry:        0.245 us   |          zio_vdev_io_bypass();
           <...>-31848 [001] 162723.127638: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [001] 162723.127638: funcgraph_entry:        0.238 us   |            spa_get_dsl();
           <...>-31848 [001] 162723.127638: funcgraph_entry:        0.321 us   |            spa_is_initializing();
           <...>-31848 [001] 162723.127639: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127639: funcgraph_entry:        0.252 us   |              zio_wait_for_children();
           <...>-31848 [001] 162723.127640: funcgraph_exit:         0.810 us   |            }
           <...>-31848 [001] 162723.127640: funcgraph_exit:         2.458 us   |          }
           <...>-31848 [001] 162723.127641: funcgraph_entry:        0.280 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.127641: funcgraph_exit:       + 17.597 us  |        }
           <...>-31848 [001] 162723.127642: funcgraph_entry:                   |        zio_nowait() {
           <...>-31848 [001] 162723.127642: funcgraph_entry:        0.250 us   |          spa_get_dsl();
           <...>-31848 [001] 162723.127643: funcgraph_entry:        0.257 us   |          spa_is_initializing();
           <...>-31848 [001] 162723.127643: funcgraph_entry:                   |          zio_vdev_io_start() {
           <...>-31848 [001] 162723.127644: funcgraph_entry:        0.321 us   |            vdev_cache_read();
           <...>-31848 [001] 162723.127644: funcgraph_entry:        0.284 us   |            vdev_queue_io();
           <...>-31848 [001] 162723.127645: funcgraph_entry:        0.342 us   |            vdev_accessible();
           <...>-31848 [001] 162723.127645: funcgraph_entry:                   |            vdev_disk_io_start() {
           <...>-31848 [001] 162723.127646: funcgraph_entry:                   |              __vdev_disk_physio() {
           <...>-31848 [001] 162723.127662: funcgraph_entry:        0.330 us   |                vdev_disk_dio_put();
           <...>-31848 [001] 162723.127663: funcgraph_exit:       + 16.959 us  |              }
           <...>-31848 [001] 162723.127663: funcgraph_exit:       + 17.514 us  |            }
           <...>-31848 [001] 162723.127663: funcgraph_exit:       + 20.007 us  |          }
           <...>-31848 [001] 162723.127663: funcgraph_exit:       + 21.671 us  |        }
           <...>-31848 [001] 162723.127664: funcgraph_entry:        0.387 us   |        vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.127664: funcgraph_exit:       + 41.561 us  |      }
           <...>-31848 [001] 162723.127665: funcgraph_entry:        0.257 us   |      vdev_disk_io_done();
           <...>-31848 [001] 162723.127665: funcgraph_exit:       + 43.544 us  |    }
           <...>-31848 [001] 162723.127666: funcgraph_entry:        0.283 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.127666: funcgraph_entry:        0.259 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.127667: funcgraph_entry:                   |    zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127667: funcgraph_entry:        0.284 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.127668: funcgraph_exit:         0.876 us   |    }
           <...>-31848 [001] 162723.127668: funcgraph_entry:        0.239 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.127668: funcgraph_entry:        0.281 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.127669: funcgraph_entry:                   |    zio_done() {
           <...>-31848 [001] 162723.127669: funcgraph_entry:        0.289 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.127670: funcgraph_entry:        0.288 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.127670: funcgraph_entry:        0.356 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.127671: funcgraph_entry:        0.264 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.127672: funcgraph_entry:        0.267 us   |      zio_pop_transforms();
           <...>-31848 [001] 162723.127672: funcgraph_entry:        0.376 us   |      vdev_stat_update();
           <...>-31848 [001] 162723.127673: funcgraph_entry:        0.271 us   |      zio_gang_tree_free();
           <...>-31848 [001] 162723.127674: funcgraph_entry:                   |      vdev_queue_agg_io_done() {
           <...>-31848 [001] 162723.127674: funcgraph_entry:        0.287 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127675: funcgraph_entry:        0.277 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127676: funcgraph_entry:        0.268 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127678: funcgraph_entry:        0.268 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127679: funcgraph_entry:        0.277 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127681: funcgraph_entry:        0.496 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127681: funcgraph_exit:         7.993 us   |      }
           <...>-31848 [001] 162723.127682: funcgraph_entry:        0.271 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.127682: funcgraph_entry:        0.292 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.127683: funcgraph_entry:        0.532 us   |      zio_remove_child();
           <...>-31848 [001] 162723.127684: funcgraph_entry:        0.238 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127684: funcgraph_entry:        0.266 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127685: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127685: funcgraph_entry:        0.263 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127686: funcgraph_exit:         0.823 us   |      }
           <...>-31848 [001] 162723.127686: funcgraph_entry:        0.247 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127687: funcgraph_entry:        0.245 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127687: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.127687: funcgraph_entry:        0.767 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.127688: funcgraph_exit:         1.340 us   |      }
           <...>-31848 [001] 162723.127689: funcgraph_entry:        0.303 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127689: funcgraph_entry:        0.304 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127690: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.127690: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127691: funcgraph_entry:        0.305 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127691: funcgraph_entry:        0.278 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127692: funcgraph_entry:        0.255 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127692: funcgraph_entry:        0.259 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.127693: funcgraph_entry:        0.284 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.127693: funcgraph_entry:        0.283 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.127694: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.127694: funcgraph_entry:        0.268 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127695: funcgraph_entry:        0.344 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127696: funcgraph_entry:        0.375 us   |          zio_buf_free();
           <...>-31848 [001] 162723.127697: funcgraph_exit:         2.889 us   |        }
           <...>-31848 [001] 162723.127697: funcgraph_entry:        0.252 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127697: funcgraph_entry:        0.250 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127698: funcgraph_entry:        0.430 us   |        zio_remove_child();
           <...>-31848 [001] 162723.127699: funcgraph_exit:         9.086 us   |      }
           <...>-31848 [001] 162723.127699: funcgraph_entry:        0.304 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.127700: funcgraph_entry:        0.494 us   |      zio_remove_child();
           <...>-31848 [001] 162723.127700: funcgraph_entry:        0.248 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127701: funcgraph_entry:        0.253 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127702: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127702: funcgraph_entry:        0.282 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127702: funcgraph_exit:         0.809 us   |      }
           <...>-31848 [001] 162723.127703: funcgraph_entry:        0.242 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127703: funcgraph_entry:        0.282 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127704: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.127704: funcgraph_entry:        0.403 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.127705: funcgraph_exit:         0.906 us   |      }
           <...>-31848 [001] 162723.127705: funcgraph_entry:        0.254 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127705: funcgraph_entry:        0.259 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127706: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.127706: funcgraph_entry:        0.269 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127707: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127707: funcgraph_entry:        0.276 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127708: funcgraph_entry:        0.273 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127708: funcgraph_entry:        0.259 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.127709: funcgraph_entry:        0.256 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.127709: funcgraph_entry:        0.261 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.127710: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.127710: funcgraph_entry:        0.268 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127711: funcgraph_entry:        0.257 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127712: funcgraph_entry:        0.314 us   |          zio_buf_free();
           <...>-31848 [001] 162723.127712: funcgraph_exit:         2.428 us   |        }
           <...>-31848 [001] 162723.127713: funcgraph_entry:        0.335 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127713: funcgraph_entry:        0.256 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127714: funcgraph_entry:        0.550 us   |        zio_remove_child();
           <...>-31848 [001] 162723.127715: funcgraph_exit:         8.628 us   |      }
           <...>-31848 [001] 162723.127715: funcgraph_entry:        0.259 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.127715: funcgraph_entry:        0.438 us   |      zio_remove_child();
           <...>-31848 [001] 162723.127716: funcgraph_entry:        0.271 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127717: funcgraph_entry:        0.251 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127717: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127717: funcgraph_entry:        0.275 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127718: funcgraph_exit:         0.762 us   |      }
           <...>-31848 [001] 162723.127718: funcgraph_entry:        0.252 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127718: funcgraph_entry:        0.257 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127719: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.127719: funcgraph_entry:        0.412 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.127720: funcgraph_exit:         0.902 us   |      }
           <...>-31848 [001] 162723.127720: funcgraph_entry:        0.243 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127721: funcgraph_entry:        0.258 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127721: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.127721: funcgraph_entry:        0.309 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127722: funcgraph_entry:        0.270 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127722: funcgraph_entry:        0.297 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127723: funcgraph_entry:        0.308 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127724: funcgraph_entry:        0.310 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.127724: funcgraph_entry:        0.249 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.127725: funcgraph_entry:        0.276 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.127725: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.127725: funcgraph_entry:        0.260 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127727: funcgraph_entry:        0.257 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127727: funcgraph_entry:        0.390 us   |          zio_buf_free();
           <...>-31848 [001] 162723.127728: funcgraph_exit:         2.647 us   |        }
           <...>-31848 [001] 162723.127728: funcgraph_entry:        0.257 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127729: funcgraph_entry:        0.251 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127729: funcgraph_entry:        0.431 us   |        zio_remove_child();
           <...>-31848 [001] 162723.127730: funcgraph_exit:         8.706 us   |      }
           <...>-31848 [001] 162723.127730: funcgraph_entry:        0.263 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.127731: funcgraph_entry:        0.612 us   |      zio_remove_child();
           <...>-31848 [001] 162723.127731: funcgraph_entry:        0.280 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127732: funcgraph_entry:        0.252 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127733: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127733: funcgraph_entry:        0.268 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127733: funcgraph_exit:         0.786 us   |      }
           <...>-31848 [001] 162723.127734: funcgraph_entry:        0.315 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127734: funcgraph_entry:        0.252 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127735: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.127735: funcgraph_entry:        0.429 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.127736: funcgraph_exit:         0.920 us   |      }
           <...>-31848 [001] 162723.127736: funcgraph_entry:        0.254 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127736: funcgraph_entry:        0.258 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127737: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.127737: funcgraph_entry:        0.272 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127738: funcgraph_entry:        0.276 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127738: funcgraph_entry:        0.276 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127739: funcgraph_entry:        0.267 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127739: funcgraph_entry:        0.256 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.127740: funcgraph_entry:        0.255 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.127740: funcgraph_entry:        0.255 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.127741: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.127741: funcgraph_entry:        0.269 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127742: funcgraph_entry:        0.252 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127743: funcgraph_entry:        0.320 us   |          zio_buf_free();
           <...>-31848 [001] 162723.127743: funcgraph_exit:         2.444 us   |        }
           <...>-31848 [001] 162723.127743: funcgraph_entry:        0.247 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127744: funcgraph_entry:        0.257 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127744: funcgraph_entry:        0.410 us   |        zio_remove_child();
           <...>-31848 [001] 162723.127745: funcgraph_exit:         8.316 us   |      }
           <...>-31848 [001] 162723.127745: funcgraph_entry:        0.271 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.127746: funcgraph_entry:        0.428 us   |      zio_remove_child();
           <...>-31848 [001] 162723.127747: funcgraph_entry:        0.247 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127747: funcgraph_entry:        0.257 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127748: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.127748: funcgraph_entry:        0.271 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127749: funcgraph_exit:         0.841 us   |      }
           <...>-31848 [001] 162723.127749: funcgraph_entry:        0.285 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127749: funcgraph_entry:        0.257 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127750: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.127750: funcgraph_entry:        1.347 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.127752: funcgraph_exit:         1.839 us   |      }
           <...>-31848 [001] 162723.127752: funcgraph_entry:        0.276 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.127752: funcgraph_entry:        0.249 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.127753: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.127753: funcgraph_entry:        0.282 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127754: funcgraph_entry:        0.268 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127754: funcgraph_entry:        0.266 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127755: funcgraph_entry:        0.266 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.127755: funcgraph_entry:        0.428 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.127756: funcgraph_entry:        0.254 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.127756: funcgraph_entry:        0.252 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.127757: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.127757: funcgraph_entry:        0.278 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127759: funcgraph_entry:        0.329 us   |          zio_walk_parents();
           <...>-31848 [001] 162723.127759: funcgraph_entry:        0.473 us   |          zio_buf_free();
           <...>-31848 [001] 162723.127760: funcgraph_exit:         3.122 us   |        }
           <...>-31848 [001] 162723.127760: funcgraph_entry:        0.253 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127761: funcgraph_entry:        0.250 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.127761: funcgraph_entry:        0.502 us   |        zio_remove_child();
           <...>-31848 [001] 162723.127762: funcgraph_exit:         9.230 us   |      }
           <...>-31848 [001] 162723.127762: funcgraph_exit:       + 93.553 us  |    }
           <...>-31848 [001] 162723.127763: funcgraph_exit:       ! 143.789 us |  }
           <...>-31848 [001] 162723.178680: funcgraph_entry:                   |  zio_execute() {
           <...>-31848 [001] 162723.178682: funcgraph_entry:        0.666 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.178684: funcgraph_entry:        0.563 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.178685: funcgraph_entry:                   |    zio_vdev_io_done() {
           <...>-31848 [001] 162723.178686: funcgraph_entry:        0.715 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.178687: funcgraph_entry:                   |      vdev_queue_io_done() {
           <...>-31848 [001] 162723.178711: funcgraph_entry:                   |        vdev_queue_io_to_issue() {
           <...>-31848 [001] 162723.178712: funcgraph_entry:        0.959 us   |          zio_buf_alloc();
           <...>-31848 [001] 162723.178714: funcgraph_entry:        0.633 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.178715: funcgraph_entry:        0.599 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.178716: funcgraph_entry:        0.624 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.178717: funcgraph_entry:        0.610 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.178718: funcgraph_entry:        0.859 us   |          zio_buf_free();
           <...>-31848 [001] 162723.178721: funcgraph_entry:                   |          zio_vdev_delegated_io() {
           <...>-31848 [001] 162723.178722: funcgraph_entry:        1.436 us   |            zio_create();
           <...>-31848 [001] 162723.178724: funcgraph_exit:         2.582 us   |          }
           <...>-31848 [001] 162723.178724: funcgraph_entry:        1.095 us   |          zio_add_child();
           <...>-31848 [001] 162723.178726: funcgraph_entry:        1.223 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.178728: funcgraph_entry:        0.537 us   |          zio_vdev_io_bypass();
           <...>-31848 [001] 162723.178729: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [001] 162723.178729: funcgraph_entry:        0.499 us   |            spa_get_dsl();
           <...>-31848 [001] 162723.178730: funcgraph_entry:        0.626 us   |            spa_is_initializing();
           <...>-31848 [001] 162723.178732: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [001] 162723.178732: funcgraph_entry:        0.603 us   |              zio_wait_for_children();
           <...>-31848 [001] 162723.178733: funcgraph_exit:         1.623 us   |            }
           <...>-31848 [001] 162723.178734: funcgraph_exit:         5.260 us   |          }
           <...>-31848 [001] 162723.178735: funcgraph_entry:        0.820 us   |          zio_add_child();
           <...>-31848 [001] 162723.178736: funcgraph_entry:        0.787 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.178737: funcgraph_entry:        0.533 us   |          zio_vdev_io_bypass();
           <...>-31848 [001] 162723.178738: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [001] 162723.178739: funcgraph_entry:        0.594 us   |            spa_get_dsl();
           <...>-31848 [001] 162723.178740: funcgraph_entry:        0.487 us   |            spa_is_initializing();
           <...>-31848 [001] 162723.178741: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [001] 162723.178741: funcgraph_entry:        0.646 us   |              zio_wait_for_children();
           <...>-31848 [001] 162723.178742: funcgraph_exit:         1.655 us   |            }
           <...>-31848 [001] 162723.178743: funcgraph_exit:         4.801 us   |          }
           <...>-31848 [001] 162723.178743: funcgraph_entry:        0.759 us   |          zio_add_child();
           <...>-31848 [001] 162723.178745: funcgraph_entry:        0.697 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.178747: funcgraph_entry:        0.713 us   |          zio_vdev_io_bypass();
           <...>-31848 [001] 162723.178748: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [001] 162723.178749: funcgraph_entry:        0.786 us   |            spa_get_dsl();
           <...>-31848 [001] 162723.178750: funcgraph_entry:        0.933 us   |            spa_is_initializing();
           <...>-31848 [001] 162723.178752: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [001] 162723.178753: funcgraph_entry:        0.889 us   |              zio_wait_for_children();
           <...>-31848 [001] 162723.178755: funcgraph_exit:         2.623 us   |            }
           <...>-31848 [001] 162723.178756: funcgraph_exit:         7.684 us   |          }
           <...>-31848 [001] 162723.178757: funcgraph_entry:        1.729 us   |          zio_add_child();
           <...>-31848 [001] 162723.178759: funcgraph_entry:        1.432 us   |          vdev_queue_io_remove();
           <...>-31848 [001] 162723.178762: funcgraph_entry:        0.973 us   |          zio_vdev_io_bypass();
           <...>-31848 [001] 162723.178764: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [001] 162723.178765: funcgraph_entry:        1.226 us   |            spa_get_dsl();
           <...>-31848 [001] 162723.178767: funcgraph_entry:        0.873 us   |            spa_is_initializing();
           <...>-31848 [001] 162723.178769: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [001] 162723.178769: funcgraph_entry:        0.683 us   |              zio_wait_for_children();
           <...>-31848 [001] 162723.178771: funcgraph_exit:         2.503 us   |            }
           <...>-31848 [001] 162723.178772: funcgraph_exit:         7.819 us   |          }
           <...>-31848 [001] 162723.178773: funcgraph_entry:        0.540 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.178774: funcgraph_entry:        0.483 us   |          vdev_queue_offset_compare();
           <...>-31848 [001] 162723.178776: funcgraph_exit:       + 65.065 us  |        }
           <...>-31848 [001] 162723.178776: funcgraph_entry:                   |        zio_nowait() {
           <...>-31848 [001] 162723.178777: funcgraph_entry:        0.480 us   |          spa_get_dsl();
           <...>-31848 [001] 162723.178778: funcgraph_entry:        0.470 us   |          spa_is_initializing();
           <...>-31848 [001] 162723.178779: funcgraph_entry:                   |          zio_vdev_io_start() {
           <...>-31848 [001] 162723.178780: funcgraph_entry:        0.507 us   |            vdev_cache_read();
           <...>-31848 [001] 162723.178781: funcgraph_entry:        0.627 us   |            vdev_queue_io();
           <...>-31848 [001] 162723.178782: funcgraph_entry:        0.756 us   |            vdev_accessible();
           <...>-31848 [001] 162723.178783: funcgraph_entry:                   |            vdev_disk_io_start() {
           <...>-31848 [001] 162723.178784: funcgraph_entry:                   |              __vdev_disk_physio() {
           <...>-31848 [001] 162723.178794: funcgraph_entry:        0.536 us   |                vdev_disk_dio_put();
           <...>-31848 [001] 162723.178795: funcgraph_exit:       + 11.447 us  |              }
           <...>-31848 [001] 162723.178796: funcgraph_exit:       + 12.534 us  |            }
           <...>-31848 [001] 162723.178796: funcgraph_exit:       + 17.478 us  |          }
           <...>-31848 [001] 162723.178797: funcgraph_exit:       + 20.722 us  |        }
           <...>-31848 [001] 162723.178797: funcgraph_entry:        0.750 us   |        vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.178799: funcgraph_exit:       ! 107.214 us |      }
           <...>-31848 [001] 162723.178799: funcgraph_entry:        0.567 us   |      vdev_disk_io_done();
           <...>-31848 [001] 162723.178800: funcgraph_exit:       ! 111.153 us |    }
           <...>-31848 [001] 162723.178801: funcgraph_entry:        0.483 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.178802: funcgraph_entry:        0.470 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.178803: funcgraph_entry:                   |    zio_vdev_io_assess() {
           <...>-31848 [001] 162723.178803: funcgraph_entry:        0.637 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.178805: funcgraph_exit:         1.919 us   |    }
           <...>-31848 [001] 162723.178805: funcgraph_entry:        0.497 us   |    spa_get_dsl();
           <...>-31848 [001] 162723.178806: funcgraph_entry:        0.487 us   |    spa_is_initializing();
           <...>-31848 [001] 162723.178807: funcgraph_entry:                   |    zio_done() {
           <...>-31848 [001] 162723.178808: funcgraph_entry:        0.526 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.178809: funcgraph_entry:        0.513 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.178810: funcgraph_entry:        0.523 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.178811: funcgraph_entry:        0.549 us   |      zio_wait_for_children();
           <...>-31848 [001] 162723.178812: funcgraph_entry:        0.523 us   |      zio_pop_transforms();
           <...>-31848 [001] 162723.178813: funcgraph_entry:        0.752 us   |      vdev_stat_update();
           <...>-31848 [001] 162723.178815: funcgraph_entry:        0.502 us   |      zio_gang_tree_free();
           <...>-31848 [001] 162723.178816: funcgraph_entry:                   |      vdev_queue_agg_io_done() {
           <...>-31848 [001] 162723.178816: funcgraph_entry:        0.603 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178819: funcgraph_entry:        0.696 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178822: funcgraph_entry:        0.503 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178824: funcgraph_entry:        0.587 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178826: funcgraph_entry:        0.530 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178829: funcgraph_entry:        0.669 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178831: funcgraph_entry:        0.506 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178834: funcgraph_entry:        0.556 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178836: funcgraph_entry:        0.506 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178838: funcgraph_entry:        0.570 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178841: funcgraph_entry:        0.510 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178843: funcgraph_entry:        0.613 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178845: funcgraph_entry:        0.483 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178847: funcgraph_entry:        0.543 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178850: funcgraph_entry:        0.486 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178852: funcgraph_entry:        0.602 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178854: funcgraph_entry:        0.526 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178857: funcgraph_entry:        0.524 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178859: funcgraph_entry:        0.500 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178861: funcgraph_entry:        0.507 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178863: funcgraph_entry:        0.547 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178866: funcgraph_entry:        0.689 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.178867: funcgraph_exit:       + 51.508 us  |      }
           <...>-31848 [001] 162723.178868: funcgraph_entry:        0.502 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.178869: funcgraph_entry:        0.627 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.178870: funcgraph_entry:        1.255 us   |      zio_remove_child();
           <...>-31848 [001] 162723.178872: funcgraph_entry:        0.506 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.178873: funcgraph_entry:        0.526 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.178874: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.178875: funcgraph_entry:        0.623 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.178876: funcgraph_exit:         1.559 us   |      }
           <...>-31848 [001] 162723.178876: funcgraph_entry:        0.566 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.178877: funcgraph_entry:        0.553 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.178879: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.178879: funcgraph_entry:        2.123 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.178882: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.178883: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.178883: funcgraph_entry:        1.040 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.178885: funcgraph_exit:         2.602 us   |          }
           <...>-31848 [001] 162723.178887: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.178887: funcgraph_entry:        0.520 us   |            spa_load_state();
           <...>-31848 [001] 162723.178888: funcgraph_entry:        0.493 us   |            spa_load_state();
           <...>-31848 [001] 162723.178889: funcgraph_entry:        0.499 us   |            spa_load_state();
           <...>-31848 [001] 162723.178890: funcgraph_entry:        0.620 us   |            vdev_accessible();
           <...>-31848 [001] 162723.178891: funcgraph_entry:        0.607 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.178893: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.178894: funcgraph_entry:        0.826 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178896: funcgraph_entry:        0.750 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178897: funcgraph_exit:         3.965 us   |            }
           <...>-31848 [001] 162723.178898: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.178898: funcgraph_entry:        0.836 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178900: funcgraph_entry:        0.767 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178901: funcgraph_exit:         3.595 us   |            }
           <...>-31848 [001] 162723.178902: funcgraph_entry:        0.513 us   |            spa_load_state();
           <...>-31848 [001] 162723.178905: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.178906: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.178906: funcgraph_entry:        0.474 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.178907: funcgraph_exit:         1.460 us   |              }
           <...>-31848 [001] 162723.178907: funcgraph_exit:         2.635 us   |            }
           <...>-31848 [001] 162723.178908: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.178909: funcgraph_entry:        0.709 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178911: funcgraph_entry:        0.706 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178913: funcgraph_entry:        0.722 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178915: funcgraph_entry:        0.710 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178916: funcgraph_exit:         8.253 us   |            }
           <...>-31848 [001] 162723.178917: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.178918: funcgraph_entry:        0.853 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178920: funcgraph_entry:        0.853 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178922: funcgraph_entry:        0.893 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178923: funcgraph_entry:        0.799 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178925: funcgraph_entry:        0.890 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178927: funcgraph_entry:        0.783 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178928: funcgraph_entry:        0.674 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178930: funcgraph_entry:        0.689 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.178932: funcgraph_entry:        0.492 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.178933: funcgraph_exit:       + 15.919 us  |            }
           <...>-31848 [001] 162723.178933: funcgraph_entry:        0.544 us   |            spa_load_state();
           <...>-31848 [001] 162723.178934: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.178935: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.178935: funcgraph_entry:        0.490 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.178936: funcgraph_exit:         1.442 us   |              }
           <...>-31848 [001] 162723.178937: funcgraph_exit:         2.509 us   |            }
           <...>-31848 [001] 162723.178937: funcgraph_entry:        0.524 us   |            spa_name();
           <...>-31848 [001] 162723.178938: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178939: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178940: funcgraph_entry:        0.646 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178941: funcgraph_entry:        0.746 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178943: funcgraph_entry:        0.693 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178945: funcgraph_exit:         6.460 us   |              }
           <...>-31848 [001] 162723.178946: funcgraph_exit:         7.457 us   |            }
           <...>-31848 [001] 162723.178946: funcgraph_entry:        0.486 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.178947: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178948: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178948: funcgraph_entry:        0.722 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178950: funcgraph_exit:         2.315 us   |              }
           <...>-31848 [001] 162723.178950: funcgraph_exit:         3.241 us   |            }
           <...>-31848 [001] 162723.178951: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178951: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178952: funcgraph_entry:        0.806 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178954: funcgraph_entry:        0.689 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178956: funcgraph_exit:         4.205 us   |              }
           <...>-31848 [001] 162723.178956: funcgraph_exit:         5.494 us   |            }
           <...>-31848 [001] 162723.178957: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178957: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178958: funcgraph_entry:        0.689 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178960: funcgraph_exit:         2.382 us   |              }
           <...>-31848 [001] 162723.178960: funcgraph_exit:         3.293 us   |            }
           <...>-31848 [001] 162723.178961: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178961: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178962: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178963: funcgraph_exit:         2.202 us   |              }
           <...>-31848 [001] 162723.178964: funcgraph_exit:         3.242 us   |            }
           <...>-31848 [001] 162723.178964: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178965: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178966: funcgraph_entry:        0.634 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178967: funcgraph_exit:         2.203 us   |              }
           <...>-31848 [001] 162723.178968: funcgraph_exit:         3.118 us   |            }
           <...>-31848 [001] 162723.178968: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178968: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178969: funcgraph_entry:        0.600 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178971: funcgraph_exit:         2.082 us   |              }
           <...>-31848 [001] 162723.178971: funcgraph_exit:         3.002 us   |            }
           <...>-31848 [001] 162723.178972: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178972: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178973: funcgraph_entry:        0.636 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178974: funcgraph_entry:        0.600 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178976: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178978: funcgraph_exit:         5.897 us   |              }
           <...>-31848 [001] 162723.178978: funcgraph_exit:         6.817 us   |            }
           <...>-31848 [001] 162723.178979: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178979: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178980: funcgraph_entry:        0.653 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178982: funcgraph_entry:        0.746 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178984: funcgraph_exit:         4.435 us   |              }
           <...>-31848 [001] 162723.178984: funcgraph_exit:         5.370 us   |            }
           <...>-31848 [001] 162723.178985: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178985: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178986: funcgraph_entry:        0.814 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178989: funcgraph_entry:        0.670 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178991: funcgraph_exit:         5.465 us   |              }
           <...>-31848 [001] 162723.178991: funcgraph_exit:         6.470 us   |            }
           <...>-31848 [001] 162723.178992: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178993: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178993: funcgraph_entry:        0.719 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178995: funcgraph_exit:         2.622 us   |              }
           <...>-31848 [001] 162723.178996: funcgraph_exit:         3.641 us   |            }
           <...>-31848 [001] 162723.178996: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.178997: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.178997: funcgraph_entry:        0.742 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.178999: funcgraph_exit:         2.382 us   |              }
           <...>-31848 [001] 162723.179000: funcgraph_exit:         3.388 us   |            }
           <...>-31848 [001] 162723.179000: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179000: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179001: funcgraph_entry:        0.739 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179003: funcgraph_exit:         2.582 us   |              }
           <...>-31848 [001] 162723.179004: funcgraph_exit:         3.565 us   |            }
           <...>-31848 [001] 162723.179004: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179005: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179005: funcgraph_entry:        0.806 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179007: funcgraph_exit:         2.459 us   |              }
           <...>-31848 [001] 162723.179007: funcgraph_exit:         3.416 us   |            }
           <...>-31848 [001] 162723.179008: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179008: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179009: funcgraph_entry:        0.609 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179011: funcgraph_exit:         2.685 us   |              }
           <...>-31848 [001] 162723.179012: funcgraph_exit:         3.616 us   |            }
           <...>-31848 [001] 162723.179012: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179012: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179013: funcgraph_entry:        0.713 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179015: funcgraph_exit:         2.809 us   |              }
           <...>-31848 [001] 162723.179016: funcgraph_exit:         3.778 us   |            }
           <...>-31848 [001] 162723.179016: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179017: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179017: funcgraph_entry:        0.715 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179019: funcgraph_exit:         2.509 us   |              }
           <...>-31848 [001] 162723.179020: funcgraph_exit:         3.556 us   |            }
           <...>-31848 [001] 162723.179020: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179021: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179022: funcgraph_entry:        0.726 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179024: funcgraph_entry:        0.712 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179026: funcgraph_exit:         4.698 us   |              }
           <...>-31848 [001] 162723.179026: funcgraph_exit:         5.823 us   |            }
           <...>-31848 [001] 162723.179027: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179027: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179028: funcgraph_entry:        0.766 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179030: funcgraph_entry:        0.646 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179032: funcgraph_entry:        0.903 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179034: funcgraph_entry:        0.843 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179036: funcgraph_exit:         8.976 us   |              }
           <...>-31848 [001] 162723.179037: funcgraph_exit:       + 10.058 us  |            }
           <...>-31848 [001] 162723.179037: funcgraph_exit:       ! 150.832 us |          }
           <...>-31848 [001] 162723.179038: funcgraph_exit:       ! 156.058 us |        }
           <...>-31848 [001] 162723.179039: funcgraph_exit:       ! 159.955 us |      }
           <...>-31848 [001] 162723.179039: funcgraph_entry:        0.617 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179040: funcgraph_entry:        0.545 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179041: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.179042: funcgraph_entry:        0.553 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179043: funcgraph_entry:        0.524 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179044: funcgraph_entry:        0.522 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179045: funcgraph_entry:        0.650 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179046: funcgraph_entry:        0.489 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.179047: funcgraph_entry:        0.716 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.179049: funcgraph_entry:        0.610 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.179050: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.179050: funcgraph_entry:        0.656 us   |          zio_buf_free();
           <...>-31848 [001] 162723.179051: funcgraph_exit:         1.662 us   |        }
           <...>-31848 [001] 162723.179052: funcgraph_entry:        0.534 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179053: funcgraph_entry:        0.644 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179054: funcgraph_entry:        0.889 us   |        zio_remove_child();
           <...>-31848 [001] 162723.179056: funcgraph_entry:        0.550 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179057: funcgraph_entry:        0.486 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179058: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.179058: funcgraph_entry:        0.529 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179060: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.179060: funcgraph_entry:        0.570 us   |            spa_writeable();
           <...>-31848 [001] 162723.179061: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.179062: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.179063: funcgraph_entry:        0.726 us   |                zio_add_child();
           <...>-31848 [001] 162723.179065: funcgraph_exit:         2.625 us   |              }
           <...>-31848 [001] 162723.179065: funcgraph_exit:         3.638 us   |            }
           <...>-31848 [001] 162723.179066: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.179066: funcgraph_entry:        0.463 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.179067: funcgraph_entry:        0.527 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.179068: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.179068: funcgraph_entry:        0.460 us   |                spa_writeable();
           <...>-31848 [001] 162723.179070: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.179071: funcgraph_entry:        0.562 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179072: funcgraph_entry:        0.543 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179073: funcgraph_entry:        0.803 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.179075: funcgraph_exit:         4.902 us   |                }
           <...>-31848 [001] 162723.179075: funcgraph_exit:         7.277 us   |              }
           <...>-31848 [001] 162723.179076: funcgraph_exit:       + 10.298 us  |            }
           <...>-31848 [001] 162723.179076: funcgraph_exit:       + 16.842 us  |          }
           <...>-31848 [001] 162723.179077: funcgraph_exit:       + 19.024 us  |        }
           <...>-31848 [001] 162723.179077: funcgraph_entry:        0.483 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179078: funcgraph_entry:        0.486 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179079: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179080: funcgraph_entry:        0.547 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179081: funcgraph_exit:         1.493 us   |        }
           <...>-31848 [001] 162723.179081: funcgraph_exit:       + 40.010 us  |      }
           <...>-31848 [001] 162723.179082: funcgraph_entry:        0.590 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.179083: funcgraph_entry:        0.969 us   |      zio_remove_child();
           <...>-31848 [001] 162723.179085: funcgraph_entry:        0.493 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179085: funcgraph_entry:        0.493 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179086: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179087: funcgraph_entry:        0.649 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179088: funcgraph_exit:         1.619 us   |      }
           <...>-31848 [001] 162723.179089: funcgraph_entry:        0.470 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179089: funcgraph_entry:        0.496 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179091: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.179091: funcgraph_entry:        1.059 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.179093: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.179093: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.179094: funcgraph_entry:        0.563 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.179096: funcgraph_exit:         2.162 us   |          }
           <...>-31848 [001] 162723.179096: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.179097: funcgraph_entry:        0.484 us   |            spa_load_state();
           <...>-31848 [001] 162723.179098: funcgraph_entry:        0.503 us   |            spa_load_state();
           <...>-31848 [001] 162723.179099: funcgraph_entry:        0.543 us   |            spa_load_state();
           <...>-31848 [001] 162723.179100: funcgraph_entry:        0.667 us   |            vdev_accessible();
           <...>-31848 [001] 162723.179102: funcgraph_entry:        0.555 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.179103: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179104: funcgraph_entry:        0.710 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179105: funcgraph_entry:        0.819 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179107: funcgraph_exit:         4.051 us   |            }
           <...>-31848 [001] 162723.179107: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179108: funcgraph_entry:        0.633 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179109: funcgraph_entry:        0.803 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179110: funcgraph_exit:         3.251 us   |            }
           <...>-31848 [001] 162723.179111: funcgraph_entry:        0.537 us   |            spa_load_state();
           <...>-31848 [001] 162723.179113: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.179113: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.179113: funcgraph_entry:        0.500 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.179114: funcgraph_exit:         1.546 us   |              }
           <...>-31848 [001] 162723.179115: funcgraph_exit:         2.479 us   |            }
           <...>-31848 [001] 162723.179115: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.179116: funcgraph_entry:        0.722 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179118: funcgraph_entry:        0.669 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179119: funcgraph_entry:        0.644 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179121: funcgraph_entry:        1.083 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179123: funcgraph_exit:         7.269 us   |            }
           <...>-31848 [001] 162723.179123: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.179124: funcgraph_entry:        0.926 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179126: funcgraph_entry:        0.732 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179128: funcgraph_entry:        0.995 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179130: funcgraph_entry:        0.770 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179131: funcgraph_entry:        0.640 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179133: funcgraph_entry:        0.726 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179134: funcgraph_entry:        0.816 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179136: funcgraph_entry:        0.726 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179137: funcgraph_entry:        0.556 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.179138: funcgraph_exit:       + 15.243 us  |            }
           <...>-31848 [001] 162723.179139: funcgraph_entry:        0.523 us   |            spa_load_state();
           <...>-31848 [001] 162723.179140: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.179140: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.179141: funcgraph_entry:        0.467 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.179142: funcgraph_exit:         1.629 us   |              }
           <...>-31848 [001] 162723.179142: funcgraph_exit:         2.663 us   |            }
           <...>-31848 [001] 162723.179143: funcgraph_entry:        0.473 us   |            spa_name();
           <...>-31848 [001] 162723.179144: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179144: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179145: funcgraph_entry:        0.660 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179147: funcgraph_entry:        0.786 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179149: funcgraph_entry:        0.675 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179150: funcgraph_exit:         5.824 us   |              }
           <...>-31848 [001] 162723.179151: funcgraph_exit:         6.844 us   |            }
           <...>-31848 [001] 162723.179151: funcgraph_entry:        0.517 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.179152: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179153: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179153: funcgraph_entry:        0.583 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179155: funcgraph_exit:         2.272 us   |              }
           <...>-31848 [001] 162723.179155: funcgraph_exit:         3.275 us   |            }
           <...>-31848 [001] 162723.179156: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179156: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179157: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179159: funcgraph_entry:        0.646 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179161: funcgraph_exit:         4.242 us   |              }
           <...>-31848 [001] 162723.179161: funcgraph_exit:         5.241 us   |            }
           <...>-31848 [001] 162723.179162: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179162: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179163: funcgraph_entry:        0.709 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179165: funcgraph_exit:         2.446 us   |              }
           <...>-31848 [001] 162723.179165: funcgraph_exit:         3.405 us   |            }
           <...>-31848 [001] 162723.179166: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179166: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179167: funcgraph_entry:        0.719 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179169: funcgraph_exit:         2.279 us   |              }
           <...>-31848 [001] 162723.179169: funcgraph_exit:         3.262 us   |            }
           <...>-31848 [001] 162723.179170: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179170: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179171: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179172: funcgraph_exit:         2.332 us   |              }
           <...>-31848 [001] 162723.179173: funcgraph_exit:         3.299 us   |            }
           <...>-31848 [001] 162723.179173: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179174: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179175: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179176: funcgraph_exit:         2.439 us   |              }
           <...>-31848 [001] 162723.179177: funcgraph_exit:         3.571 us   |            }
           <...>-31848 [001] 162723.179178: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179178: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179179: funcgraph_entry:        1.002 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179181: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179183: funcgraph_entry:        0.716 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179185: funcgraph_exit:         6.551 us   |              }
           <...>-31848 [001] 162723.179185: funcgraph_exit:         7.624 us   |            }
           <...>-31848 [001] 162723.179186: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179186: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179187: funcgraph_entry:        0.726 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179189: funcgraph_entry:        0.770 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179190: funcgraph_exit:         4.188 us   |              }
           <...>-31848 [001] 162723.179191: funcgraph_exit:         5.338 us   |            }
           <...>-31848 [001] 162723.179192: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179192: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179193: funcgraph_entry:        0.630 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179195: funcgraph_entry:        0.767 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179197: funcgraph_exit:         4.605 us   |              }
           <...>-31848 [001] 162723.179197: funcgraph_exit:         5.687 us   |            }
           <...>-31848 [001] 162723.179198: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179198: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179199: funcgraph_entry:        0.813 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179201: funcgraph_exit:         2.569 us   |              }
           <...>-31848 [001] 162723.179201: funcgraph_exit:         3.522 us   |            }
           <...>-31848 [001] 162723.179202: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179202: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179203: funcgraph_entry:        0.783 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179205: funcgraph_exit:         2.449 us   |              }
           <...>-31848 [001] 162723.179205: funcgraph_exit:         3.398 us   |            }
           <...>-31848 [001] 162723.179206: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179206: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179207: funcgraph_entry:        0.820 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179209: funcgraph_exit:         2.563 us   |              }
           <...>-31848 [001] 162723.179209: funcgraph_exit:         3.518 us   |            }
           <...>-31848 [001] 162723.179210: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179210: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179211: funcgraph_entry:        0.816 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179213: funcgraph_exit:         2.425 us   |              }
           <...>-31848 [001] 162723.179213: funcgraph_exit:         3.385 us   |            }
           <...>-31848 [001] 162723.179214: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179214: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179215: funcgraph_entry:        0.730 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179217: funcgraph_exit:         2.551 us   |              }
           <...>-31848 [001] 162723.179217: funcgraph_exit:         3.722 us   |            }
           <...>-31848 [001] 162723.179218: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179218: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179219: funcgraph_entry:        0.790 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179221: funcgraph_exit:         2.682 us   |              }
           <...>-31848 [001] 162723.179222: funcgraph_exit:         3.698 us   |            }
           <...>-31848 [001] 162723.179222: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179223: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179223: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179225: funcgraph_exit:         2.385 us   |              }
           <...>-31848 [001] 162723.179226: funcgraph_exit:         3.378 us   |            }
           <...>-31848 [001] 162723.179226: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179227: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179227: funcgraph_entry:        0.774 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179229: funcgraph_entry:        0.720 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179231: funcgraph_exit:         4.478 us   |              }
           <...>-31848 [001] 162723.179232: funcgraph_exit:         5.580 us   |            }
           <...>-31848 [001] 162723.179232: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179233: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179233: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179235: funcgraph_entry:        0.736 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179237: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179239: funcgraph_entry:        0.724 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179242: funcgraph_exit:         8.555 us   |              }
           <...>-31848 [001] 162723.179242: funcgraph_exit:       + 10.028 us  |            }
           <...>-31848 [001] 162723.179243: funcgraph_exit:       ! 146.363 us |          }
           <...>-31848 [001] 162723.179243: funcgraph_exit:       ! 150.889 us |        }
           <...>-31848 [001] 162723.179244: funcgraph_exit:       ! 153.521 us |      }
           <...>-31848 [001] 162723.179245: funcgraph_entry:        0.576 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179246: funcgraph_entry:        0.513 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179247: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.179247: funcgraph_entry:        0.600 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179248: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179249: funcgraph_entry:        0.493 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179250: funcgraph_entry:        0.500 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179251: funcgraph_entry:        0.476 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.179252: funcgraph_entry:        0.567 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.179253: funcgraph_entry:        0.456 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.179254: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.179255: funcgraph_entry:        0.759 us   |          zio_buf_free();
           <...>-31848 [001] 162723.179256: funcgraph_exit:         1.795 us   |        }
           <...>-31848 [001] 162723.179257: funcgraph_entry:        0.540 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179258: funcgraph_entry:        0.613 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179259: funcgraph_entry:        0.932 us   |        zio_remove_child();
           <...>-31848 [001] 162723.179260: funcgraph_entry:        0.503 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179261: funcgraph_entry:        0.526 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179262: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.179263: funcgraph_entry:        0.523 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179264: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.179265: funcgraph_entry:        0.576 us   |            spa_writeable();
           <...>-31848 [001] 162723.179266: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.179266: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.179267: funcgraph_entry:        0.779 us   |                zio_add_child();
           <...>-31848 [001] 162723.179268: funcgraph_exit:         2.246 us   |              }
           <...>-31848 [001] 162723.179269: funcgraph_exit:         3.252 us   |            }
           <...>-31848 [001] 162723.179270: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.179286: funcgraph_entry:        0.953 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.179287: funcgraph_entry:        0.580 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.179288: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.179289: funcgraph_entry:        0.620 us   |                spa_writeable();
           <...>-31848 [001] 162723.179290: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.179314: funcgraph_entry:        0.576 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179315: funcgraph_entry:        0.526 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179316: funcgraph_entry:        0.616 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179318: funcgraph_entry:        0.806 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.179320: funcgraph_exit:       + 22.681 us  |                }
           <...>-31848 [001] 162723.179320: funcgraph_exit:       + 25.008 us  |              }
           <...>-31848 [001] 162723.179321: funcgraph_exit:       + 44.307 us  |            }
           <...>-31848 [001] 162723.179321: funcgraph_exit:       + 50.245 us  |          }
           <...>-31848 [001] 162723.179322: funcgraph_exit:       + 52.334 us  |        }
           <...>-31848 [001] 162723.179322: funcgraph_entry:        0.507 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179323: funcgraph_entry:        0.520 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179324: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179325: funcgraph_entry:        0.529 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179326: funcgraph_exit:         1.489 us   |        }
           <...>-31848 [001] 162723.179326: funcgraph_exit:       + 72.927 us  |      }
           <...>-31848 [001] 162723.179327: funcgraph_entry:        0.547 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.179328: funcgraph_entry:        1.196 us   |      zio_remove_child();
           <...>-31848 [001] 162723.179330: funcgraph_entry:        0.520 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179331: funcgraph_entry:        0.534 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179332: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179333: funcgraph_entry:        0.529 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179334: funcgraph_exit:         1.522 us   |      }
           <...>-31848 [001] 162723.179335: funcgraph_entry:        0.477 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179335: funcgraph_entry:        0.560 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179337: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.179337: funcgraph_entry:        0.893 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.179339: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.179340: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.179340: funcgraph_entry:        0.654 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.179342: funcgraph_exit:         2.272 us   |          }
           <...>-31848 [001] 162723.179343: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.179343: funcgraph_entry:        0.499 us   |            spa_load_state();
           <...>-31848 [001] 162723.179344: funcgraph_entry:        0.494 us   |            spa_load_state();
           <...>-31848 [001] 162723.179345: funcgraph_entry:        0.502 us   |            spa_load_state();
           <...>-31848 [001] 162723.179346: funcgraph_entry:        0.480 us   |            vdev_accessible();
           <...>-31848 [001] 162723.179347: funcgraph_entry:        0.589 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.179348: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179349: funcgraph_entry:        2.548 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179352: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179353: funcgraph_exit:         5.048 us   |            }
           <...>-31848 [001] 162723.179354: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179354: funcgraph_entry:        0.844 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179356: funcgraph_entry:        0.734 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179357: funcgraph_exit:         3.286 us   |            }
           <...>-31848 [001] 162723.179358: funcgraph_entry:        0.530 us   |            spa_load_state();
           <...>-31848 [001] 162723.179359: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.179360: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.179360: funcgraph_entry:        0.493 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.179361: funcgraph_exit:         1.466 us   |              }
           <...>-31848 [001] 162723.179362: funcgraph_exit:         2.492 us   |            }
           <...>-31848 [001] 162723.179362: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.179363: funcgraph_entry:        0.767 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179365: funcgraph_entry:        0.740 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179366: funcgraph_entry:        0.713 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179367: funcgraph_entry:        0.722 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179369: funcgraph_exit:         6.827 us   |            }
           <...>-31848 [001] 162723.179370: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.179371: funcgraph_entry:        0.797 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179372: funcgraph_entry:        0.673 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179374: funcgraph_entry:        0.872 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179375: funcgraph_entry:        0.710 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179377: funcgraph_entry:        0.750 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179378: funcgraph_entry:        0.706 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179380: funcgraph_entry:        0.679 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179381: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179382: funcgraph_entry:        0.517 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.179383: funcgraph_exit:       + 13.899 us  |            }
           <...>-31848 [001] 162723.179384: funcgraph_entry:        0.475 us   |            spa_load_state();
           <...>-31848 [001] 162723.179385: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.179385: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.179386: funcgraph_entry:        0.856 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.179387: funcgraph_exit:         1.846 us   |              }
           <...>-31848 [001] 162723.179388: funcgraph_exit:         2.792 us   |            }
           <...>-31848 [001] 162723.179388: funcgraph_entry:        0.556 us   |            spa_name();
           <...>-31848 [001] 162723.179389: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179390: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179391: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179392: funcgraph_entry:        0.765 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179394: funcgraph_entry:        0.612 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179395: funcgraph_exit:         5.531 us   |              }
           <...>-31848 [001] 162723.179396: funcgraph_exit:         6.453 us   |            }
           <...>-31848 [001] 162723.179396: funcgraph_entry:        0.526 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.179397: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179398: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179398: funcgraph_entry:        0.682 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179400: funcgraph_exit:         2.089 us   |              }
           <...>-31848 [001] 162723.179400: funcgraph_exit:         3.029 us   |            }
           <...>-31848 [001] 162723.179401: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179401: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179402: funcgraph_entry:        0.670 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179403: funcgraph_entry:        0.563 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179405: funcgraph_exit:         3.449 us   |              }
           <...>-31848 [001] 162723.179405: funcgraph_exit:         4.351 us   |            }
           <...>-31848 [001] 162723.179406: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179406: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179407: funcgraph_entry:        0.717 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179408: funcgraph_exit:         2.215 us   |              }
           <...>-31848 [001] 162723.179409: funcgraph_exit:         3.146 us   |            }
           <...>-31848 [001] 162723.179409: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179410: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179410: funcgraph_entry:        0.579 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179412: funcgraph_exit:         2.032 us   |              }
           <...>-31848 [001] 162723.179412: funcgraph_exit:         2.959 us   |            }
           <...>-31848 [001] 162723.179413: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179413: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179414: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179415: funcgraph_exit:         2.169 us   |              }
           <...>-31848 [001] 162723.179416: funcgraph_exit:         3.145 us   |            }
           <...>-31848 [001] 162723.179416: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179417: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179417: funcgraph_entry:        0.573 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179419: funcgraph_exit:         2.009 us   |              }
           <...>-31848 [001] 162723.179419: funcgraph_exit:         2.994 us   |            }
           <...>-31848 [001] 162723.179420: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179420: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179421: funcgraph_entry:        0.639 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179423: funcgraph_entry:        0.712 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179424: funcgraph_entry:        0.570 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179426: funcgraph_exit:         5.457 us   |              }
           <...>-31848 [001] 162723.179426: funcgraph_exit:         6.464 us   |            }
           <...>-31848 [001] 162723.179427: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179427: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179428: funcgraph_entry:        0.594 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179430: funcgraph_entry:        0.607 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179431: funcgraph_exit:         3.769 us   |              }
           <...>-31848 [001] 162723.179432: funcgraph_exit:         4.760 us   |            }
           <...>-31848 [001] 162723.179432: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179433: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179434: funcgraph_entry:        0.687 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179435: funcgraph_entry:        0.649 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179437: funcgraph_exit:         4.252 us   |              }
           <...>-31848 [001] 162723.179438: funcgraph_exit:         5.230 us   |            }
           <...>-31848 [001] 162723.179438: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179439: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179439: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179441: funcgraph_exit:         2.339 us   |              }
           <...>-31848 [001] 162723.179442: funcgraph_exit:         3.338 us   |            }
           <...>-31848 [001] 162723.179442: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179443: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179443: funcgraph_entry:        0.629 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179445: funcgraph_exit:         2.102 us   |              }
           <...>-31848 [001] 162723.179445: funcgraph_exit:         3.225 us   |            }
           <...>-31848 [001] 162723.179446: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179446: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179447: funcgraph_entry:        0.653 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179449: funcgraph_exit:         2.166 us   |              }
           <...>-31848 [001] 162723.179449: funcgraph_exit:         3.183 us   |            }
           <...>-31848 [001] 162723.179450: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179450: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179451: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179452: funcgraph_exit:         2.272 us   |              }
           <...>-31848 [001] 162723.179453: funcgraph_exit:         3.208 us   |            }
           <...>-31848 [001] 162723.179453: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179454: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179454: funcgraph_entry:        0.656 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179456: funcgraph_exit:         2.205 us   |              }
           <...>-31848 [001] 162723.179456: funcgraph_exit:         3.192 us   |            }
           <...>-31848 [001] 162723.179457: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179457: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179458: funcgraph_entry:        0.626 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179460: funcgraph_exit:         2.192 us   |              }
           <...>-31848 [001] 162723.179460: funcgraph_exit:         3.182 us   |            }
           <...>-31848 [001] 162723.179461: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179461: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179462: funcgraph_entry:        0.786 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179463: funcgraph_exit:         2.305 us   |              }
           <...>-31848 [001] 162723.179464: funcgraph_exit:         3.372 us   |            }
           <...>-31848 [001] 162723.179464: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179465: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179465: funcgraph_entry:        0.719 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179467: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179469: funcgraph_exit:         4.138 us   |              }
           <...>-31848 [001] 162723.179470: funcgraph_exit:         5.108 us   |            }
           <...>-31848 [001] 162723.179470: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179471: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179471: funcgraph_entry:        0.736 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179473: funcgraph_entry:        0.627 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179475: funcgraph_entry:        0.847 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179477: funcgraph_entry:        0.657 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179478: funcgraph_exit:         7.887 us   |              }
           <...>-31848 [001] 162723.179479: funcgraph_exit:         8.898 us   |            }
           <...>-31848 [001] 162723.179480: funcgraph_exit:       ! 137.100 us |          }
           <...>-31848 [001] 162723.179597: funcgraph_exit:       ! 257.524 us |        }
           <...>-31848 [001] 162723.179598: funcgraph_exit:       ! 261.232 us |      }
           <...>-31848 [001] 162723.179599: funcgraph_entry:        1.060 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179601: funcgraph_entry:        0.572 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179602: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.179603: funcgraph_entry:        0.574 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179604: funcgraph_entry:        0.506 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179605: funcgraph_entry:        0.497 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179606: funcgraph_entry:        0.513 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179607: funcgraph_entry:        0.480 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.179608: funcgraph_entry:        0.750 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.179609: funcgraph_entry:        0.480 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.179610: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.179610: funcgraph_entry:        0.830 us   |          zio_buf_free();
           <...>-31848 [001] 162723.179612: funcgraph_exit:         1.779 us   |        }
           <...>-31848 [001] 162723.179613: funcgraph_entry:        0.513 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179614: funcgraph_entry:        0.503 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179615: funcgraph_entry:        1.223 us   |        zio_remove_child();
           <...>-31848 [001] 162723.179616: funcgraph_entry:        0.493 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179617: funcgraph_entry:        0.589 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179618: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.179619: funcgraph_entry:        0.510 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179620: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.179621: funcgraph_entry:        0.483 us   |            spa_writeable();
           <...>-31848 [001] 162723.179622: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.179622: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.179623: funcgraph_entry:        0.772 us   |                zio_add_child();
           <...>-31848 [001] 162723.179625: funcgraph_exit:         2.529 us   |              }
           <...>-31848 [001] 162723.179625: funcgraph_exit:         3.502 us   |            }
           <...>-31848 [001] 162723.179626: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.179626: funcgraph_entry:        0.537 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.179627: funcgraph_entry:        0.497 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.179628: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.179629: funcgraph_entry:        0.510 us   |                spa_writeable();
           <...>-31848 [001] 162723.179630: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.179631: funcgraph_entry:        0.566 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179632: funcgraph_entry:        0.530 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179633: funcgraph_entry:        0.500 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179635: funcgraph_entry:        0.760 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.179636: funcgraph_exit:         6.097 us   |                }
           <...>-31848 [001] 162723.179636: funcgraph_exit:         8.246 us   |              }
           <...>-31848 [001] 162723.179637: funcgraph_exit:       + 11.230 us  |            }
           <...>-31848 [001] 162723.179637: funcgraph_exit:       + 17.312 us  |          }
           <...>-31848 [001] 162723.179638: funcgraph_exit:       + 19.424 us  |        }
           <...>-31848 [001] 162723.179638: funcgraph_entry:        0.476 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179639: funcgraph_entry:        0.480 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179640: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179641: funcgraph_entry:        0.544 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179642: funcgraph_exit:         1.444 us   |        }
           <...>-31848 [001] 162723.179643: funcgraph_exit:       + 40.577 us  |      }
           <...>-31848 [001] 162723.179643: funcgraph_entry:        0.650 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.179644: funcgraph_entry:        0.923 us   |      zio_remove_child();
           <...>-31848 [001] 162723.179646: funcgraph_entry:        0.492 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179647: funcgraph_entry:        0.550 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179648: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179649: funcgraph_entry:        0.557 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179650: funcgraph_exit:         1.615 us   |      }
           <...>-31848 [001] 162723.179650: funcgraph_entry:        0.469 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179651: funcgraph_entry:        0.473 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179652: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.179653: funcgraph_entry:        1.037 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.179654: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.179655: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.179656: funcgraph_entry:        0.544 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.179657: funcgraph_exit:         2.282 us   |          }
           <...>-31848 [001] 162723.179658: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.179659: funcgraph_entry:        0.470 us   |            spa_load_state();
           <...>-31848 [001] 162723.179660: funcgraph_entry:        0.474 us   |            spa_load_state();
           <...>-31848 [001] 162723.179661: funcgraph_entry:        0.460 us   |            spa_load_state();
           <...>-31848 [001] 162723.179662: funcgraph_entry:        0.800 us   |            vdev_accessible();
           <...>-31848 [001] 162723.179663: funcgraph_entry:        0.567 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.179664: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179665: funcgraph_entry:        0.927 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179667: funcgraph_entry:        0.759 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179668: funcgraph_exit:         3.821 us   |            }
           <...>-31848 [001] 162723.179669: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179669: funcgraph_entry:        0.650 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179671: funcgraph_entry:        0.793 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179672: funcgraph_exit:         3.388 us   |            }
           <...>-31848 [001] 162723.179782: funcgraph_entry:        0.513 us   |            spa_load_state();
           <...>-31848 [001] 162723.179784: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.179784: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.179785: funcgraph_entry:        0.527 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.179786: funcgraph_exit:         1.469 us   |              }
           <...>-31848 [001] 162723.179786: funcgraph_exit:         2.516 us   |            }
           <...>-31848 [001] 162723.179787: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.179787: funcgraph_entry:        0.656 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179789: funcgraph_entry:        0.726 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179791: funcgraph_entry:        0.633 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179792: funcgraph_entry:        0.714 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179793: funcgraph_exit:         6.823 us   |            }
           <...>-31848 [001] 162723.179794: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.179795: funcgraph_entry:        0.737 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179796: funcgraph_entry:        0.650 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179798: funcgraph_entry:        0.776 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179799: funcgraph_entry:        0.842 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179801: funcgraph_entry:        0.707 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179802: funcgraph_entry:        0.643 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179804: funcgraph_entry:        0.596 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179805: funcgraph_entry:        0.606 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179806: funcgraph_entry:        0.487 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.179807: funcgraph_exit:       + 13.470 us  |            }
           <...>-31848 [001] 162723.179808: funcgraph_entry:        0.606 us   |            spa_load_state();
           <...>-31848 [001] 162723.179809: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.179809: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.179810: funcgraph_entry:        0.495 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.179811: funcgraph_exit:         1.502 us   |              }
           <...>-31848 [001] 162723.179811: funcgraph_exit:         2.436 us   |            }
           <...>-31848 [001] 162723.179812: funcgraph_entry:        0.473 us   |            spa_name();
           <...>-31848 [001] 162723.179813: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179813: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179814: funcgraph_entry:        0.829 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179816: funcgraph_entry:        1.013 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179819: funcgraph_entry:        1.107 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179821: funcgraph_exit:         7.890 us   |              }
           <...>-31848 [001] 162723.179822: funcgraph_exit:         9.046 us   |            }
           <...>-31848 [001] 162723.179823: funcgraph_entry:        0.806 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.179824: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179825: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179826: funcgraph_entry:        1.796 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179829: funcgraph_exit:         3.961 us   |              }
           <...>-31848 [001] 162723.179830: funcgraph_exit:         5.554 us   |            }
           <...>-31848 [001] 162723.179831: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179832: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179833: funcgraph_entry:        4.311 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179839: funcgraph_entry:        1.300 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179842: funcgraph_exit:         9.765 us   |              }
           <...>-31848 [001] 162723.179842: funcgraph_exit:       + 11.245 us  |            }
           <...>-31848 [001] 162723.179843: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179843: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179844: funcgraph_entry:        0.730 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179846: funcgraph_exit:         2.372 us   |              }
           <...>-31848 [001] 162723.179846: funcgraph_exit:         3.554 us   |            }
           <...>-31848 [001] 162723.179847: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179847: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179848: funcgraph_entry:        0.716 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179849: funcgraph_exit:         2.232 us   |              }
           <...>-31848 [001] 162723.179850: funcgraph_exit:         3.194 us   |            }
           <...>-31848 [001] 162723.179850: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179851: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179851: funcgraph_entry:        0.667 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179853: funcgraph_exit:         2.189 us   |              }
           <...>-31848 [001] 162723.179854: funcgraph_exit:         3.101 us   |            }
           <...>-31848 [001] 162723.179854: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179854: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179855: funcgraph_entry:        0.836 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179857: funcgraph_exit:         2.772 us   |              }
           <...>-31848 [001] 162723.179858: funcgraph_exit:         3.705 us   |            }
           <...>-31848 [001] 162723.179858: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179859: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179859: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179861: funcgraph_entry:        0.790 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179863: funcgraph_entry:        0.646 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179865: funcgraph_exit:         6.227 us   |              }
           <...>-31848 [001] 162723.179865: funcgraph_exit:         7.176 us   |            }
           <...>-31848 [001] 162723.179866: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179866: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179867: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179869: funcgraph_entry:        0.816 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179871: funcgraph_exit:         4.118 us   |              }
           <...>-31848 [001] 162723.179871: funcgraph_exit:         5.195 us   |            }
           <...>-31848 [001] 162723.179872: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179872: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179873: funcgraph_entry:        0.713 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179875: funcgraph_entry:        0.800 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179877: funcgraph_exit:         4.575 us   |              }
           <...>-31848 [001] 162723.179877: funcgraph_exit:         5.645 us   |            }
           <...>-31848 [001] 162723.179878: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179879: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179879: funcgraph_entry:        0.732 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179881: funcgraph_exit:         2.206 us   |              }
           <...>-31848 [001] 162723.179881: funcgraph_exit:         3.183 us   |            }
           <...>-31848 [001] 162723.179882: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179882: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179883: funcgraph_entry:        0.830 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179885: funcgraph_exit:         2.366 us   |              }
           <...>-31848 [001] 162723.179885: funcgraph_exit:         3.405 us   |            }
           <...>-31848 [001] 162723.179886: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179886: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179887: funcgraph_entry:        0.617 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179888: funcgraph_exit:         2.189 us   |              }
           <...>-31848 [001] 162723.179889: funcgraph_exit:         3.162 us   |            }
           <...>-31848 [001] 162723.179889: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179890: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179890: funcgraph_entry:        0.730 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179892: funcgraph_exit:         2.252 us   |              }
           <...>-31848 [001] 162723.179893: funcgraph_exit:         3.342 us   |            }
           <...>-31848 [001] 162723.179893: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179894: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179894: funcgraph_entry:        0.750 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179896: funcgraph_exit:         2.442 us   |              }
           <...>-31848 [001] 162723.179897: funcgraph_exit:         3.418 us   |            }
           <...>-31848 [001] 162723.179898: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179898: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179899: funcgraph_entry:        0.724 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179900: funcgraph_exit:         2.412 us   |              }
           <...>-31848 [001] 162723.179901: funcgraph_exit:         3.401 us   |            }
           <...>-31848 [001] 162723.179901: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179902: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179903: funcgraph_entry:        0.716 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179904: funcgraph_exit:         2.305 us   |              }
           <...>-31848 [001] 162723.179905: funcgraph_exit:         3.458 us   |            }
           <...>-31848 [001] 162723.179905: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179906: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179906: funcgraph_entry:        0.720 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179908: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179910: funcgraph_exit:         4.131 us   |              }
           <...>-31848 [001] 162723.179910: funcgraph_exit:         5.117 us   |            }
           <...>-31848 [001] 162723.179911: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.179912: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.179912: funcgraph_entry:        0.649 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179914: funcgraph_entry:        0.729 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179916: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179918: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.179919: funcgraph_exit:         7.856 us   |              }
           <...>-31848 [001] 162723.179920: funcgraph_exit:         8.806 us   |            }
           <...>-31848 [001] 162723.179921: funcgraph_exit:       ! 262.395 us |          }
           <...>-31848 [001] 162723.179921: funcgraph_exit:       ! 267.275 us |        }
           <...>-31848 [001] 162723.179922: funcgraph_exit:       ! 269.828 us |      }
           <...>-31848 [001] 162723.179923: funcgraph_entry:        0.485 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179924: funcgraph_entry:        0.497 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179925: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.179925: funcgraph_entry:        0.587 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179926: funcgraph_entry:        0.500 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179927: funcgraph_entry:        0.520 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179928: funcgraph_entry:        0.520 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179929: funcgraph_entry:        0.480 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.179930: funcgraph_entry:        0.716 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.179931: funcgraph_entry:        0.493 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.179932: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.179933: funcgraph_entry:        0.696 us   |          zio_buf_free();
           <...>-31848 [001] 162723.179934: funcgraph_exit:         1.792 us   |        }
           <...>-31848 [001] 162723.179935: funcgraph_entry:        0.496 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179936: funcgraph_entry:        0.624 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.179937: funcgraph_entry:        1.329 us   |        zio_remove_child();
           <...>-31848 [001] 162723.179939: funcgraph_entry:        0.526 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179940: funcgraph_entry:        0.483 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179941: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.179941: funcgraph_entry:        0.513 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179942: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.179943: funcgraph_entry:        0.462 us   |            spa_writeable();
           <...>-31848 [001] 162723.179944: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.179944: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.179945: funcgraph_entry:        0.813 us   |                zio_add_child();
           <...>-31848 [001] 162723.179947: funcgraph_exit:         2.379 us   |              }
           <...>-31848 [001] 162723.179947: funcgraph_exit:         3.385 us   |            }
           <...>-31848 [001] 162723.179948: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.179948: funcgraph_entry:        0.480 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.179949: funcgraph_entry:        0.476 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.179950: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.179951: funcgraph_entry:        0.546 us   |                spa_writeable();
           <...>-31848 [001] 162723.179952: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.179957: funcgraph_entry:        0.552 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179958: funcgraph_entry:        0.460 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179959: funcgraph_entry:        0.549 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179960: funcgraph_entry:        0.533 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.179962: funcgraph_entry:        0.720 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.179963: funcgraph_exit:       + 10.895 us  |                }
           <...>-31848 [001] 162723.179964: funcgraph_exit:       + 13.187 us  |              }
           <...>-31848 [001] 162723.179964: funcgraph_exit:       + 16.372 us  |            }
           <...>-31848 [001] 162723.179965: funcgraph_exit:       + 22.173 us  |          }
           <...>-31848 [001] 162723.179965: funcgraph_exit:       + 24.251 us  |        }
           <...>-31848 [001] 162723.179966: funcgraph_entry:        0.479 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.179967: funcgraph_entry:        0.580 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.179968: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179968: funcgraph_entry:        0.537 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.179969: funcgraph_exit:         1.520 us   |        }
           <...>-31848 [001] 162723.179970: funcgraph_exit:       + 45.501 us  |      }
           <...>-31848 [001] 162723.179971: funcgraph_entry:        0.563 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.179972: funcgraph_entry:        0.963 us   |      zio_remove_child();
           <...>-31848 [001] 162723.179973: funcgraph_entry:        0.496 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179974: funcgraph_entry:        0.480 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179975: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.179976: funcgraph_entry:        0.576 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.179977: funcgraph_exit:         1.519 us   |      }
           <...>-31848 [001] 162723.179977: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.179978: funcgraph_entry:        0.574 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.179979: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.179980: funcgraph_entry:        1.435 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.179982: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.179983: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.179983: funcgraph_entry:        0.530 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.179985: funcgraph_exit:         1.976 us   |          }
           <...>-31848 [001] 162723.179985: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.179986: funcgraph_entry:        0.562 us   |            spa_load_state();
           <...>-31848 [001] 162723.179987: funcgraph_entry:        0.537 us   |            spa_load_state();
           <...>-31848 [001] 162723.179988: funcgraph_entry:        0.506 us   |            spa_load_state();
           <...>-31848 [001] 162723.179989: funcgraph_entry:        0.496 us   |            vdev_accessible();
           <...>-31848 [001] 162723.179990: funcgraph_entry:        0.683 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.179991: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179992: funcgraph_entry:        0.672 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179993: funcgraph_entry:        0.820 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179995: funcgraph_exit:         3.435 us   |            }
           <...>-31848 [001] 162723.179995: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.179996: funcgraph_entry:        0.642 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179997: funcgraph_entry:        0.737 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.179998: funcgraph_exit:         3.242 us   |            }
           <...>-31848 [001] 162723.179999: funcgraph_entry:        0.470 us   |            spa_load_state();
           <...>-31848 [001] 162723.180001: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180001: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180002: funcgraph_entry:        0.480 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180003: funcgraph_exit:         1.503 us   |              }
           <...>-31848 [001] 162723.180003: funcgraph_exit:         2.496 us   |            }
           <...>-31848 [001] 162723.180004: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.180004: funcgraph_entry:        0.772 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180006: funcgraph_entry:        0.672 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180008: funcgraph_entry:        0.740 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180009: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180010: funcgraph_exit:         7.044 us   |            }
           <...>-31848 [001] 162723.180011: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.180012: funcgraph_entry:        0.634 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180013: funcgraph_entry:        0.636 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180015: funcgraph_entry:        0.700 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180016: funcgraph_entry:        0.593 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180017: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180019: funcgraph_entry:        0.610 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180020: funcgraph_entry:        0.596 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180022: funcgraph_entry:        0.590 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180023: funcgraph_entry:        0.473 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.180024: funcgraph_exit:       + 12.847 us  |            }
           <...>-31848 [001] 162723.180024: funcgraph_entry:        0.480 us   |            spa_load_state();
           <...>-31848 [001] 162723.180025: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180026: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180026: funcgraph_entry:        0.483 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180027: funcgraph_exit:         1.409 us   |              }
           <...>-31848 [001] 162723.180028: funcgraph_exit:         2.356 us   |            }
           <...>-31848 [001] 162723.180028: funcgraph_entry:        0.594 us   |            spa_name();
           <...>-31848 [001] 162723.180029: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180030: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180030: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180032: funcgraph_entry:        0.657 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180033: funcgraph_entry:        0.720 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180035: funcgraph_exit:         5.355 us   |              }
           <...>-31848 [001] 162723.180035: funcgraph_exit:         6.353 us   |            }
           <...>-31848 [001] 162723.180036: funcgraph_entry:        0.503 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.180037: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180037: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180038: funcgraph_entry:        0.617 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180039: funcgraph_exit:         2.052 us   |              }
           <...>-31848 [001] 162723.180040: funcgraph_exit:         3.002 us   |            }
           <...>-31848 [001] 162723.180040: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180041: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180042: funcgraph_entry:        0.706 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180043: funcgraph_entry:        0.609 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180045: funcgraph_exit:         3.634 us   |              }
           <...>-31848 [001] 162723.180045: funcgraph_exit:         4.625 us   |            }
           <...>-31848 [001] 162723.180046: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180046: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180047: funcgraph_entry:        0.617 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180048: funcgraph_exit:         2.112 us   |              }
           <...>-31848 [001] 162723.180049: funcgraph_exit:         3.048 us   |            }
           <...>-31848 [001] 162723.180049: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180050: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180050: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180052: funcgraph_exit:         2.082 us   |              }
           <...>-31848 [001] 162723.180052: funcgraph_exit:         3.088 us   |            }
           <...>-31848 [001] 162723.180053: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180053: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180054: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180055: funcgraph_exit:         2.186 us   |              }
           <...>-31848 [001] 162723.180056: funcgraph_exit:         3.165 us   |            }
           <...>-31848 [001] 162723.180056: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180057: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180058: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180059: funcgraph_exit:         2.542 us   |              }
           <...>-31848 [001] 162723.180060: funcgraph_exit:         3.572 us   |            }
           <...>-31848 [001] 162723.180060: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180061: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180061: funcgraph_entry:        0.626 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180063: funcgraph_entry:        0.670 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180065: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180066: funcgraph_exit:         5.510 us   |              }
           <...>-31848 [001] 162723.180067: funcgraph_exit:         6.540 us   |            }
           <...>-31848 [001] 162723.180067: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180068: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180068: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180070: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180071: funcgraph_exit:         3.648 us   |              }
           <...>-31848 [001] 162723.180072: funcgraph_exit:         4.585 us   |            }
           <...>-31848 [001] 162723.180073: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180073: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180074: funcgraph_entry:        0.696 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180075: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180077: funcgraph_exit:         4.135 us   |              }
           <...>-31848 [001] 162723.180078: funcgraph_exit:         5.205 us   |            }
           <...>-31848 [001] 162723.180078: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180079: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180079: funcgraph_entry:        0.673 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180081: funcgraph_exit:         2.179 us   |              }
           <...>-31848 [001] 162723.180081: funcgraph_exit:         3.132 us   |            }
           <...>-31848 [001] 162723.180082: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180083: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180083: funcgraph_entry:        0.736 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180085: funcgraph_exit:         2.215 us   |              }
           <...>-31848 [001] 162723.180085: funcgraph_exit:         3.351 us   |            }
           <...>-31848 [001] 162723.180086: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180086: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180087: funcgraph_entry:        0.764 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180089: funcgraph_exit:         2.449 us   |              }
           <...>-31848 [001] 162723.180089: funcgraph_exit:         3.431 us   |            }
           <...>-31848 [001] 162723.180090: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180090: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180091: funcgraph_entry:        0.754 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180093: funcgraph_exit:         2.332 us   |              }
           <...>-31848 [001] 162723.180093: funcgraph_exit:         3.458 us   |            }
           <...>-31848 [001] 162723.180094: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180094: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180095: funcgraph_entry:        2.359 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180098: funcgraph_exit:         4.034 us   |              }
           <...>-31848 [001] 162723.180099: funcgraph_exit:         4.974 us   |            }
           <...>-31848 [001] 162723.180099: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180100: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180100: funcgraph_entry:        0.785 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180102: funcgraph_exit:         2.402 us   |              }
           <...>-31848 [001] 162723.180103: funcgraph_exit:         3.409 us   |            }
           <...>-31848 [001] 162723.180103: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180104: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180104: funcgraph_entry:        0.869 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180106: funcgraph_exit:         2.619 us   |              }
           <...>-31848 [001] 162723.180107: funcgraph_exit:         3.675 us   |            }
           <...>-31848 [001] 162723.180107: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180108: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180108: funcgraph_entry:        0.856 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180110: funcgraph_entry:        0.669 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180112: funcgraph_exit:         4.308 us   |              }
           <...>-31848 [001] 162723.180113: funcgraph_exit:         5.401 us   |            }
           <...>-31848 [001] 162723.180113: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180114: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180114: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180116: funcgraph_entry:        0.943 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180118: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180120: funcgraph_entry:        0.763 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180122: funcgraph_exit:         8.526 us   |              }
           <...>-31848 [001] 162723.180123: funcgraph_exit:         9.556 us   |            }
           <...>-31848 [001] 162723.180123: funcgraph_exit:       ! 137.866 us |          }
           <...>-31848 [001] 162723.180124: funcgraph_exit:       ! 142.170 us |        }
           <...>-31848 [001] 162723.180125: funcgraph_exit:       ! 145.129 us |      }
           <...>-31848 [001] 162723.180125: funcgraph_entry:        0.513 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180126: funcgraph_entry:        0.523 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180127: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.180127: funcgraph_entry:        0.507 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180128: funcgraph_entry:        0.514 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180129: funcgraph_entry:        0.500 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180130: funcgraph_entry:        0.500 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180131: funcgraph_entry:        0.519 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.180132: funcgraph_entry:        0.560 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.180133: funcgraph_entry:        0.496 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.180134: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.180135: funcgraph_entry:        0.690 us   |          zio_buf_free();
           <...>-31848 [001] 162723.180136: funcgraph_exit:         1.573 us   |        }
           <...>-31848 [001] 162723.180136: funcgraph_entry:        0.570 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180137: funcgraph_entry:        0.489 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180138: funcgraph_entry:        1.020 us   |        zio_remove_child();
           <...>-31848 [001] 162723.180140: funcgraph_entry:        0.493 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180141: funcgraph_entry:        0.490 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180142: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.180142: funcgraph_entry:        0.523 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180143: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.180144: funcgraph_entry:        0.467 us   |            spa_writeable();
           <...>-31848 [001] 162723.180145: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.180145: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.180146: funcgraph_entry:        0.854 us   |                zio_add_child();
           <...>-31848 [001] 162723.180148: funcgraph_exit:         2.296 us   |              }
           <...>-31848 [001] 162723.180148: funcgraph_exit:         3.388 us   |            }
           <...>-31848 [001] 162723.180149: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.180149: funcgraph_entry:        0.560 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.180150: funcgraph_entry:        0.497 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.180151: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.180152: funcgraph_entry:        0.556 us   |                spa_writeable();
           <...>-31848 [001] 162723.180153: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.180154: funcgraph_entry:        0.519 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180155: funcgraph_entry:        0.496 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180155: funcgraph_entry:        0.510 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180156: funcgraph_entry:        0.530 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180158: funcgraph_entry:        0.649 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.180159: funcgraph_exit:         6.114 us   |                }
           <...>-31848 [001] 162723.180159: funcgraph_exit:         8.169 us   |              }
           <...>-31848 [001] 162723.180160: funcgraph_exit:       + 11.261 us  |            }
           <...>-31848 [001] 162723.180160: funcgraph_exit:       + 17.088 us  |          }
           <...>-31848 [001] 162723.180161: funcgraph_exit:       + 19.054 us  |        }
           <...>-31848 [001] 162723.180161: funcgraph_entry:        0.490 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180162: funcgraph_entry:        0.526 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180164: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180164: funcgraph_entry:        0.562 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180165: funcgraph_exit:         1.862 us   |        }
           <...>-31848 [001] 162723.180166: funcgraph_exit:       + 38.921 us  |      }
           <...>-31848 [001] 162723.180166: funcgraph_entry:        0.543 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.180168: funcgraph_entry:        0.953 us   |      zio_remove_child();
           <...>-31848 [001] 162723.180169: funcgraph_entry:        0.587 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180170: funcgraph_entry:        0.516 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180171: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180172: funcgraph_entry:        0.593 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180173: funcgraph_exit:         1.612 us   |      }
           <...>-31848 [001] 162723.180173: funcgraph_entry:        0.510 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180174: funcgraph_entry:        0.482 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180175: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.180176: funcgraph_entry:        0.839 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.180177: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.180178: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.180178: funcgraph_entry:        0.556 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.180180: funcgraph_exit:         2.266 us   |          }
           <...>-31848 [001] 162723.180181: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.180181: funcgraph_entry:        0.474 us   |            spa_load_state();
           <...>-31848 [001] 162723.180182: funcgraph_entry:        0.513 us   |            spa_load_state();
           <...>-31848 [001] 162723.180183: funcgraph_entry:        0.474 us   |            spa_load_state();
           <...>-31848 [001] 162723.180184: funcgraph_entry:        0.489 us   |            vdev_accessible();
           <...>-31848 [001] 162723.180185: funcgraph_entry:        0.567 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.180186: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180187: funcgraph_entry:        0.657 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180188: funcgraph_entry:        0.769 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180190: funcgraph_exit:         3.318 us   |            }
           <...>-31848 [001] 162723.180190: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180191: funcgraph_entry:        0.703 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180192: funcgraph_entry:        0.760 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180193: funcgraph_exit:         3.235 us   |            }
           <...>-31848 [001] 162723.180194: funcgraph_entry:        0.513 us   |            spa_load_state();
           <...>-31848 [001] 162723.180195: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180196: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180197: funcgraph_entry:        0.492 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180198: funcgraph_exit:         1.526 us   |              }
           <...>-31848 [001] 162723.180198: funcgraph_exit:         2.556 us   |            }
           <...>-31848 [001] 162723.180199: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.180199: funcgraph_entry:        0.633 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180200: funcgraph_entry:        0.832 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180202: funcgraph_entry:        0.590 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180203: funcgraph_entry:        0.590 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180205: funcgraph_exit:         6.260 us   |            }
           <...>-31848 [001] 162723.180205: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.180206: funcgraph_entry:        0.650 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180208: funcgraph_entry:        0.793 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180209: funcgraph_entry:        0.773 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180211: funcgraph_entry:        0.753 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180212: funcgraph_entry:        0.593 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180213: funcgraph_entry:        0.607 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180215: funcgraph_entry:        0.759 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180216: funcgraph_entry:        0.780 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180218: funcgraph_entry:        0.507 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.180219: funcgraph_exit:       + 14.027 us  |            }
           <...>-31848 [001] 162723.180220: funcgraph_entry:        0.477 us   |            spa_load_state();
           <...>-31848 [001] 162723.180221: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180221: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180222: funcgraph_entry:        0.497 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180223: funcgraph_exit:         1.455 us   |              }
           <...>-31848 [001] 162723.180223: funcgraph_exit:         2.382 us   |            }
           <...>-31848 [001] 162723.180224: funcgraph_entry:        0.476 us   |            spa_name();
           <...>-31848 [001] 162723.180225: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180225: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180226: funcgraph_entry:        0.656 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180227: funcgraph_entry:        0.762 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180229: funcgraph_entry:        0.690 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180230: funcgraph_exit:         5.574 us   |              }
           <...>-31848 [001] 162723.180231: funcgraph_exit:         6.510 us   |            }
           <...>-31848 [001] 162723.180231: funcgraph_entry:        0.486 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.180232: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180233: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180234: funcgraph_entry:        0.682 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180235: funcgraph_exit:         2.229 us   |              }
           <...>-31848 [001] 162723.180236: funcgraph_exit:         3.212 us   |            }
           <...>-31848 [001] 162723.180236: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180237: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180237: funcgraph_entry:        0.669 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180239: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180240: funcgraph_exit:         3.764 us   |              }
           <...>-31848 [001] 162723.180241: funcgraph_exit:         4.812 us   |            }
           <...>-31848 [001] 162723.180241: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180242: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180243: funcgraph_entry:        0.667 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180244: funcgraph_exit:         2.282 us   |              }
           <...>-31848 [001] 162723.180245: funcgraph_exit:         3.332 us   |            }
           <...>-31848 [001] 162723.180245: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180246: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180246: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180248: funcgraph_exit:         2.273 us   |              }
           <...>-31848 [001] 162723.180249: funcgraph_exit:         3.262 us   |            }
           <...>-31848 [001] 162723.180249: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180250: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180250: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180252: funcgraph_exit:         2.229 us   |              }
           <...>-31848 [001] 162723.180252: funcgraph_exit:         3.391 us   |            }
           <...>-31848 [001] 162723.180253: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180254: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180254: funcgraph_entry:        0.639 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180256: funcgraph_exit:         2.319 us   |              }
           <...>-31848 [001] 162723.180256: funcgraph_exit:         3.405 us   |            }
           <...>-31848 [001] 162723.180257: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180257: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180258: funcgraph_entry:        0.609 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180259: funcgraph_entry:        0.714 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180261: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180263: funcgraph_exit:         5.507 us   |              }
           <...>-31848 [001] 162723.180263: funcgraph_exit:         6.521 us   |            }
           <...>-31848 [001] 162723.180264: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180264: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180265: funcgraph_entry:        0.686 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180267: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180268: funcgraph_exit:         4.038 us   |              }
           <...>-31848 [001] 162723.180269: funcgraph_exit:         5.037 us   |            }
           <...>-31848 [001] 162723.180269: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180279: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180279: funcgraph_entry:        0.694 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180282: funcgraph_entry:        0.667 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180284: funcgraph_exit:         4.904 us   |              }
           <...>-31848 [001] 162723.180284: funcgraph_exit:       + 14.740 us  |            }
           <...>-31848 [001] 162723.180285: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180285: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180286: funcgraph_entry:        0.706 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180288: funcgraph_exit:         2.392 us   |              }
           <...>-31848 [001] 162723.180288: funcgraph_exit:         3.492 us   |            }
           <...>-31848 [001] 162723.180289: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180289: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180290: funcgraph_entry:        0.630 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180291: funcgraph_exit:         2.262 us   |              }
           <...>-31848 [001] 162723.180292: funcgraph_exit:         3.181 us   |            }
           <...>-31848 [001] 162723.180292: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180293: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180293: funcgraph_entry:        0.760 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180295: funcgraph_exit:         2.302 us   |              }
           <...>-31848 [001] 162723.180296: funcgraph_exit:         3.268 us   |            }
           <...>-31848 [001] 162723.180296: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180297: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180297: funcgraph_entry:        0.629 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180299: funcgraph_exit:         2.206 us   |              }
           <...>-31848 [001] 162723.180299: funcgraph_exit:         3.169 us   |            }
           <...>-31848 [001] 162723.180300: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180300: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180301: funcgraph_entry:        0.596 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180303: funcgraph_exit:         2.302 us   |              }
           <...>-31848 [001] 162723.180303: funcgraph_exit:         3.283 us   |            }
           <...>-31848 [001] 162723.180303: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180304: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180305: funcgraph_entry:        0.849 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180306: funcgraph_exit:         2.452 us   |              }
           <...>-31848 [001] 162723.180307: funcgraph_exit:         3.409 us   |            }
           <...>-31848 [001] 162723.180307: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180308: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180308: funcgraph_entry:        0.666 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180310: funcgraph_exit:         2.376 us   |              }
           <...>-31848 [001] 162723.180311: funcgraph_exit:         3.332 us   |            }
           <...>-31848 [001] 162723.180311: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180312: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180312: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180314: funcgraph_entry:        0.746 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180316: funcgraph_exit:         4.151 us   |              }
           <...>-31848 [001] 162723.180316: funcgraph_exit:         5.231 us   |            }
           <...>-31848 [001] 162723.180317: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180317: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180318: funcgraph_entry:        0.653 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180320: funcgraph_entry:        0.640 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180322: funcgraph_entry:        0.645 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180324: funcgraph_entry:        0.726 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180325: funcgraph_exit:         7.949 us   |              }
           <...>-31848 [001] 162723.180326: funcgraph_exit:         8.932 us   |            }
           <...>-31848 [001] 162723.180326: funcgraph_exit:       ! 145.449 us |          }
           <...>-31848 [001] 162723.180327: funcgraph_exit:       ! 149.914 us |        }
           <...>-31848 [001] 162723.180327: funcgraph_exit:       ! 152.166 us |      }
           <...>-31848 [001] 162723.180328: funcgraph_entry:        0.483 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180329: funcgraph_entry:        0.483 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180330: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.180330: funcgraph_entry:        0.526 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180331: funcgraph_entry:        0.516 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180332: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180333: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180334: funcgraph_entry:        0.477 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.180336: funcgraph_entry:        0.569 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.180337: funcgraph_entry:        0.510 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.180338: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.180338: funcgraph_entry:        0.610 us   |          zio_buf_free();
           <...>-31848 [001] 162723.180339: funcgraph_exit:         1.649 us   |        }
           <...>-31848 [001] 162723.180340: funcgraph_entry:        0.513 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180341: funcgraph_entry:        0.490 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180342: funcgraph_entry:        0.962 us   |        zio_remove_child();
           <...>-31848 [001] 162723.180343: funcgraph_entry:        0.490 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180344: funcgraph_entry:        0.483 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180345: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.180346: funcgraph_entry:        0.500 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180347: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.180347: funcgraph_entry:        0.460 us   |            spa_writeable();
           <...>-31848 [001] 162723.180348: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.180349: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.180349: funcgraph_entry:        0.774 us   |                zio_add_child();
           <...>-31848 [001] 162723.180351: funcgraph_exit:         2.032 us   |              }
           <...>-31848 [001] 162723.180351: funcgraph_exit:         2.975 us   |            }
           <...>-31848 [001] 162723.180352: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.180352: funcgraph_entry:        0.486 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.180353: funcgraph_entry:        0.490 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.180354: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.180354: funcgraph_entry:        0.576 us   |                spa_writeable();
           <...>-31848 [001] 162723.180356: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.180356: funcgraph_entry:        0.499 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180357: funcgraph_entry:        0.547 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180358: funcgraph_entry:        0.489 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180359: funcgraph_entry:        0.493 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180361: funcgraph_entry:        0.832 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.180362: funcgraph_exit:         6.300 us   |                }
           <...>-31848 [001] 162723.180362: funcgraph_exit:         8.353 us   |              }
           <...>-31848 [001] 162723.180363: funcgraph_exit:       + 11.151 us  |            }
           <...>-31848 [001] 162723.180363: funcgraph_exit:       + 16.489 us  |          }
           <...>-31848 [001] 162723.180364: funcgraph_exit:       + 18.395 us  |        }
           <...>-31848 [001] 162723.180364: funcgraph_entry:        0.470 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180365: funcgraph_entry:        0.516 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180366: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180367: funcgraph_entry:        0.686 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180368: funcgraph_exit:         1.653 us   |        }
           <...>-31848 [001] 162723.180368: funcgraph_exit:       + 38.542 us  |      }
           <...>-31848 [001] 162723.180369: funcgraph_entry:        0.490 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.180370: funcgraph_entry:        0.927 us   |      zio_remove_child();
           <...>-31848 [001] 162723.180371: funcgraph_entry:        0.490 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180372: funcgraph_entry:        0.520 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180373: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180374: funcgraph_entry:        0.556 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180375: funcgraph_exit:         1.672 us   |      }
           <...>-31848 [001] 162723.180375: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180376: funcgraph_entry:        0.550 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180378: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.180378: funcgraph_entry:        0.987 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.180379: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.180380: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.180381: funcgraph_entry:        0.889 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.180383: funcgraph_exit:         2.386 us   |          }
           <...>-31848 [001] 162723.180383: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.180384: funcgraph_entry:        0.487 us   |            spa_load_state();
           <...>-31848 [001] 162723.180385: funcgraph_entry:        0.463 us   |            spa_load_state();
           <...>-31848 [001] 162723.180386: funcgraph_entry:        0.510 us   |            spa_load_state();
           <...>-31848 [001] 162723.180387: funcgraph_entry:        0.470 us   |            vdev_accessible();
           <...>-31848 [001] 162723.180388: funcgraph_entry:        0.523 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.180389: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180389: funcgraph_entry:        0.663 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180391: funcgraph_entry:        0.697 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180392: funcgraph_exit:         3.274 us   |            }
           <...>-31848 [001] 162723.180392: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180393: funcgraph_entry:        0.603 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180394: funcgraph_entry:        0.727 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180395: funcgraph_exit:         3.036 us   |            }
           <...>-31848 [001] 162723.180396: funcgraph_entry:        0.483 us   |            spa_load_state();
           <...>-31848 [001] 162723.180397: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180398: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180398: funcgraph_entry:        0.490 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180399: funcgraph_exit:         1.467 us   |              }
           <...>-31848 [001] 162723.180400: funcgraph_exit:         2.411 us   |            }
           <...>-31848 [001] 162723.180400: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.180401: funcgraph_entry:        0.630 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180402: funcgraph_entry:        0.603 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180403: funcgraph_entry:        0.613 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180405: funcgraph_entry:        0.616 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180406: funcgraph_exit:         6.190 us   |            }
           <...>-31848 [001] 162723.180407: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.180408: funcgraph_entry:        0.606 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180409: funcgraph_entry:        0.600 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180410: funcgraph_entry:        0.716 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180412: funcgraph_entry:        1.803 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180415: funcgraph_entry:        0.733 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180416: funcgraph_entry:        0.793 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180418: funcgraph_entry:        0.842 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180419: funcgraph_entry:        0.949 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180421: funcgraph_entry:        0.520 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.180422: funcgraph_exit:       + 15.382 us  |            }
           <...>-31848 [001] 162723.180423: funcgraph_entry:        0.520 us   |            spa_load_state();
           <...>-31848 [001] 162723.180424: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180424: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180425: funcgraph_entry:        0.516 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180426: funcgraph_exit:         1.643 us   |              }
           <...>-31848 [001] 162723.180426: funcgraph_exit:         2.565 us   |            }
           <...>-31848 [001] 162723.180427: funcgraph_entry:        0.537 us   |            spa_name();
           <...>-31848 [001] 162723.180428: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180428: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180429: funcgraph_entry:        0.777 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180431: funcgraph_entry:        0.770 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180432: funcgraph_entry:        0.686 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180434: funcgraph_exit:         5.741 us   |              }
           <...>-31848 [001] 162723.180434: funcgraph_exit:         6.680 us   |            }
           <...>-31848 [001] 162723.180435: funcgraph_entry:        0.490 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.180436: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180437: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180437: funcgraph_entry:        0.647 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180439: funcgraph_exit:         2.179 us   |              }
           <...>-31848 [001] 162723.180439: funcgraph_exit:         3.118 us   |            }
           <...>-31848 [001] 162723.180440: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180440: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180441: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180443: funcgraph_entry:        0.619 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180444: funcgraph_exit:         3.724 us   |              }
           <...>-31848 [001] 162723.180445: funcgraph_exit:         4.741 us   |            }
           <...>-31848 [001] 162723.180445: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180446: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180446: funcgraph_entry:        0.625 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180448: funcgraph_exit:         2.249 us   |              }
           <...>-31848 [001] 162723.180448: funcgraph_exit:         3.279 us   |            }
           <...>-31848 [001] 162723.180449: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180449: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180450: funcgraph_entry:        0.670 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180451: funcgraph_exit:         2.223 us   |              }
           <...>-31848 [001] 162723.180452: funcgraph_exit:         3.159 us   |            }
           <...>-31848 [001] 162723.180452: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180453: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180454: funcgraph_entry:        0.744 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180455: funcgraph_exit:         2.292 us   |              }
           <...>-31848 [001] 162723.180456: funcgraph_exit:         3.355 us   |            }
           <...>-31848 [001] 162723.180456: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180457: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180458: funcgraph_entry:        0.756 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180459: funcgraph_exit:         2.375 us   |              }
           <...>-31848 [001] 162723.180460: funcgraph_exit:         3.468 us   |            }
           <...>-31848 [001] 162723.180460: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180461: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180462: funcgraph_entry:        0.826 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180463: funcgraph_entry:        0.686 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180465: funcgraph_entry:        0.740 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180467: funcgraph_exit:         6.141 us   |              }
           <...>-31848 [001] 162723.180468: funcgraph_exit:         7.213 us   |            }
           <...>-31848 [001] 162723.180468: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180469: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180469: funcgraph_entry:        0.679 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180471: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180473: funcgraph_exit:         4.291 us   |              }
           <...>-31848 [001] 162723.180473: funcgraph_exit:         5.347 us   |            }
           <...>-31848 [001] 162723.180474: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180474: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180475: funcgraph_entry:        0.609 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180477: funcgraph_entry:        0.649 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180478: funcgraph_exit:         3.955 us   |              }
           <...>-31848 [001] 162723.180479: funcgraph_exit:         4.894 us   |            }
           <...>-31848 [001] 162723.180479: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180480: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180481: funcgraph_entry:        0.813 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180482: funcgraph_exit:         2.432 us   |              }
           <...>-31848 [001] 162723.180483: funcgraph_exit:         3.422 us   |            }
           <...>-31848 [001] 162723.180483: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180484: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180484: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180486: funcgraph_exit:         2.139 us   |              }
           <...>-31848 [001] 162723.180487: funcgraph_exit:         3.218 us   |            }
           <...>-31848 [001] 162723.180487: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180487: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180488: funcgraph_entry:        0.787 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180490: funcgraph_exit:         2.421 us   |              }
           <...>-31848 [001] 162723.180490: funcgraph_exit:         3.392 us   |            }
           <...>-31848 [001] 162723.180491: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180491: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180492: funcgraph_entry:        0.974 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180494: funcgraph_exit:         2.588 us   |              }
           <...>-31848 [001] 162723.180494: funcgraph_exit:         3.555 us   |            }
           <...>-31848 [001] 162723.180495: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180495: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180496: funcgraph_entry:        0.614 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180498: funcgraph_exit:         2.269 us   |              }
           <...>-31848 [001] 162723.180498: funcgraph_exit:         3.195 us   |            }
           <...>-31848 [001] 162723.180499: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180499: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180500: funcgraph_entry:        0.612 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180501: funcgraph_exit:         2.219 us   |              }
           <...>-31848 [001] 162723.180502: funcgraph_exit:         3.186 us   |            }
           <...>-31848 [001] 162723.180502: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180503: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180503: funcgraph_entry:        0.607 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180505: funcgraph_exit:         2.265 us   |              }
           <...>-31848 [001] 162723.180505: funcgraph_exit:         3.209 us   |            }
           <...>-31848 [001] 162723.180506: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180506: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180507: funcgraph_entry:        0.674 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180509: funcgraph_entry:        0.774 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180511: funcgraph_exit:         4.264 us   |              }
           <...>-31848 [001] 162723.180511: funcgraph_exit:         5.201 us   |            }
           <...>-31848 [001] 162723.180512: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180512: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180513: funcgraph_entry:        0.750 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180515: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180517: funcgraph_entry:        0.630 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180519: funcgraph_entry:        0.687 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180520: funcgraph_exit:         8.173 us   |              }
           <...>-31848 [001] 162723.180521: funcgraph_exit:         9.161 us   |            }
           <...>-31848 [001] 162723.180521: funcgraph_exit:       ! 137.997 us |          }
           <...>-31848 [001] 162723.180522: funcgraph_exit:       ! 142.408 us |        }
           <...>-31848 [001] 162723.180522: funcgraph_exit:       ! 144.889 us |      }
           <...>-31848 [001] 162723.180523: funcgraph_entry:        0.526 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180524: funcgraph_entry:        0.513 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180525: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.180525: funcgraph_entry:        0.516 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180526: funcgraph_entry:        0.519 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180527: funcgraph_entry:        0.570 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180528: funcgraph_entry:        0.512 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180529: funcgraph_entry:        0.477 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.180530: funcgraph_entry:        0.625 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.180532: funcgraph_entry:        0.480 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.180533: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.180533: funcgraph_entry:        0.627 us   |          zio_buf_free();
           <...>-31848 [001] 162723.180534: funcgraph_exit:         1.589 us   |        }
           <...>-31848 [001] 162723.180535: funcgraph_entry:        0.480 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180536: funcgraph_entry:        0.483 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180537: funcgraph_entry:        0.899 us   |        zio_remove_child();
           <...>-31848 [001] 162723.180538: funcgraph_entry:        0.566 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180539: funcgraph_entry:        0.463 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180540: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.180541: funcgraph_entry:        0.499 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180542: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.180542: funcgraph_entry:        0.464 us   |            spa_writeable();
           <...>-31848 [001] 162723.180543: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.180544: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.180545: funcgraph_entry:        0.725 us   |                zio_add_child();
           <...>-31848 [001] 162723.180546: funcgraph_exit:         2.009 us   |              }
           <...>-31848 [001] 162723.180546: funcgraph_exit:         3.382 us   |            }
           <...>-31848 [001] 162723.180547: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.180547: funcgraph_entry:        0.486 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.180548: funcgraph_entry:        0.497 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.180549: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.180550: funcgraph_entry:        0.504 us   |                spa_writeable();
           <...>-31848 [001] 162723.180551: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.180552: funcgraph_entry:        0.517 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180553: funcgraph_entry:        0.523 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180554: funcgraph_entry:        0.563 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180555: funcgraph_entry:        0.516 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180556: funcgraph_entry:        0.623 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.180557: funcgraph_exit:         6.004 us   |                }
           <...>-31848 [001] 162723.180557: funcgraph_exit:         8.042 us   |              }
           <...>-31848 [001] 162723.180558: funcgraph_exit:       + 10.978 us  |            }
           <...>-31848 [001] 162723.180558: funcgraph_exit:       + 16.902 us  |          }
           <...>-31848 [001] 162723.180559: funcgraph_exit:       + 18.808 us  |        }
           <...>-31848 [001] 162723.180559: funcgraph_entry:        0.486 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180560: funcgraph_entry:        0.493 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180561: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180562: funcgraph_entry:        0.587 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180563: funcgraph_exit:         1.536 us   |        }
           <...>-31848 [001] 162723.180563: funcgraph_exit:       + 38.428 us  |      }
           <...>-31848 [001] 162723.180564: funcgraph_entry:        0.543 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.180565: funcgraph_entry:        0.926 us   |      zio_remove_child();
           <...>-31848 [001] 162723.180566: funcgraph_entry:        0.564 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180567: funcgraph_entry:        0.492 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180568: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180569: funcgraph_entry:        0.514 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180570: funcgraph_exit:         1.602 us   |      }
           <...>-31848 [001] 162723.180570: funcgraph_entry:        0.510 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180571: funcgraph_entry:        0.459 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180572: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.180573: funcgraph_entry:        0.886 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.180574: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.180575: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.180575: funcgraph_entry:        0.602 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.180577: funcgraph_exit:         2.222 us   |          }
           <...>-31848 [001] 162723.180578: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.180578: funcgraph_entry:        0.470 us   |            spa_load_state();
           <...>-31848 [001] 162723.180579: funcgraph_entry:        0.506 us   |            spa_load_state();
           <...>-31848 [001] 162723.180580: funcgraph_entry:        0.523 us   |            spa_load_state();
           <...>-31848 [001] 162723.180581: funcgraph_entry:        0.463 us   |            vdev_accessible();
           <...>-31848 [001] 162723.180582: funcgraph_entry:        0.560 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.180583: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180584: funcgraph_entry:        0.637 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180585: funcgraph_entry:        0.816 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180587: funcgraph_exit:         3.418 us   |            }
           <...>-31848 [001] 162723.180587: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180588: funcgraph_entry:        0.593 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180589: funcgraph_entry:        0.717 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180591: funcgraph_exit:         3.231 us   |            }
           <...>-31848 [001] 162723.180591: funcgraph_entry:        0.507 us   |            spa_load_state();
           <...>-31848 [001] 162723.180593: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180593: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180594: funcgraph_entry:        0.579 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180595: funcgraph_exit:         1.639 us   |              }
           <...>-31848 [001] 162723.180595: funcgraph_exit:         2.712 us   |            }
           <...>-31848 [001] 162723.180596: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.180596: funcgraph_entry:        0.610 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180598: funcgraph_entry:        0.632 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180599: funcgraph_entry:        0.623 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180601: funcgraph_entry:        0.616 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180602: funcgraph_exit:         6.370 us   |            }
           <...>-31848 [001] 162723.180603: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.180604: funcgraph_entry:        0.656 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180605: funcgraph_entry:        0.756 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180607: funcgraph_entry:        0.833 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180608: funcgraph_entry:        0.905 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180610: funcgraph_entry:        0.829 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180612: funcgraph_entry:        1.046 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180615: funcgraph_entry:        1.243 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180617: funcgraph_entry:        1.270 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180620: funcgraph_entry:        0.917 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.180621: funcgraph_exit:       + 18.321 us  |            }
           <...>-31848 [001] 162723.180622: funcgraph_entry:        0.949 us   |            spa_load_state();
           <...>-31848 [001] 162723.180624: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180625: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180626: funcgraph_entry:        0.870 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180627: funcgraph_exit:         2.771 us   |              }
           <...>-31848 [001] 162723.180628: funcgraph_exit:         4.695 us   |            }
           <...>-31848 [001] 162723.180629: funcgraph_entry:        0.820 us   |            spa_name();
           <...>-31848 [001] 162723.180631: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180631: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180633: funcgraph_entry:        1.436 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180636: funcgraph_entry:        1.233 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180639: funcgraph_entry:        1.293 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180641: funcgraph_exit:         9.919 us   |              }
           <...>-31848 [001] 162723.180642: funcgraph_exit:       + 11.524 us  |            }
           <...>-31848 [001] 162723.180643: funcgraph_entry:        1.126 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.180645: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180646: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180647: funcgraph_entry:        1.115 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180650: funcgraph_exit:         3.598 us   |              }
           <...>-31848 [001] 162723.180651: funcgraph_exit:         5.561 us   |            }
           <...>-31848 [001] 162723.180652: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180653: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180654: funcgraph_entry:        1.263 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180657: funcgraph_entry:        1.569 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180660: funcgraph_exit:         7.229 us   |              }
           <...>-31848 [001] 162723.180661: funcgraph_exit:         9.212 us   |            }
           <...>-31848 [001] 162723.180662: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180663: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180664: funcgraph_entry:        1.040 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180667: funcgraph_exit:         3.888 us   |              }
           <...>-31848 [001] 162723.180667: funcgraph_exit:         5.608 us   |            }
           <...>-31848 [001] 162723.180668: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180669: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180670: funcgraph_entry:        1.239 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180672: funcgraph_exit:         3.041 us   |              }
           <...>-31848 [001] 162723.180673: funcgraph_exit:         4.582 us   |            }
           <...>-31848 [001] 162723.180673: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180674: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180674: funcgraph_entry:        0.657 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180676: funcgraph_exit:         2.248 us   |              }
           <...>-31848 [001] 162723.180677: funcgraph_exit:         3.311 us   |            }
           <...>-31848 [001] 162723.180677: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180678: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180678: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180680: funcgraph_exit:         2.223 us   |              }
           <...>-31848 [001] 162723.180680: funcgraph_exit:         3.222 us   |            }
           <...>-31848 [001] 162723.180681: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180681: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180682: funcgraph_entry:        0.609 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180684: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180685: funcgraph_entry:        2.363 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180689: funcgraph_exit:         7.236 us   |              }
           <...>-31848 [001] 162723.180689: funcgraph_exit:         8.233 us   |            }
           <...>-31848 [001] 162723.180690: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180690: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180691: funcgraph_entry:        0.816 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180693: funcgraph_entry:        0.740 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180694: funcgraph_exit:         4.075 us   |              }
           <...>-31848 [001] 162723.180695: funcgraph_exit:         5.051 us   |            }
           <...>-31848 [001] 162723.180695: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180696: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180697: funcgraph_entry:        0.757 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180699: funcgraph_entry:        0.717 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180701: funcgraph_exit:         4.621 us   |              }
           <...>-31848 [001] 162723.180701: funcgraph_exit:         5.687 us   |            }
           <...>-31848 [001] 162723.180702: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180702: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180703: funcgraph_entry:        0.744 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180705: funcgraph_exit:         2.482 us   |              }
           <...>-31848 [001] 162723.180705: funcgraph_exit:         3.465 us   |            }
           <...>-31848 [001] 162723.180706: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180706: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180707: funcgraph_entry:        0.900 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180709: funcgraph_exit:         2.449 us   |              }
           <...>-31848 [001] 162723.180709: funcgraph_exit:         3.468 us   |            }
           <...>-31848 [001] 162723.180710: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180710: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180711: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180713: funcgraph_exit:         2.343 us   |              }
           <...>-31848 [001] 162723.180713: funcgraph_exit:         3.494 us   |            }
           <...>-31848 [001] 162723.180714: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180714: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180715: funcgraph_entry:        0.755 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180716: funcgraph_exit:         2.279 us   |              }
           <...>-31848 [001] 162723.180717: funcgraph_exit:         3.265 us   |            }
           <...>-31848 [001] 162723.180718: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180718: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180719: funcgraph_entry:        0.869 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180721: funcgraph_exit:         2.529 us   |              }
           <...>-31848 [001] 162723.180721: funcgraph_exit:         3.524 us   |            }
           <...>-31848 [001] 162723.180722: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180722: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180723: funcgraph_entry:        0.809 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180724: funcgraph_exit:         2.373 us   |              }
           <...>-31848 [001] 162723.180725: funcgraph_exit:         3.393 us   |            }
           <...>-31848 [001] 162723.180725: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180726: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180727: funcgraph_entry:        0.819 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180728: funcgraph_exit:         2.469 us   |              }
           <...>-31848 [001] 162723.180729: funcgraph_exit:         3.465 us   |            }
           <...>-31848 [001] 162723.180729: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180730: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180731: funcgraph_entry:        0.665 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180733: funcgraph_entry:        0.739 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180735: funcgraph_exit:         4.595 us   |              }
           <...>-31848 [001] 162723.180735: funcgraph_exit:         5.635 us   |            }
           <...>-31848 [001] 162723.180736: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180736: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180737: funcgraph_entry:        0.669 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180739: funcgraph_entry:        0.770 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180741: funcgraph_entry:        0.806 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180743: funcgraph_entry:        0.683 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180744: funcgraph_exit:         7.903 us   |              }
           <...>-31848 [001] 162723.180745: funcgraph_exit:         8.932 us   |            }
           <...>-31848 [001] 162723.180745: funcgraph_exit:       ! 167.419 us |          }
           <...>-31848 [001] 162723.180746: funcgraph_exit:       ! 171.850 us |        }
           <...>-31848 [001] 162723.180747: funcgraph_exit:       ! 174.219 us |      }
           <...>-31848 [001] 162723.180747: funcgraph_entry:        0.496 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180748: funcgraph_entry:        0.516 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180749: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.180750: funcgraph_entry:        0.520 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180751: funcgraph_entry:        0.547 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180752: funcgraph_entry:        0.540 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180753: funcgraph_entry:        0.543 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180754: funcgraph_entry:        0.477 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.180755: funcgraph_entry:        0.637 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.180756: funcgraph_entry:        0.467 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.180757: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.180758: funcgraph_entry:        0.709 us   |          zio_buf_free();
           <...>-31848 [001] 162723.180759: funcgraph_exit:         1.695 us   |        }
           <...>-31848 [001] 162723.180760: funcgraph_entry:        0.562 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180761: funcgraph_entry:        0.480 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180762: funcgraph_entry:        1.019 us   |        zio_remove_child();
           <...>-31848 [001] 162723.180763: funcgraph_entry:        0.513 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180764: funcgraph_entry:        0.514 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180766: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.180766: funcgraph_entry:        0.600 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180767: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.180768: funcgraph_entry:        0.626 us   |            spa_writeable();
           <...>-31848 [001] 162723.180769: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.180770: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.180771: funcgraph_entry:        0.716 us   |                zio_add_child();
           <...>-31848 [001] 162723.180772: funcgraph_exit:         2.524 us   |              }
           <...>-31848 [001] 162723.180773: funcgraph_exit:         3.525 us   |            }
           <...>-31848 [001] 162723.180773: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.180774: funcgraph_entry:        0.509 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.180775: funcgraph_entry:        0.540 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.180776: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.180776: funcgraph_entry:        0.486 us   |                spa_writeable();
           <...>-31848 [001] 162723.180777: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.180778: funcgraph_entry:        0.483 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180779: funcgraph_entry:        0.473 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180780: funcgraph_entry:        0.562 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180781: funcgraph_entry:        0.534 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180783: funcgraph_entry:        0.800 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.180785: funcgraph_exit:         6.711 us   |                }
           <...>-31848 [001] 162723.180785: funcgraph_exit:         9.298 us   |              }
           <...>-31848 [001] 162723.180786: funcgraph_exit:       + 12.381 us  |            }
           <...>-31848 [001] 162723.180786: funcgraph_exit:       + 19.065 us  |          }
           <...>-31848 [001] 162723.180787: funcgraph_exit:       + 21.279 us  |        }
           <...>-31848 [001] 162723.180787: funcgraph_entry:        0.513 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180788: funcgraph_entry:        0.502 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180789: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180790: funcgraph_entry:        0.650 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180791: funcgraph_exit:         1.736 us   |        }
           <...>-31848 [001] 162723.180792: funcgraph_exit:       + 42.512 us  |      }
           <...>-31848 [001] 162723.180792: funcgraph_entry:        0.565 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.180793: funcgraph_entry:        1.037 us   |      zio_remove_child();
           <...>-31848 [001] 162723.180795: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180796: funcgraph_entry:        0.530 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180797: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.180798: funcgraph_entry:        0.613 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180799: funcgraph_exit:         1.626 us   |      }
           <...>-31848 [001] 162723.180799: funcgraph_entry:        0.483 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180800: funcgraph_entry:        0.520 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180801: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.180802: funcgraph_entry:        1.023 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.180803: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.180804: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.180805: funcgraph_entry:        0.523 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.180806: funcgraph_exit:         2.256 us   |          }
           <...>-31848 [001] 162723.180807: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.180808: funcgraph_entry:        0.460 us   |            spa_load_state();
           <...>-31848 [001] 162723.180809: funcgraph_entry:        0.506 us   |            spa_load_state();
           <...>-31848 [001] 162723.180810: funcgraph_entry:        0.520 us   |            spa_load_state();
           <...>-31848 [001] 162723.180811: funcgraph_entry:        0.489 us   |            vdev_accessible();
           <...>-31848 [001] 162723.180812: funcgraph_entry:        0.593 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.180813: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180814: funcgraph_entry:        0.790 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180815: funcgraph_entry:        0.833 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180816: funcgraph_exit:         3.578 us   |            }
           <...>-31848 [001] 162723.180817: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.180818: funcgraph_entry:        0.826 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180819: funcgraph_entry:        0.742 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180820: funcgraph_exit:         3.258 us   |            }
           <...>-31848 [001] 162723.180821: funcgraph_entry:        0.490 us   |            spa_load_state();
           <...>-31848 [001] 162723.180823: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180823: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180824: funcgraph_entry:        0.530 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180825: funcgraph_exit:         1.659 us   |              }
           <...>-31848 [001] 162723.180825: funcgraph_exit:         2.712 us   |            }
           <...>-31848 [001] 162723.180826: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.180826: funcgraph_entry:        0.597 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180828: funcgraph_entry:        0.627 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180829: funcgraph_entry:        0.592 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180831: funcgraph_entry:        0.604 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180832: funcgraph_exit:         6.084 us   |            }
           <...>-31848 [001] 162723.180832: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.180833: funcgraph_entry:        0.669 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180835: funcgraph_entry:        0.670 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180837: funcgraph_entry:        1.170 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180838: funcgraph_entry:        0.683 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180839: funcgraph_entry:        0.679 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180841: funcgraph_entry:        0.673 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180842: funcgraph_entry:        0.597 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180844: funcgraph_entry:        0.630 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.180845: funcgraph_entry:        0.479 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.180846: funcgraph_exit:       + 14.023 us  |            }
           <...>-31848 [001] 162723.180847: funcgraph_entry:        0.480 us   |            spa_load_state();
           <...>-31848 [001] 162723.180848: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.180848: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.180849: funcgraph_entry:        0.473 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.180850: funcgraph_exit:         1.424 us   |              }
           <...>-31848 [001] 162723.180850: funcgraph_exit:         2.348 us   |            }
           <...>-31848 [001] 162723.180850: funcgraph_entry:        0.483 us   |            spa_name();
           <...>-31848 [001] 162723.180851: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180852: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180853: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180854: funcgraph_entry:        0.589 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180856: funcgraph_entry:        0.699 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180857: funcgraph_exit:         5.180 us   |              }
           <...>-31848 [001] 162723.180858: funcgraph_exit:         6.177 us   |            }
           <...>-31848 [001] 162723.180858: funcgraph_entry:        0.469 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.180859: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180859: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180860: funcgraph_entry:        0.676 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180862: funcgraph_exit:         2.222 us   |              }
           <...>-31848 [001] 162723.180862: funcgraph_exit:         3.135 us   |            }
           <...>-31848 [001] 162723.180863: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180863: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180864: funcgraph_entry:        0.703 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180866: funcgraph_entry:        0.830 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180867: funcgraph_exit:         4.292 us   |              }
           <...>-31848 [001] 162723.180868: funcgraph_exit:         5.428 us   |            }
           <...>-31848 [001] 162723.180869: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180869: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180870: funcgraph_entry:        0.763 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180871: funcgraph_exit:         2.395 us   |              }
           <...>-31848 [001] 162723.180872: funcgraph_exit:         3.415 us   |            }
           <...>-31848 [001] 162723.180872: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180873: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180874: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180875: funcgraph_exit:         2.213 us   |              }
           <...>-31848 [001] 162723.180876: funcgraph_exit:         3.228 us   |            }
           <...>-31848 [001] 162723.180876: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180877: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180877: funcgraph_entry:        0.587 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180879: funcgraph_exit:         2.062 us   |              }
           <...>-31848 [001] 162723.180879: funcgraph_exit:         3.058 us   |            }
           <...>-31848 [001] 162723.180880: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180880: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180881: funcgraph_entry:        0.696 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180882: funcgraph_exit:         2.159 us   |              }
           <...>-31848 [001] 162723.180883: funcgraph_exit:         3.228 us   |            }
           <...>-31848 [001] 162723.180883: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180884: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180885: funcgraph_entry:        1.063 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180888: funcgraph_entry:        0.930 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180890: funcgraph_entry:        1.205 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180893: funcgraph_exit:         9.085 us   |              }
           <...>-31848 [001] 162723.180895: funcgraph_exit:       + 10.829 us  |            }
           <...>-31848 [001] 162723.180896: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180897: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180898: funcgraph_entry:        1.399 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180901: funcgraph_entry:        0.927 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180904: funcgraph_exit:         7.166 us   |              }
           <...>-31848 [001] 162723.180905: funcgraph_exit:         9.386 us   |            }
           <...>-31848 [001] 162723.180907: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180907: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180909: funcgraph_entry:        1.079 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180912: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180914: funcgraph_exit:         6.153 us   |              }
           <...>-31848 [001] 162723.180914: funcgraph_exit:         8.019 us   |            }
           <...>-31848 [001] 162723.180915: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180915: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180916: funcgraph_entry:        0.676 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180918: funcgraph_exit:         2.288 us   |              }
           <...>-31848 [001] 162723.180918: funcgraph_exit:         3.375 us   |            }
           <...>-31848 [001] 162723.180919: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180919: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180920: funcgraph_entry:        0.693 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180921: funcgraph_exit:         2.372 us   |              }
           <...>-31848 [001] 162723.180922: funcgraph_exit:         3.325 us   |            }
           <...>-31848 [001] 162723.180923: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180923: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180924: funcgraph_entry:        0.676 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180925: funcgraph_exit:         2.209 us   |              }
           <...>-31848 [001] 162723.180926: funcgraph_exit:         3.248 us   |            }
           <...>-31848 [001] 162723.180926: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180927: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180927: funcgraph_entry:        0.619 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180929: funcgraph_exit:         2.189 us   |              }
           <...>-31848 [001] 162723.180929: funcgraph_exit:         3.166 us   |            }
           <...>-31848 [001] 162723.180930: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180930: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180931: funcgraph_entry:        0.646 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180933: funcgraph_exit:         2.349 us   |              }
           <...>-31848 [001] 162723.180933: funcgraph_exit:         3.379 us   |            }
           <...>-31848 [001] 162723.180934: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180934: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180935: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180937: funcgraph_exit:         2.332 us   |              }
           <...>-31848 [001] 162723.180937: funcgraph_exit:         3.349 us   |            }
           <...>-31848 [001] 162723.180938: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180938: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180939: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180941: funcgraph_exit:         2.449 us   |              }
           <...>-31848 [001] 162723.180941: funcgraph_exit:         3.494 us   |            }
           <...>-31848 [001] 162723.180942: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180943: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180943: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180945: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180947: funcgraph_exit:         4.441 us   |              }
           <...>-31848 [001] 162723.180947: funcgraph_exit:         5.484 us   |            }
           <...>-31848 [001] 162723.180948: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.180948: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.180949: funcgraph_entry:        0.667 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180951: funcgraph_entry:        0.660 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180952: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180954: funcgraph_entry:        2.365 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.180958: funcgraph_exit:         9.615 us   |              }
           <...>-31848 [001] 162723.180958: funcgraph_exit:       + 10.518 us  |            }
           <...>-31848 [001] 162723.180959: funcgraph_exit:       ! 151.759 us |          }
           <...>-31848 [001] 162723.180959: funcgraph_exit:       ! 156.197 us |        }
           <...>-31848 [001] 162723.180960: funcgraph_exit:       ! 158.743 us |      }
           <...>-31848 [001] 162723.180961: funcgraph_entry:        0.509 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.180962: funcgraph_entry:        0.920 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.180963: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.180963: funcgraph_entry:        0.550 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180964: funcgraph_entry:        0.532 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180965: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180966: funcgraph_entry:        0.543 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.180967: funcgraph_entry:        0.473 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.180968: funcgraph_entry:        0.609 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.180970: funcgraph_entry:        0.470 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.180971: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.180971: funcgraph_entry:        0.607 us   |          zio_buf_free();
           <...>-31848 [001] 162723.180972: funcgraph_exit:         1.543 us   |        }
           <...>-31848 [001] 162723.180973: funcgraph_entry:        0.503 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180974: funcgraph_entry:        0.570 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.180975: funcgraph_entry:        1.146 us   |        zio_remove_child();
           <...>-31848 [001] 162723.180977: funcgraph_entry:        0.489 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.180978: funcgraph_entry:        0.513 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.180979: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.180979: funcgraph_entry:        0.514 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.180980: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.180981: funcgraph_entry:        0.462 us   |            spa_writeable();
           <...>-31848 [001] 162723.180982: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.180982: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.180983: funcgraph_entry:        0.673 us   |                zio_add_child();
           <...>-31848 [001] 162723.180985: funcgraph_exit:         2.369 us   |              }
           <...>-31848 [001] 162723.180985: funcgraph_exit:         3.372 us   |            }
           <...>-31848 [001] 162723.180986: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.180986: funcgraph_entry:        0.520 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.180987: funcgraph_entry:        0.486 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.180988: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.180989: funcgraph_entry:        0.537 us   |                spa_writeable();
           <...>-31848 [001] 162723.180990: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.180990: funcgraph_entry:        0.487 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180991: funcgraph_entry:        0.520 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180992: funcgraph_entry:        0.607 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180993: funcgraph_entry:        0.494 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180994: funcgraph_entry:        0.487 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.180996: funcgraph_entry:        0.633 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.180997: funcgraph_exit:         7.361 us   |                }
           <...>-31848 [001] 162723.180997: funcgraph_exit:         9.432 us   |              }
           <...>-31848 [001] 162723.180998: funcgraph_exit:       + 12.350 us  |            }
           <...>-31848 [001] 162723.180998: funcgraph_exit:       + 18.181 us  |          }
           <...>-31848 [001] 162723.180999: funcgraph_exit:       + 20.230 us  |        }
           <...>-31848 [001] 162723.180999: funcgraph_entry:        0.489 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181000: funcgraph_entry:        0.517 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181001: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181002: funcgraph_entry:        0.550 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181003: funcgraph_exit:         1.506 us   |        }
           <...>-31848 [001] 162723.181003: funcgraph_exit:       + 40.547 us  |      }
           <...>-31848 [001] 162723.181004: funcgraph_entry:        0.533 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.181005: funcgraph_entry:        1.096 us   |      zio_remove_child();
           <...>-31848 [001] 162723.181007: funcgraph_entry:        0.473 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181008: funcgraph_entry:        0.520 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181009: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181009: funcgraph_entry:        0.573 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181010: funcgraph_exit:         1.522 us   |      }
           <...>-31848 [001] 162723.181011: funcgraph_entry:        0.467 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181012: funcgraph_entry:        0.490 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181013: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.181014: funcgraph_entry:        0.900 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.181015: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.181016: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.181016: funcgraph_entry:        0.537 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.181018: funcgraph_exit:         2.083 us   |          }
           <...>-31848 [001] 162723.181019: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.181019: funcgraph_entry:        0.473 us   |            spa_load_state();
           <...>-31848 [001] 162723.181020: funcgraph_entry:        0.464 us   |            spa_load_state();
           <...>-31848 [001] 162723.181021: funcgraph_entry:        0.460 us   |            spa_load_state();
           <...>-31848 [001] 162723.181022: funcgraph_entry:        0.557 us   |            vdev_accessible();
           <...>-31848 [001] 162723.181023: funcgraph_entry:        0.517 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.181024: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181025: funcgraph_entry:        0.707 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181026: funcgraph_entry:        0.746 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181027: funcgraph_exit:         3.269 us   |            }
           <...>-31848 [001] 162723.181028: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181029: funcgraph_entry:        0.660 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181030: funcgraph_entry:        0.686 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181031: funcgraph_exit:         3.182 us   |            }
           <...>-31848 [001] 162723.181032: funcgraph_entry:        0.527 us   |            spa_load_state();
           <...>-31848 [001] 162723.181033: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181034: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181034: funcgraph_entry:        0.459 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181035: funcgraph_exit:         1.436 us   |              }
           <...>-31848 [001] 162723.181036: funcgraph_exit:         2.496 us   |            }
           <...>-31848 [001] 162723.181036: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.181037: funcgraph_entry:        0.760 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181038: funcgraph_entry:        0.796 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181040: funcgraph_entry:        0.846 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181042: funcgraph_entry:        0.769 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181043: funcgraph_exit:         7.170 us   |            }
           <...>-31848 [001] 162723.181044: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.181045: funcgraph_entry:        0.826 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181046: funcgraph_entry:        0.809 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181048: funcgraph_entry:        0.949 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181050: funcgraph_entry:        0.867 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181051: funcgraph_entry:        0.820 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181053: funcgraph_entry:        0.667 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181054: funcgraph_entry:        0.656 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181056: funcgraph_entry:        0.754 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181057: funcgraph_entry:        0.510 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.181058: funcgraph_exit:       + 14.660 us  |            }
           <...>-31848 [001] 162723.181059: funcgraph_entry:        0.500 us   |            spa_load_state();
           <...>-31848 [001] 162723.181060: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181060: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181061: funcgraph_entry:        0.524 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181062: funcgraph_exit:         1.563 us   |              }
           <...>-31848 [001] 162723.181063: funcgraph_exit:         2.539 us   |            }
           <...>-31848 [001] 162723.181063: funcgraph_entry:        0.476 us   |            spa_name();
           <...>-31848 [001] 162723.181064: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181065: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181065: funcgraph_entry:        0.794 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181067: funcgraph_entry:        0.774 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181069: funcgraph_entry:        0.726 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181070: funcgraph_exit:         5.581 us   |              }
           <...>-31848 [001] 162723.181071: funcgraph_exit:         6.680 us   |            }
           <...>-31848 [001] 162723.181071: funcgraph_entry:        0.553 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.181072: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181073: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181073: funcgraph_entry:        0.750 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181075: funcgraph_exit:         2.136 us   |              }
           <...>-31848 [001] 162723.181075: funcgraph_exit:         3.075 us   |            }
           <...>-31848 [001] 162723.181076: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181076: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181077: funcgraph_entry:        0.709 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181079: funcgraph_entry:        0.769 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181080: funcgraph_exit:         3.751 us   |              }
           <...>-31848 [001] 162723.181081: funcgraph_exit:         4.708 us   |            }
           <...>-31848 [001] 162723.181081: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181082: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181082: funcgraph_entry:        0.804 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181084: funcgraph_exit:         2.352 us   |              }
           <...>-31848 [001] 162723.181085: funcgraph_exit:         3.401 us   |            }
           <...>-31848 [001] 162723.181085: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181086: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181086: funcgraph_entry:        0.760 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181088: funcgraph_exit:         2.219 us   |              }
           <...>-31848 [001] 162723.181088: funcgraph_exit:         3.235 us   |            }
           <...>-31848 [001] 162723.181089: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181089: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181090: funcgraph_entry:        0.747 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181092: funcgraph_exit:         2.248 us   |              }
           <...>-31848 [001] 162723.181092: funcgraph_exit:         3.334 us   |            }
           <...>-31848 [001] 162723.181093: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181093: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181094: funcgraph_entry:        0.817 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181095: funcgraph_exit:         2.342 us   |              }
           <...>-31848 [001] 162723.181096: funcgraph_exit:         3.452 us   |            }
           <...>-31848 [001] 162723.181097: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181097: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181098: funcgraph_entry:        0.653 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181099: funcgraph_entry:        0.599 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181101: funcgraph_entry:        0.674 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181102: funcgraph_exit:         5.437 us   |              }
           <...>-31848 [001] 162723.181103: funcgraph_exit:         6.400 us   |            }
           <...>-31848 [001] 162723.181104: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181104: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181105: funcgraph_entry:        0.680 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181106: funcgraph_entry:        0.640 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181108: funcgraph_exit:         3.941 us   |              }
           <...>-31848 [001] 162723.181108: funcgraph_exit:         4.927 us   |            }
           <...>-31848 [001] 162723.181109: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181110: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181110: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181112: funcgraph_entry:        0.642 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181114: funcgraph_exit:         4.118 us   |              }
           <...>-31848 [001] 162723.181114: funcgraph_exit:         5.161 us   |            }
           <...>-31848 [001] 162723.181115: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181115: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181116: funcgraph_entry:        0.772 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181117: funcgraph_exit:         2.256 us   |              }
           <...>-31848 [001] 162723.181118: funcgraph_exit:         3.202 us   |            }
           <...>-31848 [001] 162723.181119: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181119: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181120: funcgraph_entry:        0.682 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181122: funcgraph_exit:         2.099 us   |              }
           <...>-31848 [001] 162723.181122: funcgraph_exit:         3.162 us   |            }
           <...>-31848 [001] 162723.181123: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181123: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181124: funcgraph_entry:        0.659 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181125: funcgraph_exit:         2.306 us   |              }
           <...>-31848 [001] 162723.181126: funcgraph_exit:         3.412 us   |            }
           <...>-31848 [001] 162723.181126: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181127: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181127: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181129: funcgraph_exit:         2.096 us   |              }
           <...>-31848 [001] 162723.181129: funcgraph_exit:         3.059 us   |            }
           <...>-31848 [001] 162723.181130: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181130: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181131: funcgraph_entry:        0.687 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181133: funcgraph_exit:         2.275 us   |              }
           <...>-31848 [001] 162723.181133: funcgraph_exit:         3.338 us   |            }
           <...>-31848 [001] 162723.181134: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181134: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181135: funcgraph_entry:        0.630 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181136: funcgraph_exit:         2.172 us   |              }
           <...>-31848 [001] 162723.181137: funcgraph_exit:         3.238 us   |            }
           <...>-31848 [001] 162723.181137: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181138: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181139: funcgraph_entry:        0.736 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181140: funcgraph_exit:         2.356 us   |              }
           <...>-31848 [001] 162723.181141: funcgraph_exit:         3.388 us   |            }
           <...>-31848 [001] 162723.181141: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181142: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181143: funcgraph_entry:        0.729 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181144: funcgraph_entry:        0.772 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181146: funcgraph_exit:         4.361 us   |              }
           <...>-31848 [001] 162723.181147: funcgraph_exit:         5.361 us   |            }
           <...>-31848 [001] 162723.181147: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181148: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181148: funcgraph_entry:        0.776 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181150: funcgraph_entry:        0.853 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181152: funcgraph_entry:        0.796 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181155: funcgraph_entry:        0.729 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181156: funcgraph_exit:         8.403 us   |              }
           <...>-31848 [001] 162723.181157: funcgraph_exit:         9.386 us   |            }
           <...>-31848 [001] 162723.181157: funcgraph_exit:       ! 138.445 us |          }
           <...>-31848 [001] 162723.181158: funcgraph_exit:       ! 142.653 us |        }
           <...>-31848 [001] 162723.181158: funcgraph_exit:       ! 145.165 us |      }
           <...>-31848 [001] 162723.181159: funcgraph_entry:        0.596 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181160: funcgraph_entry:        0.483 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181161: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.181162: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181163: funcgraph_entry:        0.516 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181164: funcgraph_entry:        0.570 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181165: funcgraph_entry:        0.593 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181166: funcgraph_entry:        0.497 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.181167: funcgraph_entry:        0.619 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.181168: funcgraph_entry:        0.494 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.181169: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.181170: funcgraph_entry:        0.633 us   |          zio_buf_free();
           <...>-31848 [001] 162723.181171: funcgraph_exit:         1.639 us   |        }
           <...>-31848 [001] 162723.181171: funcgraph_entry:        0.580 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181173: funcgraph_entry:        0.602 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181174: funcgraph_entry:        1.076 us   |        zio_remove_child();
           <...>-31848 [001] 162723.181176: funcgraph_entry:        0.530 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181177: funcgraph_entry:        0.487 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181178: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.181179: funcgraph_entry:        0.590 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181180: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.181180: funcgraph_entry:        0.490 us   |            spa_writeable();
           <...>-31848 [001] 162723.181181: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.181182: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.181183: funcgraph_entry:        0.859 us   |                zio_add_child();
           <...>-31848 [001] 162723.181184: funcgraph_exit:         2.289 us   |              }
           <...>-31848 [001] 162723.181185: funcgraph_exit:         3.371 us   |            }
           <...>-31848 [001] 162723.181185: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.181186: funcgraph_entry:        0.510 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.181187: funcgraph_entry:        0.467 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.181188: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.181188: funcgraph_entry:        0.466 us   |                spa_writeable();
           <...>-31848 [001] 162723.181189: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.181190: funcgraph_entry:        0.603 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181191: funcgraph_entry:        0.490 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181192: funcgraph_entry:        0.506 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181193: funcgraph_entry:        0.460 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181194: funcgraph_entry:        0.543 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181195: funcgraph_entry:        0.739 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.181197: funcgraph_exit:         7.539 us   |                }
           <...>-31848 [001] 162723.181197: funcgraph_exit:         9.572 us   |              }
           <...>-31848 [001] 162723.181198: funcgraph_exit:       + 12.527 us  |            }
           <...>-31848 [001] 162723.181198: funcgraph_exit:       + 18.635 us  |          }
           <...>-31848 [001] 162723.181199: funcgraph_exit:       + 20.763 us  |        }
           <...>-31848 [001] 162723.181199: funcgraph_entry:        0.477 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181200: funcgraph_entry:        0.480 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181201: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181202: funcgraph_entry:        0.645 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181203: funcgraph_exit:         1.649 us   |        }
           <...>-31848 [001] 162723.181203: funcgraph_exit:       + 42.136 us  |      }
           <...>-31848 [001] 162723.181204: funcgraph_entry:        0.549 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.181205: funcgraph_entry:        0.947 us   |      zio_remove_child();
           <...>-31848 [001] 162723.181207: funcgraph_entry:        0.550 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181208: funcgraph_entry:        0.569 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181209: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181210: funcgraph_entry:        0.560 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181211: funcgraph_exit:         1.735 us   |      }
           <...>-31848 [001] 162723.181211: funcgraph_entry:        0.517 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181212: funcgraph_entry:        0.480 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181213: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.181214: funcgraph_entry:        0.845 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.181215: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.181216: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.181216: funcgraph_entry:        0.570 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.181218: funcgraph_exit:         2.309 us   |          }
           <...>-31848 [001] 162723.181219: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.181219: funcgraph_entry:        0.487 us   |            spa_load_state();
           <...>-31848 [001] 162723.181220: funcgraph_entry:        0.507 us   |            spa_load_state();
           <...>-31848 [001] 162723.181222: funcgraph_entry:        0.884 us   |            spa_load_state();
           <...>-31848 [001] 162723.181223: funcgraph_entry:        0.427 us   |            vdev_accessible();
           <...>-31848 [001] 162723.181224: funcgraph_entry:        0.530 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.181225: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181225: funcgraph_entry:        0.597 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181226: funcgraph_entry:        0.719 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181228: funcgraph_exit:         3.009 us   |            }
           <...>-31848 [001] 162723.181228: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181229: funcgraph_entry:        0.573 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181230: funcgraph_entry:        0.707 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181231: funcgraph_exit:         2.895 us   |            }
           <...>-31848 [001] 162723.181232: funcgraph_entry:        0.520 us   |            spa_load_state();
           <...>-31848 [001] 162723.181233: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181233: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181234: funcgraph_entry:        0.427 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181235: funcgraph_exit:         1.310 us   |              }
           <...>-31848 [001] 162723.181235: funcgraph_exit:         2.205 us   |            }
           <...>-31848 [001] 162723.181236: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.181236: funcgraph_entry:        0.699 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181238: funcgraph_entry:        0.627 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181239: funcgraph_entry:        0.586 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181240: funcgraph_entry:        0.586 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181241: funcgraph_exit:         5.754 us   |            }
           <...>-31848 [001] 162723.181242: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.181243: funcgraph_entry:        0.646 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181244: funcgraph_entry:        0.660 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181245: funcgraph_entry:        0.747 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181247: funcgraph_entry:        0.669 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181248: funcgraph_entry:        0.586 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181250: funcgraph_entry:        0.617 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181251: funcgraph_entry:        0.595 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181252: funcgraph_entry:        0.583 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181254: funcgraph_entry:        0.530 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.181255: funcgraph_exit:       + 12.811 us  |            }
           <...>-31848 [001] 162723.181255: funcgraph_entry:        0.403 us   |            spa_load_state();
           <...>-31848 [001] 162723.181256: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181257: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181257: funcgraph_entry:        0.416 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181258: funcgraph_exit:         1.355 us   |              }
           <...>-31848 [001] 162723.181258: funcgraph_exit:         2.206 us   |            }
           <...>-31848 [001] 162723.181259: funcgraph_entry:        0.404 us   |            spa_name();
           <...>-31848 [001] 162723.181260: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181260: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181261: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181262: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181264: funcgraph_entry:        0.613 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181265: funcgraph_exit:         4.995 us   |              }
           <...>-31848 [001] 162723.181265: funcgraph_exit:         5.828 us   |            }
           <...>-31848 [001] 162723.181266: funcgraph_entry:        0.423 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.181267: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181267: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181268: funcgraph_entry:        9.500 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181278: funcgraph_exit:       + 11.188 us  |              }
           <...>-31848 [001] 162723.181279: funcgraph_exit:       + 12.080 us  |            }
           <...>-31848 [001] 162723.181279: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181280: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181281: funcgraph_entry:        0.793 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181282: funcgraph_entry:        0.687 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181284: funcgraph_exit:         4.347 us   |              }
           <...>-31848 [001] 162723.181285: funcgraph_exit:         5.337 us   |            }
           <...>-31848 [001] 162723.181285: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181286: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181286: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181288: funcgraph_exit:         2.338 us   |              }
           <...>-31848 [001] 162723.181288: funcgraph_exit:         3.432 us   |            }
           <...>-31848 [001] 162723.181289: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181289: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181290: funcgraph_entry:        0.703 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181292: funcgraph_exit:         2.392 us   |              }
           <...>-31848 [001] 162723.181292: funcgraph_exit:         3.352 us   |            }
           <...>-31848 [001] 162723.181293: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181293: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181294: funcgraph_entry:        0.605 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181295: funcgraph_exit:         2.132 us   |              }
           <...>-31848 [001] 162723.181296: funcgraph_exit:         3.056 us   |            }
           <...>-31848 [001] 162723.181296: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181297: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181297: funcgraph_entry:        0.604 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181299: funcgraph_exit:         2.222 us   |              }
           <...>-31848 [001] 162723.181299: funcgraph_exit:         3.148 us   |            }
           <...>-31848 [001] 162723.181300: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181300: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181301: funcgraph_entry:        0.680 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181303: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181305: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181306: funcgraph_exit:         5.791 us   |              }
           <...>-31848 [001] 162723.181307: funcgraph_exit:         6.783 us   |            }
           <...>-31848 [001] 162723.181307: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181308: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181308: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181310: funcgraph_entry:        0.739 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181312: funcgraph_exit:         4.145 us   |              }
           <...>-31848 [001] 162723.181312: funcgraph_exit:         5.105 us   |            }
           <...>-31848 [001] 162723.181313: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181313: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181314: funcgraph_entry:        0.749 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181316: funcgraph_entry:        0.722 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181318: funcgraph_exit:         4.505 us   |              }
           <...>-31848 [001] 162723.181318: funcgraph_exit:         5.498 us   |            }
           <...>-31848 [001] 162723.181319: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181319: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181320: funcgraph_entry:        0.614 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181322: funcgraph_exit:         2.216 us   |              }
           <...>-31848 [001] 162723.181322: funcgraph_exit:         3.206 us   |            }
           <...>-31848 [001] 162723.181323: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181323: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181324: funcgraph_entry:        0.600 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181325: funcgraph_exit:         2.136 us   |              }
           <...>-31848 [001] 162723.181326: funcgraph_exit:         3.052 us   |            }
           <...>-31848 [001] 162723.181326: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181326: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181327: funcgraph_entry:        0.600 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181329: funcgraph_exit:         2.242 us   |              }
           <...>-31848 [001] 162723.181329: funcgraph_exit:         3.162 us   |            }
           <...>-31848 [001] 162723.181330: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181330: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181331: funcgraph_entry:        0.605 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181332: funcgraph_exit:         2.206 us   |              }
           <...>-31848 [001] 162723.181333: funcgraph_exit:         3.132 us   |            }
           <...>-31848 [001] 162723.181333: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181334: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181334: funcgraph_entry:        0.686 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181336: funcgraph_exit:         2.402 us   |              }
           <...>-31848 [001] 162723.181337: funcgraph_exit:         3.669 us   |            }
           <...>-31848 [001] 162723.181337: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181338: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181338: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181340: funcgraph_exit:         2.116 us   |              }
           <...>-31848 [001] 162723.181340: funcgraph_exit:         3.159 us   |            }
           <...>-31848 [001] 162723.181341: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181341: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181342: funcgraph_entry:        0.763 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181344: funcgraph_exit:         2.405 us   |              }
           <...>-31848 [001] 162723.181344: funcgraph_exit:         3.328 us   |            }
           <...>-31848 [001] 162723.181345: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181345: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181346: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181347: funcgraph_entry:        0.613 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181349: funcgraph_exit:         3.981 us   |              }
           <...>-31848 [001] 162723.181350: funcgraph_exit:         4.890 us   |            }
           <...>-31848 [001] 162723.181350: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181351: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181351: funcgraph_entry:        0.592 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181353: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181355: funcgraph_entry:        0.593 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181356: funcgraph_entry:        0.593 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181358: funcgraph_exit:         7.582 us   |              }
           <...>-31848 [001] 162723.181358: funcgraph_exit:         8.436 us   |            }
           <...>-31848 [001] 162723.181359: funcgraph_exit:       ! 140.025 us |          }
           <...>-31848 [001] 162723.181360: funcgraph_exit:       ! 144.506 us |        }
           <...>-31848 [001] 162723.181360: funcgraph_exit:       ! 146.744 us |      }
           <...>-31848 [001] 162723.181360: funcgraph_entry:        0.403 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181361: funcgraph_entry:        0.455 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181362: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.181363: funcgraph_entry:        0.446 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181364: funcgraph_entry:        0.446 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181365: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181365: funcgraph_entry:        0.442 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181366: funcgraph_entry:        0.416 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.181367: funcgraph_entry:        0.530 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.181368: funcgraph_entry:        0.417 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.181369: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.181370: funcgraph_entry:        0.599 us   |          zio_buf_free();
           <...>-31848 [001] 162723.181371: funcgraph_exit:         1.536 us   |        }
           <...>-31848 [001] 162723.181371: funcgraph_entry:        0.464 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181372: funcgraph_entry:        0.593 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181373: funcgraph_entry:        1.009 us   |        zio_remove_child();
           <...>-31848 [001] 162723.181375: funcgraph_entry:        0.420 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181376: funcgraph_entry:        0.462 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181377: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.181377: funcgraph_entry:        0.480 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181378: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.181379: funcgraph_entry:        0.466 us   |            spa_writeable();
           <...>-31848 [001] 162723.181380: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.181380: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.181381: funcgraph_entry:        0.720 us   |                zio_add_child();
           <...>-31848 [001] 162723.181382: funcgraph_exit:         2.022 us   |              }
           <...>-31848 [001] 162723.181382: funcgraph_exit:         2.942 us   |            }
           <...>-31848 [001] 162723.181383: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.181383: funcgraph_entry:        0.526 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.181385: funcgraph_entry:        0.513 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.181386: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.181386: funcgraph_entry:        0.526 us   |                spa_writeable();
           <...>-31848 [001] 162723.181387: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.181388: funcgraph_entry:        0.479 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181389: funcgraph_entry:        0.506 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181390: funcgraph_entry:        0.430 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181391: funcgraph_entry:        0.553 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181392: funcgraph_entry:        0.484 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181393: funcgraph_entry:        0.610 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.181394: funcgraph_exit:         6.674 us   |                }
           <...>-31848 [001] 162723.181394: funcgraph_exit:         8.739 us   |              }
           <...>-31848 [001] 162723.181395: funcgraph_exit:       + 11.948 us  |            }
           <...>-31848 [001] 162723.181395: funcgraph_exit:       + 17.261 us  |          }
           <...>-31848 [001] 162723.181396: funcgraph_exit:       + 19.208 us  |        }
           <...>-31848 [001] 162723.181396: funcgraph_entry:        0.499 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181397: funcgraph_entry:        0.490 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181398: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181399: funcgraph_entry:        0.467 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181399: funcgraph_exit:         1.322 us   |        }
           <...>-31848 [001] 162723.181400: funcgraph_exit:       + 37.736 us  |      }
           <...>-31848 [001] 162723.181400: funcgraph_entry:        0.453 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.181401: funcgraph_entry:        0.973 us   |      zio_remove_child();
           <...>-31848 [001] 162723.181403: funcgraph_entry:        0.440 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181404: funcgraph_entry:        0.460 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181405: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181405: funcgraph_entry:        0.473 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181406: funcgraph_exit:         1.350 us   |      }
           <...>-31848 [001] 162723.181406: funcgraph_entry:        0.429 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181407: funcgraph_entry:        0.457 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181408: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.181409: funcgraph_entry:        0.776 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.181410: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.181411: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.181411: funcgraph_entry:        0.477 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.181413: funcgraph_exit:         1.992 us   |          }
           <...>-31848 [001] 162723.181413: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.181414: funcgraph_entry:        0.443 us   |            spa_load_state();
           <...>-31848 [001] 162723.181415: funcgraph_entry:        0.442 us   |            spa_load_state();
           <...>-31848 [001] 162723.181416: funcgraph_entry:        0.450 us   |            spa_load_state();
           <...>-31848 [001] 162723.181416: funcgraph_entry:        0.439 us   |            vdev_accessible();
           <...>-31848 [001] 162723.181417: funcgraph_entry:        0.503 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.181418: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181419: funcgraph_entry:        0.646 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181420: funcgraph_entry:        0.683 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181421: funcgraph_exit:         3.141 us   |            }
           <...>-31848 [001] 162723.181422: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181423: funcgraph_entry:        0.603 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181424: funcgraph_entry:        0.610 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181425: funcgraph_exit:         3.075 us   |            }
           <...>-31848 [001] 162723.181425: funcgraph_entry:        0.527 us   |            spa_load_state();
           <...>-31848 [001] 162723.181427: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181427: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181428: funcgraph_entry:        0.467 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181429: funcgraph_exit:         1.850 us   |              }
           <...>-31848 [001] 162723.181430: funcgraph_exit:         2.944 us   |            }
           <...>-31848 [001] 162723.181430: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.181431: funcgraph_entry:        0.729 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181433: funcgraph_entry:        0.776 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181434: funcgraph_entry:        0.930 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181436: funcgraph_entry:        0.697 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181438: funcgraph_exit:         7.199 us   |            }
           <...>-31848 [001] 162723.181438: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.181439: funcgraph_entry:        0.905 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181441: funcgraph_entry:        0.869 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181443: funcgraph_entry:        0.873 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181444: funcgraph_entry:        0.857 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181446: funcgraph_entry:        0.770 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181448: funcgraph_entry:        0.909 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181449: funcgraph_entry:        0.773 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181451: funcgraph_entry:        0.733 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181453: funcgraph_entry:        0.630 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.181454: funcgraph_exit:       + 15.812 us  |            }
           <...>-31848 [001] 162723.181455: funcgraph_entry:        0.644 us   |            spa_load_state();
           <...>-31848 [001] 162723.181456: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181456: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181457: funcgraph_entry:        0.660 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181458: funcgraph_exit:         1.869 us   |              }
           <...>-31848 [001] 162723.181459: funcgraph_exit:         2.985 us   |            }
           <...>-31848 [001] 162723.181459: funcgraph_entry:        0.556 us   |            spa_name();
           <...>-31848 [001] 162723.181460: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181461: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181462: funcgraph_entry:        0.849 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181463: funcgraph_entry:        0.856 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181465: funcgraph_entry:        0.952 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181467: funcgraph_exit:         6.400 us   |              }
           <...>-31848 [001] 162723.181468: funcgraph_exit:         7.613 us   |            }
           <...>-31848 [001] 162723.181469: funcgraph_entry:        0.644 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.181470: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181470: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181471: funcgraph_entry:        0.804 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181473: funcgraph_exit:         2.535 us   |              }
           <...>-31848 [001] 162723.181473: funcgraph_exit:         3.725 us   |            }
           <...>-31848 [001] 162723.181474: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181475: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181475: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181477: funcgraph_entry:        0.700 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181479: funcgraph_exit:         4.352 us   |              }
           <...>-31848 [001] 162723.181480: funcgraph_exit:         5.574 us   |            }
           <...>-31848 [001] 162723.181480: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181481: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181482: funcgraph_entry:        0.743 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181484: funcgraph_exit:         2.786 us   |              }
           <...>-31848 [001] 162723.181484: funcgraph_exit:         3.991 us   |            }
           <...>-31848 [001] 162723.181485: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181485: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181486: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181488: funcgraph_exit:         2.512 us   |              }
           <...>-31848 [001] 162723.181488: funcgraph_exit:         3.785 us   |            }
           <...>-31848 [001] 162723.181489: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181490: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181490: funcgraph_entry:        0.749 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181492: funcgraph_exit:         2.819 us   |              }
           <...>-31848 [001] 162723.181493: funcgraph_exit:         3.928 us   |            }
           <...>-31848 [001] 162723.181493: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181494: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181495: funcgraph_entry:        0.655 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181496: funcgraph_exit:         2.272 us   |              }
           <...>-31848 [001] 162723.181497: funcgraph_exit:         3.345 us   |            }
           <...>-31848 [001] 162723.181497: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181498: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181498: funcgraph_entry:        0.659 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181500: funcgraph_entry:        0.706 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181502: funcgraph_entry:        0.713 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181504: funcgraph_exit:         5.980 us   |              }
           <...>-31848 [001] 162723.181504: funcgraph_exit:         7.007 us   |            }
           <...>-31848 [001] 162723.181505: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181505: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181506: funcgraph_entry:        0.666 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181507: funcgraph_entry:        0.614 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181509: funcgraph_exit:         3.846 us   |              }
           <...>-31848 [001] 162723.181509: funcgraph_exit:         4.764 us   |            }
           <...>-31848 [001] 162723.181510: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181511: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181511: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181513: funcgraph_entry:        0.732 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181515: funcgraph_exit:         4.272 us   |              }
           <...>-31848 [001] 162723.181515: funcgraph_exit:         5.231 us   |            }
           <...>-31848 [001] 162723.181516: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181516: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181517: funcgraph_entry:        0.629 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181518: funcgraph_exit:         2.225 us   |              }
           <...>-31848 [001] 162723.181519: funcgraph_exit:         3.209 us   |            }
           <...>-31848 [001] 162723.181519: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181520: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181521: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181522: funcgraph_exit:         2.426 us   |              }
           <...>-31848 [001] 162723.181523: funcgraph_exit:         3.455 us   |            }
           <...>-31848 [001] 162723.181523: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181524: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181524: funcgraph_entry:        0.637 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181526: funcgraph_exit:         2.232 us   |              }
           <...>-31848 [001] 162723.181527: funcgraph_exit:         3.212 us   |            }
           <...>-31848 [001] 162723.181527: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181528: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181528: funcgraph_entry:        1.755 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181531: funcgraph_exit:         3.462 us   |              }
           <...>-31848 [001] 162723.181532: funcgraph_exit:         4.434 us   |            }
           <...>-31848 [001] 162723.181532: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181533: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181533: funcgraph_entry:        0.779 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181535: funcgraph_exit:         2.436 us   |              }
           <...>-31848 [001] 162723.181536: funcgraph_exit:         3.426 us   |            }
           <...>-31848 [001] 162723.181536: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181537: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181537: funcgraph_entry:        0.762 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181539: funcgraph_exit:         2.469 us   |              }
           <...>-31848 [001] 162723.181540: funcgraph_exit:         3.492 us   |            }
           <...>-31848 [001] 162723.181540: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181541: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181541: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181543: funcgraph_exit:         2.199 us   |              }
           <...>-31848 [001] 162723.181543: funcgraph_exit:         3.165 us   |            }
           <...>-31848 [001] 162723.181544: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181544: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181545: funcgraph_entry:        0.843 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181547: funcgraph_entry:        0.670 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181549: funcgraph_exit:         4.281 us   |              }
           <...>-31848 [001] 162723.181549: funcgraph_exit:         5.397 us   |            }
           <...>-31848 [001] 162723.181550: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181550: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181551: funcgraph_entry:        0.780 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181553: funcgraph_entry:        0.647 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181555: funcgraph_entry:        0.740 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181557: funcgraph_entry:        0.706 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181559: funcgraph_exit:         8.290 us   |              }
           <...>-31848 [001] 162723.181559: funcgraph_exit:         9.295 us   |            }
           <...>-31848 [001] 162723.181560: funcgraph_exit:       ! 146.312 us |          }
           <...>-31848 [001] 162723.181560: funcgraph_exit:       ! 150.380 us |        }
           <...>-31848 [001] 162723.181561: funcgraph_exit:       ! 152.508 us |      }
           <...>-31848 [001] 162723.181561: funcgraph_entry:        0.553 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181562: funcgraph_entry:        0.580 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181563: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.181564: funcgraph_entry:        0.563 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181565: funcgraph_entry:        0.523 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181566: funcgraph_entry:        0.499 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181567: funcgraph_entry:        0.493 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181568: funcgraph_entry:        0.519 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.181569: funcgraph_entry:        0.536 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.181570: funcgraph_entry:        0.496 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.181571: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.181571: funcgraph_entry:        0.637 us   |          zio_buf_free();
           <...>-31848 [001] 162723.181573: funcgraph_exit:         1.596 us   |        }
           <...>-31848 [001] 162723.181573: funcgraph_entry:        0.597 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181574: funcgraph_entry:        0.485 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181575: funcgraph_entry:        1.037 us   |        zio_remove_child();
           <...>-31848 [001] 162723.181577: funcgraph_entry:        0.513 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181578: funcgraph_entry:        0.577 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181579: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.181579: funcgraph_entry:        0.520 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181580: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.181581: funcgraph_entry:        0.520 us   |            spa_writeable();
           <...>-31848 [001] 162723.181582: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.181583: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.181583: funcgraph_entry:        0.880 us   |                zio_add_child();
           <...>-31848 [001] 162723.181585: funcgraph_exit:         2.251 us   |              }
           <...>-31848 [001] 162723.181585: funcgraph_exit:         3.202 us   |            }
           <...>-31848 [001] 162723.181586: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.181586: funcgraph_entry:        0.486 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.181587: funcgraph_entry:        0.557 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.181588: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.181589: funcgraph_entry:        0.530 us   |                spa_writeable();
           <...>-31848 [001] 162723.181590: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.181591: funcgraph_entry:        0.519 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181592: funcgraph_entry:        0.524 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181593: funcgraph_entry:        0.466 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181594: funcgraph_entry:        0.570 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181595: funcgraph_entry:        0.576 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181596: funcgraph_entry:        0.623 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.181597: funcgraph_exit:         7.309 us   |                }
           <...>-31848 [001] 162723.181598: funcgraph_exit:         9.382 us   |              }
           <...>-31848 [001] 162723.181598: funcgraph_exit:       + 12.400 us  |            }
           <...>-31848 [001] 162723.181599: funcgraph_exit:       + 18.601 us  |          }
           <...>-31848 [001] 162723.181600: funcgraph_exit:       + 20.630 us  |        }
           <...>-31848 [001] 162723.181600: funcgraph_entry:        0.480 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181601: funcgraph_entry:        0.499 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181602: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181602: funcgraph_entry:        0.554 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181604: funcgraph_exit:         1.615 us   |        }
           <...>-31848 [001] 162723.181604: funcgraph_exit:       + 40.884 us  |      }
           <...>-31848 [001] 162723.181605: funcgraph_entry:        0.596 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.181606: funcgraph_entry:        1.024 us   |      zio_remove_child();
           <...>-31848 [001] 162723.181608: funcgraph_entry:        0.503 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181609: funcgraph_entry:        0.527 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181609: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181610: funcgraph_entry:        0.553 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181611: funcgraph_exit:         1.527 us   |      }
           <...>-31848 [001] 162723.181611: funcgraph_entry:        0.519 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181612: funcgraph_entry:        0.470 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181613: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.181614: funcgraph_entry:        0.886 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.181615: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.181616: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.181616: funcgraph_entry:        0.547 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.181618: funcgraph_exit:         2.063 us   |          }
           <...>-31848 [001] 162723.181619: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.181619: funcgraph_entry:        0.469 us   |            spa_load_state();
           <...>-31848 [001] 162723.181620: funcgraph_entry:        0.457 us   |            spa_load_state();
           <...>-31848 [001] 162723.181621: funcgraph_entry:        0.460 us   |            spa_load_state();
           <...>-31848 [001] 162723.181622: funcgraph_entry:        0.467 us   |            vdev_accessible();
           <...>-31848 [001] 162723.181623: funcgraph_entry:        0.560 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.181624: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181625: funcgraph_entry:        0.676 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181626: funcgraph_entry:        0.667 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181627: funcgraph_exit:         3.249 us   |            }
           <...>-31848 [001] 162723.181628: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181628: funcgraph_entry:        0.603 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181629: funcgraph_entry:        0.735 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181631: funcgraph_exit:         3.214 us   |            }
           <...>-31848 [001] 162723.181631: funcgraph_entry:        0.477 us   |            spa_load_state();
           <...>-31848 [001] 162723.181633: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181633: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181634: funcgraph_entry:        0.489 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181634: funcgraph_exit:         1.423 us   |              }
           <...>-31848 [001] 162723.181635: funcgraph_exit:         2.396 us   |            }
           <...>-31848 [001] 162723.181635: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.181636: funcgraph_entry:        0.680 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181637: funcgraph_entry:        0.686 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181639: funcgraph_entry:        0.667 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181640: funcgraph_entry:        0.677 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181642: funcgraph_exit:         6.224 us   |            }
           <...>-31848 [001] 162723.181642: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.181643: funcgraph_entry:        0.686 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181644: funcgraph_entry:        0.780 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181646: funcgraph_entry:        0.803 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181647: funcgraph_entry:        0.660 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181649: funcgraph_entry:        0.816 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181651: funcgraph_entry:        0.703 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181652: funcgraph_entry:        0.615 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181654: funcgraph_entry:        0.707 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181655: funcgraph_entry:        0.457 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.181656: funcgraph_exit:       + 13.927 us  |            }
           <...>-31848 [001] 162723.181656: funcgraph_entry:        0.516 us   |            spa_load_state();
           <...>-31848 [001] 162723.181657: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181658: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181658: funcgraph_entry:        0.512 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181659: funcgraph_exit:         1.432 us   |              }
           <...>-31848 [001] 162723.181660: funcgraph_exit:         2.393 us   |            }
           <...>-31848 [001] 162723.181660: funcgraph_entry:        0.456 us   |            spa_name();
           <...>-31848 [001] 162723.181661: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181662: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181662: funcgraph_entry:        0.592 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181664: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181665: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181667: funcgraph_exit:         4.968 us   |              }
           <...>-31848 [001] 162723.181667: funcgraph_exit:         5.914 us   |            }
           <...>-31848 [001] 162723.181667: funcgraph_entry:        0.530 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.181668: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181669: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181669: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181671: funcgraph_exit:         1.926 us   |              }
           <...>-31848 [001] 162723.181671: funcgraph_exit:         2.862 us   |            }
           <...>-31848 [001] 162723.181672: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181672: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181673: funcgraph_entry:        0.589 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181674: funcgraph_entry:        0.749 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181676: funcgraph_exit:         3.541 us   |              }
           <...>-31848 [001] 162723.181676: funcgraph_exit:         4.498 us   |            }
           <...>-31848 [001] 162723.181677: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181677: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181678: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181680: funcgraph_exit:         2.286 us   |              }
           <...>-31848 [001] 162723.181680: funcgraph_exit:         3.388 us   |            }
           <...>-31848 [001] 162723.181681: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181682: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181683: funcgraph_entry:        1.076 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181685: funcgraph_exit:         3.615 us   |              }
           <...>-31848 [001] 162723.181686: funcgraph_exit:         5.307 us   |            }
           <...>-31848 [001] 162723.181687: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181688: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181689: funcgraph_entry:        1.086 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181691: funcgraph_exit:         3.732 us   |              }
           <...>-31848 [001] 162723.181692: funcgraph_exit:         5.391 us   |            }
           <...>-31848 [001] 162723.181693: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181694: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181695: funcgraph_entry:        1.292 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181698: funcgraph_exit:         3.974 us   |              }
           <...>-31848 [001] 162723.181699: funcgraph_exit:         6.027 us   |            }
           <...>-31848 [001] 162723.181700: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181700: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181702: funcgraph_entry:        1.186 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181705: funcgraph_entry:        1.216 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181709: funcgraph_entry:        1.130 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181711: funcgraph_exit:       + 10.805 us  |              }
           <...>-31848 [001] 162723.181712: funcgraph_exit:       + 12.620 us  |            }
           <...>-31848 [001] 162723.181713: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181714: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181716: funcgraph_entry:        1.353 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181719: funcgraph_entry:        1.152 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181722: funcgraph_exit:         7.906 us   |              }
           <...>-31848 [001] 162723.181723: funcgraph_exit:         9.799 us   |            }
           <...>-31848 [001] 162723.181724: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181725: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181727: funcgraph_entry:        2.025 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181731: funcgraph_entry:        1.219 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181734: funcgraph_exit:         8.830 us   |              }
           <...>-31848 [001] 162723.181735: funcgraph_exit:       + 10.435 us  |            }
           <...>-31848 [001] 162723.181736: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181737: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181738: funcgraph_entry:        0.976 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181740: funcgraph_exit:         3.216 us   |              }
           <...>-31848 [001] 162723.181741: funcgraph_exit:         5.114 us   |            }
           <...>-31848 [001] 162723.181741: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181742: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181743: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181744: funcgraph_exit:         2.325 us   |              }
           <...>-31848 [001] 162723.181745: funcgraph_exit:         3.395 us   |            }
           <...>-31848 [001] 162723.181745: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181746: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181746: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181748: funcgraph_exit:         2.176 us   |              }
           <...>-31848 [001] 162723.181749: funcgraph_exit:         3.242 us   |            }
           <...>-31848 [001] 162723.181749: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181750: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181750: funcgraph_entry:        0.613 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181752: funcgraph_exit:         2.109 us   |              }
           <...>-31848 [001] 162723.181752: funcgraph_exit:         3.042 us   |            }
           <...>-31848 [001] 162723.181753: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181753: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181754: funcgraph_entry:        0.706 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181755: funcgraph_exit:         2.299 us   |              }
           <...>-31848 [001] 162723.181756: funcgraph_exit:         3.268 us   |            }
           <...>-31848 [001] 162723.181756: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181757: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181757: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181759: funcgraph_exit:         2.268 us   |              }
           <...>-31848 [001] 162723.181759: funcgraph_exit:         3.208 us   |            }
           <...>-31848 [001] 162723.181760: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181761: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181761: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181763: funcgraph_exit:         2.313 us   |              }
           <...>-31848 [001] 162723.181763: funcgraph_exit:         3.335 us   |            }
           <...>-31848 [001] 162723.181764: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181764: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181765: funcgraph_entry:        0.689 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181767: funcgraph_entry:        0.699 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181768: funcgraph_exit:         4.065 us   |              }
           <...>-31848 [001] 162723.181769: funcgraph_exit:         5.035 us   |            }
           <...>-31848 [001] 162723.181770: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181770: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181771: funcgraph_entry:        0.626 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181772: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181774: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181776: funcgraph_entry:        0.667 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181778: funcgraph_exit:         7.703 us   |              }
           <...>-31848 [001] 162723.181778: funcgraph_exit:         8.713 us   |            }
           <...>-31848 [001] 162723.181779: funcgraph_exit:       ! 160.072 us |          }
           <...>-31848 [001] 162723.181779: funcgraph_exit:       ! 164.232 us |        }
           <...>-31848 [001] 162723.181780: funcgraph_exit:       ! 166.609 us |      }
           <...>-31848 [001] 162723.181781: funcgraph_entry:        0.480 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181782: funcgraph_entry:        0.477 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181783: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.181783: funcgraph_entry:        0.566 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181785: funcgraph_entry:        0.543 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181786: funcgraph_entry:        0.613 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181787: funcgraph_entry:        0.510 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181788: funcgraph_entry:        0.537 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.181789: funcgraph_entry:        0.619 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.181790: funcgraph_entry:        0.527 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.181791: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.181792: funcgraph_entry:        0.680 us   |          zio_buf_free();
           <...>-31848 [001] 162723.181793: funcgraph_exit:         1.716 us   |        }
           <...>-31848 [001] 162723.181794: funcgraph_entry:        0.597 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181795: funcgraph_entry:        0.497 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.181796: funcgraph_entry:        1.036 us   |        zio_remove_child();
           <...>-31848 [001] 162723.181798: funcgraph_entry:        0.519 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181799: funcgraph_entry:        0.670 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181800: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.181800: funcgraph_entry:        0.513 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181801: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.181802: funcgraph_entry:        0.470 us   |            spa_writeable();
           <...>-31848 [001] 162723.181803: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.181804: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.181805: funcgraph_entry:        0.743 us   |                zio_add_child();
           <...>-31848 [001] 162723.181806: funcgraph_exit:         2.468 us   |              }
           <...>-31848 [001] 162723.181807: funcgraph_exit:         3.492 us   |            }
           <...>-31848 [001] 162723.181807: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.181807: funcgraph_entry:        0.520 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.181808: funcgraph_entry:        0.463 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.181809: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.181810: funcgraph_entry:        0.565 us   |                spa_writeable();
           <...>-31848 [001] 162723.181811: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.181812: funcgraph_entry:        0.596 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181813: funcgraph_entry:        0.476 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181814: funcgraph_entry:        0.520 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181815: funcgraph_entry:        0.496 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181816: funcgraph_entry:        0.520 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.181818: funcgraph_entry:        0.772 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.181819: funcgraph_exit:         7.859 us   |                }
           <...>-31848 [001] 162723.181819: funcgraph_exit:       + 10.128 us  |              }
           <...>-31848 [001] 162723.181820: funcgraph_exit:       + 13.001 us  |            }
           <...>-31848 [001] 162723.181820: funcgraph_exit:       + 19.007 us  |          }
           <...>-31848 [001] 162723.181821: funcgraph_exit:       + 21.097 us  |        }
           <...>-31848 [001] 162723.181821: funcgraph_entry:        0.483 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.181822: funcgraph_entry:        0.537 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.181823: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181824: funcgraph_entry:        0.589 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.181825: funcgraph_exit:         1.513 us   |        }
           <...>-31848 [001] 162723.181826: funcgraph_exit:       + 42.879 us  |      }
           <...>-31848 [001] 162723.181826: funcgraph_entry:        0.562 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.181827: funcgraph_entry:        0.856 us   |      zio_remove_child();
           <...>-31848 [001] 162723.181829: funcgraph_entry:        0.500 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181830: funcgraph_entry:        0.523 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181831: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.181831: funcgraph_entry:        0.573 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181833: funcgraph_exit:         1.895 us   |      }
           <...>-31848 [001] 162723.181833: funcgraph_entry:        0.477 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181834: funcgraph_entry:        0.526 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181835: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.181836: funcgraph_entry:        1.052 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.181837: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.181838: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.181839: funcgraph_entry:        0.519 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.181840: funcgraph_exit:         2.159 us   |          }
           <...>-31848 [001] 162723.181841: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.181842: funcgraph_entry:        0.484 us   |            spa_load_state();
           <...>-31848 [001] 162723.181842: funcgraph_entry:        0.476 us   |            spa_load_state();
           <...>-31848 [001] 162723.181843: funcgraph_entry:        0.493 us   |            spa_load_state();
           <...>-31848 [001] 162723.181844: funcgraph_entry:        0.485 us   |            vdev_accessible();
           <...>-31848 [001] 162723.181845: funcgraph_entry:        0.563 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.181846: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181847: funcgraph_entry:        0.660 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181848: funcgraph_entry:        0.709 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181850: funcgraph_exit:         3.314 us   |            }
           <...>-31848 [001] 162723.181850: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.181851: funcgraph_entry:        0.647 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181852: funcgraph_entry:        0.726 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181853: funcgraph_exit:         3.125 us   |            }
           <...>-31848 [001] 162723.181854: funcgraph_entry:        0.497 us   |            spa_load_state();
           <...>-31848 [001] 162723.181856: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181856: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181857: funcgraph_entry:        0.485 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181858: funcgraph_exit:         1.485 us   |              }
           <...>-31848 [001] 162723.181858: funcgraph_exit:         2.652 us   |            }
           <...>-31848 [001] 162723.181859: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.181859: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181861: funcgraph_entry:        0.672 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181862: funcgraph_entry:        0.680 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181864: funcgraph_entry:        0.607 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181865: funcgraph_exit:         6.461 us   |            }
           <...>-31848 [001] 162723.181866: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.181867: funcgraph_entry:        0.697 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181868: funcgraph_entry:        2.049 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181871: funcgraph_entry:        0.739 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181872: funcgraph_entry:        0.723 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181874: funcgraph_entry:        0.707 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181875: funcgraph_entry:        0.709 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181877: funcgraph_entry:        0.839 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181878: funcgraph_entry:        0.730 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.181880: funcgraph_entry:        0.523 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.181881: funcgraph_exit:       + 15.470 us  |            }
           <...>-31848 [001] 162723.181882: funcgraph_entry:        0.510 us   |            spa_load_state();
           <...>-31848 [001] 162723.181883: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.181883: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.181883: funcgraph_entry:        0.465 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.181884: funcgraph_exit:         1.505 us   |              }
           <...>-31848 [001] 162723.181885: funcgraph_exit:         2.576 us   |            }
           <...>-31848 [001] 162723.181886: funcgraph_entry:        0.462 us   |            spa_name();
           <...>-31848 [001] 162723.181887: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181887: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181888: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181890: funcgraph_entry:        0.739 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181891: funcgraph_entry:        0.705 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181893: funcgraph_exit:         5.500 us   |              }
           <...>-31848 [001] 162723.181893: funcgraph_exit:         6.993 us   |            }
           <...>-31848 [001] 162723.181894: funcgraph_entry:        0.582 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.181895: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181895: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181896: funcgraph_entry:        0.727 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181898: funcgraph_exit:         2.172 us   |              }
           <...>-31848 [001] 162723.181898: funcgraph_exit:         3.108 us   |            }
           <...>-31848 [001] 162723.181899: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181899: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181900: funcgraph_entry:        0.629 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181901: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181903: funcgraph_exit:         3.651 us   |              }
           <...>-31848 [001] 162723.181903: funcgraph_exit:         4.631 us   |            }
           <...>-31848 [001] 162723.181904: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181904: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181905: funcgraph_entry:        0.627 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181906: funcgraph_exit:         2.186 us   |              }
           <...>-31848 [001] 162723.181907: funcgraph_exit:         3.128 us   |            }
           <...>-31848 [001] 162723.181907: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181908: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181908: funcgraph_entry:        0.633 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181910: funcgraph_exit:         2.146 us   |              }
           <...>-31848 [001] 162723.181910: funcgraph_exit:         3.141 us   |            }
           <...>-31848 [001] 162723.181911: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181911: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181912: funcgraph_entry:        0.759 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181914: funcgraph_exit:         2.236 us   |              }
           <...>-31848 [001] 162723.181914: funcgraph_exit:         3.192 us   |            }
           <...>-31848 [001] 162723.181915: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181915: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181916: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181918: funcgraph_exit:         2.499 us   |              }
           <...>-31848 [001] 162723.181918: funcgraph_exit:         3.463 us   |            }
           <...>-31848 [001] 162723.181919: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181919: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181920: funcgraph_entry:        0.637 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181921: funcgraph_entry:        0.894 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181923: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181925: funcgraph_exit:         5.853 us   |              }
           <...>-31848 [001] 162723.181925: funcgraph_exit:         6.807 us   |            }
           <...>-31848 [001] 162723.181926: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181926: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181927: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181929: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181930: funcgraph_exit:         4.111 us   |              }
           <...>-31848 [001] 162723.181931: funcgraph_exit:         5.040 us   |            }
           <...>-31848 [001] 162723.181931: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181932: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181933: funcgraph_entry:        0.719 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181934: funcgraph_entry:        0.606 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181936: funcgraph_exit:         4.148 us   |              }
           <...>-31848 [001] 162723.181937: funcgraph_exit:         5.074 us   |            }
           <...>-31848 [001] 162723.181937: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181938: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181938: funcgraph_entry:        0.664 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181940: funcgraph_exit:         2.203 us   |              }
           <...>-31848 [001] 162723.181940: funcgraph_exit:         3.126 us   |            }
           <...>-31848 [001] 162723.181941: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181941: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181942: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181944: funcgraph_exit:         2.476 us   |              }
           <...>-31848 [001] 162723.181944: funcgraph_exit:         3.444 us   |            }
           <...>-31848 [001] 162723.181945: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181945: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181946: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181947: funcgraph_exit:         2.172 us   |              }
           <...>-31848 [001] 162723.181948: funcgraph_exit:         3.178 us   |            }
           <...>-31848 [001] 162723.181948: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181949: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181949: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181951: funcgraph_exit:         2.159 us   |              }
           <...>-31848 [001] 162723.181951: funcgraph_exit:         3.218 us   |            }
           <...>-31848 [001] 162723.181952: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181953: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181953: funcgraph_entry:        0.770 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181956: funcgraph_exit:         3.231 us   |              }
           <...>-31848 [001] 162723.181957: funcgraph_exit:         4.785 us   |            }
           <...>-31848 [001] 162723.181957: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181958: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181959: funcgraph_entry:        1.056 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181962: funcgraph_exit:         3.704 us   |              }
           <...>-31848 [001] 162723.181963: funcgraph_exit:         5.494 us   |            }
           <...>-31848 [001] 162723.181964: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181965: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181966: funcgraph_entry:        1.362 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181969: funcgraph_exit:         4.131 us   |              }
           <...>-31848 [001] 162723.181970: funcgraph_exit:         5.915 us   |            }
           <...>-31848 [001] 162723.181971: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181971: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181972: funcgraph_entry:        1.223 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181976: funcgraph_entry:        1.169 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181979: funcgraph_exit:         7.449 us   |              }
           <...>-31848 [001] 162723.181979: funcgraph_exit:         9.013 us   |            }
           <...>-31848 [001] 162723.181980: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.181981: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.181981: funcgraph_entry:        0.692 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181983: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181985: funcgraph_entry:        0.743 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181987: funcgraph_entry:        0.617 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.181989: funcgraph_exit:         8.489 us   |              }
           <...>-31848 [001] 162723.181990: funcgraph_exit:         9.559 us   |            }
           <...>-31848 [001] 162723.181990: funcgraph_exit:       ! 149.144 us |          }
           <...>-31848 [001] 162723.181991: funcgraph_exit:       ! 153.532 us |        }
           <...>-31848 [001] 162723.181991: funcgraph_exit:       ! 156.064 us |      }
           <...>-31848 [001] 162723.181992: funcgraph_entry:        0.533 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.181993: funcgraph_entry:        0.574 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.181994: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.181995: funcgraph_entry:        0.667 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181996: funcgraph_entry:        0.529 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181997: funcgraph_entry:        0.550 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181998: funcgraph_entry:        0.522 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.181999: funcgraph_entry:        0.530 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.182000: funcgraph_entry:        0.559 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.182001: funcgraph_entry:        0.500 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.182002: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.182003: funcgraph_entry:        0.706 us   |          zio_buf_free();
           <...>-31848 [001] 162723.182004: funcgraph_exit:         1.642 us   |        }
           <...>-31848 [001] 162723.182004: funcgraph_entry:        0.539 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182005: funcgraph_entry:        0.486 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182006: funcgraph_entry:        1.119 us   |        zio_remove_child();
           <...>-31848 [001] 162723.182008: funcgraph_entry:        0.502 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182009: funcgraph_entry:        0.603 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182011: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.182011: funcgraph_entry:        0.507 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182012: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.182013: funcgraph_entry:        0.466 us   |            spa_writeable();
           <...>-31848 [001] 162723.182014: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.182014: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.182015: funcgraph_entry:        0.713 us   |                zio_add_child();
           <...>-31848 [001] 162723.182017: funcgraph_exit:         2.615 us   |              }
           <...>-31848 [001] 162723.182017: funcgraph_exit:         3.551 us   |            }
           <...>-31848 [001] 162723.182018: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.182018: funcgraph_entry:        0.547 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.182019: funcgraph_entry:        0.514 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.182020: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.182021: funcgraph_entry:        0.549 us   |                spa_writeable();
           <...>-31848 [001] 162723.182022: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.182022: funcgraph_entry:        0.512 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182023: funcgraph_entry:        0.540 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182024: funcgraph_entry:        0.497 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182025: funcgraph_entry:        0.486 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182026: funcgraph_entry:        0.513 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182028: funcgraph_entry:        0.737 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.182029: funcgraph_exit:         7.466 us   |                }
           <...>-31848 [001] 162723.182030: funcgraph_exit:         9.465 us   |              }
           <...>-31848 [001] 162723.182030: funcgraph_exit:       + 12.464 us  |            }
           <...>-31848 [001] 162723.182030: funcgraph_exit:       + 18.511 us  |          }
           <...>-31848 [001] 162723.182031: funcgraph_exit:       + 20.490 us  |        }
           <...>-31848 [001] 162723.182031: funcgraph_entry:        0.473 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182032: funcgraph_entry:        0.483 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182033: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182034: funcgraph_entry:        0.600 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182035: funcgraph_exit:         1.620 us   |        }
           <...>-31848 [001] 162723.182036: funcgraph_exit:       + 41.396 us  |      }
           <...>-31848 [001] 162723.182036: funcgraph_entry:        0.540 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.182037: funcgraph_entry:        0.989 us   |      zio_remove_child();
           <...>-31848 [001] 162723.182039: funcgraph_entry:        0.486 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182040: funcgraph_entry:        0.487 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182041: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182041: funcgraph_entry:        0.603 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182042: funcgraph_exit:         1.706 us   |      }
           <...>-31848 [001] 162723.182043: funcgraph_entry:        0.532 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182044: funcgraph_entry:        0.477 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182045: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.182045: funcgraph_entry:        0.993 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.182047: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.182048: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.182048: funcgraph_entry:        0.557 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.182050: funcgraph_exit:         2.096 us   |          }
           <...>-31848 [001] 162723.182051: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.182051: funcgraph_entry:        0.486 us   |            spa_load_state();
           <...>-31848 [001] 162723.182052: funcgraph_entry:        0.553 us   |            spa_load_state();
           <...>-31848 [001] 162723.182053: funcgraph_entry:        0.507 us   |            spa_load_state();
           <...>-31848 [001] 162723.182054: funcgraph_entry:        0.477 us   |            vdev_accessible();
           <...>-31848 [001] 162723.182055: funcgraph_entry:        0.972 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.182057: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182057: funcgraph_entry:        0.636 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182059: funcgraph_entry:        0.724 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182060: funcgraph_exit:         3.202 us   |            }
           <...>-31848 [001] 162723.182060: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182061: funcgraph_entry:        0.616 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182062: funcgraph_entry:        0.727 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182064: funcgraph_exit:         3.209 us   |            }
           <...>-31848 [001] 162723.182064: funcgraph_entry:        0.563 us   |            spa_load_state();
           <...>-31848 [001] 162723.182066: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182066: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182067: funcgraph_entry:        0.487 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182068: funcgraph_exit:         1.443 us   |              }
           <...>-31848 [001] 162723.182068: funcgraph_exit:         2.465 us   |            }
           <...>-31848 [001] 162723.182069: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.182069: funcgraph_entry:        0.604 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182071: funcgraph_entry:        0.714 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182072: funcgraph_entry:        0.607 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182073: funcgraph_entry:        0.607 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182075: funcgraph_exit:         6.067 us   |            }
           <...>-31848 [001] 162723.182075: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.182076: funcgraph_entry:        0.596 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182077: funcgraph_entry:        0.624 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182079: funcgraph_entry:        0.734 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182080: funcgraph_entry:        0.595 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182081: funcgraph_entry:        0.670 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182083: funcgraph_entry:        0.650 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182084: funcgraph_entry:        0.620 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182086: funcgraph_entry:        0.593 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182087: funcgraph_entry:        0.630 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.182088: funcgraph_exit:       + 13.077 us  |            }
           <...>-31848 [001] 162723.182089: funcgraph_entry:        0.480 us   |            spa_load_state();
           <...>-31848 [001] 162723.182090: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182090: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182091: funcgraph_entry:        0.487 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182092: funcgraph_exit:         1.489 us   |              }
           <...>-31848 [001] 162723.182092: funcgraph_exit:         2.509 us   |            }
           <...>-31848 [001] 162723.182093: funcgraph_entry:        0.500 us   |            spa_name();
           <...>-31848 [001] 162723.182094: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182094: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182095: funcgraph_entry:        0.644 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182096: funcgraph_entry:        0.612 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182098: funcgraph_entry:        0.600 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182099: funcgraph_exit:         5.080 us   |              }
           <...>-31848 [001] 162723.182100: funcgraph_exit:         6.100 us   |            }
           <...>-31848 [001] 162723.182100: funcgraph_entry:        0.546 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.182101: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182102: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182102: funcgraph_entry:        0.612 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182104: funcgraph_exit:         2.013 us   |              }
           <...>-31848 [001] 162723.182104: funcgraph_exit:         2.959 us   |            }
           <...>-31848 [001] 162723.182105: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182105: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182106: funcgraph_entry:        0.670 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182107: funcgraph_entry:        0.603 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182109: funcgraph_exit:         3.935 us   |              }
           <...>-31848 [001] 162723.182110: funcgraph_exit:         4.914 us   |            }
           <...>-31848 [001] 162723.182110: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182111: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182111: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182113: funcgraph_exit:         2.062 us   |              }
           <...>-31848 [001] 162723.182113: funcgraph_exit:         3.152 us   |            }
           <...>-31848 [001] 162723.182114: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182114: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182115: funcgraph_entry:        0.636 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182116: funcgraph_exit:         2.063 us   |              }
           <...>-31848 [001] 162723.182117: funcgraph_exit:         3.108 us   |            }
           <...>-31848 [001] 162723.182117: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182118: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182119: funcgraph_entry:        0.602 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182120: funcgraph_exit:         2.006 us   |              }
           <...>-31848 [001] 162723.182120: funcgraph_exit:         2.972 us   |            }
           <...>-31848 [001] 162723.182121: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182121: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182122: funcgraph_entry:        0.673 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182124: funcgraph_exit:         2.182 us   |              }
           <...>-31848 [001] 162723.182124: funcgraph_exit:         3.158 us   |            }
           <...>-31848 [001] 162723.182125: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182125: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182126: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182127: funcgraph_entry:        2.272 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182130: funcgraph_entry:        0.676 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182132: funcgraph_exit:         7.026 us   |              }
           <...>-31848 [001] 162723.182132: funcgraph_exit:         7.993 us   |            }
           <...>-31848 [001] 162723.182133: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182133: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182134: funcgraph_entry:        0.683 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182136: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182137: funcgraph_exit:         3.809 us   |              }
           <...>-31848 [001] 162723.182138: funcgraph_exit:         4.754 us   |            }
           <...>-31848 [001] 162723.182138: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182139: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182139: funcgraph_entry:        0.742 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182141: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182143: funcgraph_exit:         4.328 us   |              }
           <...>-31848 [001] 162723.182144: funcgraph_exit:         5.271 us   |            }
           <...>-31848 [001] 162723.182144: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182145: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182145: funcgraph_entry:        0.702 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182147: funcgraph_exit:         2.282 us   |              }
           <...>-31848 [001] 162723.182147: funcgraph_exit:         3.269 us   |            }
           <...>-31848 [001] 162723.182148: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182149: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182149: funcgraph_entry:        0.769 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182151: funcgraph_exit:         2.235 us   |              }
           <...>-31848 [001] 162723.182151: funcgraph_exit:         3.215 us   |            }
           <...>-31848 [001] 162723.182152: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182152: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182153: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182154: funcgraph_exit:         2.242 us   |              }
           <...>-31848 [001] 162723.182155: funcgraph_exit:         3.241 us   |            }
           <...>-31848 [001] 162723.182155: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182156: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182156: funcgraph_entry:        0.706 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182158: funcgraph_exit:         2.182 us   |              }
           <...>-31848 [001] 162723.182158: funcgraph_exit:         3.132 us   |            }
           <...>-31848 [001] 162723.182159: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182159: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182160: funcgraph_entry:        0.720 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182162: funcgraph_exit:         2.453 us   |              }
           <...>-31848 [001] 162723.182162: funcgraph_exit:         3.398 us   |            }
           <...>-31848 [001] 162723.182163: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182164: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182164: funcgraph_entry:        0.674 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182166: funcgraph_exit:         2.745 us   |              }
           <...>-31848 [001] 162723.182167: funcgraph_exit:         3.761 us   |            }
           <...>-31848 [001] 162723.182167: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182168: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182168: funcgraph_entry:        0.702 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182170: funcgraph_exit:         2.249 us   |              }
           <...>-31848 [001] 162723.182170: funcgraph_exit:         3.381 us   |            }
           <...>-31848 [001] 162723.182171: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182171: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182172: funcgraph_entry:        0.752 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182174: funcgraph_entry:        0.749 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182176: funcgraph_exit:         4.185 us   |              }
           <...>-31848 [001] 162723.182176: funcgraph_exit:         5.235 us   |            }
           <...>-31848 [001] 162723.182177: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182177: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182178: funcgraph_entry:        0.716 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182179: funcgraph_entry:        0.626 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182181: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182183: funcgraph_entry:        0.760 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182185: funcgraph_exit:         7.796 us   |              }
           <...>-31848 [001] 162723.182185: funcgraph_exit:         8.766 us   |            }
           <...>-31848 [001] 162723.182186: funcgraph_exit:       ! 135.467 us |          }
           <...>-31848 [001] 162723.182187: funcgraph_exit:       ! 139.655 us |        }
           <...>-31848 [001] 162723.182187: funcgraph_exit:       ! 142.060 us |      }
           <...>-31848 [001] 162723.182188: funcgraph_entry:        0.460 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182189: funcgraph_entry:        0.486 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182190: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.182190: funcgraph_entry:        0.490 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182191: funcgraph_entry:        0.590 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182192: funcgraph_entry:        0.520 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182193: funcgraph_entry:        0.600 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182194: funcgraph_entry:        0.467 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.182195: funcgraph_entry:        0.600 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.182196: funcgraph_entry:        0.490 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.182197: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.182197: funcgraph_entry:        0.603 us   |          zio_buf_free();
           <...>-31848 [001] 162723.182199: funcgraph_exit:         1.493 us   |        }
           <...>-31848 [001] 162723.182199: funcgraph_entry:        0.490 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182200: funcgraph_entry:        0.480 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182201: funcgraph_entry:        1.013 us   |        zio_remove_child();
           <...>-31848 [001] 162723.182203: funcgraph_entry:        0.499 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182204: funcgraph_entry:        0.500 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182205: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.182205: funcgraph_entry:        0.534 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182206: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.182207: funcgraph_entry:        0.455 us   |            spa_writeable();
           <...>-31848 [001] 162723.182208: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.182208: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.182209: funcgraph_entry:        0.744 us   |                zio_add_child();
           <...>-31848 [001] 162723.182211: funcgraph_exit:         2.229 us   |              }
           <...>-31848 [001] 162723.182211: funcgraph_exit:         3.159 us   |            }
           <...>-31848 [001] 162723.182212: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.182212: funcgraph_entry:        0.483 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.182213: funcgraph_entry:        0.489 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.182214: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.182215: funcgraph_entry:        0.793 us   |                spa_writeable();
           <...>-31848 [001] 162723.182216: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.182216: funcgraph_entry:        0.506 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182217: funcgraph_entry:        0.520 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182218: funcgraph_entry:        0.493 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182219: funcgraph_entry:        0.513 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182220: funcgraph_entry:        0.510 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182222: funcgraph_entry:        0.740 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.182223: funcgraph_exit:         7.157 us   |                }
           <...>-31848 [001] 162723.182224: funcgraph_exit:         9.592 us   |              }
           <...>-31848 [001] 162723.182224: funcgraph_exit:       + 12.487 us  |            }
           <...>-31848 [001] 162723.182225: funcgraph_exit:       + 18.298 us  |          }
           <...>-31848 [001] 162723.182225: funcgraph_exit:       + 20.303 us  |        }
           <...>-31848 [001] 162723.182226: funcgraph_entry:        0.486 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182226: funcgraph_entry:        0.490 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182227: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182228: funcgraph_entry:        0.514 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182229: funcgraph_exit:         1.455 us   |        }
           <...>-31848 [001] 162723.182229: funcgraph_exit:       + 39.947 us  |      }
           <...>-31848 [001] 162723.182230: funcgraph_entry:        0.530 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.182231: funcgraph_entry:        0.979 us   |      zio_remove_child();
           <...>-31848 [001] 162723.182233: funcgraph_entry:        0.577 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182234: funcgraph_entry:        0.589 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182235: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182235: funcgraph_entry:        0.533 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182236: funcgraph_exit:         1.599 us   |      }
           <...>-31848 [001] 162723.182237: funcgraph_entry:        0.480 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182238: funcgraph_entry:        0.453 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182239: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.182239: funcgraph_entry:        0.865 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.182241: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.182241: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.182242: funcgraph_entry:        0.589 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.182243: funcgraph_exit:         2.203 us   |          }
           <...>-31848 [001] 162723.182244: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.182245: funcgraph_entry:        0.573 us   |            spa_load_state();
           <...>-31848 [001] 162723.182246: funcgraph_entry:        0.549 us   |            spa_load_state();
           <...>-31848 [001] 162723.182247: funcgraph_entry:        0.493 us   |            spa_load_state();
           <...>-31848 [001] 162723.182248: funcgraph_entry:        0.476 us   |            vdev_accessible();
           <...>-31848 [001] 162723.182249: funcgraph_entry:        0.520 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.182250: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182251: funcgraph_entry:        0.636 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182252: funcgraph_entry:        0.699 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182253: funcgraph_exit:         3.202 us   |            }
           <...>-31848 [001] 162723.182254: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182254: funcgraph_entry:        0.646 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182256: funcgraph_entry:        0.749 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182257: funcgraph_exit:         3.338 us   |            }
           <...>-31848 [001] 162723.182258: funcgraph_entry:        0.536 us   |            spa_load_state();
           <...>-31848 [001] 162723.182259: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182259: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182260: funcgraph_entry:        0.483 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182261: funcgraph_exit:         1.452 us   |              }
           <...>-31848 [001] 162723.182261: funcgraph_exit:         2.463 us   |            }
           <...>-31848 [001] 162723.182262: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.182263: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182264: funcgraph_entry:        0.702 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182266: funcgraph_entry:        0.610 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182267: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182268: funcgraph_exit:         6.584 us   |            }
           <...>-31848 [001] 162723.182276: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.182277: funcgraph_entry:        0.720 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182279: funcgraph_entry:        0.656 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182280: funcgraph_entry:        0.749 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182282: funcgraph_entry:        0.766 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182283: funcgraph_entry:        0.700 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182284: funcgraph_entry:        0.609 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182286: funcgraph_entry:        0.653 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182287: funcgraph_entry:        0.716 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182289: funcgraph_entry:        0.453 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.182290: funcgraph_exit:       + 13.917 us  |            }
           <...>-31848 [001] 162723.182290: funcgraph_entry:        0.540 us   |            spa_load_state();
           <...>-31848 [001] 162723.182291: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182292: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182292: funcgraph_entry:        0.456 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182293: funcgraph_exit:         1.426 us   |              }
           <...>-31848 [001] 162723.182294: funcgraph_exit:         2.362 us   |            }
           <...>-31848 [001] 162723.182294: funcgraph_entry:        0.544 us   |            spa_name();
           <...>-31848 [001] 162723.182295: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182296: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182296: funcgraph_entry:        0.700 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182298: funcgraph_entry:        0.720 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182300: funcgraph_entry:        0.637 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182301: funcgraph_exit:         5.590 us   |              }
           <...>-31848 [001] 162723.182302: funcgraph_exit:         6.660 us   |            }
           <...>-31848 [001] 162723.182302: funcgraph_entry:        0.583 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.182304: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182304: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182305: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182306: funcgraph_exit:         2.105 us   |              }
           <...>-31848 [001] 162723.182307: funcgraph_exit:         3.066 us   |            }
           <...>-31848 [001] 162723.182307: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182308: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182308: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182310: funcgraph_entry:        0.727 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182311: funcgraph_exit:         3.692 us   |              }
           <...>-31848 [001] 162723.182312: funcgraph_exit:         4.751 us   |            }
           <...>-31848 [001] 162723.182312: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182313: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182314: funcgraph_entry:        0.606 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182315: funcgraph_exit:         2.116 us   |              }
           <...>-31848 [001] 162723.182315: funcgraph_exit:         3.059 us   |            }
           <...>-31848 [001] 162723.182316: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182316: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182317: funcgraph_entry:        0.626 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182318: funcgraph_exit:         2.056 us   |              }
           <...>-31848 [001] 162723.182319: funcgraph_exit:         3.059 us   |            }
           <...>-31848 [001] 162723.182319: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182320: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182320: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182322: funcgraph_exit:         2.106 us   |              }
           <...>-31848 [001] 162723.182322: funcgraph_exit:         3.038 us   |            }
           <...>-31848 [001] 162723.182323: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182324: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182325: funcgraph_entry:        0.630 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182326: funcgraph_exit:         2.788 us   |              }
           <...>-31848 [001] 162723.182327: funcgraph_exit:         3.828 us   |            }
           <...>-31848 [001] 162723.182327: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182328: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182328: funcgraph_entry:        0.780 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182330: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182332: funcgraph_entry:        0.679 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182333: funcgraph_exit:         5.791 us   |              }
           <...>-31848 [001] 162723.182334: funcgraph_exit:         6.863 us   |            }
           <...>-31848 [001] 162723.182335: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182335: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182336: funcgraph_entry:        0.682 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182337: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182339: funcgraph_exit:         3.804 us   |              }
           <...>-31848 [001] 162723.182339: funcgraph_exit:         4.768 us   |            }
           <...>-31848 [001] 162723.182340: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182340: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182341: funcgraph_entry:        0.633 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182343: funcgraph_entry:        0.636 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182344: funcgraph_exit:         4.055 us   |              }
           <...>-31848 [001] 162723.182345: funcgraph_exit:         5.047 us   |            }
           <...>-31848 [001] 162723.182346: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182346: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182347: funcgraph_entry:        0.654 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182348: funcgraph_exit:         2.159 us   |              }
           <...>-31848 [001] 162723.182349: funcgraph_exit:         3.158 us   |            }
           <...>-31848 [001] 162723.182349: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182350: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182350: funcgraph_entry:        0.656 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182352: funcgraph_exit:         2.082 us   |              }
           <...>-31848 [001] 162723.182352: funcgraph_exit:         3.126 us   |            }
           <...>-31848 [001] 162723.182353: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182353: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182354: funcgraph_entry:        0.662 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182356: funcgraph_exit:         2.313 us   |              }
           <...>-31848 [001] 162723.182356: funcgraph_exit:         3.266 us   |            }
           <...>-31848 [001] 162723.182357: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182357: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182358: funcgraph_entry:        0.643 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182359: funcgraph_exit:         2.222 us   |              }
           <...>-31848 [001] 162723.182360: funcgraph_exit:         3.329 us   |            }
           <...>-31848 [001] 162723.182361: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182361: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182362: funcgraph_entry:        0.657 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182363: funcgraph_exit:         2.305 us   |              }
           <...>-31848 [001] 162723.182364: funcgraph_exit:         3.265 us   |            }
           <...>-31848 [001] 162723.182364: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182365: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182365: funcgraph_entry:        0.656 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182367: funcgraph_exit:         2.302 us   |              }
           <...>-31848 [001] 162723.182368: funcgraph_exit:         3.308 us   |            }
           <...>-31848 [001] 162723.182368: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182369: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182369: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182371: funcgraph_exit:         2.193 us   |              }
           <...>-31848 [001] 162723.182371: funcgraph_exit:         3.202 us   |            }
           <...>-31848 [001] 162723.182372: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182372: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182373: funcgraph_entry:        0.636 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182375: funcgraph_entry:        0.723 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182376: funcgraph_exit:         4.095 us   |              }
           <...>-31848 [001] 162723.182377: funcgraph_exit:         5.068 us   |            }
           <...>-31848 [001] 162723.182377: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182378: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182379: funcgraph_entry:        0.666 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182381: funcgraph_entry:        1.062 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182383: funcgraph_entry:        2.622 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182386: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182388: funcgraph_exit:       + 10.472 us  |              }
           <...>-31848 [001] 162723.182389: funcgraph_exit:       + 11.515 us  |            }
           <...>-31848 [001] 162723.182390: funcgraph_exit:       ! 145.263 us |          }
           <...>-31848 [001] 162723.182390: funcgraph_exit:       ! 149.620 us |        }
           <...>-31848 [001] 162723.182391: funcgraph_exit:       ! 151.996 us |      }
           <...>-31848 [001] 162723.182391: funcgraph_entry:        0.513 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182392: funcgraph_entry:        0.526 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182393: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.182394: funcgraph_entry:        0.517 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182395: funcgraph_entry:        0.529 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182396: funcgraph_entry:        0.527 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182397: funcgraph_entry:        0.529 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182398: funcgraph_entry:        0.484 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.182399: funcgraph_entry:        0.593 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.182400: funcgraph_entry:        0.493 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.182401: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.182402: funcgraph_entry:        0.639 us   |          zio_buf_free();
           <...>-31848 [001] 162723.182403: funcgraph_exit:         1.669 us   |        }
           <...>-31848 [001] 162723.182403: funcgraph_entry:        0.585 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182404: funcgraph_entry:        0.490 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182405: funcgraph_entry:        0.956 us   |        zio_remove_child();
           <...>-31848 [001] 162723.182407: funcgraph_entry:        0.547 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182408: funcgraph_entry:        0.543 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182409: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.182410: funcgraph_entry:        0.522 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182411: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.182411: funcgraph_entry:        0.557 us   |            spa_writeable();
           <...>-31848 [001] 162723.182412: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.182413: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.182414: funcgraph_entry:        0.882 us   |                zio_add_child();
           <...>-31848 [001] 162723.182415: funcgraph_exit:         2.492 us   |              }
           <...>-31848 [001] 162723.182416: funcgraph_exit:         3.506 us   |            }
           <...>-31848 [001] 162723.182416: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.182417: funcgraph_entry:        0.584 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.182418: funcgraph_entry:        0.519 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.182419: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.182419: funcgraph_entry:        0.536 us   |                spa_writeable();
           <...>-31848 [001] 162723.182421: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.182421: funcgraph_entry:        0.533 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182422: funcgraph_entry:        0.517 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182423: funcgraph_entry:        0.496 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182424: funcgraph_entry:        0.484 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182425: funcgraph_entry:        0.540 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182426: funcgraph_entry:        0.670 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.182428: funcgraph_exit:         7.147 us   |                }
           <...>-31848 [001] 162723.182428: funcgraph_exit:         9.269 us   |              }
           <...>-31848 [001] 162723.182429: funcgraph_exit:       + 12.514 us  |            }
           <...>-31848 [001] 162723.182429: funcgraph_exit:       + 18.635 us  |          }
           <...>-31848 [001] 162723.182430: funcgraph_exit:       + 20.640 us  |        }
           <...>-31848 [001] 162723.182430: funcgraph_entry:        0.486 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182431: funcgraph_entry:        0.787 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182432: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182433: funcgraph_entry:        0.524 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182434: funcgraph_exit:         1.493 us   |        }
           <...>-31848 [001] 162723.182434: funcgraph_exit:       + 41.046 us  |      }
           <...>-31848 [001] 162723.182435: funcgraph_entry:        0.610 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.182436: funcgraph_entry:        0.975 us   |      zio_remove_child();
           <...>-31848 [001] 162723.182438: funcgraph_entry:        0.520 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182439: funcgraph_entry:        0.563 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182440: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182440: funcgraph_entry:        0.549 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182441: funcgraph_exit:         1.563 us   |      }
           <...>-31848 [001] 162723.182442: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182443: funcgraph_entry:        0.497 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182444: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.182444: funcgraph_entry:        0.862 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.182446: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.182446: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.182447: funcgraph_entry:        0.550 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.182448: funcgraph_exit:         2.022 us   |          }
           <...>-31848 [001] 162723.182449: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.182450: funcgraph_entry:        0.500 us   |            spa_load_state();
           <...>-31848 [001] 162723.182451: funcgraph_entry:        0.470 us   |            spa_load_state();
           <...>-31848 [001] 162723.182452: funcgraph_entry:        0.486 us   |            spa_load_state();
           <...>-31848 [001] 162723.182452: funcgraph_entry:        0.482 us   |            vdev_accessible();
           <...>-31848 [001] 162723.182453: funcgraph_entry:        0.563 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.182454: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182456: funcgraph_entry:        0.850 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182457: funcgraph_entry:        0.744 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182458: funcgraph_exit:         4.045 us   |            }
           <...>-31848 [001] 162723.182459: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182460: funcgraph_entry:        0.807 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182461: funcgraph_entry:        0.800 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182463: funcgraph_exit:         3.579 us   |            }
           <...>-31848 [001] 162723.182463: funcgraph_entry:        0.597 us   |            spa_load_state();
           <...>-31848 [001] 162723.182465: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182465: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182466: funcgraph_entry:        0.490 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182467: funcgraph_exit:         1.514 us   |              }
           <...>-31848 [001] 162723.182467: funcgraph_exit:         2.558 us   |            }
           <...>-31848 [001] 162723.182468: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.182468: funcgraph_entry:        0.803 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182470: funcgraph_entry:        0.780 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182471: funcgraph_entry:        0.746 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182473: funcgraph_entry:        0.782 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182474: funcgraph_exit:         6.717 us   |            }
           <...>-31848 [001] 162723.182475: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.182476: funcgraph_entry:        0.786 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182477: funcgraph_entry:        0.813 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182479: funcgraph_entry:        0.829 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182480: funcgraph_entry:        0.787 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182482: funcgraph_entry:        0.724 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182483: funcgraph_entry:        0.782 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182485: funcgraph_entry:        0.782 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182487: funcgraph_entry:        0.746 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182488: funcgraph_entry:        0.543 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.182489: funcgraph_exit:       + 14.576 us  |            }
           <...>-31848 [001] 162723.182490: funcgraph_entry:        0.536 us   |            spa_load_state();
           <...>-31848 [001] 162723.182491: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182492: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182492: funcgraph_entry:        0.470 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182493: funcgraph_exit:         1.555 us   |              }
           <...>-31848 [001] 162723.182493: funcgraph_exit:         2.486 us   |            }
           <...>-31848 [001] 162723.182494: funcgraph_entry:        0.537 us   |            spa_name();
           <...>-31848 [001] 162723.182495: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182496: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182496: funcgraph_entry:        0.896 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182498: funcgraph_entry:        0.766 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182500: funcgraph_entry:        0.669 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182501: funcgraph_exit:         5.484 us   |              }
           <...>-31848 [001] 162723.182502: funcgraph_exit:         6.501 us   |            }
           <...>-31848 [001] 162723.182502: funcgraph_entry:        0.497 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.182503: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182503: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182504: funcgraph_entry:        0.759 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182506: funcgraph_exit:         2.212 us   |              }
           <...>-31848 [001] 162723.182506: funcgraph_exit:         3.178 us   |            }
           <...>-31848 [001] 162723.182507: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182507: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182508: funcgraph_entry:        0.719 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182509: funcgraph_entry:        0.796 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182511: funcgraph_exit:         3.818 us   |              }
           <...>-31848 [001] 162723.182512: funcgraph_exit:         4.838 us   |            }
           <...>-31848 [001] 162723.182512: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182513: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182513: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182515: funcgraph_exit:         2.319 us   |              }
           <...>-31848 [001] 162723.182515: funcgraph_exit:         3.398 us   |            }
           <...>-31848 [001] 162723.182516: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182517: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182517: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182519: funcgraph_exit:         2.132 us   |              }
           <...>-31848 [001] 162723.182519: funcgraph_exit:         3.254 us   |            }
           <...>-31848 [001] 162723.182520: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182520: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182521: funcgraph_entry:        0.757 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182522: funcgraph_exit:         2.231 us   |              }
           <...>-31848 [001] 162723.182523: funcgraph_exit:         3.221 us   |            }
           <...>-31848 [001] 162723.182523: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182524: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182524: funcgraph_entry:        0.783 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182526: funcgraph_exit:         2.272 us   |              }
           <...>-31848 [001] 162723.182527: funcgraph_exit:         3.301 us   |            }
           <...>-31848 [001] 162723.182527: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182528: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182528: funcgraph_entry:        0.732 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182530: funcgraph_entry:        0.766 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182532: funcgraph_entry:        0.700 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182533: funcgraph_exit:         5.687 us   |              }
           <...>-31848 [001] 162723.182534: funcgraph_exit:         6.704 us   |            }
           <...>-31848 [001] 162723.182534: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182535: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182535: funcgraph_entry:        0.717 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182537: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182539: funcgraph_exit:         4.065 us   |              }
           <...>-31848 [001] 162723.182539: funcgraph_exit:         5.027 us   |            }
           <...>-31848 [001] 162723.182540: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182541: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182541: funcgraph_entry:        0.716 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182543: funcgraph_entry:        0.730 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182545: funcgraph_exit:         4.401 us   |              }
           <...>-31848 [001] 162723.182546: funcgraph_exit:         5.820 us   |            }
           <...>-31848 [001] 162723.182546: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182547: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182547: funcgraph_entry:        0.636 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182549: funcgraph_exit:         2.215 us   |              }
           <...>-31848 [001] 162723.182550: funcgraph_exit:         3.261 us   |            }
           <...>-31848 [001] 162723.182550: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182551: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182551: funcgraph_entry:        0.673 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182553: funcgraph_exit:         2.099 us   |              }
           <...>-31848 [001] 162723.182553: funcgraph_exit:         3.098 us   |            }
           <...>-31848 [001] 162723.182554: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182554: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182555: funcgraph_entry:        0.669 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182556: funcgraph_exit:         2.206 us   |              }
           <...>-31848 [001] 162723.182557: funcgraph_exit:         3.199 us   |            }
           <...>-31848 [001] 162723.182557: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182558: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182558: funcgraph_entry:        0.687 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182560: funcgraph_exit:         2.206 us   |              }
           <...>-31848 [001] 162723.182560: funcgraph_exit:         3.125 us   |            }
           <...>-31848 [001] 162723.182561: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182561: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182562: funcgraph_entry:        0.624 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182564: funcgraph_exit:         2.255 us   |              }
           <...>-31848 [001] 162723.182564: funcgraph_exit:         3.184 us   |            }
           <...>-31848 [001] 162723.182564: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182565: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182565: funcgraph_entry:        0.606 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182567: funcgraph_exit:         2.169 us   |              }
           <...>-31848 [001] 162723.182568: funcgraph_exit:         3.091 us   |            }
           <...>-31848 [001] 162723.182568: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182568: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182569: funcgraph_entry:        0.709 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182571: funcgraph_exit:         2.472 us   |              }
           <...>-31848 [001] 162723.182571: funcgraph_exit:         3.399 us   |            }
           <...>-31848 [001] 162723.182572: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182572: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182573: funcgraph_entry:        0.652 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182575: funcgraph_entry:        0.604 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182576: funcgraph_exit:         4.045 us   |              }
           <...>-31848 [001] 162723.182577: funcgraph_exit:         4.955 us   |            }
           <...>-31848 [001] 162723.182577: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182578: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182578: funcgraph_entry:        0.627 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182580: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182582: funcgraph_entry:        0.626 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182584: funcgraph_entry:        0.607 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182586: funcgraph_exit:         7.773 us   |              }
           <...>-31848 [001] 162723.182586: funcgraph_exit:         8.692 us   |            }
           <...>-31848 [001] 162723.182587: funcgraph_exit:       ! 137.316 us |          }
           <...>-31848 [001] 162723.182587: funcgraph_exit:       ! 141.401 us |        }
           <...>-31848 [001] 162723.182588: funcgraph_exit:       ! 143.676 us |      }
           <...>-31848 [001] 162723.182588: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182589: funcgraph_entry:        0.490 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182590: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.182590: funcgraph_entry:        0.517 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182591: funcgraph_entry:        0.529 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182592: funcgraph_entry:        0.514 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182594: funcgraph_entry:        0.932 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182595: funcgraph_entry:        0.503 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.182596: funcgraph_entry:        0.565 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.182597: funcgraph_entry:        0.496 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.182598: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.182598: funcgraph_entry:        0.677 us   |          zio_buf_free();
           <...>-31848 [001] 162723.182600: funcgraph_exit:         1.693 us   |        }
           <...>-31848 [001] 162723.182600: funcgraph_entry:        0.586 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182601: funcgraph_entry:        0.540 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182602: funcgraph_entry:        0.983 us   |        zio_remove_child();
           <...>-31848 [001] 162723.182604: funcgraph_entry:        0.479 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182605: funcgraph_entry:        0.490 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182606: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.182606: funcgraph_entry:        0.517 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182608: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.182608: funcgraph_entry:        0.456 us   |            spa_writeable();
           <...>-31848 [001] 162723.182609: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.182610: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.182610: funcgraph_entry:        0.733 us   |                zio_add_child();
           <...>-31848 [001] 162723.182612: funcgraph_exit:         2.073 us   |              }
           <...>-31848 [001] 162723.182612: funcgraph_exit:         3.059 us   |            }
           <...>-31848 [001] 162723.182613: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.182613: funcgraph_entry:        0.500 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.182614: funcgraph_entry:        0.576 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.182615: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.182616: funcgraph_entry:        0.483 us   |                spa_writeable();
           <...>-31848 [001] 162723.182617: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.182618: funcgraph_entry:        0.490 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182618: funcgraph_entry:        0.546 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182619: funcgraph_entry:        0.477 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182620: funcgraph_entry:        0.542 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182621: funcgraph_entry:        0.567 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182623: funcgraph_entry:        0.693 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.182624: funcgraph_exit:         7.297 us   |                }
           <...>-31848 [001] 162723.182625: funcgraph_exit:         9.429 us   |              }
           <...>-31848 [001] 162723.182625: funcgraph_exit:       + 12.504 us  |            }
           <...>-31848 [001] 162723.182626: funcgraph_exit:       + 18.231 us  |          }
           <...>-31848 [001] 162723.182626: funcgraph_exit:       + 20.427 us  |        }
           <...>-31848 [001] 162723.182627: funcgraph_entry:        0.490 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182628: funcgraph_entry:        0.473 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182629: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182629: funcgraph_entry:        0.530 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182630: funcgraph_exit:         1.503 us   |        }
           <...>-31848 [001] 162723.182631: funcgraph_exit:       + 40.950 us  |      }
           <...>-31848 [001] 162723.182632: funcgraph_entry:        0.577 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.182633: funcgraph_entry:        0.862 us   |      zio_remove_child();
           <...>-31848 [001] 162723.182634: funcgraph_entry:        0.536 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182635: funcgraph_entry:        0.470 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182636: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182637: funcgraph_entry:        0.609 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182638: funcgraph_exit:         1.563 us   |      }
           <...>-31848 [001] 162723.182638: funcgraph_entry:        0.484 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182639: funcgraph_entry:        0.523 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182641: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.182641: funcgraph_entry:        0.853 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.182642: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.182643: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.182644: funcgraph_entry:        0.517 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.182645: funcgraph_exit:         2.029 us   |          }
           <...>-31848 [001] 162723.182646: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.182646: funcgraph_entry:        0.493 us   |            spa_load_state();
           <...>-31848 [001] 162723.182647: funcgraph_entry:        0.570 us   |            spa_load_state();
           <...>-31848 [001] 162723.182648: funcgraph_entry:        0.510 us   |            spa_load_state();
           <...>-31848 [001] 162723.182649: funcgraph_entry:        0.487 us   |            vdev_accessible();
           <...>-31848 [001] 162723.182650: funcgraph_entry:        0.560 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.182651: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182652: funcgraph_entry:        0.617 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182653: funcgraph_entry:        0.706 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182655: funcgraph_exit:         3.129 us   |            }
           <...>-31848 [001] 162723.182655: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182656: funcgraph_entry:        0.716 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182657: funcgraph_entry:        0.729 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182658: funcgraph_exit:         3.285 us   |            }
           <...>-31848 [001] 162723.182659: funcgraph_entry:        0.456 us   |            spa_load_state();
           <...>-31848 [001] 162723.182660: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182660: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182661: funcgraph_entry:        0.460 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182662: funcgraph_exit:         1.379 us   |              }
           <...>-31848 [001] 162723.182662: funcgraph_exit:         2.333 us   |            }
           <...>-31848 [001] 162723.182663: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.182663: funcgraph_entry:        0.619 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182665: funcgraph_entry:        0.617 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182666: funcgraph_entry:        0.587 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182668: funcgraph_entry:        0.609 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182669: funcgraph_exit:         6.104 us   |            }
           <...>-31848 [001] 162723.182669: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.182670: funcgraph_entry:        0.640 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182672: funcgraph_entry:        0.706 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182673: funcgraph_entry:        3.225 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182677: funcgraph_entry:        0.835 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182679: funcgraph_entry:        0.763 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182680: funcgraph_entry:        0.617 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182682: funcgraph_entry:        0.782 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182683: funcgraph_entry:        0.717 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182685: funcgraph_entry:        0.510 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.182686: funcgraph_exit:       + 16.572 us  |            }
           <...>-31848 [001] 162723.182686: funcgraph_entry:        0.523 us   |            spa_load_state();
           <...>-31848 [001] 162723.182687: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182688: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182688: funcgraph_entry:        0.620 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182689: funcgraph_exit:         1.642 us   |              }
           <...>-31848 [001] 162723.182690: funcgraph_exit:         2.672 us   |            }
           <...>-31848 [001] 162723.182690: funcgraph_entry:        0.517 us   |            spa_name();
           <...>-31848 [001] 162723.182691: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182692: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182693: funcgraph_entry:        0.797 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182694: funcgraph_entry:        0.799 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182696: funcgraph_entry:        2.389 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182699: funcgraph_exit:         7.262 us   |              }
           <...>-31848 [001] 162723.182700: funcgraph_exit:         8.246 us   |            }
           <...>-31848 [001] 162723.182700: funcgraph_entry:        0.583 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.182701: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182702: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182703: funcgraph_entry:        0.786 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182704: funcgraph_exit:         2.429 us   |              }
           <...>-31848 [001] 162723.182705: funcgraph_exit:         3.495 us   |            }
           <...>-31848 [001] 162723.182705: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182706: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182707: funcgraph_entry:        0.787 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182709: funcgraph_entry:        0.746 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182710: funcgraph_exit:         4.018 us   |              }
           <...>-31848 [001] 162723.182711: funcgraph_exit:         5.270 us   |            }
           <...>-31848 [001] 162723.182711: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182712: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182713: funcgraph_entry:        0.705 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182714: funcgraph_exit:         2.416 us   |              }
           <...>-31848 [001] 162723.182715: funcgraph_exit:         3.545 us   |            }
           <...>-31848 [001] 162723.182715: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182716: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182717: funcgraph_entry:        0.665 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182718: funcgraph_exit:         2.222 us   |              }
           <...>-31848 [001] 162723.182719: funcgraph_exit:         3.353 us   |            }
           <...>-31848 [001] 162723.182719: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182720: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182720: funcgraph_entry:        0.839 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182722: funcgraph_exit:         2.423 us   |              }
           <...>-31848 [001] 162723.182723: funcgraph_exit:         3.519 us   |            }
           <...>-31848 [001] 162723.182723: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182724: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182724: funcgraph_entry:        0.692 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182726: funcgraph_exit:         2.322 us   |              }
           <...>-31848 [001] 162723.182727: funcgraph_exit:         3.426 us   |            }
           <...>-31848 [001] 162723.182727: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182728: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182729: funcgraph_entry:        0.872 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182730: funcgraph_entry:        0.942 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182733: funcgraph_entry:        0.722 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182734: funcgraph_exit:         6.527 us   |              }
           <...>-31848 [001] 162723.182735: funcgraph_exit:         7.734 us   |            }
           <...>-31848 [001] 162723.182736: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182736: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182737: funcgraph_entry:        0.796 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182739: funcgraph_entry:        0.789 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182741: funcgraph_exit:         4.525 us   |              }
           <...>-31848 [001] 162723.182741: funcgraph_exit:         5.601 us   |            }
           <...>-31848 [001] 162723.182742: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182743: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182743: funcgraph_entry:        0.739 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182745: funcgraph_entry:        0.673 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182747: funcgraph_exit:         4.618 us   |              }
           <...>-31848 [001] 162723.182748: funcgraph_exit:         5.864 us   |            }
           <...>-31848 [001] 162723.182748: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182749: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182750: funcgraph_entry:        1.273 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182753: funcgraph_exit:         3.502 us   |              }
           <...>-31848 [001] 162723.182754: funcgraph_exit:         5.215 us   |            }
           <...>-31848 [001] 162723.182754: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182755: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182756: funcgraph_entry:        1.070 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182759: funcgraph_exit:         3.862 us   |              }
           <...>-31848 [001] 162723.182760: funcgraph_exit:         5.711 us   |            }
           <...>-31848 [001] 162723.182761: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182762: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182763: funcgraph_entry:        1.305 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182767: funcgraph_exit:         4.835 us   |              }
           <...>-31848 [001] 162723.182768: funcgraph_exit:         6.781 us   |            }
           <...>-31848 [001] 162723.182769: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182770: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182771: funcgraph_entry:        1.776 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182775: funcgraph_exit:         4.953 us   |              }
           <...>-31848 [001] 162723.182776: funcgraph_exit:         7.040 us   |            }
           <...>-31848 [001] 162723.182777: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182779: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182780: funcgraph_entry:        1.306 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182783: funcgraph_exit:         4.654 us   |              }
           <...>-31848 [001] 162723.182784: funcgraph_exit:         6.907 us   |            }
           <...>-31848 [001] 162723.182786: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182787: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182788: funcgraph_entry:        1.326 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182792: funcgraph_exit:         4.765 us   |              }
           <...>-31848 [001] 162723.182793: funcgraph_exit:         7.376 us   |            }
           <...>-31848 [001] 162723.182794: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182795: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182796: funcgraph_entry:        1.556 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182801: funcgraph_exit:         5.628 us   |              }
           <...>-31848 [001] 162723.182801: funcgraph_exit:         7.559 us   |            }
           <...>-31848 [001] 162723.182803: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182804: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182805: funcgraph_entry:        1.373 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182808: funcgraph_entry:        1.236 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182811: funcgraph_exit:         7.616 us   |              }
           <...>-31848 [001] 162723.182812: funcgraph_exit:         9.535 us   |            }
           <...>-31848 [001] 162723.182812: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182813: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182814: funcgraph_entry:        0.866 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182816: funcgraph_entry:        0.753 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182818: funcgraph_entry:        0.837 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182820: funcgraph_entry:        0.787 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182822: funcgraph_exit:         9.106 us   |              }
           <...>-31848 [001] 162723.182823: funcgraph_exit:       + 10.185 us  |            }
           <...>-31848 [001] 162723.182823: funcgraph_exit:       ! 177.320 us |          }
           <...>-31848 [001] 162723.182824: funcgraph_exit:       ! 181.524 us |        }
           <...>-31848 [001] 162723.182825: funcgraph_exit:       ! 183.967 us |      }
           <...>-31848 [001] 162723.182825: funcgraph_entry:        0.596 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182827: funcgraph_entry:        0.613 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182828: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.182829: funcgraph_entry:        0.660 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182830: funcgraph_entry:        0.797 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182831: funcgraph_entry:        0.612 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182832: funcgraph_entry:        0.680 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182834: funcgraph_entry:        0.614 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.182835: funcgraph_entry:        0.693 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.182836: funcgraph_entry:        0.590 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.182837: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.182838: funcgraph_entry:        0.857 us   |          zio_buf_free();
           <...>-31848 [001] 162723.182839: funcgraph_exit:         1.945 us   |        }
           <...>-31848 [001] 162723.182840: funcgraph_entry:        0.683 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182841: funcgraph_entry:        0.582 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.182842: funcgraph_entry:        1.127 us   |        zio_remove_child();
           <...>-31848 [001] 162723.182844: funcgraph_entry:        0.557 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182845: funcgraph_entry:        0.560 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182846: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.182847: funcgraph_entry:        0.906 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182849: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.182849: funcgraph_entry:        0.546 us   |            spa_writeable();
           <...>-31848 [001] 162723.182850: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.182851: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.182852: funcgraph_entry:        0.720 us   |                zio_add_child();
           <...>-31848 [001] 162723.182853: funcgraph_exit:         2.576 us   |              }
           <...>-31848 [001] 162723.182854: funcgraph_exit:         3.735 us   |            }
           <...>-31848 [001] 162723.182854: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.182855: funcgraph_entry:        0.473 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.182856: funcgraph_entry:        0.549 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.182857: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.182857: funcgraph_entry:        0.540 us   |                spa_writeable();
           <...>-31848 [001] 162723.182859: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.182860: funcgraph_entry:        0.486 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182861: funcgraph_entry:        0.533 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182862: funcgraph_entry:        0.520 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182863: funcgraph_entry:        0.517 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182863: funcgraph_entry:        0.460 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.182865: funcgraph_entry:        0.656 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.182866: funcgraph_exit:         7.567 us   |                }
           <...>-31848 [001] 162723.182867: funcgraph_exit:         9.671 us   |              }
           <...>-31848 [001] 162723.182867: funcgraph_exit:       + 12.674 us  |            }
           <...>-31848 [001] 162723.182868: funcgraph_exit:       + 19.131 us  |          }
           <...>-31848 [001] 162723.182868: funcgraph_exit:       + 21.870 us  |        }
           <...>-31848 [001] 162723.182869: funcgraph_entry:        0.476 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.182870: funcgraph_entry:        0.487 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.182871: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182871: funcgraph_entry:        0.510 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.182872: funcgraph_exit:         1.423 us   |        }
           <...>-31848 [001] 162723.182873: funcgraph_exit:       + 44.661 us  |      }
           <...>-31848 [001] 162723.182873: funcgraph_entry:        0.527 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.182874: funcgraph_entry:        0.935 us   |      zio_remove_child();
           <...>-31848 [001] 162723.182876: funcgraph_entry:        0.487 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182877: funcgraph_entry:        0.510 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182878: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.182878: funcgraph_entry:        0.616 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.182879: funcgraph_exit:         1.546 us   |      }
           <...>-31848 [001] 162723.182880: funcgraph_entry:        0.497 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.182881: funcgraph_entry:        0.547 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.182882: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.182882: funcgraph_entry:        1.005 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.182884: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.182885: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.182885: funcgraph_entry:        0.563 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.182887: funcgraph_exit:         2.143 us   |          }
           <...>-31848 [001] 162723.182888: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.182888: funcgraph_entry:        0.533 us   |            spa_load_state();
           <...>-31848 [001] 162723.182889: funcgraph_entry:        0.476 us   |            spa_load_state();
           <...>-31848 [001] 162723.182890: funcgraph_entry:        0.480 us   |            spa_load_state();
           <...>-31848 [001] 162723.182891: funcgraph_entry:        0.570 us   |            vdev_accessible();
           <...>-31848 [001] 162723.182892: funcgraph_entry:        0.789 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.182894: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182894: funcgraph_entry:        0.682 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182896: funcgraph_entry:        0.697 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182897: funcgraph_exit:         3.701 us   |            }
           <...>-31848 [001] 162723.182898: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.182898: funcgraph_entry:        0.680 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182900: funcgraph_entry:        0.784 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182901: funcgraph_exit:         3.175 us   |            }
           <...>-31848 [001] 162723.182902: funcgraph_entry:        0.567 us   |            spa_load_state();
           <...>-31848 [001] 162723.182903: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182904: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182904: funcgraph_entry:        0.494 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182905: funcgraph_exit:         1.523 us   |              }
           <...>-31848 [001] 162723.182906: funcgraph_exit:         2.526 us   |            }
           <...>-31848 [001] 162723.182906: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.182907: funcgraph_entry:        0.753 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182909: funcgraph_entry:        0.729 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182910: funcgraph_entry:        0.623 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182911: funcgraph_entry:        0.717 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182913: funcgraph_exit:         6.564 us   |            }
           <...>-31848 [001] 162723.182913: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.182914: funcgraph_entry:        0.773 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182916: funcgraph_entry:        0.723 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182917: funcgraph_entry:        0.716 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182919: funcgraph_entry:        0.783 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182920: funcgraph_entry:        0.633 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182922: funcgraph_entry:        0.796 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182923: funcgraph_entry:        0.852 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182925: funcgraph_entry:        0.736 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.182926: funcgraph_entry:        0.527 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.182928: funcgraph_exit:       + 14.117 us  |            }
           <...>-31848 [001] 162723.182928: funcgraph_entry:        0.520 us   |            spa_load_state();
           <...>-31848 [001] 162723.182929: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.182930: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.182930: funcgraph_entry:        0.503 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.182931: funcgraph_exit:         1.476 us   |              }
           <...>-31848 [001] 162723.182932: funcgraph_exit:         2.472 us   |            }
           <...>-31848 [001] 162723.182932: funcgraph_entry:        0.500 us   |            spa_name();
           <...>-31848 [001] 162723.182933: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182934: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182934: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182936: funcgraph_entry:        0.646 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182937: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182939: funcgraph_exit:         5.381 us   |              }
           <...>-31848 [001] 162723.182939: funcgraph_exit:         6.383 us   |            }
           <...>-31848 [001] 162723.182940: funcgraph_entry:        0.496 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.182941: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182941: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182942: funcgraph_entry:        0.606 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182943: funcgraph_exit:         2.006 us   |              }
           <...>-31848 [001] 162723.182944: funcgraph_exit:         3.032 us   |            }
           <...>-31848 [001] 162723.182944: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182945: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182945: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182947: funcgraph_entry:        0.697 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182948: funcgraph_exit:         3.602 us   |              }
           <...>-31848 [001] 162723.182949: funcgraph_exit:         4.522 us   |            }
           <...>-31848 [001] 162723.182949: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182950: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182951: funcgraph_entry:        0.743 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182952: funcgraph_exit:         2.638 us   |              }
           <...>-31848 [001] 162723.182953: funcgraph_exit:         3.615 us   |            }
           <...>-31848 [001] 162723.182954: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182954: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182955: funcgraph_entry:        0.627 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182956: funcgraph_exit:         2.136 us   |              }
           <...>-31848 [001] 162723.182957: funcgraph_exit:         3.181 us   |            }
           <...>-31848 [001] 162723.182957: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182958: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182958: funcgraph_entry:        0.620 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182960: funcgraph_exit:         2.036 us   |              }
           <...>-31848 [001] 162723.182960: funcgraph_exit:         3.099 us   |            }
           <...>-31848 [001] 162723.182961: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182961: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182962: funcgraph_entry:        0.666 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182963: funcgraph_exit:         2.166 us   |              }
           <...>-31848 [001] 162723.182964: funcgraph_exit:         3.142 us   |            }
           <...>-31848 [001] 162723.182964: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182965: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182965: funcgraph_entry:        0.593 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182967: funcgraph_entry:        0.590 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182969: funcgraph_entry:        0.653 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182970: funcgraph_exit:         5.405 us   |              }
           <...>-31848 [001] 162723.182971: funcgraph_exit:         6.396 us   |            }
           <...>-31848 [001] 162723.182971: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182972: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182972: funcgraph_entry:        0.616 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182974: funcgraph_entry:        0.673 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182975: funcgraph_exit:         3.698 us   |              }
           <...>-31848 [001] 162723.182976: funcgraph_exit:         4.731 us   |            }
           <...>-31848 [001] 162723.182977: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182977: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182978: funcgraph_entry:        0.720 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182980: funcgraph_entry:        0.630 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182981: funcgraph_exit:         4.184 us   |              }
           <...>-31848 [001] 162723.182982: funcgraph_exit:         5.244 us   |            }
           <...>-31848 [001] 162723.182983: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182983: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182984: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182985: funcgraph_exit:         2.206 us   |              }
           <...>-31848 [001] 162723.182986: funcgraph_exit:         3.214 us   |            }
           <...>-31848 [001] 162723.182986: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182987: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182987: funcgraph_entry:        0.714 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182989: funcgraph_exit:         2.222 us   |              }
           <...>-31848 [001] 162723.182989: funcgraph_exit:         3.255 us   |            }
           <...>-31848 [001] 162723.182990: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182990: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182991: funcgraph_entry:        2.655 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182995: funcgraph_exit:         4.308 us   |              }
           <...>-31848 [001] 162723.182995: funcgraph_exit:         5.344 us   |            }
           <...>-31848 [001] 162723.182996: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.182996: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.182997: funcgraph_entry:        0.756 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.182999: funcgraph_exit:         2.326 us   |              }
           <...>-31848 [001] 162723.182999: funcgraph_exit:         3.296 us   |            }
           <...>-31848 [001] 162723.182999: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183000: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183001: funcgraph_entry:        0.736 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183002: funcgraph_exit:         2.389 us   |              }
           <...>-31848 [001] 162723.183003: funcgraph_exit:         3.399 us   |            }
           <...>-31848 [001] 162723.183003: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183004: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183004: funcgraph_entry:        0.816 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183006: funcgraph_exit:         2.362 us   |              }
           <...>-31848 [001] 162723.183007: funcgraph_exit:         3.312 us   |            }
           <...>-31848 [001] 162723.183007: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183008: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183008: funcgraph_entry:        0.684 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183010: funcgraph_exit:         2.653 us   |              }
           <...>-31848 [001] 162723.183011: funcgraph_exit:         3.638 us   |            }
           <...>-31848 [001] 162723.183011: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183012: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183012: funcgraph_entry:        0.710 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183014: funcgraph_entry:        0.733 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183016: funcgraph_exit:         4.164 us   |              }
           <...>-31848 [001] 162723.183016: funcgraph_exit:         5.244 us   |            }
           <...>-31848 [001] 162723.183017: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183017: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183018: funcgraph_entry:        0.707 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183020: funcgraph_entry:        0.746 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183022: funcgraph_entry:        0.913 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183025: funcgraph_entry:        0.970 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183028: funcgraph_exit:       + 10.468 us  |              }
           <...>-31848 [001] 162723.183029: funcgraph_exit:       + 11.767 us  |            }
           <...>-31848 [001] 162723.183030: funcgraph_exit:       ! 142.121 us |          }
           <...>-31848 [001] 162723.183031: funcgraph_exit:       ! 147.005 us |        }
           <...>-31848 [001] 162723.183032: funcgraph_exit:       ! 149.963 us |      }
           <...>-31848 [001] 162723.183033: funcgraph_entry:        0.666 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183034: funcgraph_entry:        1.150 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183036: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.183037: funcgraph_entry:        1.000 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183039: funcgraph_entry:        0.866 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183041: funcgraph_entry:        1.013 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183043: funcgraph_entry:        1.070 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183045: funcgraph_entry:        0.840 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.183046: funcgraph_entry:        0.829 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.183048: funcgraph_entry:        0.519 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.183049: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.183050: funcgraph_entry:        0.720 us   |          zio_buf_free();
           <...>-31848 [001] 162723.183051: funcgraph_exit:         1.749 us   |        }
           <...>-31848 [001] 162723.183051: funcgraph_entry:        0.513 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.183052: funcgraph_entry:        0.486 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.183053: funcgraph_entry:        1.004 us   |        zio_remove_child();
           <...>-31848 [001] 162723.183055: funcgraph_entry:        0.480 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.183056: funcgraph_entry:        0.519 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.183057: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.183058: funcgraph_entry:        0.530 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.183059: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.183059: funcgraph_entry:        0.500 us   |            spa_writeable();
           <...>-31848 [001] 162723.183060: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.183061: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.183062: funcgraph_entry:        0.690 us   |                zio_add_child();
           <...>-31848 [001] 162723.183063: funcgraph_exit:         2.275 us   |              }
           <...>-31848 [001] 162723.183064: funcgraph_exit:         3.231 us   |            }
           <...>-31848 [001] 162723.183064: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.183065: funcgraph_entry:        0.522 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.183066: funcgraph_entry:        0.494 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.183066: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.183067: funcgraph_entry:        0.590 us   |                spa_writeable();
           <...>-31848 [001] 162723.183068: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.183069: funcgraph_entry:        0.492 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183070: funcgraph_entry:        0.570 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183071: funcgraph_entry:        0.560 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183072: funcgraph_entry:        0.513 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183073: funcgraph_entry:        0.517 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183075: funcgraph_entry:        0.723 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.183076: funcgraph_exit:         7.683 us   |                }
           <...>-31848 [001] 162723.183076: funcgraph_exit:         9.698 us   |              }
           <...>-31848 [001] 162723.183077: funcgraph_exit:       + 12.651 us  |            }
           <...>-31848 [001] 162723.183077: funcgraph_exit:       + 18.485 us  |          }
           <...>-31848 [001] 162723.183078: funcgraph_exit:       + 20.557 us  |        }
           <...>-31848 [001] 162723.183078: funcgraph_entry:        0.493 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.183079: funcgraph_entry:        0.493 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.183080: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.183081: funcgraph_entry:        0.546 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.183082: funcgraph_exit:         1.496 us   |        }
           <...>-31848 [001] 162723.183082: funcgraph_exit:       + 45.984 us  |      }
           <...>-31848 [001] 162723.183083: funcgraph_entry:        0.553 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.183084: funcgraph_entry:        0.927 us   |      zio_remove_child();
           <...>-31848 [001] 162723.183085: funcgraph_entry:        1.099 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183087: funcgraph_entry:        0.523 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183088: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.183088: funcgraph_entry:        0.563 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183089: funcgraph_exit:         1.586 us   |      }
           <...>-31848 [001] 162723.183090: funcgraph_entry:        0.493 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183091: funcgraph_entry:        0.517 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183092: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.183092: funcgraph_entry:        1.046 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.183094: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.183095: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.183095: funcgraph_entry:        0.536 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.183097: funcgraph_exit:         2.059 us   |          }
           <...>-31848 [001] 162723.183098: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.183098: funcgraph_entry:        0.534 us   |            spa_load_state();
           <...>-31848 [001] 162723.183099: funcgraph_entry:        0.602 us   |            spa_load_state();
           <...>-31848 [001] 162723.183100: funcgraph_entry:        0.530 us   |            spa_load_state();
           <...>-31848 [001] 162723.183101: funcgraph_entry:        0.499 us   |            vdev_accessible();
           <...>-31848 [001] 162723.183102: funcgraph_entry:        0.563 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.183104: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.183105: funcgraph_entry:        0.816 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183106: funcgraph_entry:        0.710 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183107: funcgraph_exit:         3.582 us   |            }
           <...>-31848 [001] 162723.183108: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.183108: funcgraph_entry:        0.696 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183109: funcgraph_entry:        0.719 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183111: funcgraph_exit:         3.225 us   |            }
           <...>-31848 [001] 162723.183111: funcgraph_entry:        0.553 us   |            spa_load_state();
           <...>-31848 [001] 162723.183113: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.183113: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.183114: funcgraph_entry:        0.530 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.183115: funcgraph_exit:         1.609 us   |              }
           <...>-31848 [001] 162723.183116: funcgraph_exit:         2.655 us   |            }
           <...>-31848 [001] 162723.183116: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.183117: funcgraph_entry:        0.633 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183118: funcgraph_entry:        0.763 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183120: funcgraph_entry:        0.729 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183122: funcgraph_entry:        0.736 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183123: funcgraph_exit:         7.077 us   |            }
           <...>-31848 [001] 162723.183124: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.183124: funcgraph_entry:        0.710 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183126: funcgraph_entry:        0.749 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183128: funcgraph_entry:        0.753 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183129: funcgraph_entry:        0.900 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183131: funcgraph_entry:        0.707 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183132: funcgraph_entry:        0.800 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183134: funcgraph_entry:        0.692 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183135: funcgraph_entry:        0.764 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183137: funcgraph_entry:        0.544 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.183138: funcgraph_exit:       + 14.643 us  |            }
           <...>-31848 [001] 162723.183139: funcgraph_entry:        0.514 us   |            spa_load_state();
           <...>-31848 [001] 162723.183140: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.183140: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.183141: funcgraph_entry:        0.520 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.183142: funcgraph_exit:         1.573 us   |              }
           <...>-31848 [001] 162723.183142: funcgraph_exit:         2.555 us   |            }
           <...>-31848 [001] 162723.183143: funcgraph_entry:        0.486 us   |            spa_name();
           <...>-31848 [001] 162723.183144: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183144: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183145: funcgraph_entry:        0.696 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183146: funcgraph_entry:        0.906 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183148: funcgraph_entry:        0.796 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183150: funcgraph_exit:         5.737 us   |              }
           <...>-31848 [001] 162723.183150: funcgraph_exit:         6.734 us   |            }
           <...>-31848 [001] 162723.183151: funcgraph_entry:        0.486 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.183152: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183152: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183153: funcgraph_entry:        0.763 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183154: funcgraph_exit:         2.406 us   |              }
           <...>-31848 [001] 162723.183155: funcgraph_exit:         3.412 us   |            }
           <...>-31848 [001] 162723.183156: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183156: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183157: funcgraph_entry:        0.679 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183159: funcgraph_entry:        0.752 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183160: funcgraph_exit:         4.091 us   |              }
           <...>-31848 [001] 162723.183161: funcgraph_exit:         5.188 us   |            }
           <...>-31848 [001] 162723.183161: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183162: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183162: funcgraph_entry:        0.763 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183164: funcgraph_exit:         2.319 us   |              }
           <...>-31848 [001] 162723.183165: funcgraph_exit:         3.346 us   |            }
           <...>-31848 [001] 162723.183165: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183166: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183166: funcgraph_entry:        0.644 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183168: funcgraph_exit:         2.179 us   |              }
           <...>-31848 [001] 162723.183168: funcgraph_exit:         3.198 us   |            }
           <...>-31848 [001] 162723.183169: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183169: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183170: funcgraph_entry:        0.613 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183171: funcgraph_exit:         2.069 us   |              }
           <...>-31848 [001] 162723.183172: funcgraph_exit:         3.008 us   |            }
           <...>-31848 [001] 162723.183172: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183173: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183173: funcgraph_entry:        0.619 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183175: funcgraph_exit:         2.126 us   |              }
           <...>-31848 [001] 162723.183175: funcgraph_exit:         3.059 us   |            }
           <...>-31848 [001] 162723.183176: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183176: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183177: funcgraph_entry:        0.583 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183179: funcgraph_entry:        0.597 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183180: funcgraph_entry:        0.617 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183182: funcgraph_exit:         5.294 us   |              }
           <...>-31848 [001] 162723.183182: funcgraph_exit:         6.703 us   |            }
           <...>-31848 [001] 162723.183183: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183183: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183184: funcgraph_entry:        0.700 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183186: funcgraph_entry:        0.589 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183187: funcgraph_exit:         3.768 us   |              }
           <...>-31848 [001] 162723.183188: funcgraph_exit:         4.744 us   |            }
           <...>-31848 [001] 162723.183188: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183189: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183189: funcgraph_entry:        0.602 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183191: funcgraph_entry:        0.587 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183192: funcgraph_exit:         3.928 us   |              }
           <...>-31848 [001] 162723.183193: funcgraph_exit:         4.868 us   |            }
           <...>-31848 [001] 162723.183194: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183194: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183195: funcgraph_entry:        0.623 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183196: funcgraph_exit:         2.165 us   |              }
           <...>-31848 [001] 162723.183197: funcgraph_exit:         3.085 us   |            }
           <...>-31848 [001] 162723.183197: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183198: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183198: funcgraph_entry:        0.657 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183200: funcgraph_exit:         2.263 us   |              }
           <...>-31848 [001] 162723.183200: funcgraph_exit:         3.258 us   |            }
           <...>-31848 [001] 162723.183201: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183201: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183202: funcgraph_entry:        0.619 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183203: funcgraph_exit:         2.186 us   |              }
           <...>-31848 [001] 162723.183204: funcgraph_exit:         3.149 us   |            }
           <...>-31848 [001] 162723.183204: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183205: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183205: funcgraph_entry:        0.649 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183207: funcgraph_exit:         2.306 us   |              }
           <...>-31848 [001] 162723.183208: funcgraph_exit:         3.319 us   |            }
           <...>-31848 [001] 162723.183208: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183209: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183209: funcgraph_entry:        0.690 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183211: funcgraph_exit:         2.379 us   |              }
           <...>-31848 [001] 162723.183211: funcgraph_exit:         3.365 us   |            }
           <...>-31848 [001] 162723.183212: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183213: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183213: funcgraph_entry:        0.637 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183215: funcgraph_exit:         2.229 us   |              }
           <...>-31848 [001] 162723.183215: funcgraph_exit:         3.219 us   |            }
           <...>-31848 [001] 162723.183216: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183216: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183217: funcgraph_entry:        0.820 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183219: funcgraph_exit:         2.542 us   |              }
           <...>-31848 [001] 162723.183219: funcgraph_exit:         3.594 us   |            }
           <...>-31848 [001] 162723.183220: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183221: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183221: funcgraph_entry:        0.684 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183223: funcgraph_entry:        0.694 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183225: funcgraph_exit:         4.245 us   |              }
           <...>-31848 [001] 162723.183225: funcgraph_exit:         5.197 us   |            }
           <...>-31848 [001] 162723.183226: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183226: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183227: funcgraph_entry:        0.640 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183229: funcgraph_entry:        0.747 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183231: funcgraph_entry:        0.663 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183233: funcgraph_entry:        0.650 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183235: funcgraph_exit:         8.545 us   |              }
           <...>-31848 [001] 162723.183235: funcgraph_exit:         9.469 us   |            }
           <...>-31848 [001] 162723.183236: funcgraph_exit:       ! 138.346 us |          }
           <...>-31848 [001] 162723.183237: funcgraph_exit:       ! 142.661 us |        }
           <...>-31848 [001] 162723.183237: funcgraph_exit:       ! 145.152 us |      }
           <...>-31848 [001] 162723.183237: funcgraph_entry:        0.476 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183238: funcgraph_entry:        0.506 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183240: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.183240: funcgraph_entry:        0.500 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183241: funcgraph_entry:        0.490 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183242: funcgraph_entry:        0.496 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183243: funcgraph_entry:        0.493 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183244: funcgraph_entry:        0.470 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.183245: funcgraph_entry:        0.529 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.183246: funcgraph_entry:        0.494 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.183247: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.183247: funcgraph_entry:        0.616 us   |          zio_buf_free();
           <...>-31848 [001] 162723.183248: funcgraph_exit:         1.529 us   |        }
           <...>-31848 [001] 162723.183249: funcgraph_entry:        0.609 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.183250: funcgraph_entry:        0.567 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.183251: funcgraph_entry:        0.883 us   |        zio_remove_child();
           <...>-31848 [001] 162723.183252: funcgraph_entry:        0.480 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.183253: funcgraph_entry:        0.563 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.183254: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.183255: funcgraph_entry:        0.503 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.183256: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.183256: funcgraph_entry:        0.577 us   |            spa_writeable();
           <...>-31848 [001] 162723.183258: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.183258: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.183259: funcgraph_entry:        0.759 us   |                zio_add_child();
           <...>-31848 [001] 162723.183260: funcgraph_exit:         2.046 us   |              }
           <...>-31848 [001] 162723.183260: funcgraph_exit:         3.009 us   |            }
           <...>-31848 [001] 162723.183261: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.183261: funcgraph_entry:        0.550 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.183263: funcgraph_entry:        0.506 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.183264: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.183264: funcgraph_entry:        0.573 us   |                spa_writeable();
           <...>-31848 [001] 162723.183265: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.183266: funcgraph_entry:        0.517 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183267: funcgraph_entry:        0.486 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183268: funcgraph_entry:        7.144 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183275: funcgraph_entry:        0.493 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183276: funcgraph_entry:        0.503 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183278: funcgraph_entry:        0.643 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.183279: funcgraph_exit:       + 13.870 us  |                }
           <...>-31848 [001] 162723.183280: funcgraph_exit:       + 15.996 us  |              }
           <...>-31848 [001] 162723.183280: funcgraph_exit:       + 19.117 us  |            }
           <...>-31848 [001] 162723.183281: funcgraph_exit:       + 24.668 us  |          }
           <...>-31848 [001] 162723.183281: funcgraph_exit:       + 26.601 us  |        }
           <...>-31848 [001] 162723.183282: funcgraph_entry:        0.476 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.183282: funcgraph_entry:        0.480 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.183283: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.183284: funcgraph_entry:        0.546 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.183285: funcgraph_exit:         1.469 us   |        }
           <...>-31848 [001] 162723.183286: funcgraph_exit:       + 46.381 us  |      }
           <...>-31848 [001] 162723.183287: funcgraph_entry:        0.566 us   |      zio_walk_parents();
           <...>-31848 [001] 162723.183288: funcgraph_entry:        0.979 us   |      zio_remove_child();
           <...>-31848 [001] 162723.183289: funcgraph_entry:        0.483 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183290: funcgraph_entry:        0.516 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183291: funcgraph_entry:                   |      zio_vdev_io_assess() {
           <...>-31848 [001] 162723.183292: funcgraph_entry:        0.589 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183293: funcgraph_exit:         1.553 us   |      }
           <...>-31848 [001] 162723.183293: funcgraph_entry:        0.460 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183294: funcgraph_entry:        0.477 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183295: funcgraph_entry:                   |      zio_checksum_verify() {
           <...>-31848 [001] 162723.183296: funcgraph_entry:        0.809 us   |        zio_checksum_error();
           <...>-31848 [001] 162723.183297: funcgraph_entry:                   |        zfs_ereport_start_checksum() {
           <...>-31848 [001] 162723.183298: funcgraph_entry:                   |          zio_vsd_default_cksum_report() {
           <...>-31848 [001] 162723.183298: funcgraph_entry:        0.564 us   |            zio_buf_alloc();
           <...>-31848 [001] 162723.183300: funcgraph_exit:         2.106 us   |          }
           <...>-31848 [001] 162723.183301: funcgraph_entry:                   |          zfs_ereport_start() {
           <...>-31848 [001] 162723.183301: funcgraph_entry:        0.536 us   |            spa_load_state();
           <...>-31848 [001] 162723.183302: funcgraph_entry:        0.469 us   |            spa_load_state();
           <...>-31848 [001] 162723.183303: funcgraph_entry:        0.527 us   |            spa_load_state();
           <...>-31848 [001] 162723.183304: funcgraph_entry:        0.476 us   |            vdev_accessible();
           <...>-31848 [001] 162723.183305: funcgraph_entry:        0.623 us   |            vdev_dtl_contains();
           <...>-31848 [001] 162723.183306: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.183307: funcgraph_entry:        0.736 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183308: funcgraph_entry:        0.679 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183310: funcgraph_exit:         3.296 us   |            }
           <...>-31848 [001] 162723.183310: funcgraph_entry:                   |            fm_nvlist_create() {
           <...>-31848 [001] 162723.183311: funcgraph_entry:        0.593 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183312: funcgraph_entry:        0.712 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183313: funcgraph_exit:         3.098 us   |            }
           <...>-31848 [001] 162723.183314: funcgraph_entry:        0.484 us   |            spa_load_state();
           <...>-31848 [001] 162723.183315: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.183316: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.183316: funcgraph_entry:        0.566 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.183317: funcgraph_exit:         1.719 us   |              }
           <...>-31848 [001] 162723.183318: funcgraph_exit:         2.929 us   |            }
           <...>-31848 [001] 162723.183318: funcgraph_entry:                   |            fm_fmri_zfs_set() {
           <...>-31848 [001] 162723.183319: funcgraph_entry:        0.617 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183321: funcgraph_entry:        0.670 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183322: funcgraph_entry:        0.626 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183324: funcgraph_entry:        0.633 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183325: funcgraph_exit:         6.533 us   |            }
           <...>-31848 [001] 162723.183325: funcgraph_entry:                   |            fm_ereport_set() {
           <...>-31848 [001] 162723.183326: funcgraph_entry:        3.995 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183331: funcgraph_entry:        0.787 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183333: funcgraph_entry:        0.772 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183334: funcgraph_entry:        0.850 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183336: funcgraph_entry:        0.666 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183337: funcgraph_entry:        0.687 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183339: funcgraph_entry:        0.729 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183340: funcgraph_entry:        0.787 us   |              i_fm_alloc();
           <...>-31848 [001] 162723.183342: funcgraph_entry:        0.483 us   |              i_fm_payload_set();
           <...>-31848 [001] 162723.183343: funcgraph_exit:       + 17.529 us  |            }
           <...>-31848 [001] 162723.183344: funcgraph_entry:        0.610 us   |            spa_load_state();
           <...>-31848 [001] 162723.183345: funcgraph_entry:                   |            spa_guid() {
           <...>-31848 [001] 162723.183345: funcgraph_entry:                   |              dsl_pool_sync_context() {
           <...>-31848 [001] 162723.183346: funcgraph_entry:        0.614 us   |                spa_is_initializing();
           <...>-31848 [001] 162723.183347: funcgraph_exit:         1.720 us   |              }
           <...>-31848 [001] 162723.183348: funcgraph_exit:         3.031 us   |            }
           <...>-31848 [001] 162723.183348: funcgraph_entry:        0.550 us   |            spa_name();
           <...>-31848 [001] 162723.183349: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183350: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183351: funcgraph_entry:        0.830 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183352: funcgraph_entry:        0.833 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183354: funcgraph_entry:        0.907 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183356: funcgraph_exit:         6.127 us   |              }
           <...>-31848 [001] 162723.183357: funcgraph_exit:         7.140 us   |            }
           <...>-31848 [001] 162723.183357: funcgraph_entry:        0.562 us   |            spa_get_failmode();
           <...>-31848 [001] 162723.183358: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183359: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183359: funcgraph_entry:        0.689 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183361: funcgraph_exit:         2.296 us   |              }
           <...>-31848 [001] 162723.183362: funcgraph_exit:         3.514 us   |            }
           <...>-31848 [001] 162723.183362: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183363: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183364: funcgraph_entry:        0.843 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183366: funcgraph_entry:        0.823 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183367: funcgraph_exit:         4.234 us   |              }
           <...>-31848 [001] 162723.183368: funcgraph_exit:         5.624 us   |            }
           <...>-31848 [001] 162723.183368: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183369: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183370: funcgraph_entry:        0.826 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183372: funcgraph_exit:         2.572 us   |              }
           <...>-31848 [001] 162723.183372: funcgraph_exit:         3.708 us   |            }
           <...>-31848 [001] 162723.183373: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183373: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183374: funcgraph_entry:        0.813 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183376: funcgraph_exit:         2.506 us   |              }
           <...>-31848 [001] 162723.183376: funcgraph_exit:         3.718 us   |            }
           <...>-31848 [001] 162723.183377: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183378: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183378: funcgraph_entry:        0.793 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183380: funcgraph_exit:         2.362 us   |              }
           <...>-31848 [001] 162723.183381: funcgraph_exit:         3.642 us   |            }
           <...>-31848 [001] 162723.183381: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183382: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183382: funcgraph_entry:        0.764 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183384: funcgraph_exit:         2.468 us   |              }
           <...>-31848 [001] 162723.183385: funcgraph_exit:         3.658 us   |            }
           <...>-31848 [001] 162723.183385: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183386: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183387: funcgraph_entry:        0.803 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183389: funcgraph_entry:        0.830 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183391: funcgraph_entry:        0.874 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183392: funcgraph_exit:         6.406 us   |              }
           <...>-31848 [001] 162723.183393: funcgraph_exit:         7.579 us   |            }
           <...>-31848 [001] 162723.183394: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183394: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183395: funcgraph_entry:        0.804 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183397: funcgraph_entry:        0.806 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183399: funcgraph_exit:         4.443 us   |              }
           <...>-31848 [001] 162723.183399: funcgraph_exit:         5.597 us   |            }
           <...>-31848 [001] 162723.183400: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183400: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183401: funcgraph_entry:        0.747 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183403: funcgraph_entry:        0.800 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183406: funcgraph_exit:         5.110 us   |              }
           <...>-31848 [001] 162723.183406: funcgraph_exit:         6.154 us   |            }
           <...>-31848 [001] 162723.183407: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183407: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183408: funcgraph_entry:        0.740 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183409: funcgraph_exit:         2.212 us   |              }
           <...>-31848 [001] 162723.183410: funcgraph_exit:         3.152 us   |            }
           <...>-31848 [001] 162723.183410: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183411: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183411: funcgraph_entry:        0.767 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183413: funcgraph_exit:         2.306 us   |              }
           <...>-31848 [001] 162723.183414: funcgraph_exit:         3.435 us   |            }
           <...>-31848 [001] 162723.183414: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183415: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183415: funcgraph_entry:        0.776 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183417: funcgraph_exit:         2.325 us   |              }
           <...>-31848 [001] 162723.183418: funcgraph_exit:         3.341 us   |            }
           <...>-31848 [001] 162723.183418: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183419: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183419: funcgraph_entry:        0.766 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183421: funcgraph_exit:         2.329 us   |              }
           <...>-31848 [001] 162723.183421: funcgraph_exit:         3.338 us   |            }
           <...>-31848 [001] 162723.183422: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183422: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183423: funcgraph_entry:        0.802 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183425: funcgraph_exit:         2.393 us   |              }
           <...>-31848 [001] 162723.183425: funcgraph_exit:         3.341 us   |            }
           <...>-31848 [001] 162723.183426: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183426: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183427: funcgraph_entry:        0.709 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183429: funcgraph_exit:         2.289 us   |              }
           <...>-31848 [001] 162723.183429: funcgraph_exit:         3.199 us   |            }
           <...>-31848 [001] 162723.183430: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183430: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183431: funcgraph_entry:        0.633 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183432: funcgraph_exit:         2.329 us   |              }
           <...>-31848 [001] 162723.183433: funcgraph_exit:         3.325 us   |            }
           <...>-31848 [001] 162723.183434: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183434: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183435: funcgraph_entry:        0.773 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183437: funcgraph_entry:        0.780 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183438: funcgraph_exit:         4.368 us   |              }
           <...>-31848 [001] 162723.183439: funcgraph_exit:         5.445 us   |            }
           <...>-31848 [001] 162723.183439: funcgraph_entry:                   |            fm_payload_set() {
           <...>-31848 [001] 162723.183440: funcgraph_entry:                   |              i_fm_payload_set() {
           <...>-31848 [001] 162723.183441: funcgraph_entry:        0.634 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183442: funcgraph_entry:        0.640 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183444: funcgraph_entry:        0.610 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183446: funcgraph_entry:        0.600 us   |                i_fm_alloc();
           <...>-31848 [001] 162723.183448: funcgraph_exit:         7.706 us   |              }
           <...>-31848 [001] 162723.183448: funcgraph_exit:         8.726 us   |            }
           <...>-31848 [001] 162723.183449: funcgraph_exit:       ! 147.998 us |          }
           <...>-31848 [001] 162723.183449: funcgraph_exit:       ! 152.266 us |        }
           <...>-31848 [001] 162723.183450: funcgraph_exit:       ! 154.664 us |      }
           <...>-31848 [001] 162723.183451: funcgraph_entry:        0.553 us   |      spa_get_dsl();
           <...>-31848 [001] 162723.183452: funcgraph_entry:        0.489 us   |      spa_is_initializing();
           <...>-31848 [001] 162723.183453: funcgraph_entry:                   |      zio_done() {
           <...>-31848 [001] 162723.183453: funcgraph_entry:        0.536 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183454: funcgraph_entry:        0.526 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183455: funcgraph_entry:        0.496 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183456: funcgraph_entry:        0.540 us   |        zio_wait_for_children();
           <...>-31848 [001] 162723.183457: funcgraph_entry:        0.483 us   |        zio_pop_transforms();
           <...>-31848 [001] 162723.183458: funcgraph_entry:        0.566 us   |        vdev_stat_update();
           <...>-31848 [001] 162723.183460: funcgraph_entry:        0.593 us   |        zio_gang_tree_free();
           <...>-31848 [001] 162723.183461: funcgraph_entry:                   |        vdev_tier_scrub_done() {
           <...>-31848 [001] 162723.183462: funcgraph_entry:        0.709 us   |          zio_buf_free();
           <...>-31848 [001] 162723.183463: funcgraph_exit:         1.829 us   |        }
           <...>-31848 [001] 162723.183464: funcgraph_entry:        0.625 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.183465: funcgraph_entry:        0.597 us   |        zio_walk_parents();
           <...>-31848 [001] 162723.183466: funcgraph_entry:        1.009 us   |        zio_remove_child();
           <...>-31848 [001] 162723.183468: funcgraph_entry:        0.592 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.183469: funcgraph_entry:        0.593 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.183470: funcgraph_entry:                   |        zio_vdev_io_done() {
           <...>-31848 [001] 162723.183471: funcgraph_entry:        0.617 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.183472: funcgraph_entry:                   |          vdev_tier_io_done() {
           <...>-31848 [001] 162723.183472: funcgraph_entry:        0.570 us   |            spa_writeable();
           <...>-31848 [001] 162723.183473: funcgraph_entry:                   |            zio_vdev_child_io() {
           <...>-31848 [001] 162723.183474: funcgraph_entry:                   |              zio_create() {
           <...>-31848 [001] 162723.183475: funcgraph_entry:        0.887 us   |                zio_add_child();
           <...>-31848 [001] 162723.183476: funcgraph_exit:         2.382 us   |              }
           <...>-31848 [001] 162723.183477: funcgraph_exit:         3.571 us   |            }
           <...>-31848 [001] 162723.183478: funcgraph_entry:                   |            zio_nowait() {
           <...>-31848 [001] 162723.183478: funcgraph_entry:        0.533 us   |              spa_get_dsl();
           <...>-31848 [001] 162723.183479: funcgraph_entry:        0.636 us   |              spa_is_initializing();
           <...>-31848 [001] 162723.183480: funcgraph_entry:                   |              zio_vdev_io_start() {
           <...>-31848 [001] 162723.183481: funcgraph_entry:        0.660 us   |                spa_writeable();
           <...>-31848 [001] 162723.183482: funcgraph_entry:                   |                vdev_queue_io() {
           <...>-31848 [001] 162723.183483: funcgraph_entry:        0.647 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183484: funcgraph_entry:        0.546 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183485: funcgraph_entry:        0.623 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183486: funcgraph_entry:        0.556 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183487: funcgraph_entry:        0.630 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183489: funcgraph_entry:        0.600 us   |                  vdev_queue_offset_compare();
           <...>-31848 [001] 162723.183490: funcgraph_entry:        0.929 us   |                  vdev_queue_io_to_issue();
           <...>-31848 [001] 162723.183492: funcgraph_exit:         9.562 us   |                }
           <...>-31848 [001] 162723.183492: funcgraph_exit:       + 12.031 us  |              }
           <...>-31848 [001] 162723.183493: funcgraph_exit:       + 15.362 us  |            }
           <...>-31848 [001] 162723.183493: funcgraph_exit:       + 21.822 us  |          }
           <...>-31848 [001] 162723.183494: funcgraph_exit:       + 24.175 us  |        }
           <...>-31848 [001] 162723.183495: funcgraph_entry:        0.633 us   |        spa_get_dsl();
           <...>-31848 [001] 162723.183496: funcgraph_entry:        0.557 us   |        spa_is_initializing();
           <...>-31848 [001] 162723.183497: funcgraph_entry:                   |        zio_vdev_io_assess() {
           <...>-31848 [001] 162723.183498: funcgraph_entry:        0.643 us   |          zio_wait_for_children();
           <...>-31848 [001] 162723.183499: funcgraph_exit:         1.836 us   |        }
           <...>-31848 [001] 162723.183500: funcgraph_exit:       + 46.860 us  |      }
           <...>-31848 [001] 162723.183500: funcgraph_exit:       ! 4686.227 us |    }
           <...>-31848 [001] 162723.183501: funcgraph_exit:       ! 4810.288 us |  }
           <...>-31848 [010] 162723.257917: funcgraph_entry:                   |  zio_execute() {
           <...>-31848 [010] 162723.257918: funcgraph_entry:        0.282 us   |    spa_get_dsl();
           <...>-31848 [010] 162723.257918: funcgraph_entry:        0.273 us   |    spa_is_initializing();
           <...>-31848 [010] 162723.257919: funcgraph_entry:                   |    zio_vdev_io_done() {
           <...>-31848 [010] 162723.257920: funcgraph_entry:        0.445 us   |      zio_wait_for_children();
           <...>-31848 [010] 162723.257920: funcgraph_entry:                   |      vdev_queue_io_done() {
           <...>-31848 [010] 162723.257921: funcgraph_entry:                   |        vdev_queue_io_to_issue() {
           <...>-31848 [010] 162723.257922: funcgraph_entry:        0.512 us   |          zio_buf_alloc();
           <...>-31848 [010] 162723.257923: funcgraph_entry:        0.314 us   |          vdev_queue_offset_compare();
           <...>-31848 [010] 162723.257923: funcgraph_entry:        0.292 us   |          vdev_queue_offset_compare();
           <...>-31848 [010] 162723.257924: funcgraph_entry:        0.289 us   |          vdev_queue_offset_compare();
           <...>-31848 [010] 162723.257924: funcgraph_entry:        0.382 us   |          zio_buf_free();
           <...>-31848 [010] 162723.257926: funcgraph_entry:                   |          zio_vdev_delegated_io() {
           <...>-31848 [010] 162723.257926: funcgraph_entry:        0.792 us   |            zio_create();
           <...>-31848 [010] 162723.257927: funcgraph_exit:         1.335 us   |          }
           <...>-31848 [010] 162723.257928: funcgraph_entry:        0.581 us   |          zio_add_child();
           <...>-31848 [010] 162723.257928: funcgraph_entry:        0.460 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257929: funcgraph_entry:        0.275 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257930: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257930: funcgraph_entry:        0.284 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257930: funcgraph_entry:        0.250 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257931: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257931: funcgraph_entry:        0.324 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257932: funcgraph_exit:         1.168 us   |            }
           <...>-31848 [010] 162723.257932: funcgraph_exit:         2.703 us   |          }
           <...>-31848 [010] 162723.257933: funcgraph_entry:        0.417 us   |          zio_add_child();
           <...>-31848 [010] 162723.257933: funcgraph_entry:        0.365 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257934: funcgraph_entry:        0.215 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257934: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257935: funcgraph_entry:        0.230 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257935: funcgraph_entry:        0.240 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257936: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257936: funcgraph_entry:        0.263 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257936: funcgraph_exit:         0.697 us   |            }
           <...>-31848 [010] 162723.257936: funcgraph_exit:         2.120 us   |          }
           <...>-31848 [010] 162723.257937: funcgraph_entry:        0.382 us   |          zio_add_child();
           <...>-31848 [010] 162723.257937: funcgraph_entry:        0.435 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257938: funcgraph_entry:        0.266 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257939: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257939: funcgraph_entry:        0.264 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257939: funcgraph_entry:        0.242 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257940: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257940: funcgraph_entry:        0.236 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257940: funcgraph_exit:         0.669 us   |            }
           <...>-31848 [010] 162723.257941: funcgraph_exit:         2.089 us   |          }
           <...>-31848 [010] 162723.257941: funcgraph_entry:        0.358 us   |          zio_add_child();
           <...>-31848 [010] 162723.257941: funcgraph_entry:        0.337 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257942: funcgraph_entry:        0.216 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257942: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257943: funcgraph_entry:        0.228 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257943: funcgraph_entry:        0.238 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257944: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257944: funcgraph_entry:        0.233 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257944: funcgraph_exit:         0.658 us   |            }
           <...>-31848 [010] 162723.257944: funcgraph_exit:         2.007 us   |          }
           <...>-31848 [010] 162723.257945: funcgraph_entry:        0.379 us   |          zio_add_child();
           <...>-31848 [010] 162723.257945: funcgraph_entry:        0.377 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257946: funcgraph_entry:        0.271 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257947: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257947: funcgraph_entry:        0.283 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257947: funcgraph_entry:        0.251 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257948: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257948: funcgraph_entry:        0.268 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257949: funcgraph_exit:         0.767 us   |            }
           <...>-31848 [010] 162723.257949: funcgraph_exit:         2.267 us   |          }
           <...>-31848 [010] 162723.257949: funcgraph_entry:        0.399 us   |          zio_add_child();
           <...>-31848 [010] 162723.257950: funcgraph_entry:        0.424 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257950: funcgraph_entry:        0.225 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257951: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257951: funcgraph_entry:        0.233 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257951: funcgraph_entry:        0.235 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257952: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257952: funcgraph_entry:        0.234 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257953: funcgraph_exit:         0.655 us   |            }
           <...>-31848 [010] 162723.257953: funcgraph_exit:         2.046 us   |          }
           <...>-31848 [010] 162723.257953: funcgraph_entry:        0.379 us   |          zio_add_child();
           <...>-31848 [010] 162723.257954: funcgraph_entry:        0.381 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257955: funcgraph_entry:        0.212 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257955: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257955: funcgraph_entry:        0.231 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257956: funcgraph_entry:        0.273 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257956: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257957: funcgraph_entry:        0.242 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257957: funcgraph_exit:         0.676 us   |            }
           <...>-31848 [010] 162723.257957: funcgraph_exit:         2.218 us   |          }
           <...>-31848 [010] 162723.257958: funcgraph_entry:        0.396 us   |          zio_add_child();
           <...>-31848 [010] 162723.257958: funcgraph_entry:        0.337 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257959: funcgraph_entry:        0.214 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257959: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257959: funcgraph_entry:        0.228 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257960: funcgraph_entry:        0.240 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257960: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257961: funcgraph_entry:        0.261 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257961: funcgraph_exit:         0.685 us   |            }
           <...>-31848 [010] 162723.257961: funcgraph_exit:         2.058 us   |          }
           <...>-31848 [010] 162723.257961: funcgraph_entry:        0.377 us   |          zio_add_child();
           <...>-31848 [010] 162723.257962: funcgraph_entry:        0.384 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257963: funcgraph_entry:        0.244 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257963: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257963: funcgraph_entry:        0.231 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257964: funcgraph_entry:        0.237 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257964: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257965: funcgraph_entry:        0.235 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257965: funcgraph_exit:         0.662 us   |            }
           <...>-31848 [010] 162723.257965: funcgraph_exit:         2.013 us   |          }
           <...>-31848 [010] 162723.257965: funcgraph_entry:        0.362 us   |          zio_add_child();
           <...>-31848 [010] 162723.257966: funcgraph_entry:        0.340 us   |          vdev_queue_io_remove();
           <...>-31848 [010] 162723.257967: funcgraph_entry:        0.213 us   |          zio_vdev_io_bypass();
           <...>-31848 [010] 162723.257967: funcgraph_entry:                   |          zio_execute() {
           <...>-31848 [010] 162723.257967: funcgraph_entry:        0.230 us   |            spa_get_dsl();
           <...>-31848 [010] 162723.257968: funcgraph_entry:        0.235 us   |            spa_is_initializing();
           <...>-31848 [010] 162723.257968: funcgraph_entry:                   |            zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257968: funcgraph_entry:        0.243 us   |              zio_wait_for_children();
           <...>-31848 [010] 162723.257969: funcgraph_exit:         0.701 us   |            }
           <...>-31848 [010] 162723.257969: funcgraph_exit:         2.144 us   |          }
           <...>-31848 [010] 162723.257970: funcgraph_entry:        0.262 us   |          vdev_queue_offset_compare();
           <...>-31848 [010] 162723.257970: funcgraph_exit:       + 49.270 us  |        }
           <...>-31848 [010] 162723.257971: funcgraph_entry:                   |        zio_nowait() {
           <...>-31848 [010] 162723.257971: funcgraph_entry:        0.234 us   |          spa_get_dsl();
           <...>-31848 [010] 162723.257971: funcgraph_entry:        0.238 us   |          spa_is_initializing();
           <...>-31848 [010] 162723.257972: funcgraph_entry:                   |          zio_vdev_io_start() {
           <...>-31848 [010] 162723.257972: funcgraph_entry:        0.226 us   |            vdev_cache_read();
           <...>-31848 [010] 162723.257973: funcgraph_entry:        0.261 us   |            vdev_queue_io();
           <...>-31848 [010] 162723.257973: funcgraph_entry:        0.321 us   |            vdev_accessible();
           <...>-31848 [010] 162723.257974: funcgraph_entry:                   |            vdev_disk_io_start() {
           <...>-31848 [010] 162723.257974: funcgraph_entry:                   |              __vdev_disk_physio() {
           <...>-31848 [010] 162723.257980: funcgraph_entry:        0.299 us   |                vdev_disk_dio_put();
           <...>-31848 [010] 162723.257980: funcgraph_exit:         6.112 us   |              }
           <...>-31848 [010] 162723.257981: funcgraph_exit:         6.627 us   |            }
           <...>-31848 [010] 162723.257981: funcgraph_exit:         9.148 us   |          }
           <...>-31848 [010] 162723.257981: funcgraph_exit:       + 10.722 us  |        }
           <...>-31848 [010] 162723.257982: funcgraph_entry:        0.352 us   |        vdev_queue_io_to_issue();
           <...>-31848 [010] 162723.257982: funcgraph_exit:       + 62.109 us  |      }
           <...>-31848 [010] 162723.257983: funcgraph_entry:        0.318 us   |      vdev_disk_io_done();
           <...>-31848 [010] 162723.257983: funcgraph_exit:       + 64.143 us  |    }
           <...>-31848 [010] 162723.257984: funcgraph_entry:        0.278 us   |    spa_get_dsl();
           <...>-31848 [010] 162723.257984: funcgraph_entry:        0.248 us   |    spa_is_initializing();
           <...>-31848 [010] 162723.257985: funcgraph_entry:                   |    zio_vdev_io_assess() {
           <...>-31848 [010] 162723.257985: funcgraph_entry:        0.287 us   |      zio_wait_for_children();
           <...>-31848 [010] 162723.257985: funcgraph_exit:         0.873 us   |    }
           <...>-31848 [010] 162723.257986: funcgraph_entry:        0.252 us   |    spa_get_dsl();
           <...>-31848 [010] 162723.257986: funcgraph_entry:        0.250 us   |    spa_is_initializing();
           <...>-31848 [010] 162723.257987: funcgraph_entry:                   |    zio_checksum_verify() {
           <...>-31848 [010] 162723.257987: funcgraph_entry:        1.321 us   |      zio_checksum_error();
           <...>-31848 [010] 162723.257989: funcgraph_exit:         1.853 us   |    }
           <...>-31848 [010] 162723.257989: funcgraph_entry:        0.249 us   |    spa_get_dsl();
           <...>-31848 [010] 162723.257989: funcgraph_entry:        0.252 us   |    spa_is_initializing();
           <...>-31848 [010] 162723.257990: funcgraph_entry:                   |    zio_done() {
           <...>-31848 [010] 162723.257990: funcgraph_entry:        0.275 us   |      zio_wait_for_children();
           <...>-31848 [010] 162723.257991: funcgraph_entry:        0.278 us   |      zio_wait_for_children();
           <...>-31848 [010] 162723.257991: funcgraph_entry:        0.273 us   |      zio_wait_for_children();
           <...>-31848 [010] 162723.257992: funcgraph_entry:        0.275 us   |      zio_wait_for_children();
           <...>-31848 [010] 162723.257992: funcgraph_entry:        0.267 us   |      zio_pop_transforms();
           <...>-31848 [010] 162723.257993: funcgraph_entry:        0.351 us   |      vdev_stat_update();
           <...>-31848 [010] 162723.257993: funcgraph_entry:        0.246 us   |      zio_gang_tree_free();
           <...>-31848 [010] 162723.257994: funcgraph_entry:                   |      vdev_tier_scrub_done() {
           <...>-31848 [010] 162723.257994: funcgraph_entry:        0.276 us   |        zio_walk_parents();
           <...>-31848 [010] 162723.257995: funcgraph_entry:        0.269 us   |        zio_walk_parents();
           <...>-31848 [010] 162723.257996: funcgraph_entry:        0.356 us   |        zio_buf_free();
           <...>-31848 [010] 162723.257996: funcgraph_exit:         2.533 us   |      }
           <...>-31848 [010] 162723.257997: funcgraph_entry:        0.264 us   |      zio_walk_parents();
           <...>-31848 [010] 162723.257997: funcgraph_entry:        0.264 us   |      zio_walk_parents();
           <...>-31848 [010] 162723.257998: funcgraph_entry:        0.459 us   |      zio_remove_child();
           <...>-31848 [010] 162723.257999: funcgraph_exit:         8.802 us   |    }
           <...>-31848 [010] 162723.257999: funcgraph_exit:       + 81.558 us  |  }
