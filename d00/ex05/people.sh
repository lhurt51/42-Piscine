#!/bin/bash
ldapsearch -LLLQ "(uid=z*)" cn |grep "cn: "
