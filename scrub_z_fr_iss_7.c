    z_fr_iss_7/3-31920 [000] 162723.119023: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_7/3-31920 [000] 162723.119023: funcgraph_entry:        0.379 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.119024: funcgraph_entry:        0.362 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.119025: funcgraph_entry:        0.330 us   |    zio_free_bp_init();
    z_fr_iss_7/2-31919 [005] 162723.119025: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_7/3-31920 [000] 162723.119025: funcgraph_entry:        0.325 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.119026: funcgraph_entry:        0.287 us   |    spa_is_initializing();
    z_fr_iss_7/2-31919 [005] 162723.119026: funcgraph_entry:        0.770 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.119027: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/3-31920 [000] 162723.119027: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_7/3-31920 [000] 162723.119028: funcgraph_entry:        0.869 us   |        spa_config_enter();
    z_fr_iss_7/2-31919 [005] 162723.119028: funcgraph_entry:        0.701 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.119029: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/3-31920 [000] 162723.119029: funcgraph_entry:        0.421 us   |          spa_freeze_txg();
    z_fr_iss_7/2-31919 [005] 162723.119029: funcgraph_entry:        0.530 us   |    zio_free_bp_init();
    z_fr_iss_7/3-31920 [000] 162723.119030: funcgraph_entry:        0.438 us   |          vdev_lookup_top();
    z_fr_iss_7/2-31919 [005] 162723.119031: funcgraph_entry:        0.612 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.119031: funcgraph_entry:                   |          vdev_dirty() {
    z_fr_iss_7/3-31920 [000] 162723.119031: funcgraph_entry:        0.438 us   |            txg_list_add();
    z_fr_iss_7/2-31919 [005] 162723.119032: funcgraph_entry:        0.509 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.119032: funcgraph_entry:        0.387 us   |            txg_list_add();
    z_fr_iss_7/2-31919 [005] 162723.119033: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/3-31920 [000] 162723.119033: funcgraph_exit:         1.851 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.119033: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/2-31919 [005] 162723.119033: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_7/3-31920 [000] 162723.119034: funcgraph_entry:        0.485 us   |            space_map_find();
    z_fr_iss_7/2-31919 [005] 162723.119034: funcgraph_entry:        0.848 us   |        spa_config_enter();
    z_fr_iss_7/3-31920 [000] 162723.119035: funcgraph_exit:         2.034 us   |          }
    z_fr_iss_7/2-31919 [005] 162723.119036: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/3-31920 [000] 162723.119036: funcgraph_exit:         6.762 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.119036: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/2-31919 [005] 162723.119036: funcgraph_entry:        0.824 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119036: funcgraph_entry:        0.325 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119037: funcgraph_entry:        0.346 us   |          vdev_lookup_top();
    z_fr_iss_7/2-31919 [005] 162723.119038: funcgraph_entry:        0.727 us   |          vdev_lookup_top();
    z_fr_iss_7/3-31920 [000] 162723.119038: funcgraph_entry:                   |          vdev_dirty() {
    z_fr_iss_7/3-31920 [000] 162723.119038: funcgraph_entry:        0.464 us   |            txg_list_add();
    z_fr_iss_7/3-31920 [000] 162723.119039: funcgraph_entry:        0.334 us   |            txg_list_add();
    z_fr_iss_7/2-31919 [005] 162723.119039: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119039: funcgraph_exit:         1.660 us   |          }
    z_fr_iss_7/2-31919 [005] 162723.119040: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.119040: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119040: funcgraph_entry:        0.330 us   |            space_map_find();
    z_fr_iss_7/2-31919 [005] 162723.119041: funcgraph_entry:        0.848 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119041: funcgraph_exit:         1.533 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.119042: funcgraph_exit:         5.736 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.119042: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/2-31919 [005] 162723.119042: funcgraph_exit:         2.364 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.119042: funcgraph_entry:        0.410 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119043: funcgraph_entry:        0.341 us   |          vdev_lookup_top();
    z_fr_iss_7/2-31919 [005] 162723.119043: funcgraph_exit:         4.372 us   |          }
    z_fr_iss_7/2-31919 [005] 162723.119044: funcgraph_exit:         8.545 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.119044: funcgraph_entry:                   |          vdev_dirty() {
    z_fr_iss_7/3-31920 [000] 162723.119044: funcgraph_entry:        0.441 us   |            txg_list_add();
    z_fr_iss_7/2-31919 [005] 162723.119045: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/2-31919 [005] 162723.119045: funcgraph_entry:        0.497 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119045: funcgraph_entry:        0.339 us   |            txg_list_add();
    z_fr_iss_7/3-31920 [000] 162723.119046: funcgraph_exit:         1.818 us   |          }
    z_fr_iss_7/2-31919 [005] 162723.119046: funcgraph_entry:        0.549 us   |          vdev_lookup_top();
    z_fr_iss_7/3-31920 [000] 162723.119046: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119047: funcgraph_entry:        0.316 us   |            space_map_find();
    z_fr_iss_7/2-31919 [005] 162723.119048: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119048: funcgraph_exit:         1.420 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.119048: funcgraph_exit:         6.001 us   |        }
    z_fr_iss_7/2-31919 [005] 162723.119048: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.119048: funcgraph_entry:        0.475 us   |        spa_config_exit();
    z_fr_iss_7/2-31919 [005] 162723.119049: funcgraph_entry:        0.586 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119049: funcgraph_exit:       + 21.893 us  |      }
    z_fr_iss_7/3-31920 [000] 162723.119049: funcgraph_exit:       + 22.662 us  |    }
    z_fr_iss_7/3-31920 [000] 162723.119050: funcgraph_entry:        0.283 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119050: funcgraph_exit:         2.104 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.119051: funcgraph_entry:        0.367 us   |    spa_is_initializing();
    z_fr_iss_7/2-31919 [005] 162723.119051: funcgraph_exit:         3.461 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.119051: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/2-31919 [005] 162723.119052: funcgraph_exit:         6.983 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.119052: funcgraph_entry:        0.366 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.119052: funcgraph_entry:        0.339 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119052: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/2-31919 [005] 162723.119053: funcgraph_entry:        0.503 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119053: funcgraph_entry:        0.423 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.119054: funcgraph_entry:        0.313 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119054: funcgraph_entry:        0.669 us   |          vdev_lookup_top();
    z_fr_iss_7/3-31920 [000] 162723.119055: funcgraph_exit:         3.235 us   |    }
    z_fr_iss_7/3-31920 [000] 162723.119055: funcgraph_entry:        0.341 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119055: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119056: funcgraph_entry:        0.318 us   |    spa_is_initializing();
    z_fr_iss_7/2-31919 [005] 162723.119056: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.119056: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/3-31920 [000] 162723.119056: funcgraph_entry:        0.311 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119057: funcgraph_entry:        0.671 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119057: funcgraph_entry:        0.301 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.119058: funcgraph_entry:        0.308 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119058: funcgraph_exit:         1.904 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.119058: funcgraph_entry:        0.313 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119059: funcgraph_exit:         3.402 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.119059: funcgraph_entry:        0.329 us   |      zio_pop_transforms();
    z_fr_iss_7/2-31919 [005] 162723.119059: funcgraph_exit:         7.020 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.119060: funcgraph_entry:        0.315 us   |      vdev_stat_update();
    z_fr_iss_7/2-31919 [005] 162723.119060: funcgraph_entry:        0.908 us   |        spa_config_exit();
    z_fr_iss_7/3-31920 [000] 162723.119060: funcgraph_entry:        0.298 us   |      zio_gang_tree_free();
    z_fr_iss_7/3-31920 [000] 162723.119061: funcgraph_entry:        0.316 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.119062: funcgraph_entry:        0.303 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119062: funcgraph_exit:       + 28.233 us  |      }
    z_fr_iss_7/3-31920 [000] 162723.119062: funcgraph_entry:        0.835 us   |      zio_remove_child();
    z_fr_iss_7/2-31919 [005] 162723.119062: funcgraph_exit:       + 29.417 us  |    }
    z_fr_iss_7/2-31919 [005] 162723.119063: funcgraph_entry:        0.591 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.119064: funcgraph_exit:         7.580 us   |    }
    z_fr_iss_7/3-31920 [000] 162723.119064: funcgraph_exit:       + 41.642 us  |  }
    z_fr_iss_7/2-31919 [005] 162723.119064: funcgraph_entry:        0.601 us   |    spa_is_initializing();
    z_fr_iss_7/2-31919 [005] 162723.119065: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/2-31919 [005] 162723.119066: funcgraph_entry:        0.765 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119067: funcgraph_entry:        0.605 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119069: funcgraph_entry:        0.755 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119070: funcgraph_entry:        0.622 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119071: funcgraph_exit:         6.030 us   |    }
    z_fr_iss_7/2-31919 [005] 162723.119072: funcgraph_entry:        0.583 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119073: funcgraph_entry:        0.707 us   |    spa_is_initializing();
    z_fr_iss_7/2-31919 [005] 162723.119075: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/2-31919 [005] 162723.119075: funcgraph_entry:        0.546 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119076: funcgraph_entry:        0.591 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119077: funcgraph_entry:        0.556 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119078: funcgraph_entry:        0.650 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119080: funcgraph_entry:        0.575 us   |      zio_pop_transforms();
    z_fr_iss_7/2-31919 [005] 162723.119081: funcgraph_entry:        0.693 us   |      vdev_stat_update();
    z_fr_iss_7/2-31919 [005] 162723.119083: funcgraph_entry:        0.631 us   |      zio_gang_tree_free();
    z_fr_iss_7/2-31919 [005] 162723.119084: funcgraph_entry:        0.729 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119085: funcgraph_entry:        0.584 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119087: funcgraph_entry:        1.176 us   |      zio_remove_child();
    z_fr_iss_7/2-31919 [005] 162723.119089: funcgraph_exit:       + 14.127 us  |    }
    z_fr_iss_7/2-31919 [005] 162723.119089: funcgraph_exit:       + 64.120 us  |  }
    z_fr_iss_7/1-31918 [011] 162723.504341: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_7/1-31918 [011] 162723.504342: funcgraph_entry:        0.311 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504342: funcgraph_entry:        0.308 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504343: funcgraph_entry:        0.300 us   |    zio_free_bp_init();
    z_fr_iss_7/1-31918 [011] 162723.504344: funcgraph_entry:        0.263 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504344: funcgraph_entry:        0.245 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504345: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/1-31918 [011] 162723.504345: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_7/1-31918 [011] 162723.504345: funcgraph_entry:        0.482 us   |        spa_config_enter();
    z_fr_iss_7/1-31918 [011] 162723.504347: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/1-31918 [011] 162723.504347: funcgraph_entry:        0.276 us   |          spa_freeze_txg();
    z_fr_iss_7/1-31918 [011] 162723.504347: funcgraph_entry:        0.322 us   |          vdev_lookup_top();
    z_fr_iss_7/1-31918 [011] 162723.504348: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/1-31918 [011] 162723.504349: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/1-31918 [011] 162723.504349: funcgraph_entry:        0.358 us   |              space_map_seg_compare();
    z_fr_iss_7/1-31918 [011] 162723.504350: funcgraph_exit:         1.186 us   |            }
    z_fr_iss_7/1-31918 [011] 162723.504351: funcgraph_exit:         2.647 us   |          }
    z_fr_iss_7/1-31918 [011] 162723.504351: funcgraph_exit:         4.630 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504351: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/1-31918 [011] 162723.504352: funcgraph_entry:        0.243 us   |          spa_freeze_txg();
    z_fr_iss_7/1-31918 [011] 162723.504352: funcgraph_entry:        0.300 us   |          vdev_lookup_top();
    z_fr_iss_7/1-31918 [011] 162723.504353: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/1-31918 [011] 162723.504353: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/1-31918 [011] 162723.504353: funcgraph_entry:        0.277 us   |              space_map_seg_compare();
    z_fr_iss_7/1-31918 [011] 162723.504354: funcgraph_exit:         0.808 us   |            }
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_exit:         1.733 us   |          }
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_exit:         3.483 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_entry:        0.253 us   |          spa_freeze_txg();
    z_fr_iss_7/1-31918 [011] 162723.504356: funcgraph_entry:        0.271 us   |          vdev_lookup_top();
    z_fr_iss_7/1-31918 [011] 162723.504357: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/1-31918 [011] 162723.504357: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/1-31918 [011] 162723.504357: funcgraph_entry:        0.315 us   |              space_map_seg_compare();
    z_fr_iss_7/1-31918 [011] 162723.504358: funcgraph_exit:         0.858 us   |            }
    z_fr_iss_7/1-31918 [011] 162723.504358: funcgraph_exit:         1.632 us   |          }
    z_fr_iss_7/1-31918 [011] 162723.504358: funcgraph_exit:         3.291 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504359: funcgraph_entry:        0.476 us   |        spa_config_exit();
    z_fr_iss_7/1-31918 [011] 162723.504359: funcgraph_exit:       + 14.449 us  |      }
    z_fr_iss_7/1-31918 [011] 162723.504360: funcgraph_exit:       + 15.043 us  |    }
    z_fr_iss_7/1-31918 [011] 162723.504360: funcgraph_entry:        0.259 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504361: funcgraph_entry:        0.275 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504361: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/1-31918 [011] 162723.504361: funcgraph_entry:        0.295 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504362: funcgraph_entry:        0.278 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504363: funcgraph_entry:        0.315 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504363: funcgraph_entry:        0.273 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504364: funcgraph_exit:         2.771 us   |    }
    z_fr_iss_7/1-31918 [011] 162723.504364: funcgraph_entry:        0.261 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504365: funcgraph_entry:        0.254 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504365: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/1-31918 [011] 162723.504366: funcgraph_entry:        0.302 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504366: funcgraph_entry:        0.270 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504367: funcgraph_entry:        0.299 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504367: funcgraph_entry:        0.304 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504368: funcgraph_entry:        0.271 us   |      zio_pop_transforms();
    z_fr_iss_7/1-31918 [011] 162723.504368: funcgraph_entry:        0.278 us   |      vdev_stat_update();
    z_fr_iss_7/1-31918 [011] 162723.504369: funcgraph_entry:        0.283 us   |      zio_gang_tree_free();
    z_fr_iss_7/1-31918 [011] 162723.504370: funcgraph_entry:        0.261 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504370: funcgraph_entry:        0.294 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504371: funcgraph_entry:        0.849 us   |      zio_remove_child();
    z_fr_iss_7/1-31918 [011] 162723.504372: funcgraph_exit:         6.805 us   |    }
    z_fr_iss_7/1-31918 [011] 162723.504372: funcgraph_exit:       + 31.896 us  |  }
    z_fr_iss_7/0-31917 [008] 162723.504494: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_7/0-31917 [008] 162723.504494: funcgraph_entry:        0.302 us   |    spa_get_dsl();
    z_fr_iss_7/0-31917 [008] 162723.504495: funcgraph_entry:        0.290 us   |    spa_is_initializing();
    z_fr_iss_7/0-31917 [008] 162723.504496: funcgraph_entry:        0.330 us   |    zio_free_bp_init();
    z_fr_iss_7/0-31917 [008] 162723.504496: funcgraph_entry:        0.275 us   |    spa_get_dsl();
    z_fr_iss_7/0-31917 [008] 162723.504497: funcgraph_entry:        0.271 us   |    spa_is_initializing();
    z_fr_iss_7/0-31917 [008] 162723.504498: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/0-31917 [008] 162723.504498: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_7/0-31917 [008] 162723.504498: funcgraph_entry:        0.530 us   |        spa_config_enter();
    z_fr_iss_7/0-31917 [008] 162723.504499: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/0-31917 [008] 162723.504499: funcgraph_entry:        0.276 us   |          spa_freeze_txg();
    z_fr_iss_7/0-31917 [008] 162723.504500: funcgraph_entry:        0.339 us   |          vdev_lookup_top();
    z_fr_iss_7/0-31917 [008] 162723.504501: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/0-31917 [008] 162723.504501: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/0-31917 [008] 162723.504501: funcgraph_entry:        0.398 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504502: funcgraph_entry:        0.368 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504503: funcgraph_entry:        0.298 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504504: funcgraph_exit:         2.508 us   |            }
    z_fr_iss_7/0-31917 [008] 162723.504504: funcgraph_exit:         3.292 us   |          }
    z_fr_iss_7/0-31917 [008] 162723.504504: funcgraph_exit:         5.225 us   |        }
    z_fr_iss_7/0-31917 [008] 162723.504505: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/0-31917 [008] 162723.504505: funcgraph_entry:        0.299 us   |          spa_freeze_txg();
    z_fr_iss_7/0-31917 [008] 162723.504505: funcgraph_entry:        0.325 us   |          vdev_lookup_top();
    z_fr_iss_7/0-31917 [008] 162723.504506: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/0-31917 [008] 162723.504507: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/0-31917 [008] 162723.504507: funcgraph_entry:        0.373 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504508: funcgraph_entry:        0.320 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504508: funcgraph_entry:        0.376 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504509: funcgraph_exit:         2.411 us   |            }
    z_fr_iss_7/0-31917 [008] 162723.504509: funcgraph_exit:         3.094 us   |          }
    z_fr_iss_7/0-31917 [008] 162723.504510: funcgraph_exit:         5.022 us   |        }
    z_fr_iss_7/0-31917 [008] 162723.504510: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/0-31917 [008] 162723.504510: funcgraph_entry:        0.325 us   |          spa_freeze_txg();
    z_fr_iss_7/0-31917 [008] 162723.504511: funcgraph_entry:        0.269 us   |          vdev_lookup_top();
    z_fr_iss_7/0-31917 [008] 162723.504511: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/0-31917 [008] 162723.504512: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/0-31917 [008] 162723.504512: funcgraph_entry:        0.394 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504513: funcgraph_entry:        0.368 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504514: funcgraph_entry:        0.287 us   |              space_map_seg_compare();
    z_fr_iss_7/0-31917 [008] 162723.504514: funcgraph_exit:         2.482 us   |            }
    z_fr_iss_7/0-31917 [008] 162723.504515: funcgraph_exit:         3.153 us   |          }
    z_fr_iss_7/0-31917 [008] 162723.504515: funcgraph_exit:         4.998 us   |        }
    z_fr_iss_7/0-31917 [008] 162723.504515: funcgraph_entry:        0.392 us   |        spa_config_exit();
    z_fr_iss_7/0-31917 [008] 162723.504516: funcgraph_exit:       + 18.101 us  |      }
    z_fr_iss_7/0-31917 [008] 162723.504516: funcgraph_exit:       + 18.681 us  |    }
    z_fr_iss_7/0-31917 [008] 162723.504516: funcgraph_entry:        0.252 us   |    spa_get_dsl();
    z_fr_iss_7/0-31917 [008] 162723.504517: funcgraph_entry:        0.294 us   |    spa_is_initializing();
    z_fr_iss_7/0-31917 [008] 162723.504518: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/0-31917 [008] 162723.504518: funcgraph_entry:        0.321 us   |      zio_wait_for_children();
    z_fr_iss_7/0-31917 [008] 162723.504519: funcgraph_entry:        0.285 us   |      zio_wait_for_children();
    z_fr_iss_7/0-31917 [008] 162723.504519: funcgraph_entry:        0.333 us   |      zio_walk_parents();
    z_fr_iss_7/0-31917 [008] 162723.504520: funcgraph_entry:        0.266 us   |      zio_walk_parents();
    z_fr_iss_7/0-31917 [008] 162723.504521: funcgraph_exit:         2.742 us   |    }
    z_fr_iss_7/0-31917 [008] 162723.504521: funcgraph_entry:        0.282 us   |    spa_get_dsl();
    z_fr_iss_7/0-31917 [008] 162723.504522: funcgraph_entry:        0.301 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.504522: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_7/0-31917 [008] 162723.504522: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/0-31917 [008] 162723.504522: funcgraph_entry:        0.292 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504523: funcgraph_entry:        0.334 us   |    spa_get_dsl();
    z_fr_iss_7/0-31917 [008] 162723.504523: funcgraph_entry:        0.277 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504523: funcgraph_entry:        0.323 us   |    spa_is_initializing();
    z_fr_iss_7/0-31917 [008] 162723.504524: funcgraph_entry:        0.311 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504524: funcgraph_entry:        0.329 us   |    zio_free_bp_init();
    z_fr_iss_7/0-31917 [008] 162723.504524: funcgraph_entry:        0.302 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504525: funcgraph_entry:        0.316 us   |    spa_get_dsl();
    z_fr_iss_7/0-31917 [008] 162723.504525: funcgraph_entry:        0.280 us   |      zio_pop_transforms();
    z_fr_iss_7/3-31920 [000] 162723.504525: funcgraph_entry:        0.309 us   |    spa_is_initializing();
    z_fr_iss_7/0-31917 [008] 162723.504525: funcgraph_entry:        0.287 us   |      vdev_stat_update();
    z_fr_iss_7/0-31917 [008] 162723.504526: funcgraph_entry:        0.255 us   |      zio_gang_tree_free();
    z_fr_iss_7/3-31920 [000] 162723.504526: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/3-31920 [000] 162723.504526: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_7/0-31917 [008] 162723.504527: funcgraph_entry:        0.274 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.504527: funcgraph_entry:        0.480 us   |        spa_config_enter();
    z_fr_iss_7/0-31917 [008] 162723.504527: funcgraph_entry:        0.287 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.504528: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/0-31917 [008] 162723.504528: funcgraph_entry:        0.745 us   |      zio_remove_child();
    z_fr_iss_7/3-31920 [000] 162723.504528: funcgraph_entry:        0.332 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.504528: funcgraph_entry:        0.387 us   |          vdev_lookup_top();
    z_fr_iss_7/0-31917 [008] 162723.504529: funcgraph_exit:         6.721 us   |    }
    z_fr_iss_7/0-31917 [008] 162723.504529: funcgraph_exit:       + 35.563 us  |  }
    z_fr_iss_7/3-31920 [000] 162723.504529: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.504530: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.504530: funcgraph_entry:        0.445 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504531: funcgraph_entry:        0.442 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504532: funcgraph_entry:        0.360 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504532: funcgraph_exit:         2.782 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.504533: funcgraph_exit:         4.039 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.504534: funcgraph_exit:         6.133 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.504534: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/3-31920 [000] 162723.504534: funcgraph_entry:        0.320 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.504535: funcgraph_entry:        0.377 us   |          vdev_lookup_top();
    z_fr_iss_7/3-31920 [000] 162723.504536: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.504536: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.504536: funcgraph_entry:        0.346 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504537: funcgraph_entry:        0.362 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504538: funcgraph_entry:        0.339 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504539: funcgraph_exit:         2.440 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.504539: funcgraph_exit:         3.341 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.504539: funcgraph_exit:         5.416 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.504540: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/3-31920 [000] 162723.504540: funcgraph_entry:        0.306 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.504541: funcgraph_entry:        0.323 us   |          vdev_lookup_top();
    z_fr_iss_7/3-31920 [000] 162723.504541: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.504542: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.504542: funcgraph_entry:        0.335 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504543: funcgraph_entry:        0.348 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504544: funcgraph_entry:        0.349 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.504544: funcgraph_exit:         2.599 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.504545: funcgraph_exit:         3.409 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.504545: funcgraph_exit:         5.413 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.504545: funcgraph_entry:        0.387 us   |        spa_config_exit();
    z_fr_iss_7/3-31920 [000] 162723.504546: funcgraph_exit:       + 19.818 us  |      }
    z_fr_iss_7/3-31920 [000] 162723.504546: funcgraph_exit:       + 20.386 us  |    }
    z_fr_iss_7/3-31920 [000] 162723.504547: funcgraph_entry:        0.306 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.504547: funcgraph_entry:        0.320 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.504548: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/3-31920 [000] 162723.504548: funcgraph_entry:        0.339 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504549: funcgraph_entry:        0.332 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504550: funcgraph_entry:        0.388 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.504550: funcgraph_entry:        0.354 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.504551: funcgraph_exit:         2.969 us   |    }
    z_fr_iss_7/3-31920 [000] 162723.504551: funcgraph_entry:        0.316 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.504552: funcgraph_entry:        0.309 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.504553: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/3-31920 [000] 162723.504553: funcgraph_entry:        0.298 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504553: funcgraph_entry:        0.334 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504554: funcgraph_entry:        0.320 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504555: funcgraph_entry:        0.336 us   |      zio_wait_for_children();
    z_fr_iss_7/3-31920 [000] 162723.504555: funcgraph_entry:        0.313 us   |      zio_pop_transforms();
    z_fr_iss_7/3-31920 [000] 162723.504556: funcgraph_entry:        0.310 us   |      vdev_stat_update();
    z_fr_iss_7/3-31920 [000] 162723.504557: funcgraph_entry:        0.315 us   |      zio_gang_tree_free();
    z_fr_iss_7/3-31920 [000] 162723.504557: funcgraph_entry:        0.357 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.504558: funcgraph_entry:        0.332 us   |      zio_walk_parents();
    z_fr_iss_7/3-31920 [000] 162723.504558: funcgraph_entry:        0.643 us   |      zio_remove_child();
    z_fr_iss_7/3-31920 [000] 162723.504560: funcgraph_exit:         7.082 us   |    }
    z_fr_iss_7/3-31920 [000] 162723.504560: funcgraph_exit:       + 37.895 us  |  }
