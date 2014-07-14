   z_ioctl_iss/0-2181  [007] 501241.633931: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.633932: funcgraph_entry:        0.600 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.633933: funcgraph_entry:        0.526 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.633934: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.633935: funcgraph_entry:        0.636 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.633936: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.633937: funcgraph_entry:        0.686 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.633938: funcgraph_entry:        0.554 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.633940: funcgraph_exit:         5.364 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.633940: funcgraph_entry:        0.477 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.633941: funcgraph_entry:        0.546 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.633942: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.633943: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.633944: funcgraph_entry:        0.703 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.633956: funcgraph_exit:       + 12.680 us  |      }
   z_ioctl_iss/0-2181  [007] 501241.633956: funcgraph_exit:       + 13.947 us  |    }
   z_ioctl_iss/0-2181  [007] 501241.633957: funcgraph_exit:       + 26.050 us  |  }
   z_ioctl_iss/0-2181  [007] 501241.633958: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.633959: funcgraph_entry:        0.630 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.633960: funcgraph_entry:        0.557 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.633961: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.633962: funcgraph_entry:        0.559 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.633963: funcgraph_entry:        0.534 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.633964: funcgraph_entry:        0.569 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.633965: funcgraph_entry:        0.507 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.633966: funcgraph_exit:         4.957 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.633966: funcgraph_entry:        0.590 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.633968: funcgraph_entry:        0.516 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.633969: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.633970: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.633970: funcgraph_entry:        0.574 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.634104: funcgraph_exit:       ! 119.905 us |      }
   z_ioctl_iss/0-2181  [007] 501241.634105: funcgraph_exit:       ! 121.449 us |    }
   z_ioctl_iss/0-2181  [007] 501241.634106: funcgraph_exit:       ! 133.058 us |  }
   z_ioctl_iss/0-2181  [007] 501241.746675: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.746677: funcgraph_entry:        0.596 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.746679: funcgraph_entry:        0.643 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.746680: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.746681: funcgraph_entry:        0.597 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.746682: funcgraph_entry:        0.510 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.746683: funcgraph_entry:        0.703 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.746685: funcgraph_entry:        0.516 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.746686: funcgraph_exit:         5.318 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.746686: funcgraph_entry:        0.477 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.746687: funcgraph_entry:        0.473 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.746688: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.746689: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.746690: funcgraph_entry:        0.717 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.746705: funcgraph_exit:       + 15.772 us  |      }
   z_ioctl_iss/0-2181  [007] 501241.746706: funcgraph_exit:       + 17.312 us  |    }
   z_ioctl_iss/0-2181  [007] 501241.746706: funcgraph_exit:       + 31.561 us  |  }
   z_ioctl_iss/0-2181  [007] 501241.746708: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.746708: funcgraph_entry:        0.512 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.746709: funcgraph_entry:        0.484 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.746710: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.746711: funcgraph_entry:        0.626 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.746712: funcgraph_entry:        0.599 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.746713: funcgraph_entry:        0.570 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.746714: funcgraph_entry:        0.556 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.746715: funcgraph_exit:         5.244 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.746716: funcgraph_entry:        0.596 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.746717: funcgraph_entry:        0.520 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.746718: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.746719: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.746719: funcgraph_entry:        0.540 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.746738: funcgraph_exit:       + 19.160 us  |      }
   z_ioctl_iss/0-2181  [007] 501241.746738: funcgraph_exit:       + 20.008 us  |    }
   z_ioctl_iss/0-2181  [007] 501241.746738: funcgraph_exit:       + 30.896 us  |  }
   z_ioctl_iss/0-2181  [007] 501241.783374: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.783374: funcgraph_entry:        0.312 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.783375: funcgraph_entry:        0.365 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.783376: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.783376: funcgraph_entry:        0.348 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.783377: funcgraph_entry:        0.264 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.783377: funcgraph_entry:        0.332 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.783378: funcgraph_entry:        0.315 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.783379: funcgraph_exit:         2.887 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.783379: funcgraph_entry:        0.320 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.783380: funcgraph_entry:        0.262 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.783380: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.783381: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.783381: funcgraph_entry:        0.402 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.783386: funcgraph_exit:         5.844 us   |      }
   z_ioctl_iss/0-2181  [007] 501241.783387: funcgraph_exit:         6.518 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.783387: funcgraph_exit:       + 13.689 us  |  }
   z_ioctl_iss/0-2181  [007] 501241.783388: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.783388: funcgraph_entry:        0.258 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.783389: funcgraph_entry:        0.246 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.783389: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.783390: funcgraph_entry:        0.245 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.783390: funcgraph_entry:        0.233 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.783391: funcgraph_entry:        0.250 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.783391: funcgraph_entry:        0.250 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.783392: funcgraph_exit:         2.288 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.783392: funcgraph_entry:        0.230 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.783392: funcgraph_entry:        0.256 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.783393: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.783393: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.783393: funcgraph_entry:        0.247 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.783398: funcgraph_exit:         4.540 us   |      }
   z_ioctl_iss/0-2181  [007] 501241.783398: funcgraph_exit:         5.039 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.783398: funcgraph_exit:       + 10.254 us  |  }
   z_ioctl_iss/0-2181  [007] 501241.840635: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.840636: funcgraph_entry:        0.477 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.840638: funcgraph_entry:        0.400 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.840639: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.840639: funcgraph_entry:        0.493 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.840640: funcgraph_entry:        0.427 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.840641: funcgraph_entry:        0.576 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.840642: funcgraph_entry:        0.440 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.840644: funcgraph_exit:         5.733 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.840645: funcgraph_entry:        0.398 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.840646: funcgraph_entry:        0.410 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.840646: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.840647: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.840648: funcgraph_entry:        0.525 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.840659: funcgraph_exit:       + 11.525 us  |      }
   z_ioctl_iss/0-2181  [007] 501241.840659: funcgraph_exit:       + 12.892 us  |    }
   z_ioctl_iss/0-2181  [007] 501241.840660: funcgraph_exit:       + 25.558 us  |  }
   z_ioctl_iss/0-2181  [007] 501241.840661: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_iss/0-2181  [007] 501241.840661: funcgraph_entry:        0.367 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.840662: funcgraph_entry:        0.438 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.840663: funcgraph_entry:                   |    zio_ready() {
   z_ioctl_iss/0-2181  [007] 501241.840663: funcgraph_entry:        0.405 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.840664: funcgraph_entry:        0.357 us   |      zio_wait_for_children();
   z_ioctl_iss/0-2181  [007] 501241.840665: funcgraph_entry:        0.467 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.840666: funcgraph_entry:        0.464 us   |      zio_walk_parents();
   z_ioctl_iss/0-2181  [007] 501241.840667: funcgraph_exit:         3.840 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.840667: funcgraph_entry:        0.352 us   |    spa_get_dsl();
   z_ioctl_iss/0-2181  [007] 501241.840668: funcgraph_entry:        0.418 us   |    spa_is_initializing();
   z_ioctl_iss/0-2181  [007] 501241.840669: funcgraph_entry:                   |    zio_vdev_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.840669: funcgraph_entry:                   |      vdev_disk_io_start() {
   z_ioctl_iss/0-2181  [007] 501241.840670: funcgraph_entry:        0.394 us   |        vdev_readable();
   z_ioctl_iss/0-2181  [007] 501241.840676: funcgraph_exit:         7.047 us   |      }
   z_ioctl_iss/0-2181  [007] 501241.840677: funcgraph_exit:         7.855 us   |    }
   z_ioctl_iss/0-2181  [007] 501241.840677: funcgraph_exit:       + 16.198 us  |  }
