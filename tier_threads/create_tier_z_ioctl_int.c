   z_ioctl_int/0-2182  [010] 501241.664536: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [010] 501241.664537: funcgraph_entry:        0.597 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.664538: funcgraph_entry:        0.590 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.664541: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [010] 501241.664541: funcgraph_entry:        0.879 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.664543: funcgraph_exit:         2.662 us   |    }
   z_ioctl_int/0-2182  [010] 501241.664544: funcgraph_entry:        0.623 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.664545: funcgraph_entry:        0.629 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.664547: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [010] 501241.664547: funcgraph_entry:        0.563 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.664549: funcgraph_entry:        0.750 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.664550: funcgraph_entry:        0.777 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.664552: funcgraph_entry:        0.782 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.664553: funcgraph_entry:        0.637 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.664555: funcgraph_entry:        0.883 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.664556: funcgraph_entry:        0.653 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.664558: funcgraph_entry:        0.736 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.664559: funcgraph_entry:        0.667 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.664561: funcgraph_entry:        2.072 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.664564: funcgraph_exit:       + 17.259 us  |    }
   z_ioctl_int/0-2182  [010] 501241.664565: funcgraph_exit:       + 28.576 us  |  }
   z_ioctl_int/0-2182  [000] 501241.730097: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [000] 501241.730098: funcgraph_entry:        0.331 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.730098: funcgraph_entry:        0.409 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.730099: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [000] 501241.730100: funcgraph_entry:        0.473 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730101: funcgraph_exit:         1.322 us   |    }
   z_ioctl_int/0-2182  [000] 501241.730101: funcgraph_entry:        0.296 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.730102: funcgraph_entry:        0.329 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.730103: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [000] 501241.730103: funcgraph_entry:        0.295 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730104: funcgraph_entry:        0.298 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730104: funcgraph_entry:        0.296 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730105: funcgraph_entry:        0.298 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730105: funcgraph_entry:        0.316 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [000] 501241.730106: funcgraph_entry:        0.493 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [000] 501241.730107: funcgraph_entry:        0.287 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [000] 501241.730108: funcgraph_entry:        0.322 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.730108: funcgraph_entry:        0.300 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.730109: funcgraph_entry:        0.895 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [000] 501241.730110: funcgraph_entry:        0.302 us   |      spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.730111: funcgraph_entry:        0.335 us   |      spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.730112: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-2182  [000] 501241.730112: funcgraph_entry:        0.371 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730113: funcgraph_entry:        0.316 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730113: funcgraph_entry:        0.297 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730114: funcgraph_entry:        0.300 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730114: funcgraph_entry:        0.282 us   |        zio_pop_transforms();
   z_ioctl_int/0-2182  [000] 501241.730115: funcgraph_entry:        0.327 us   |        vdev_stat_update();
   z_ioctl_int/0-2182  [000] 501241.730116: funcgraph_entry:        0.280 us   |        zio_gang_tree_free();
   z_ioctl_int/0-2182  [000] 501241.730116: funcgraph_entry:        0.311 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.730117: funcgraph_entry:        0.298 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.730117: funcgraph_entry:        0.628 us   |        zio_remove_child();
   z_ioctl_int/0-2182  [000] 501241.730118: funcgraph_entry:        0.300 us   |        spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.730119: funcgraph_entry:        0.320 us   |        spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.730120: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-2182  [000] 501241.730120: funcgraph_entry:        0.317 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730121: funcgraph_entry:        0.298 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730122: funcgraph_entry:        0.304 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730122: funcgraph_entry:        0.298 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.730123: funcgraph_entry:        0.284 us   |          zio_pop_transforms();
   z_ioctl_int/0-2182  [000] 501241.730123: funcgraph_entry:        0.296 us   |          vdev_stat_update();
   z_ioctl_int/0-2182  [000] 501241.730124: funcgraph_entry:        0.271 us   |          zio_gang_tree_free();
   z_ioctl_int/0-2182  [000] 501241.730125: funcgraph_entry:        0.304 us   |          zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.730127: funcgraph_exit:         6.954 us   |        }
   z_ioctl_int/0-2182  [000] 501241.730128: funcgraph_exit:       + 16.185 us  |      }
   z_ioctl_int/0-2182  [000] 501241.730128: funcgraph_exit:       + 25.776 us  |    }
   z_ioctl_int/0-2182  [000] 501241.730129: funcgraph_exit:       + 31.693 us  |  }
   z_ioctl_int/0-2182  [000] 501241.748665: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [000] 501241.748666: funcgraph_entry:        0.335 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.748667: funcgraph_entry:        0.320 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.748668: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [000] 501241.748668: funcgraph_entry:        0.360 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.748669: funcgraph_exit:         1.183 us   |    }
   z_ioctl_int/0-2182  [000] 501241.748669: funcgraph_entry:        0.317 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.748670: funcgraph_entry:        0.290 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.748671: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [000] 501241.748671: funcgraph_entry:        0.318 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.748672: funcgraph_entry:        0.311 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.748672: funcgraph_entry:        0.349 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.748673: funcgraph_entry:        0.348 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.748674: funcgraph_entry:        0.413 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [000] 501241.748675: funcgraph_entry:        0.496 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [000] 501241.748676: funcgraph_entry:        0.501 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [000] 501241.748677: funcgraph_entry:        0.528 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.748678: funcgraph_entry:        0.473 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.748679: funcgraph_entry:        1.135 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [000] 501241.748694: funcgraph_exit:       + 22.837 us  |    }
   z_ioctl_int/0-2182  [000] 501241.748694: funcgraph_exit:       + 28.860 us  |  }
   z_ioctl_int/0-2182  [010] 501241.781994: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [010] 501241.781994: funcgraph_entry:        0.532 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.781996: funcgraph_entry:        0.564 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.781997: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [010] 501241.781998: funcgraph_entry:        0.714 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.781999: funcgraph_exit:         2.079 us   |    }
   z_ioctl_int/0-2182  [010] 501241.782000: funcgraph_entry:        0.464 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.782001: funcgraph_entry:        0.506 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.782002: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [010] 501241.782002: funcgraph_entry:        0.449 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782003: funcgraph_entry:        0.490 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782004: funcgraph_entry:        0.454 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782005: funcgraph_entry:        0.446 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782006: funcgraph_entry:        0.456 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.782007: funcgraph_entry:        0.653 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.782008: funcgraph_entry:        0.410 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.782010: funcgraph_entry:        0.520 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.782011: funcgraph_entry:        0.450 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.782012: funcgraph_entry:        1.176 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.782014: funcgraph_entry:        0.423 us   |      spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.782015: funcgraph_entry:        0.422 us   |      spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.782016: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-2182  [010] 501241.782016: funcgraph_entry:        0.467 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782017: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782018: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782019: funcgraph_entry:        0.486 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782020: funcgraph_entry:        0.417 us   |        zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.782020: funcgraph_entry:        0.417 us   |        vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.782021: funcgraph_entry:        0.420 us   |        zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.782022: funcgraph_entry:        0.500 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.782023: funcgraph_entry:        0.433 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.782024: funcgraph_entry:        1.209 us   |        zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.782026: funcgraph_entry:        0.417 us   |        spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.782027: funcgraph_entry:        0.414 us   |        spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.782027: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-2182  [010] 501241.782028: funcgraph_entry:        0.477 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782029: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782030: funcgraph_entry:        0.443 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782031: funcgraph_entry:        0.440 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.782031: funcgraph_entry:        0.413 us   |          zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.782032: funcgraph_entry:        0.414 us   |          vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.782033: funcgraph_entry:        0.409 us   |          zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.782034: funcgraph_entry:        0.504 us   |          zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.782037: funcgraph_exit:         9.813 us   |        }
   z_ioctl_int/0-2182  [010] 501241.782038: funcgraph_exit:       + 22.449 us  |      }
   z_ioctl_int/0-2182  [010] 501241.782039: funcgraph_exit:       + 36.826 us  |    }
   z_ioctl_int/0-2182  [010] 501241.782039: funcgraph_exit:       + 45.405 us  |  }
   z_ioctl_int/0-2182  [000] 501241.785648: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [000] 501241.785649: funcgraph_entry:        0.537 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.785650: funcgraph_entry:        0.530 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.785652: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [000] 501241.785652: funcgraph_entry:        0.722 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.785654: funcgraph_exit:         2.059 us   |    }
   z_ioctl_int/0-2182  [000] 501241.785654: funcgraph_entry:        0.473 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.785655: funcgraph_entry:        0.556 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.785657: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [000] 501241.785657: funcgraph_entry:        0.480 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.785658: funcgraph_entry:        0.470 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.785659: funcgraph_entry:        0.466 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.785660: funcgraph_entry:        0.494 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.785661: funcgraph_entry:        0.457 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [000] 501241.785662: funcgraph_entry:        0.650 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [000] 501241.785663: funcgraph_entry:        0.440 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [000] 501241.785664: funcgraph_entry:        0.556 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.785665: funcgraph_entry:        0.470 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.785666: funcgraph_entry:        1.245 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [000] 501241.785668: funcgraph_exit:       + 11.564 us  |    }
   z_ioctl_int/0-2182  [000] 501241.785669: funcgraph_exit:       + 20.380 us  |  }
   z_ioctl_int/0-2182  [010] 501241.821842: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [010] 501241.821843: funcgraph_entry:        0.513 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.821844: funcgraph_entry:        0.536 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.821851: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [010] 501241.821851: funcgraph_entry:        0.923 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821853: funcgraph_exit:         2.702 us   |    }
   z_ioctl_int/0-2182  [010] 501241.821854: funcgraph_entry:        0.670 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.821879: funcgraph_entry:        0.518 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.821881: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [010] 501241.821881: funcgraph_entry:        0.529 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821882: funcgraph_entry:        0.552 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821883: funcgraph_entry:        0.520 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821884: funcgraph_entry:        0.501 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821885: funcgraph_entry:        0.512 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.821886: funcgraph_entry:        0.715 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.821888: funcgraph_entry:        0.485 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.821889: funcgraph_entry:        0.840 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.821890: funcgraph_entry:        0.541 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.821891: funcgraph_entry:        1.371 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.821893: funcgraph_entry:        0.485 us   |      spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.821895: funcgraph_entry:        0.475 us   |      spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.821896: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-2182  [010] 501241.821896: funcgraph_entry:        0.579 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821897: funcgraph_entry:        0.605 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821898: funcgraph_entry:        0.589 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821899: funcgraph_entry:        0.550 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821900: funcgraph_entry:        0.504 us   |        zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.821901: funcgraph_entry:        0.522 us   |        vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.821902: funcgraph_entry:        0.497 us   |        zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.821903: funcgraph_entry:        0.565 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.821905: funcgraph_entry:        0.549 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.821906: funcgraph_entry:      + 17.071 us  |        zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.821942: funcgraph_entry:        0.547 us   |        spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.821943: funcgraph_entry:        0.633 us   |        spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.821945: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-2182  [010] 501241.821946: funcgraph_entry:        0.990 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821947: funcgraph_entry:        0.470 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821948: funcgraph_entry:        0.450 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821949: funcgraph_entry:        0.450 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.821950: funcgraph_entry:        0.434 us   |          zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.821951: funcgraph_entry:        0.430 us   |          vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.821952: funcgraph_entry:        0.412 us   |          zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.821953: funcgraph_entry:        0.620 us   |          zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.821957: funcgraph_exit:       + 11.391 us  |        }
   z_ioctl_int/0-2182  [010] 501241.821957: funcgraph_exit:       + 56.042 us  |      }
   z_ioctl_int/0-2182  [010] 501241.821958: funcgraph_exit:       + 71.746 us  |    }
   z_ioctl_int/0-2182  [010] 501241.821959: funcgraph_exit:       ! 110.609 us |  }
   z_ioctl_int/0-2182  [000] 501241.842761: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [000] 501241.842762: funcgraph_entry:        0.508 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.842763: funcgraph_entry:        0.565 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.842764: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [000] 501241.842765: funcgraph_entry:        0.614 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.842766: funcgraph_exit:         1.919 us   |    }
   z_ioctl_int/0-2182  [000] 501241.842767: funcgraph_entry:        0.597 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [000] 501241.842768: funcgraph_entry:        0.535 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [000] 501241.842769: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [000] 501241.842769: funcgraph_entry:        0.546 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.842771: funcgraph_entry:        0.501 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.842772: funcgraph_entry:        0.565 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.842773: funcgraph_entry:        0.635 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [000] 501241.842775: funcgraph_entry:        0.835 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [000] 501241.842776: funcgraph_entry:        0.610 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [000] 501241.842777: funcgraph_entry:        0.536 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [000] 501241.842779: funcgraph_entry:        0.558 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.842780: funcgraph_entry:        0.589 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [000] 501241.842781: funcgraph_entry:      + 13.755 us  |      zio_remove_child();
   z_ioctl_int/0-2182  [000] 501241.842796: funcgraph_exit:       + 26.624 us  |    }
   z_ioctl_int/0-2182  [000] 501241.842796: funcgraph_exit:       + 35.158 us  |  }
   z_ioctl_int/0-2182  [010] 501241.872400: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-2182  [010] 501241.872401: funcgraph_entry:        0.484 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.872402: funcgraph_entry:        0.472 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.872403: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-2182  [010] 501241.872404: funcgraph_entry:        0.540 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872405: funcgraph_exit:         1.572 us   |    }
   z_ioctl_int/0-2182  [010] 501241.872405: funcgraph_entry:        0.464 us   |    spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.872406: funcgraph_entry:        0.459 us   |    spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.872407: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-2182  [010] 501241.872408: funcgraph_entry:        0.526 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872409: funcgraph_entry:        0.450 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872410: funcgraph_entry:        0.500 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872410: funcgraph_entry:        0.460 us   |      zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872412: funcgraph_entry:        0.500 us   |      zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.872413: funcgraph_entry:        0.674 us   |      vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.872414: funcgraph_entry:        0.423 us   |      zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.872415: funcgraph_entry:        0.470 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.872416: funcgraph_entry:        0.420 us   |      zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.872417: funcgraph_entry:        1.050 us   |      zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.872418: funcgraph_entry:        0.443 us   |      spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.872419: funcgraph_entry:        0.477 us   |      spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.872421: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-2182  [010] 501241.872421: funcgraph_entry:        0.534 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872422: funcgraph_entry:        0.453 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872423: funcgraph_entry:        0.464 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872424: funcgraph_entry:        0.454 us   |        zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872425: funcgraph_entry:        0.423 us   |        zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.872426: funcgraph_entry:        0.493 us   |        vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.872427: funcgraph_entry:        0.465 us   |        zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.872428: funcgraph_entry:        0.483 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.872429: funcgraph_entry:        0.432 us   |        zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.872430: funcgraph_entry:        0.853 us   |        zio_remove_child();
   z_ioctl_int/0-2182  [010] 501241.872431: funcgraph_entry:        0.443 us   |        spa_get_dsl();
   z_ioctl_int/0-2182  [010] 501241.872432: funcgraph_entry:        0.480 us   |        spa_is_initializing();
   z_ioctl_int/0-2182  [010] 501241.872433: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-2182  [010] 501241.872433: funcgraph_entry:        0.470 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872434: funcgraph_entry:        0.436 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872435: funcgraph_entry:        0.439 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872436: funcgraph_entry:        0.444 us   |          zio_wait_for_children();
   z_ioctl_int/0-2182  [010] 501241.872437: funcgraph_entry:        0.410 us   |          zio_pop_transforms();
   z_ioctl_int/0-2182  [010] 501241.872438: funcgraph_entry:        0.450 us   |          vdev_stat_update();
   z_ioctl_int/0-2182  [010] 501241.872438: funcgraph_entry:        0.447 us   |          zio_gang_tree_free();
   z_ioctl_int/0-2182  [010] 501241.872439: funcgraph_entry:        0.437 us   |          zio_walk_parents();
   z_ioctl_int/0-2182  [010] 501241.872442: funcgraph_exit:         9.195 us   |        }
   z_ioctl_int/0-2182  [010] 501241.872443: funcgraph_exit:       + 22.016 us  |      }
   z_ioctl_int/0-2182  [010] 501241.872443: funcgraph_exit:       + 36.322 us  |    }
   z_ioctl_int/0-2182  [010] 501241.872444: funcgraph_exit:       + 43.539 us  |  }
