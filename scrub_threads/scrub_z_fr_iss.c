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
    z_fr_iss_5/1-31910 [001] 162723.119050: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_7/2-31919 [005] 162723.119050: funcgraph_exit:         2.104 us   |            }
    z_fr_iss_5/1-31910 [001] 162723.119051: funcgraph_entry:        0.361 us   |    spa_get_dsl();
    z_fr_iss_7/3-31920 [000] 162723.119051: funcgraph_entry:        0.367 us   |    spa_is_initializing();
    z_fr_iss_7/2-31919 [005] 162723.119051: funcgraph_exit:         3.461 us   |          }
    z_fr_iss_5/1-31910 [001] 162723.119051: funcgraph_entry:        0.367 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.119051: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/2-31919 [005] 162723.119052: funcgraph_exit:         6.983 us   |        }
    z_fr_iss_7/3-31920 [000] 162723.119052: funcgraph_entry:        0.366 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119052: funcgraph_entry:        0.320 us   |    zio_free_bp_init();
    z_fr_iss_7/3-31920 [000] 162723.119052: funcgraph_entry:        0.339 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119052: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_5/1-31910 [001] 162723.119053: funcgraph_entry:        0.289 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119053: funcgraph_entry:        0.503 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119053: funcgraph_entry:        0.423 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119053: funcgraph_entry:        0.287 us   |    spa_is_initializing();
    z_fr_iss_7/3-31920 [000] 162723.119054: funcgraph_entry:        0.313 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119054: funcgraph_entry:        0.669 us   |          vdev_lookup_top();
    z_fr_iss_5/1-31910 [001] 162723.119054: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_5/1-31910 [001] 162723.119054: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_7/3-31920 [000] 162723.119055: funcgraph_exit:         3.235 us   |    }
    z_fr_iss_5/1-31910 [001] 162723.119055: funcgraph_entry:        0.521 us   |        spa_config_enter();
    z_fr_iss_7/3-31920 [000] 162723.119055: funcgraph_entry:        0.341 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119055: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119056: funcgraph_entry:        0.318 us   |    spa_is_initializing();
    z_fr_iss_5/1-31910 [001] 162723.119056: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_5/1-31910 [001] 162723.119056: funcgraph_entry:        0.313 us   |          spa_freeze_txg();
    z_fr_iss_7/2-31919 [005] 162723.119056: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/3-31920 [000] 162723.119056: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/3-31920 [000] 162723.119056: funcgraph_entry:        0.311 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119057: funcgraph_entry:        0.334 us   |          vdev_lookup_top();
    z_fr_iss_7/2-31919 [005] 162723.119057: funcgraph_entry:        0.671 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119057: funcgraph_entry:        0.301 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119057: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/3-31920 [000] 162723.119058: funcgraph_entry:        0.308 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119058: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/2-31919 [005] 162723.119058: funcgraph_exit:         1.904 us   |            }
    z_fr_iss_5/1-31910 [001] 162723.119058: funcgraph_entry:        0.367 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119058: funcgraph_entry:        0.313 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119059: funcgraph_exit:         3.402 us   |          }
    z_fr_iss_5/1-31910 [001] 162723.119059: funcgraph_entry:        0.388 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119059: funcgraph_entry:        0.329 us   |      zio_pop_transforms();
    z_fr_iss_7/2-31919 [005] 162723.119059: funcgraph_exit:         7.020 us   |        }
    z_fr_iss_5/1-31910 [001] 162723.119060: funcgraph_exit:         1.956 us   |            }
    z_fr_iss_7/3-31920 [000] 162723.119060: funcgraph_entry:        0.315 us   |      vdev_stat_update();
    z_fr_iss_7/2-31919 [005] 162723.119060: funcgraph_entry:        0.908 us   |        spa_config_exit();
    z_fr_iss_5/1-31910 [001] 162723.119060: funcgraph_exit:         2.882 us   |          }
    z_fr_iss_7/3-31920 [000] 162723.119060: funcgraph_entry:        0.298 us   |      zio_gang_tree_free();
    z_fr_iss_5/1-31910 [001] 162723.119060: funcgraph_exit:         4.933 us   |        }
    z_fr_iss_5/1-31910 [001] 162723.119061: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/3-31920 [000] 162723.119061: funcgraph_entry:        0.316 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119061: funcgraph_entry:        0.323 us   |          spa_freeze_txg();
    z_fr_iss_7/3-31920 [000] 162723.119062: funcgraph_entry:        0.303 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119062: funcgraph_exit:       + 28.233 us  |      }
    z_fr_iss_5/1-31910 [001] 162723.119062: funcgraph_entry:        0.345 us   |          vdev_lookup_top();
    z_fr_iss_7/3-31920 [000] 162723.119062: funcgraph_entry:        0.835 us   |      zio_remove_child();
    z_fr_iss_7/2-31919 [005] 162723.119062: funcgraph_exit:       + 29.417 us  |    }
    z_fr_iss_5/1-31910 [001] 162723.119062: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_5/1-31910 [001] 162723.119063: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/2-31919 [005] 162723.119063: funcgraph_entry:        0.591 us   |    spa_get_dsl();
    z_fr_iss_5/1-31910 [001] 162723.119063: funcgraph_entry:        0.313 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119064: funcgraph_exit:         7.580 us   |    }
    z_fr_iss_5/1-31910 [001] 162723.119064: funcgraph_entry:        0.349 us   |              space_map_seg_compare();
    z_fr_iss_7/3-31920 [000] 162723.119064: funcgraph_exit:       + 41.642 us  |  }
    z_fr_iss_7/2-31919 [005] 162723.119064: funcgraph_entry:        0.601 us   |    spa_is_initializing();
    z_fr_iss_5/1-31910 [001] 162723.119065: funcgraph_exit:         1.679 us   |            }
    z_fr_iss_5/1-31910 [001] 162723.119065: funcgraph_exit:         2.399 us   |          }
    z_fr_iss_5/1-31910 [001] 162723.119065: funcgraph_exit:         4.431 us   |        }
    z_fr_iss_7/2-31919 [005] 162723.119065: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_5/1-31910 [001] 162723.119066: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_5/1-31910 [001] 162723.119066: funcgraph_entry:        0.312 us   |          spa_freeze_txg();
    z_fr_iss_7/2-31919 [005] 162723.119066: funcgraph_entry:        0.765 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119066: funcgraph_entry:        0.353 us   |          vdev_lookup_top();
    z_fr_iss_5/1-31910 [001] 162723.119067: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/2-31919 [005] 162723.119067: funcgraph_entry:        0.605 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119068: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_5/1-31910 [001] 162723.119068: funcgraph_entry:        0.351 us   |              space_map_seg_compare();
    z_fr_iss_5/1-31910 [001] 162723.119069: funcgraph_entry:        0.343 us   |              space_map_seg_compare();
    z_fr_iss_7/2-31919 [005] 162723.119069: funcgraph_entry:        0.755 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119069: funcgraph_exit:         1.751 us   |            }
    z_fr_iss_5/1-31910 [001] 162723.119070: funcgraph_exit:         2.524 us   |          }
    z_fr_iss_5/1-31910 [001] 162723.119070: funcgraph_exit:         4.509 us   |        }
    z_fr_iss_7/2-31919 [005] 162723.119070: funcgraph_entry:        0.622 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119070: funcgraph_entry:        0.482 us   |        spa_config_exit();
    z_fr_iss_5/1-31910 [001] 162723.119071: funcgraph_exit:       + 16.775 us  |      }
    z_fr_iss_7/2-31919 [005] 162723.119071: funcgraph_exit:         6.030 us   |    }
    z_fr_iss_5/1-31910 [001] 162723.119071: funcgraph_exit:       + 17.430 us  |    }
    z_fr_iss_5/1-31910 [001] 162723.119072: funcgraph_entry:        0.275 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119072: funcgraph_entry:        0.583 us   |    spa_get_dsl();
    z_fr_iss_5/1-31910 [001] 162723.119072: funcgraph_entry:        0.324 us   |    spa_is_initializing();
    z_fr_iss_5/1-31910 [001] 162723.119073: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_5/1-31910 [001] 162723.119073: funcgraph_entry:        0.330 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119073: funcgraph_entry:        0.707 us   |    spa_is_initializing();
    z_fr_iss_5/1-31910 [001] 162723.119074: funcgraph_entry:        0.338 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119075: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_5/1-31910 [001] 162723.119075: funcgraph_entry:        0.396 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119075: funcgraph_entry:        0.546 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119076: funcgraph_entry:        0.320 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119076: funcgraph_entry:        0.591 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119076: funcgraph_exit:         3.374 us   |    }
    z_fr_iss_5/1-31910 [001] 162723.119077: funcgraph_entry:        0.313 us   |    spa_get_dsl();
    z_fr_iss_7/2-31919 [005] 162723.119077: funcgraph_entry:        0.556 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119077: funcgraph_entry:        0.294 us   |    spa_is_initializing();
    z_fr_iss_5/1-31910 [001] 162723.119078: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_5/1-31910 [001] 162723.119078: funcgraph_entry:        0.332 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119078: funcgraph_entry:        0.650 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119079: funcgraph_entry:        0.334 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119079: funcgraph_entry:        0.348 us   |      zio_wait_for_children();
    z_fr_iss_7/2-31919 [005] 162723.119080: funcgraph_entry:        0.575 us   |      zio_pop_transforms();
    z_fr_iss_5/1-31910 [001] 162723.119080: funcgraph_entry:        0.349 us   |      zio_wait_for_children();
    z_fr_iss_5/1-31910 [001] 162723.119081: funcgraph_entry:        0.320 us   |      zio_pop_transforms();
    z_fr_iss_7/2-31919 [005] 162723.119081: funcgraph_entry:        0.693 us   |      vdev_stat_update();
    z_fr_iss_5/1-31910 [001] 162723.119082: funcgraph_entry:        0.329 us   |      vdev_stat_update();
    z_fr_iss_5/1-31910 [001] 162723.119082: funcgraph_entry:        0.318 us   |      zio_gang_tree_free();
    z_fr_iss_7/2-31919 [005] 162723.119083: funcgraph_entry:        0.631 us   |      zio_gang_tree_free();
    z_fr_iss_5/1-31910 [001] 162723.119083: funcgraph_entry:        0.287 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119084: funcgraph_entry:        0.348 us   |      zio_walk_parents();
    z_fr_iss_7/2-31919 [005] 162723.119084: funcgraph_entry:        0.729 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119084: funcgraph_entry:        0.830 us   |      zio_remove_child();
    z_fr_iss_7/2-31919 [005] 162723.119085: funcgraph_entry:        0.584 us   |      zio_walk_parents();
    z_fr_iss_5/1-31910 [001] 162723.119086: funcgraph_exit:         7.645 us   |    }
    z_fr_iss_5/1-31910 [001] 162723.119086: funcgraph_exit:       + 35.885 us  |  }
    z_fr_iss_7/2-31919 [005] 162723.119087: funcgraph_entry:        1.176 us   |      zio_remove_child();
    z_fr_iss_7/2-31919 [005] 162723.119089: funcgraph_exit:       + 14.127 us  |    }
    z_fr_iss_7/2-31919 [005] 162723.119089: funcgraph_exit:       + 64.120 us  |  }
    z_fr_iss_3/0-31901 [009] 162723.119093: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_3/0-31901 [009] 162723.119094: funcgraph_entry:        0.334 us   |    spa_get_dsl();
    z_fr_iss_3/0-31901 [009] 162723.119095: funcgraph_entry:        0.241 us   |    spa_is_initializing();
    z_fr_iss_3/0-31901 [009] 162723.119095: funcgraph_entry:        0.398 us   |    zio_free_bp_init();
    z_fr_iss_3/0-31901 [009] 162723.119096: funcgraph_entry:        0.242 us   |    spa_get_dsl();
    z_fr_iss_3/0-31901 [009] 162723.119096: funcgraph_entry:        0.242 us   |    spa_is_initializing();
    z_fr_iss_3/0-31901 [009] 162723.119097: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_3/0-31901 [009] 162723.119097: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_3/0-31901 [009] 162723.119098: funcgraph_entry:        0.522 us   |        spa_config_enter();
    z_fr_iss_3/0-31901 [009] 162723.119098: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_3/0-31901 [009] 162723.119099: funcgraph_entry:        0.252 us   |          spa_freeze_txg();
    z_fr_iss_3/0-31901 [009] 162723.119099: funcgraph_entry:        0.325 us   |          vdev_lookup_top();
    z_fr_iss_3/0-31901 [009] 162723.119100: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_3/0-31901 [009] 162723.119101: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_3/0-31901 [009] 162723.119101: funcgraph_entry:        0.367 us   |              space_map_seg_compare();
    z_fr_iss_3/0-31901 [009] 162723.119102: funcgraph_entry:        0.365 us   |              space_map_seg_compare();
    z_fr_iss_3/0-31901 [009] 162723.119102: funcgraph_exit:         1.773 us   |            }
    z_fr_iss_3/0-31901 [009] 162723.119103: funcgraph_exit:         2.638 us   |          }
    z_fr_iss_3/0-31901 [009] 162723.119103: funcgraph_exit:         4.604 us   |        }
    z_fr_iss_3/0-31901 [009] 162723.119103: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_3/0-31901 [009] 162723.119104: funcgraph_entry:        0.237 us   |          spa_freeze_txg();
    z_fr_iss_3/0-31901 [009] 162723.119104: funcgraph_entry:        0.247 us   |          vdev_lookup_top();
    z_fr_iss_3/0-31901 [009] 162723.119105: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_3/0-31901 [009] 162723.119105: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_3/0-31901 [009] 162723.119105: funcgraph_entry:        0.301 us   |              space_map_seg_compare();
    z_fr_iss_3/0-31901 [009] 162723.119106: funcgraph_entry:        0.340 us   |              space_map_seg_compare();
    z_fr_iss_3/0-31901 [009] 162723.119107: funcgraph_exit:         1.506 us   |            }
    z_fr_iss_3/0-31901 [009] 162723.119107: funcgraph_exit:         2.265 us   |          }
    z_fr_iss_3/0-31901 [009] 162723.119107: funcgraph_exit:         3.870 us   |        }
    z_fr_iss_3/0-31901 [009] 162723.119108: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_3/0-31901 [009] 162723.119108: funcgraph_entry:        0.243 us   |          spa_freeze_txg();
    z_fr_iss_3/0-31901 [009] 162723.119108: funcgraph_entry:        0.246 us   |          vdev_lookup_top();
    z_fr_iss_3/0-31901 [009] 162723.119109: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_3/0-31901 [009] 162723.119109: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_3/0-31901 [009] 162723.119109: funcgraph_entry:        0.339 us   |              space_map_seg_compare();
    z_fr_iss_3/0-31901 [009] 162723.119110: funcgraph_entry:        0.273 us   |              space_map_seg_compare();
    z_fr_iss_3/0-31901 [009] 162723.119111: funcgraph_exit:         1.437 us   |            }
    z_fr_iss_3/0-31901 [009] 162723.119111: funcgraph_exit:         1.993 us   |          }
    z_fr_iss_3/0-31901 [009] 162723.119111: funcgraph_exit:         3.637 us   |        }
    z_fr_iss_3/0-31901 [009] 162723.119112: funcgraph_entry:        0.424 us   |        spa_config_exit();
    z_fr_iss_3/0-31901 [009] 162723.119112: funcgraph_exit:       + 14.895 us  |      }
    z_fr_iss_3/0-31901 [009] 162723.119113: funcgraph_exit:       + 15.500 us  |    }
    z_fr_iss_3/0-31901 [009] 162723.119113: funcgraph_entry:        0.278 us   |    spa_get_dsl();
    z_fr_iss_3/0-31901 [009] 162723.119113: funcgraph_entry:        0.229 us   |    spa_is_initializing();
    z_fr_iss_3/0-31901 [009] 162723.119114: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_3/0-31901 [009] 162723.119114: funcgraph_entry:        0.400 us   |      zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119115: funcgraph_entry:        0.301 us   |      zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119115: funcgraph_entry:        0.335 us   |      zio_walk_parents();
    z_fr_iss_3/0-31901 [009] 162723.119116: funcgraph_entry:        0.281 us   |      zio_walk_parents();
    z_fr_iss_3/0-31901 [009] 162723.119117: funcgraph_exit:         2.951 us   |    }
    z_fr_iss_3/0-31901 [009] 162723.119117: funcgraph_entry:        0.231 us   |    spa_get_dsl();
    z_fr_iss_3/0-31901 [009] 162723.119118: funcgraph_entry:        0.244 us   |    spa_is_initializing();
    z_fr_iss_3/0-31901 [009] 162723.119118: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_3/0-31901 [009] 162723.119118: funcgraph_entry:        0.265 us   |      zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119119: funcgraph_entry:        0.257 us   |      zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119119: funcgraph_entry:        0.284 us   |      zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119120: funcgraph_entry:        0.278 us   |      zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119121: funcgraph_entry:        0.282 us   |      zio_pop_transforms();
    z_fr_iss_3/0-31901 [009] 162723.119122: funcgraph_entry:        0.267 us   |      vdev_stat_update();
    z_fr_iss_3/0-31901 [009] 162723.119122: funcgraph_entry:        0.273 us   |      zio_gang_tree_free();
    z_fr_iss_3/0-31901 [009] 162723.119123: funcgraph_entry:        0.249 us   |      zio_walk_parents();
    z_fr_iss_3/0-31901 [009] 162723.119123: funcgraph_entry:        0.266 us   |      zio_walk_parents();
    z_fr_iss_3/0-31901 [009] 162723.119124: funcgraph_entry:        0.782 us   |      zio_remove_child();
    z_fr_iss_3/0-31901 [009] 162723.119125: funcgraph_entry:        0.236 us   |      spa_get_dsl();
    z_fr_iss_3/0-31901 [009] 162723.119126: funcgraph_entry:        0.262 us   |      spa_is_initializing();
    z_fr_iss_3/0-31901 [009] 162723.119126: funcgraph_entry:                   |      zio_done() {
    z_fr_iss_3/0-31901 [009] 162723.119126: funcgraph_entry:        0.308 us   |        zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119127: funcgraph_entry:        0.278 us   |        zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119128: funcgraph_entry:        0.278 us   |        zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119128: funcgraph_entry:        0.288 us   |        zio_wait_for_children();
    z_fr_iss_3/0-31901 [009] 162723.119129: funcgraph_entry:        0.254 us   |        zio_pop_transforms();
    z_fr_iss_3/0-31901 [009] 162723.119129: funcgraph_entry:        0.242 us   |        vdev_stat_update();
    z_fr_iss_3/0-31901 [009] 162723.119130: funcgraph_entry:        0.261 us   |        zio_gang_tree_free();
    z_fr_iss_3/0-31901 [009] 162723.119130: funcgraph_entry:        0.282 us   |        zio_walk_parents();
    z_fr_iss_3/0-31901 [009] 162723.119133: funcgraph_exit:         6.684 us   |      }
    z_fr_iss_3/0-31901 [009] 162723.119133: funcgraph_exit:       + 15.208 us  |    }
    z_fr_iss_3/0-31901 [009] 162723.119134: funcgraph_exit:       + 41.649 us  |  }
    z_fr_iss_6/0-31913 [009] 162723.119235: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_6/0-31913 [009] 162723.119235: funcgraph_entry:        0.263 us   |    spa_get_dsl();
    z_fr_iss_6/0-31913 [009] 162723.119236: funcgraph_entry:        0.308 us   |    spa_is_initializing();
    z_fr_iss_6/0-31913 [009] 162723.119236: funcgraph_entry:        0.293 us   |    zio_free_bp_init();
    z_fr_iss_6/0-31913 [009] 162723.119237: funcgraph_entry:        0.243 us   |    spa_get_dsl();
    z_fr_iss_6/0-31913 [009] 162723.119237: funcgraph_entry:        0.293 us   |    spa_is_initializing();
    z_fr_iss_6/0-31913 [009] 162723.119238: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_6/0-31913 [009] 162723.119238: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_6/0-31913 [009] 162723.119239: funcgraph_entry:        0.398 us   |        spa_config_enter();
    z_fr_iss_6/0-31913 [009] 162723.119239: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_6/0-31913 [009] 162723.119240: funcgraph_entry:        0.316 us   |          spa_freeze_txg();
    z_fr_iss_6/0-31913 [009] 162723.119240: funcgraph_entry:        0.273 us   |          vdev_lookup_top();
    z_fr_iss_6/0-31913 [009] 162723.119241: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_6/0-31913 [009] 162723.119241: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_6/0-31913 [009] 162723.119241: funcgraph_entry:        0.268 us   |              space_map_seg_compare();
    z_fr_iss_6/0-31913 [009] 162723.119242: funcgraph_exit:         0.986 us   |            }
    z_fr_iss_6/0-31913 [009] 162723.119243: funcgraph_exit:         2.192 us   |          }
    z_fr_iss_6/0-31913 [009] 162723.119243: funcgraph_exit:         3.899 us   |        }
    z_fr_iss_6/0-31913 [009] 162723.119244: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_6/0-31913 [009] 162723.119244: funcgraph_entry:        0.283 us   |          spa_freeze_txg();
    z_fr_iss_6/0-31913 [009] 162723.119244: funcgraph_entry:        0.293 us   |          vdev_lookup_top();
    z_fr_iss_6/0-31913 [009] 162723.119245: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_6/0-31913 [009] 162723.119245: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_6/0-31913 [009] 162723.119246: funcgraph_entry:        0.285 us   |              space_map_seg_compare();
    z_fr_iss_6/0-31913 [009] 162723.119246: funcgraph_exit:         0.857 us   |            }
    z_fr_iss_6/0-31913 [009] 162723.119247: funcgraph_exit:         1.559 us   |          }
    z_fr_iss_6/0-31913 [009] 162723.119247: funcgraph_exit:         3.511 us   |        }
    z_fr_iss_6/0-31913 [009] 162723.119247: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_6/0-31913 [009] 162723.119248: funcgraph_entry:        0.264 us   |          spa_freeze_txg();
    z_fr_iss_6/0-31913 [009] 162723.119248: funcgraph_entry:        0.283 us   |          vdev_lookup_top();
    z_fr_iss_6/0-31913 [009] 162723.119249: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_6/0-31913 [009] 162723.119249: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_6/0-31913 [009] 162723.119249: funcgraph_entry:        0.283 us   |              space_map_seg_compare();
    z_fr_iss_6/0-31913 [009] 162723.119250: funcgraph_exit:         1.134 us   |            }
    z_fr_iss_6/0-31913 [009] 162723.119251: funcgraph_exit:         1.801 us   |          }
    z_fr_iss_6/0-31913 [009] 162723.119251: funcgraph_exit:         3.560 us   |        }
    z_fr_iss_6/0-31913 [009] 162723.119251: funcgraph_entry:        0.330 us   |        spa_config_exit();
    z_fr_iss_6/0-31913 [009] 162723.119252: funcgraph_exit:       + 13.435 us  |      }
    z_fr_iss_6/0-31913 [009] 162723.119252: funcgraph_exit:       + 13.983 us  |    }
    z_fr_iss_6/0-31913 [009] 162723.119252: funcgraph_entry:        0.240 us   |    spa_get_dsl();
    z_fr_iss_6/0-31913 [009] 162723.119253: funcgraph_entry:        0.254 us   |    spa_is_initializing();
    z_fr_iss_6/0-31913 [009] 162723.119253: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_6/0-31913 [009] 162723.119254: funcgraph_entry:        0.294 us   |      zio_wait_for_children();
    z_fr_iss_6/0-31913 [009] 162723.119254: funcgraph_entry:        0.299 us   |      zio_wait_for_children();
    z_fr_iss_6/0-31913 [009] 162723.119255: funcgraph_entry:        0.252 us   |      zio_walk_parents();
    z_fr_iss_6/0-31913 [009] 162723.119255: funcgraph_exit:         1.876 us   |    }
    z_fr_iss_6/0-31913 [009] 162723.119256: funcgraph_entry:        0.292 us   |    spa_get_dsl();
    z_fr_iss_6/0-31913 [009] 162723.119256: funcgraph_entry:        0.262 us   |    spa_is_initializing();
    z_fr_iss_6/0-31913 [009] 162723.119257: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_6/0-31913 [009] 162723.119257: funcgraph_entry:        0.276 us   |      zio_wait_for_children();
    z_fr_iss_6/0-31913 [009] 162723.119257: funcgraph_entry:        0.273 us   |      zio_wait_for_children();
    z_fr_iss_6/0-31913 [009] 162723.119258: funcgraph_entry:        0.270 us   |      zio_wait_for_children();
    z_fr_iss_6/0-31913 [009] 162723.119258: funcgraph_entry:        0.280 us   |      zio_wait_for_children();
    z_fr_iss_6/0-31913 [009] 162723.119259: funcgraph_entry:        0.252 us   |      zio_pop_transforms();
    z_fr_iss_6/0-31913 [009] 162723.119260: funcgraph_entry:        0.249 us   |      vdev_stat_update();
    z_fr_iss_6/0-31913 [009] 162723.119260: funcgraph_entry:        0.257 us   |      zio_gang_tree_free();
    z_fr_iss_6/0-31913 [009] 162723.119261: funcgraph_entry:        0.244 us   |      zio_walk_parents();
    z_fr_iss_6/0-31913 [009] 162723.119262: funcgraph_exit:         5.561 us   |    }
    z_fr_iss_6/0-31913 [009] 162723.119262: funcgraph_exit:       + 27.761 us  |  }
    z_fr_iss_4/0-31905 [008] 162723.504328: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_4/0-31905 [008] 162723.504329: funcgraph_entry:        0.339 us   |    spa_get_dsl();
    z_fr_iss_4/0-31905 [008] 162723.504330: funcgraph_entry:        0.323 us   |    spa_is_initializing();
    z_fr_iss_4/0-31905 [008] 162723.504330: funcgraph_entry:        0.292 us   |    zio_free_bp_init();
    z_fr_iss_4/0-31905 [008] 162723.504331: funcgraph_entry:        0.301 us   |    spa_get_dsl();
    z_fr_iss_4/0-31905 [008] 162723.504331: funcgraph_entry:        0.342 us   |    spa_is_initializing();
    z_fr_iss_4/0-31905 [008] 162723.504332: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_4/0-31905 [008] 162723.504333: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_4/0-31905 [008] 162723.504333: funcgraph_entry:        0.604 us   |        spa_config_enter();
    z_fr_iss_4/0-31905 [008] 162723.504334: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_4/0-31905 [008] 162723.504334: funcgraph_entry:        0.414 us   |          spa_freeze_txg();
    z_fr_iss_4/0-31905 [008] 162723.504335: funcgraph_entry:        0.450 us   |          vdev_lookup_top();
    z_fr_iss_4/0-31905 [008] 162723.504336: funcgraph_entry:                   |          vdev_dirty() {
    z_fr_iss_4/0-31905 [008] 162723.504337: funcgraph_entry:        0.374 us   |            txg_list_add();
    z_fr_iss_4/0-31905 [008] 162723.504337: funcgraph_entry:        0.381 us   |            txg_list_add();
    z_fr_iss_4/0-31905 [008] 162723.504338: funcgraph_exit:         1.728 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504338: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_4/0-31905 [008] 162723.504339: funcgraph_entry:        0.473 us   |            space_map_find();
    z_fr_iss_4/0-31905 [008] 162723.504340: funcgraph_exit:         1.773 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504340: funcgraph_exit:         6.343 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504341: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_4/0-31905 [008] 162723.504341: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_4/0-31905 [008] 162723.504341: funcgraph_entry:        0.297 us   |          spa_freeze_txg();
    z_fr_iss_7/1-31918 [011] 162723.504342: funcgraph_entry:        0.311 us   |    spa_get_dsl();
    z_fr_iss_4/0-31905 [008] 162723.504342: funcgraph_entry:        0.316 us   |          vdev_lookup_top();
    z_fr_iss_7/1-31918 [011] 162723.504342: funcgraph_entry:        0.308 us   |    spa_is_initializing();
    z_fr_iss_4/0-31905 [008] 162723.504342: funcgraph_entry:                   |          vdev_dirty() {
    z_fr_iss_4/0-31905 [008] 162723.504343: funcgraph_entry:        0.405 us   |            txg_list_add();
    z_fr_iss_7/1-31918 [011] 162723.504343: funcgraph_entry:        0.300 us   |    zio_free_bp_init();
    z_fr_iss_4/0-31905 [008] 162723.504344: funcgraph_entry:        0.355 us   |            txg_list_add();
    z_fr_iss_7/1-31918 [011] 162723.504344: funcgraph_entry:        0.263 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504344: funcgraph_entry:        0.245 us   |    spa_is_initializing();
    z_fr_iss_4/0-31905 [008] 162723.504344: funcgraph_exit:         1.863 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504345: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_7/1-31918 [011] 162723.504345: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/1-31918 [011] 162723.504345: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_4/0-31905 [008] 162723.504345: funcgraph_entry:        0.382 us   |            space_map_find();
    z_fr_iss_7/1-31918 [011] 162723.504345: funcgraph_entry:        0.482 us   |        spa_config_enter();
    z_fr_iss_4/0-31905 [008] 162723.504346: funcgraph_exit:         1.371 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504346: funcgraph_exit:         5.590 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504347: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_4/0-31905 [008] 162723.504347: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/1-31918 [011] 162723.504347: funcgraph_entry:        0.276 us   |          spa_freeze_txg();
    z_fr_iss_4/0-31905 [008] 162723.504347: funcgraph_entry:        0.325 us   |          spa_freeze_txg();
    z_fr_iss_7/1-31918 [011] 162723.504347: funcgraph_entry:        0.322 us   |          vdev_lookup_top();
    z_fr_iss_4/0-31905 [008] 162723.504348: funcgraph_entry:        0.330 us   |          vdev_lookup_top();
    z_fr_iss_7/1-31918 [011] 162723.504348: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_4/0-31905 [008] 162723.504348: funcgraph_entry:                   |          vdev_dirty() {
    z_fr_iss_7/1-31918 [011] 162723.504349: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_4/0-31905 [008] 162723.504349: funcgraph_entry:        0.386 us   |            txg_list_add();
    z_fr_iss_7/1-31918 [011] 162723.504349: funcgraph_entry:        0.358 us   |              space_map_seg_compare();
    z_fr_iss_4/0-31905 [008] 162723.504349: funcgraph_entry:        0.349 us   |            txg_list_add();
    z_fr_iss_7/1-31918 [011] 162723.504350: funcgraph_exit:         1.186 us   |            }
    z_fr_iss_4/0-31905 [008] 162723.504350: funcgraph_exit:         1.646 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504350: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_4/0-31905 [008] 162723.504351: funcgraph_entry:        0.323 us   |            space_map_find();
    z_fr_iss_7/1-31918 [011] 162723.504351: funcgraph_exit:         2.647 us   |          }
    z_fr_iss_7/1-31918 [011] 162723.504351: funcgraph_exit:         4.630 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504351: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/1-31918 [011] 162723.504352: funcgraph_entry:        0.243 us   |          spa_freeze_txg();
    z_fr_iss_4/0-31905 [008] 162723.504352: funcgraph_exit:         1.348 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504352: funcgraph_exit:         5.392 us   |        }
    z_fr_iss_7/1-31918 [011] 162723.504352: funcgraph_entry:        0.300 us   |          vdev_lookup_top();
    z_fr_iss_4/0-31905 [008] 162723.504352: funcgraph_entry:        0.504 us   |        spa_config_exit();
    z_fr_iss_7/1-31918 [011] 162723.504353: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_4/0-31905 [008] 162723.504353: funcgraph_exit:       + 20.602 us  |      }
    z_fr_iss_7/1-31918 [011] 162723.504353: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/1-31918 [011] 162723.504353: funcgraph_entry:        0.277 us   |              space_map_seg_compare();
    z_fr_iss_4/0-31905 [008] 162723.504354: funcgraph_exit:       + 21.334 us  |    }
    z_fr_iss_4/0-31905 [008] 162723.504354: funcgraph_entry:        0.306 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504354: funcgraph_exit:         0.808 us   |            }
    z_fr_iss_4/0-31905 [008] 162723.504354: funcgraph_entry:        0.317 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_exit:         1.733 us   |          }
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_exit:         3.483 us   |        }
    z_fr_iss_4/0-31905 [008] 162723.504355: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/1-31918 [011] 162723.504355: funcgraph_entry:        0.253 us   |          spa_freeze_txg();
    z_fr_iss_4/0-31905 [008] 162723.504355: funcgraph_entry:        0.332 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504356: funcgraph_entry:        0.271 us   |          vdev_lookup_top();
    z_fr_iss_4/0-31905 [008] 162723.504356: funcgraph_entry:        0.322 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504357: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_4/0-31905 [008] 162723.504357: funcgraph_entry:        0.323 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504357: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_7/1-31918 [011] 162723.504357: funcgraph_entry:        0.315 us   |              space_map_seg_compare();
    z_fr_iss_4/0-31905 [008] 162723.504357: funcgraph_entry:        0.347 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504358: funcgraph_exit:         0.858 us   |            }
    z_fr_iss_7/1-31918 [011] 162723.504358: funcgraph_exit:         1.632 us   |          }
    z_fr_iss_4/0-31905 [008] 162723.504358: funcgraph_exit:         3.117 us   |    }
    z_fr_iss_7/1-31918 [011] 162723.504358: funcgraph_exit:         3.291 us   |        }
    z_fr_iss_4/0-31905 [008] 162723.504359: funcgraph_entry:        0.329 us   |    spa_get_dsl();
    z_fr_iss_7/1-31918 [011] 162723.504359: funcgraph_entry:        0.476 us   |        spa_config_exit();
    z_fr_iss_4/0-31905 [008] 162723.504359: funcgraph_entry:        0.303 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504359: funcgraph_exit:       + 14.449 us  |      }
    z_fr_iss_7/1-31918 [011] 162723.504360: funcgraph_exit:       + 15.043 us  |    }
    z_fr_iss_4/0-31905 [008] 162723.504360: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_7/1-31918 [011] 162723.504360: funcgraph_entry:        0.259 us   |    spa_get_dsl();
    z_fr_iss_4/0-31905 [008] 162723.504360: funcgraph_entry:        0.328 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504361: funcgraph_entry:        0.275 us   |    spa_is_initializing();
    z_fr_iss_4/0-31905 [008] 162723.504361: funcgraph_entry:        0.341 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504361: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_4/0-31905 [008] 162723.504361: funcgraph_entry:        0.315 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504361: funcgraph_entry:        0.295 us   |      zio_wait_for_children();
    z_fr_iss_4/0-31905 [008] 162723.504362: funcgraph_entry:        0.297 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504362: funcgraph_entry:        0.278 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504363: funcgraph_entry:        0.315 us   |      zio_walk_parents();
    z_fr_iss_4/0-31905 [008] 162723.504363: funcgraph_entry:        0.316 us   |      zio_pop_transforms();
    z_fr_iss_7/1-31918 [011] 162723.504363: funcgraph_entry:        0.273 us   |      zio_walk_parents();
    z_fr_iss_4/0-31905 [008] 162723.504363: funcgraph_entry:        0.331 us   |      vdev_stat_update();
    z_fr_iss_7/1-31918 [011] 162723.504364: funcgraph_exit:         2.771 us   |    }
    z_fr_iss_4/0-31905 [008] 162723.504364: funcgraph_entry:        0.380 us   |      zio_gang_tree_free();
    z_fr_iss_7/1-31918 [011] 162723.504364: funcgraph_entry:        0.261 us   |    spa_get_dsl();
    z_fr_iss_4/0-31905 [008] 162723.504365: funcgraph_entry:        0.329 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504365: funcgraph_entry:        0.254 us   |    spa_is_initializing();
    z_fr_iss_7/1-31918 [011] 162723.504365: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_4/0-31905 [008] 162723.504365: funcgraph_entry:        0.350 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504366: funcgraph_entry:        0.302 us   |      zio_wait_for_children();
    z_fr_iss_4/0-31905 [008] 162723.504366: funcgraph_entry:        0.930 us   |      zio_remove_child();
    z_fr_iss_7/1-31918 [011] 162723.504366: funcgraph_entry:        0.270 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504367: funcgraph_entry:        0.299 us   |      zio_wait_for_children();
    z_fr_iss_7/1-31918 [011] 162723.504367: funcgraph_entry:        0.304 us   |      zio_wait_for_children();
    z_fr_iss_4/0-31905 [008] 162723.504368: funcgraph_exit:         7.845 us   |    }
    z_fr_iss_7/1-31918 [011] 162723.504368: funcgraph_entry:        0.271 us   |      zio_pop_transforms();
    z_fr_iss_4/0-31905 [008] 162723.504368: funcgraph_exit:       + 39.886 us  |  }
    z_fr_iss_7/1-31918 [011] 162723.504368: funcgraph_entry:        0.278 us   |      vdev_stat_update();
    z_fr_iss_7/1-31918 [011] 162723.504369: funcgraph_entry:        0.283 us   |      zio_gang_tree_free();
    z_fr_iss_7/1-31918 [011] 162723.504370: funcgraph_entry:        0.261 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504370: funcgraph_entry:        0.294 us   |      zio_walk_parents();
    z_fr_iss_7/1-31918 [011] 162723.504371: funcgraph_entry:        0.849 us   |      zio_remove_child();
    z_fr_iss_7/1-31918 [011] 162723.504372: funcgraph_exit:         6.805 us   |    }
    z_fr_iss_7/1-31918 [011] 162723.504372: funcgraph_exit:       + 31.896 us  |  }
    z_fr_iss_1/0-31893 [009] 162723.504379: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_1/0-31893 [009] 162723.504380: funcgraph_entry:        0.441 us   |    spa_get_dsl();
    z_fr_iss_1/0-31893 [009] 162723.504380: funcgraph_entry:        0.321 us   |    spa_is_initializing();
    z_fr_iss_1/0-31893 [009] 162723.504381: funcgraph_entry:        0.318 us   |    zio_free_bp_init();
    z_fr_iss_1/0-31893 [009] 162723.504382: funcgraph_entry:        0.294 us   |    spa_get_dsl();
    z_fr_iss_1/0-31893 [009] 162723.504383: funcgraph_entry:        0.278 us   |    spa_is_initializing();
    z_fr_iss_1/0-31893 [009] 162723.504383: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_1/0-31893 [009] 162723.504384: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_1/0-31893 [009] 162723.504384: funcgraph_entry:        0.586 us   |        spa_config_enter();
    z_fr_iss_1/0-31893 [009] 162723.504385: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_1/0-31893 [009] 162723.504385: funcgraph_entry:        0.356 us   |          spa_freeze_txg();
    z_fr_iss_1/0-31893 [009] 162723.504386: funcgraph_entry:        0.417 us   |          vdev_lookup_top();
    z_fr_iss_1/0-31893 [009] 162723.504387: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_1/0-31893 [009] 162723.504387: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/0-31893 [009] 162723.504388: funcgraph_entry:        0.466 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504389: funcgraph_entry:        0.360 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504389: funcgraph_exit:         2.119 us   |            }
    z_fr_iss_1/0-31893 [009] 162723.504391: funcgraph_exit:         3.579 us   |          }
    z_fr_iss_1/0-31893 [009] 162723.504391: funcgraph_exit:         5.931 us   |        }
    z_fr_iss_1/0-31893 [009] 162723.504391: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_1/0-31893 [009] 162723.504391: funcgraph_entry:        0.320 us   |          spa_freeze_txg();
    z_fr_iss_1/0-31893 [009] 162723.504392: funcgraph_entry:        0.393 us   |          vdev_lookup_top();
    z_fr_iss_1/0-31893 [009] 162723.504393: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_1/0-31893 [009] 162723.504393: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/0-31893 [009] 162723.504394: funcgraph_entry:        0.337 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504394: funcgraph_entry:        0.321 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504395: funcgraph_exit:         1.721 us   |            }
    z_fr_iss_1/0-31893 [009] 162723.504396: funcgraph_exit:         2.582 us   |          }
    z_fr_iss_1/0-31893 [009] 162723.504396: funcgraph_exit:         4.680 us   |        }
    z_fr_iss_1/0-31893 [009] 162723.504396: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_1/0-31893 [009] 162723.504396: funcgraph_entry:        0.299 us   |          spa_freeze_txg();
    z_fr_iss_1/0-31893 [009] 162723.504397: funcgraph_entry:        0.360 us   |          vdev_lookup_top();
    z_fr_iss_1/0-31893 [009] 162723.504398: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_1/0-31893 [009] 162723.504398: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/0-31893 [009] 162723.504398: funcgraph_entry:        0.348 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504399: funcgraph_entry:        0.393 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504400: funcgraph_exit:         1.926 us   |            }
    z_fr_iss_1/0-31893 [009] 162723.504401: funcgraph_exit:         3.006 us   |          }
    z_fr_iss_1/0-31893 [009] 162723.504401: funcgraph_exit:         5.011 us   |        }
    z_fr_iss_1/0-31893 [009] 162723.504401: funcgraph_entry:        0.502 us   |        spa_config_exit();
    z_fr_iss_1/0-31893 [009] 162723.504402: funcgraph_exit:       + 18.648 us  |      }
    z_fr_iss_1/0-31893 [009] 162723.504403: funcgraph_exit:       + 19.411 us  |    }
    z_fr_iss_1/0-31893 [009] 162723.504403: funcgraph_entry:        0.381 us   |    spa_get_dsl();
    z_fr_iss_1/0-31893 [009] 162723.504404: funcgraph_entry:        0.317 us   |    spa_is_initializing();
    z_fr_iss_1/0-31893 [009] 162723.504404: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_1/0-31893 [009] 162723.504405: funcgraph_entry:        0.345 us   |      zio_wait_for_children();
    z_fr_iss_1/0-31893 [009] 162723.504405: funcgraph_entry:        0.325 us   |      zio_wait_for_children();
    z_fr_iss_1/0-31893 [009] 162723.504406: funcgraph_entry:        0.340 us   |      zio_walk_parents();
    z_fr_iss_1/0-31893 [009] 162723.504407: funcgraph_entry:        0.348 us   |      zio_walk_parents();
    z_fr_iss_1/0-31893 [009] 162723.504407: funcgraph_exit:         3.145 us   |    }
    z_fr_iss_6/1-31914 [008] 162723.504408: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_1/0-31893 [009] 162723.504408: funcgraph_entry:        0.327 us   |    spa_get_dsl();
    z_fr_iss_6/1-31914 [008] 162723.504408: funcgraph_entry:        0.335 us   |    spa_get_dsl();
    z_fr_iss_1/0-31893 [009] 162723.504409: funcgraph_entry:        0.777 us   |    spa_is_initializing();
    z_fr_iss_6/1-31914 [008] 162723.504409: funcgraph_entry:        0.327 us   |    spa_is_initializing();
    z_fr_iss_1/0-31893 [009] 162723.504410: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_6/1-31914 [008] 162723.504410: funcgraph_entry:        0.332 us   |    zio_free_bp_init();
    z_fr_iss_1/0-31893 [009] 162723.504410: funcgraph_entry:        0.318 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504410: funcgraph_entry:        0.301 us   |    spa_get_dsl();
    z_fr_iss_1/0-31893 [009] 162723.504410: funcgraph_entry:        0.361 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504411: funcgraph_entry:        0.304 us   |    spa_is_initializing();
    z_fr_iss_1/0-31893 [009] 162723.504411: funcgraph_entry:        0.312 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504412: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_1/0-31893 [009] 162723.504412: funcgraph_entry:        0.325 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504412: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_6/1-31914 [008] 162723.504412: funcgraph_entry:        0.546 us   |        spa_config_enter();
    z_fr_iss_1/0-31893 [009] 162723.504412: funcgraph_entry:        0.354 us   |      zio_pop_transforms();
    z_fr_iss_1/0-31893 [009] 162723.504413: funcgraph_entry:        0.334 us   |      vdev_stat_update();
    z_fr_iss_6/1-31914 [008] 162723.504413: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_6/1-31914 [008] 162723.504414: funcgraph_entry:        0.321 us   |          spa_freeze_txg();
    z_fr_iss_1/0-31893 [009] 162723.504414: funcgraph_entry:        0.274 us   |      zio_gang_tree_free();
    z_fr_iss_6/1-31914 [008] 162723.504414: funcgraph_entry:        0.378 us   |          vdev_lookup_top();
    z_fr_iss_1/0-31893 [009] 162723.504415: funcgraph_entry:        0.346 us   |      zio_walk_parents();
    z_fr_iss_1/0-31893 [009] 162723.504415: funcgraph_entry:        0.290 us   |      zio_walk_parents();
    z_fr_iss_6/1-31914 [008] 162723.504415: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_6/1-31914 [008] 162723.504416: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/0-31893 [009] 162723.504416: funcgraph_entry:        0.937 us   |      zio_remove_child();
    z_fr_iss_6/1-31914 [008] 162723.504416: funcgraph_entry:        0.407 us   |              space_map_seg_compare();
    z_fr_iss_6/1-31914 [008] 162723.504417: funcgraph_entry:        0.341 us   |              space_map_seg_compare();
    z_fr_iss_1/0-31893 [009] 162723.504417: funcgraph_exit:         7.724 us   |    }
    z_fr_iss_6/1-31914 [008] 162723.504418: funcgraph_exit:         1.952 us   |            }
    z_fr_iss_1/0-31893 [009] 162723.504418: funcgraph_exit:       + 39.878 us  |  }
    z_fr_iss_6/1-31914 [008] 162723.504418: funcgraph_exit:         3.103 us   |          }
    z_fr_iss_6/1-31914 [008] 162723.504419: funcgraph_exit:         5.240 us   |        }
    z_fr_iss_6/1-31914 [008] 162723.504419: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_6/1-31914 [008] 162723.504419: funcgraph_entry:        0.308 us   |          spa_freeze_txg();
    z_fr_iss_6/1-31914 [008] 162723.504420: funcgraph_entry:        0.318 us   |          vdev_lookup_top();
    z_fr_iss_6/1-31914 [008] 162723.504420: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_6/1-31914 [008] 162723.504421: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_6/1-31914 [008] 162723.504421: funcgraph_entry:        0.319 us   |              space_map_seg_compare();
    z_fr_iss_6/1-31914 [008] 162723.504422: funcgraph_entry:        0.296 us   |              space_map_seg_compare();
    z_fr_iss_6/1-31914 [008] 162723.504422: funcgraph_exit:         1.676 us   |            }
    z_fr_iss_6/1-31914 [008] 162723.504423: funcgraph_exit:         2.411 us   |          }
    z_fr_iss_6/1-31914 [008] 162723.504423: funcgraph_exit:         4.333 us   |        }
    z_fr_iss_6/1-31914 [008] 162723.504424: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_6/1-31914 [008] 162723.504424: funcgraph_entry:        0.318 us   |          spa_freeze_txg();
    z_fr_iss_6/1-31914 [008] 162723.504424: funcgraph_entry:        0.306 us   |          vdev_lookup_top();
    z_fr_iss_6/1-31914 [008] 162723.504425: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_6/1-31914 [008] 162723.504426: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_6/1-31914 [008] 162723.504426: funcgraph_entry:        0.337 us   |              space_map_seg_compare();
    z_fr_iss_6/1-31914 [008] 162723.504427: funcgraph_entry:        0.285 us   |              space_map_seg_compare();
    z_fr_iss_6/1-31914 [008] 162723.504427: funcgraph_exit:         1.672 us   |            }
    z_fr_iss_6/1-31914 [008] 162723.504428: funcgraph_exit:         2.489 us   |          }
    z_fr_iss_6/1-31914 [008] 162723.504428: funcgraph_exit:         4.501 us   |        }
    z_fr_iss_6/1-31914 [008] 162723.504428: funcgraph_entry:        0.475 us   |        spa_config_exit();
    z_fr_iss_6/1-31914 [008] 162723.504429: funcgraph_exit:       + 17.270 us  |      }
    z_fr_iss_6/1-31914 [008] 162723.504429: funcgraph_exit:       + 17.860 us  |    }
    z_fr_iss_6/1-31914 [008] 162723.504430: funcgraph_entry:        0.306 us   |    spa_get_dsl();
    z_fr_iss_6/1-31914 [008] 162723.504430: funcgraph_entry:        0.325 us   |    spa_is_initializing();
    z_fr_iss_6/1-31914 [008] 162723.504431: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_6/1-31914 [008] 162723.504431: funcgraph_entry:        0.349 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504432: funcgraph_entry:        0.325 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504433: funcgraph_entry:        0.376 us   |      zio_walk_parents();
    z_fr_iss_6/1-31914 [008] 162723.504433: funcgraph_entry:        0.332 us   |      zio_walk_parents();
    z_fr_iss_6/1-31914 [008] 162723.504434: funcgraph_exit:         2.981 us   |    }
    z_fr_iss_6/1-31914 [008] 162723.504434: funcgraph_entry:        0.318 us   |    spa_get_dsl();
    z_fr_iss_6/1-31914 [008] 162723.504435: funcgraph_entry:        0.329 us   |    spa_is_initializing();
    z_fr_iss_6/1-31914 [008] 162723.504436: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_6/1-31914 [008] 162723.504436: funcgraph_entry:        0.377 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504437: funcgraph_entry:        0.361 us   |      zio_wait_for_children();
    z_fr_iss_6/1-31914 [008] 162723.504437: funcgraph_entry:        0.307 us   |      zio_wait_for_children();
    z_fr_iss_1/1-31894 [000] 162723.504437: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_1/1-31894 [000] 162723.504438: funcgraph_entry:        0.301 us   |    spa_get_dsl();
    z_fr_iss_6/1-31914 [008] 162723.504438: funcgraph_entry:        0.326 us   |      zio_wait_for_children();
    z_fr_iss_1/1-31894 [000] 162723.504438: funcgraph_entry:        0.266 us   |    spa_is_initializing();
    z_fr_iss_6/1-31914 [008] 162723.504439: funcgraph_entry:        0.289 us   |      zio_pop_transforms();
    z_fr_iss_1/1-31894 [000] 162723.504439: funcgraph_entry:        0.349 us   |    zio_free_bp_init();
    z_fr_iss_6/1-31914 [008] 162723.504439: funcgraph_entry:        0.325 us   |      vdev_stat_update();
    z_fr_iss_6/1-31914 [008] 162723.504440: funcgraph_entry:        0.292 us   |      zio_gang_tree_free();
    z_fr_iss_1/1-31894 [000] 162723.504440: funcgraph_entry:        0.275 us   |    spa_get_dsl();
    z_fr_iss_1/1-31894 [000] 162723.504440: funcgraph_entry:        0.318 us   |    spa_is_initializing();
    z_fr_iss_6/1-31914 [008] 162723.504440: funcgraph_entry:        0.297 us   |      zio_walk_parents();
    z_fr_iss_1/1-31894 [000] 162723.504441: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_6/1-31914 [008] 162723.504441: funcgraph_entry:        0.316 us   |      zio_walk_parents();
    z_fr_iss_1/1-31894 [000] 162723.504441: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_1/1-31894 [000] 162723.504442: funcgraph_entry:        0.544 us   |        spa_config_enter();
    z_fr_iss_6/1-31914 [008] 162723.504442: funcgraph_entry:        1.128 us   |      zio_remove_child();
    z_fr_iss_1/1-31894 [000] 162723.504443: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_1/1-31894 [000] 162723.504443: funcgraph_entry:        0.306 us   |          spa_freeze_txg();
    z_fr_iss_1/1-31894 [000] 162723.504443: funcgraph_entry:        0.330 us   |          vdev_lookup_top();
    z_fr_iss_6/1-31914 [008] 162723.504444: funcgraph_exit:         7.911 us   |    }
    z_fr_iss_6/1-31914 [008] 162723.504444: funcgraph_exit:       + 36.382 us  |  }
    z_fr_iss_1/1-31894 [000] 162723.504444: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_1/1-31894 [000] 162723.504444: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/1-31894 [000] 162723.504445: funcgraph_entry:        0.384 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504446: funcgraph_entry:        0.262 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504446: funcgraph_entry:        0.294 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504447: funcgraph_exit:         2.310 us   |            }
    z_fr_iss_1/1-31894 [000] 162723.504448: funcgraph_exit:         3.655 us   |          }
    z_fr_iss_1/1-31894 [000] 162723.504448: funcgraph_exit:         5.632 us   |        }
    z_fr_iss_1/1-31894 [000] 162723.504448: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_1/1-31894 [000] 162723.504449: funcgraph_entry:        0.245 us   |          spa_freeze_txg();
    z_fr_iss_1/1-31894 [000] 162723.504449: funcgraph_entry:        0.264 us   |          vdev_lookup_top();
    z_fr_iss_1/1-31894 [000] 162723.504450: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_1/1-31894 [000] 162723.504450: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/1-31894 [000] 162723.504450: funcgraph_entry:        0.303 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504451: funcgraph_entry:        0.266 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504452: funcgraph_entry:        0.344 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504452: funcgraph_exit:         2.223 us   |            }
    z_fr_iss_1/1-31894 [000] 162723.504453: funcgraph_exit:         2.980 us   |          }
    z_fr_iss_1/1-31894 [000] 162723.504453: funcgraph_exit:         4.801 us   |        }
    z_fr_iss_1/1-31894 [000] 162723.504454: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_1/1-31894 [000] 162723.504454: funcgraph_entry:        0.284 us   |          spa_freeze_txg();
    z_fr_iss_1/1-31894 [000] 162723.504454: funcgraph_entry:        0.268 us   |          vdev_lookup_top();
    z_fr_iss_1/1-31894 [000] 162723.504455: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_1/1-31894 [000] 162723.504455: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_1/1-31894 [000] 162723.504455: funcgraph_entry:        0.276 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504456: funcgraph_entry:        0.346 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504457: funcgraph_entry:        0.259 us   |              space_map_seg_compare();
    z_fr_iss_1/1-31894 [000] 162723.504457: funcgraph_exit:         1.982 us   |            }
    z_fr_iss_1/1-31894 [000] 162723.504458: funcgraph_exit:         2.734 us   |          }
    z_fr_iss_1/1-31894 [000] 162723.504458: funcgraph_exit:         4.403 us   |        }
    z_fr_iss_1/1-31894 [000] 162723.504458: funcgraph_entry:        0.450 us   |        spa_config_exit();
    z_fr_iss_1/1-31894 [000] 162723.504459: funcgraph_exit:       + 17.568 us  |      }
    z_fr_iss_1/1-31894 [000] 162723.504459: funcgraph_exit:       + 18.129 us  |    }
    z_fr_iss_1/1-31894 [000] 162723.504459: funcgraph_entry:        0.254 us   |    spa_get_dsl();
    z_fr_iss_1/1-31894 [000] 162723.504460: funcgraph_entry:        0.269 us   |    spa_is_initializing();
    z_fr_iss_1/1-31894 [000] 162723.504460: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_1/1-31894 [000] 162723.504461: funcgraph_entry:        0.288 us   |      zio_wait_for_children();
    z_fr_iss_1/1-31894 [000] 162723.504461: funcgraph_entry:        0.275 us   |      zio_wait_for_children();
    z_fr_iss_1/1-31894 [000] 162723.504462: funcgraph_entry:        0.321 us   |      zio_walk_parents();
    z_fr_iss_1/1-31894 [000] 162723.504463: funcgraph_entry:        0.324 us   |      zio_walk_parents();
    z_fr_iss_1/1-31894 [000] 162723.504464: funcgraph_exit:         3.043 us   |    }
    z_fr_iss_1/1-31894 [000] 162723.504464: funcgraph_entry:        0.295 us   |    spa_get_dsl();
    z_fr_iss_1/1-31894 [000] 162723.504464: funcgraph_entry:        0.311 us   |    spa_is_initializing();
    z_fr_iss_1/1-31894 [000] 162723.504465: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_1/1-31894 [000] 162723.504465: funcgraph_entry:        0.353 us   |      zio_wait_for_children();
    z_fr_iss_1/1-31894 [000] 162723.504466: funcgraph_entry:        0.328 us   |      zio_wait_for_children();
    z_fr_iss_1/1-31894 [000] 162723.504467: funcgraph_entry:        0.299 us   |      zio_wait_for_children();
    z_fr_iss_0/1-31890 [009] 162723.504467: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_1/1-31894 [000] 162723.504467: funcgraph_entry:        0.338 us   |      zio_wait_for_children();
    z_fr_iss_0/1-31890 [009] 162723.504467: funcgraph_entry:        0.289 us   |    spa_get_dsl();
    z_fr_iss_1/1-31894 [000] 162723.504468: funcgraph_entry:        0.299 us   |      zio_pop_transforms();
    z_fr_iss_0/1-31890 [009] 162723.504468: funcgraph_entry:        0.264 us   |    spa_is_initializing();
    z_fr_iss_1/1-31894 [000] 162723.504469: funcgraph_entry:        0.328 us   |      vdev_stat_update();
    z_fr_iss_0/1-31890 [009] 162723.504469: funcgraph_entry:        0.311 us   |    zio_free_bp_init();
    z_fr_iss_0/1-31890 [009] 162723.504469: funcgraph_entry:        0.249 us   |    spa_get_dsl();
    z_fr_iss_1/1-31894 [000] 162723.504469: funcgraph_entry:        0.301 us   |      zio_gang_tree_free();
    z_fr_iss_0/1-31890 [009] 162723.504470: funcgraph_entry:        0.242 us   |    spa_is_initializing();
    z_fr_iss_1/1-31894 [000] 162723.504470: funcgraph_entry:        0.325 us   |      zio_walk_parents();
    z_fr_iss_0/1-31890 [009] 162723.504470: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_0/1-31890 [009] 162723.504470: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_1/1-31894 [000] 162723.504471: funcgraph_entry:        0.315 us   |      zio_walk_parents();
    z_fr_iss_0/1-31890 [009] 162723.504471: funcgraph_entry:        0.442 us   |        spa_config_enter();
    z_fr_iss_1/1-31894 [000] 162723.504471: funcgraph_entry:        0.840 us   |      zio_remove_child();
    z_fr_iss_0/1-31890 [009] 162723.504471: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_0/1-31890 [009] 162723.504472: funcgraph_entry:        0.269 us   |          spa_freeze_txg();
    z_fr_iss_0/1-31890 [009] 162723.504472: funcgraph_entry:        0.341 us   |          vdev_lookup_top();
    z_fr_iss_1/1-31894 [000] 162723.504473: funcgraph_exit:         7.582 us   |    }
    z_fr_iss_1/1-31894 [000] 162723.504473: funcgraph_exit:       + 35.846 us  |  }
    z_fr_iss_0/1-31890 [009] 162723.504473: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_0/1-31890 [009] 162723.504473: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_0/1-31890 [009] 162723.504474: funcgraph_entry:        0.357 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504475: funcgraph_entry:        0.273 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504475: funcgraph_entry:        0.278 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504476: funcgraph_exit:         2.256 us   |            }
    z_fr_iss_0/1-31890 [009] 162723.504477: funcgraph_exit:         3.425 us   |          }
    z_fr_iss_0/1-31890 [009] 162723.504477: funcgraph_exit:         5.304 us   |        }
    z_fr_iss_0/1-31890 [009] 162723.504477: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_0/1-31890 [009] 162723.504477: funcgraph_entry:        0.254 us   |          spa_freeze_txg();
    z_fr_iss_0/1-31890 [009] 162723.504478: funcgraph_entry:        0.264 us   |          vdev_lookup_top();
    z_fr_iss_0/1-31890 [009] 162723.504478: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_0/1-31890 [009] 162723.504479: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_0/1-31890 [009] 162723.504479: funcgraph_entry:        0.316 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504480: funcgraph_entry:        0.278 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504480: funcgraph_entry:        0.323 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504481: funcgraph_exit:         2.396 us   |            }
    z_fr_iss_0/1-31890 [009] 162723.504482: funcgraph_exit:         3.374 us   |          }
    z_fr_iss_0/1-31890 [009] 162723.504482: funcgraph_exit:         5.006 us   |        }
    z_fr_iss_0/1-31890 [009] 162723.504482: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_0/1-31890 [009] 162723.504483: funcgraph_entry:        0.315 us   |          spa_freeze_txg();
    z_fr_iss_0/1-31890 [009] 162723.504483: funcgraph_entry:        0.271 us   |          vdev_lookup_top();
    z_fr_iss_0/1-31890 [009] 162723.504484: funcgraph_entry:                   |          space_map_add() {
    z_fr_iss_0/1-31890 [009] 162723.504484: funcgraph_entry:                   |            space_map_find() {
    z_fr_iss_0/1-31890 [009] 162723.504484: funcgraph_entry:        0.259 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504485: funcgraph_entry:        0.271 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504485: funcgraph_entry:        0.264 us   |              space_map_seg_compare();
    z_fr_iss_0/1-31890 [009] 162723.504486: funcgraph_exit:         1.910 us   |            }
    z_fr_iss_0/1-31890 [009] 162723.504487: funcgraph_exit:         2.719 us   |          }
    z_fr_iss_0/1-31890 [009] 162723.504487: funcgraph_exit:         4.722 us   |        }
    z_fr_iss_0/1-31890 [009] 162723.504487: funcgraph_entry:        0.356 us   |        spa_config_exit();
    z_fr_iss_0/1-31890 [009] 162723.504488: funcgraph_exit:       + 17.511 us  |      }
    z_fr_iss_0/1-31890 [009] 162723.504488: funcgraph_exit:       + 18.026 us  |    }
    z_fr_iss_0/1-31890 [009] 162723.504489: funcgraph_entry:        0.303 us   |    spa_get_dsl();
    z_fr_iss_0/1-31890 [009] 162723.504489: funcgraph_entry:        0.321 us   |    spa_is_initializing();
    z_fr_iss_0/1-31890 [009] 162723.504490: funcgraph_entry:                   |    zio_ready() {
    z_fr_iss_0/1-31890 [009] 162723.504490: funcgraph_entry:        0.292 us   |      zio_wait_for_children();
    z_fr_iss_0/1-31890 [009] 162723.504490: funcgraph_entry:        0.289 us   |      zio_wait_for_children();
    z_fr_iss_0/1-31890 [009] 162723.504491: funcgraph_entry:        0.296 us   |      zio_walk_parents();
    z_fr_iss_0/1-31890 [009] 162723.504492: funcgraph_entry:        0.259 us   |      zio_walk_parents();
    z_fr_iss_0/1-31890 [009] 162723.504492: funcgraph_exit:         2.500 us   |    }
    z_fr_iss_0/1-31890 [009] 162723.504492: funcgraph_entry:        0.247 us   |    spa_get_dsl();
    z_fr_iss_0/1-31890 [009] 162723.504493: funcgraph_entry:        0.248 us   |    spa_is_initializing();
    z_fr_iss_0/1-31890 [009] 162723.504493: funcgraph_entry:                   |    zio_done() {
    z_fr_iss_0/1-31890 [009] 162723.504494: funcgraph_entry:        0.267 us   |      zio_wait_for_children();
    z_fr_iss_7/0-31917 [008] 162723.504494: funcgraph_entry:                   |  zio_execute() {
    z_fr_iss_0/1-31890 [009] 162723.504494: funcgraph_entry:        0.269 us   |      zio_wait_for_children();
    z_fr_iss_7/0-31917 [008] 162723.504494: funcgraph_entry:        0.302 us   |    spa_get_dsl();
    z_fr_iss_0/1-31890 [009] 162723.504495: funcgraph_entry:        0.285 us   |      zio_wait_for_children();
    z_fr_iss_7/0-31917 [008] 162723.504495: funcgraph_entry:        0.290 us   |    spa_is_initializing();
    z_fr_iss_0/1-31890 [009] 162723.504495: funcgraph_entry:        0.261 us   |      zio_wait_for_children();
    z_fr_iss_7/0-31917 [008] 162723.504496: funcgraph_entry:        0.330 us   |    zio_free_bp_init();
    z_fr_iss_0/1-31890 [009] 162723.504496: funcgraph_entry:        0.262 us   |      zio_pop_transforms();
    z_fr_iss_0/1-31890 [009] 162723.504496: funcgraph_entry:        0.280 us   |      vdev_stat_update();
    z_fr_iss_7/0-31917 [008] 162723.504496: funcgraph_entry:        0.275 us   |    spa_get_dsl();
    z_fr_iss_0/1-31890 [009] 162723.504497: funcgraph_entry:        0.250 us   |      zio_gang_tree_free();
    z_fr_iss_7/0-31917 [008] 162723.504497: funcgraph_entry:        0.271 us   |    spa_is_initializing();
    z_fr_iss_0/1-31890 [009] 162723.504497: funcgraph_entry:        0.287 us   |      zio_walk_parents();
    z_fr_iss_7/0-31917 [008] 162723.504498: funcgraph_entry:                   |    zio_dva_free() {
    z_fr_iss_7/0-31917 [008] 162723.504498: funcgraph_entry:                   |      metaslab_free() {
    z_fr_iss_0/1-31890 [009] 162723.504498: funcgraph_entry:        0.246 us   |      zio_walk_parents();
    z_fr_iss_7/0-31917 [008] 162723.504498: funcgraph_entry:        0.530 us   |        spa_config_enter();
    z_fr_iss_0/1-31890 [009] 162723.504498: funcgraph_entry:        0.723 us   |      zio_remove_child();
    z_fr_iss_7/0-31917 [008] 162723.504499: funcgraph_entry:                   |        metaslab_free_dva() {
    z_fr_iss_7/0-31917 [008] 162723.504499: funcgraph_entry:        0.276 us   |          spa_freeze_txg();
    z_fr_iss_0/1-31890 [009] 162723.504500: funcgraph_exit:         6.186 us   |    }
    z_fr_iss_0/1-31890 [009] 162723.504500: funcgraph_exit:       + 33.279 us  |  }
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
