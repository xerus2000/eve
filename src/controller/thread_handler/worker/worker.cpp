//
// Created by aaron on 09/10/2019.
//

#include "worker.h"

Worker::Worker() : Queue<Container<Task_e>>(), thread{this} {}
