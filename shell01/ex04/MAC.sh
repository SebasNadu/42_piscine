#!/bin/sh
ifconfig -v | grep ether | cut -c 15-31 | sed "s/ //g"
