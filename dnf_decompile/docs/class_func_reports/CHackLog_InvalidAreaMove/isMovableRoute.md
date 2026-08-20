# isMovableRoute

`_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii`

`CHackLog_InvalidAreaMove::isMovableRoute(int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidAreaMove` | `0x08285efe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285efe  _ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii
#           CHackLog_InvalidAreaMove::isMovableRoute(int, int, int, int, int, int)
# range [0x08285efe, 0x08286159]
08285efe +0x000:  push   %ebp
08285eff +0x001:  mov    %esp,%ebp
08285f01 +0x003:  sub    $0x10,%esp
08285f04 +0x006:  movb   $0x0,-0x1(%ebp)
08285f08 +0x00a:  cmpl   $0x3,0x8(%ebp)
08285f0c +0x00e:  jne    08285f30 <+0x32>
08285f0e +0x010:  cmpl   $0x2,0xc(%ebp)
08285f12 +0x014:  jne    08285f30 <+0x32>
08285f14 +0x016:  cmpl   $0x3,0x10(%ebp)
08285f18 +0x01a:  jne    08285f30 <+0x32>
08285f1a +0x01c:  cmpl   $0x0,0x14(%ebp)
08285f1e +0x020:  jne    08285f30 <+0x32>
08285f20 +0x022:  cmpl   $0x2,0x18(%ebp)
08285f24 +0x026:  jne    08285f30 <+0x32>
08285f26 +0x028:  cmpl   $0x0,0x1c(%ebp)
08285f2a +0x02c:  je     08286150 <+0x252>
08285f30 +0x032:  cmpl   $0x3,0x8(%ebp)
08285f34 +0x036:  jne    08285f58 <+0x5a>
08285f36 +0x038:  cmpl   $0x1,0xc(%ebp)
08285f3a +0x03c:  jne    08285f58 <+0x5a>
08285f3c +0x03e:  cmpl   $0x3,0x10(%ebp)
08285f40 +0x042:  jne    08285f58 <+0x5a>
08285f42 +0x044:  cmpl   $0x0,0x14(%ebp)
08285f46 +0x048:  jne    08285f58 <+0x5a>
08285f48 +0x04a:  cmpl   $0x2,0x18(%ebp)
08285f4c +0x04e:  jne    08285f58 <+0x5a>
08285f4e +0x050:  cmpl   $0x0,0x1c(%ebp)
08285f52 +0x054:  je     08286150 <+0x252>
08285f58 +0x05a:  cmpl   $0x2,0x8(%ebp)
08285f5c +0x05e:  jne    08285f80 <+0x82>
08285f5e +0x060:  cmpl   $0x0,0xc(%ebp)
08285f62 +0x064:  jne    08285f80 <+0x82>
08285f64 +0x066:  cmpl   $0x3,0x10(%ebp)
08285f68 +0x06a:  jne    08285f80 <+0x82>
08285f6a +0x06c:  cmpl   $0x0,0x14(%ebp)
08285f6e +0x070:  jne    08285f80 <+0x82>
08285f70 +0x072:  cmpl   $0x3,0x18(%ebp)
08285f74 +0x076:  jne    08285f80 <+0x82>
08285f76 +0x078:  cmpl   $0x1,0x1c(%ebp)
08285f7a +0x07c:  je     08286150 <+0x252>
08285f80 +0x082:  cmpl   $0x2,0x8(%ebp)
08285f84 +0x086:  jne    08285fa8 <+0xaa>
08285f86 +0x088:  cmpl   $0x0,0xc(%ebp)
08285f8a +0x08c:  jne    08285fa8 <+0xaa>
08285f8c +0x08e:  cmpl   $0x3,0x10(%ebp)
08285f90 +0x092:  jne    08285fa8 <+0xaa>
08285f92 +0x094:  cmpl   $0x0,0x14(%ebp)
08285f96 +0x098:  jne    08285fa8 <+0xaa>
08285f98 +0x09a:  cmpl   $0x3,0x18(%ebp)
08285f9c +0x09e:  jne    08285fa8 <+0xaa>
08285f9e +0x0a0:  cmpl   $0x2,0x1c(%ebp)
08285fa2 +0x0a4:  je     08286150 <+0x252>
08285fa8 +0x0aa:  cmpl   $0x6,0x8(%ebp)
08285fac +0x0ae:  jne    08285fd0 <+0xd2>
08285fae +0x0b0:  cmpl   $0x0,0xc(%ebp)
08285fb2 +0x0b4:  jne    08285fd0 <+0xd2>
08285fb4 +0x0b6:  cmpl   $0x3,0x10(%ebp)
08285fb8 +0x0ba:  jne    08285fd0 <+0xd2>
08285fba +0x0bc:  cmpl   $0x6,0x14(%ebp)
08285fbe +0x0c0:  jne    08285fd0 <+0xd2>
08285fc0 +0x0c2:  cmpl   $0x3,0x18(%ebp)
08285fc4 +0x0c6:  jne    08285fd0 <+0xd2>
08285fc6 +0x0c8:  cmpl   $0x1,0x1c(%ebp)
08285fca +0x0cc:  je     08286150 <+0x252>
08285fd0 +0x0d2:  cmpl   $0x4,0x8(%ebp)
08285fd4 +0x0d6:  jne    08285ff8 <+0xfa>
08285fd6 +0x0d8:  cmpl   $0x1,0xc(%ebp)
08285fda +0x0dc:  jne    08285ff8 <+0xfa>
08285fdc +0x0de:  cmpl   $0x4,0x10(%ebp)
08285fe0 +0x0e2:  jne    08285ff8 <+0xfa>
08285fe2 +0x0e4:  cmpl   $0x0,0x14(%ebp)
08285fe6 +0x0e8:  jne    08285ff8 <+0xfa>
08285fe8 +0x0ea:  cmpl   $0x4,0x18(%ebp)
08285fec +0x0ee:  jne    08285ff8 <+0xfa>
08285fee +0x0f0:  cmpl   $0x3,0x1c(%ebp)
08285ff2 +0x0f4:  je     08286150 <+0x252>
08285ff8 +0x0fa:  cmpl   $0x4,0x8(%ebp)
08285ffc +0x0fe:  jne    08286020 <+0x122>
08285ffe +0x100:  cmpl   $0x3,0xc(%ebp)
08286002 +0x104:  jne    08286020 <+0x122>
08286004 +0x106:  cmpl   $0x4,0x10(%ebp)
08286008 +0x10a:  jne    08286020 <+0x122>
0828600a +0x10c:  cmpl   $0x0,0x14(%ebp)
0828600e +0x110:  jne    08286020 <+0x122>
08286010 +0x112:  cmpl   $0x4,0x18(%ebp)
08286014 +0x116:  jne    08286020 <+0x122>
08286016 +0x118:  cmpl   $0x1,0x1c(%ebp)
0828601a +0x11c:  je     08286150 <+0x252>
08286020 +0x122:  cmpl   $0x1,0x8(%ebp)
08286024 +0x126:  jne    08286048 <+0x14a>
08286026 +0x128:  cmpl   $0x3,0xc(%ebp)
0828602a +0x12c:  jne    08286048 <+0x14a>
0828602c +0x12e:  cmpl   $0x4,0x10(%ebp)
08286030 +0x132:  jne    08286048 <+0x14a>
08286032 +0x134:  cmpl   $0x0,0x14(%ebp)
08286036 +0x138:  jne    08286048 <+0x14a>
08286038 +0x13a:  cmpl   $0x4,0x18(%ebp)
0828603c +0x13e:  jne    08286048 <+0x14a>
0828603e +0x140:  cmpl   $0x4,0x1c(%ebp)
08286042 +0x144:  je     08286150 <+0x252>
08286048 +0x14a:  cmpl   $0x4,0x8(%ebp)
0828604c +0x14e:  jne    08286070 <+0x172>
0828604e +0x150:  cmpl   $0x4,0xc(%ebp)
08286052 +0x154:  jne    08286070 <+0x172>
08286054 +0x156:  cmpl   $0x4,0x10(%ebp)
08286058 +0x15a:  jne    08286070 <+0x172>
0828605a +0x15c:  cmpl   $0x0,0x14(%ebp)
0828605e +0x160:  jne    08286070 <+0x172>
08286060 +0x162:  cmpl   $0x1,0x18(%ebp)
08286064 +0x166:  jne    08286070 <+0x172>
08286066 +0x168:  cmpl   $0x3,0x1c(%ebp)
0828606a +0x16c:  je     08286150 <+0x252>
08286070 +0x172:  cmpl   $0x2,0x8(%ebp)
08286074 +0x176:  jne    08286098 <+0x19a>
08286076 +0x178:  cmpl   $0x2,0xc(%ebp)
0828607a +0x17c:  jne    08286098 <+0x19a>
0828607c +0x17e:  cmpl   $0x2,0x10(%ebp)
08286080 +0x182:  jne    08286098 <+0x19a>
08286082 +0x184:  cmpl   $0x8,0x14(%ebp)
08286086 +0x188:  jne    08286098 <+0x19a>
08286088 +0x18a:  cmpl   $0x5,0x18(%ebp)
0828608c +0x18e:  jne    08286098 <+0x19a>
0828608e +0x190:  cmpl   $0x0,0x1c(%ebp)
08286092 +0x194:  je     08286150 <+0x252>
08286098 +0x19a:  cmpl   $0x5,0x8(%ebp)
0828609c +0x19e:  jne    082860c0 <+0x1c2>
0828609e +0x1a0:  cmpl   $0x0,0xc(%ebp)
082860a2 +0x1a4:  jne    082860c0 <+0x1c2>
082860a4 +0x1a6:  cmpl   $0x2,0x10(%ebp)
082860a8 +0x1aa:  jne    082860c0 <+0x1c2>
082860aa +0x1ac:  cmpl   $0x8,0x14(%ebp)
082860ae +0x1b0:  jne    082860c0 <+0x1c2>
082860b0 +0x1b2:  cmpl   $0x2,0x18(%ebp)
082860b4 +0x1b6:  jne    082860c0 <+0x1c2>
082860b6 +0x1b8:  cmpl   $0x2,0x1c(%ebp)
082860ba +0x1bc:  je     08286150 <+0x252>
082860c0 +0x1c2:  cmpl   $0x2,0x8(%ebp)
082860c4 +0x1c6:  jne    082860e4 <+0x1e6>
082860c6 +0x1c8:  cmpl   $0x4,0xc(%ebp)
082860ca +0x1cc:  jne    082860e4 <+0x1e6>
082860cc +0x1ce:  cmpl   $0x2,0x10(%ebp)
082860d0 +0x1d2:  jne    082860e4 <+0x1e6>
082860d2 +0x1d4:  cmpl   $0x0,0x14(%ebp)
082860d6 +0x1d8:  jne    082860e4 <+0x1e6>
082860d8 +0x1da:  cmpl   $0x3,0x18(%ebp)
082860dc +0x1de:  jne    082860e4 <+0x1e6>
082860de +0x1e0:  cmpl   $0x0,0x1c(%ebp)
082860e2 +0x1e4:  je     08286150 <+0x252>
082860e4 +0x1e6:  cmpl   $0x4,0x8(%ebp)
082860e8 +0x1ea:  jne    08286108 <+0x20a>
082860ea +0x1ec:  cmpl   $0x1,0xc(%ebp)
082860ee +0x1f0:  jne    08286108 <+0x20a>
082860f0 +0x1f2:  cmpl   $0x4,0x10(%ebp)
082860f4 +0x1f6:  jne    08286108 <+0x20a>
082860f6 +0x1f8:  cmpl   $0x0,0x14(%ebp)
082860fa +0x1fc:  jne    08286108 <+0x20a>
082860fc +0x1fe:  cmpl   $0x1,0x18(%ebp)
08286100 +0x202:  jne    08286108 <+0x20a>
08286102 +0x204:  cmpl   $0x3,0x1c(%ebp)
08286106 +0x208:  je     08286150 <+0x252>
08286108 +0x20a:  cmpl   $0x4,0x8(%ebp)
0828610c +0x20e:  jne    0828612c <+0x22e>
0828610e +0x210:  cmpl   $0x0,0xc(%ebp)
08286112 +0x214:  jne    0828612c <+0x22e>
08286114 +0x216:  cmpl   $0x1,0x10(%ebp)
08286118 +0x21a:  jne    0828612c <+0x22e>
0828611a +0x21c:  cmpl   $0x3,0x14(%ebp)
0828611e +0x220:  jne    0828612c <+0x22e>
08286120 +0x222:  cmpl   $0x1,0x18(%ebp)
08286124 +0x226:  jne    0828612c <+0x22e>
08286126 +0x228:  cmpl   $0x0,0x1c(%ebp)
0828612a +0x22c:  je     08286150 <+0x252>
0828612c +0x22e:  cmpl   $0x3,0x8(%ebp)
08286130 +0x232:  jne    08286154 <+0x256>
08286132 +0x234:  cmpl   $0x6,0xc(%ebp)
08286136 +0x238:  jne    08286154 <+0x256>
08286138 +0x23a:  cmpl   $0x6,0x10(%ebp)
0828613c +0x23e:  jne    08286154 <+0x256>
0828613e +0x240:  cmpl   $0x0,0x14(%ebp)
08286142 +0x244:  jne    08286154 <+0x256>
08286144 +0x246:  cmpl   $0x6,0x18(%ebp)
08286148 +0x24a:  jne    08286154 <+0x256>
0828614a +0x24c:  cmpl   $0x1,0x1c(%ebp)
0828614e +0x250:  jne    08286154 <+0x256>
08286150 +0x252:  movb   $0x1,-0x1(%ebp)
08286154 +0x256:  movzbl -0x1(%ebp),%eax
08286158 +0x25a:  leave
08286159 +0x25b:  ret
```

## 反编译 C

```c
// CHackLog_InvalidAreaMove::isMovableRoute @ 0x8285efe

/* CHackLog_InvalidAreaMove::isMovableRoute(int, int, int, int, int, int) */

undefined1
CHackLog_InvalidAreaMove::isMovableRoute
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 local_5;
  
  local_5 = 0;
  if (((((((((param_1 == 3) && (param_2 == 2)) && (param_3 == 3)) &&
          ((param_4 == 0 && (param_5 == 2)))) && (param_6 == 0)) ||
        (((param_1 == 3 && (param_2 == 1)) &&
         ((param_3 == 3 && (((param_4 == 0 && (param_5 == 2)) && (param_6 == 0)))))))) ||
       (((((param_1 == 2 && (param_2 == 0)) &&
          ((param_3 == 3 && (((param_4 == 0 && (param_5 == 3)) && (param_6 == 1)))))) ||
         ((((((param_1 == 2 && (param_2 == 0)) && (param_3 == 3)) &&
            ((param_4 == 0 && (param_5 == 3)))) && (param_6 == 2)) ||
          ((((param_1 == 6 && (param_2 == 0)) &&
            ((param_3 == 3 && (((param_4 == 6 && (param_5 == 3)) && (param_6 == 1)))))) ||
           (((((param_1 == 4 && (param_2 == 1)) && (param_3 == 4)) &&
             ((param_4 == 0 && (param_5 == 4)))) && (param_6 == 3)))))))) ||
        (((((param_1 == 4 && (param_2 == 3)) && (param_3 == 4)) &&
          ((param_4 == 0 && (param_5 == 4)))) && (param_6 == 1)))))) ||
      ((((param_1 == 1 && (param_2 == 3)) &&
        ((param_3 == 4 && (((param_4 == 0 && (param_5 == 4)) && (param_6 == 4)))))) ||
       ((((param_1 == 4 && (param_2 == 4)) && (param_3 == 4)) &&
        (((param_4 == 0 && (param_5 == 1)) && (param_6 == 3)))))))) ||
     ((((((((param_1 == 2 && (param_2 == 2)) && (param_3 == 2)) &&
          ((param_4 == 8 && (param_5 == 5)))) && (param_6 == 0)) ||
        ((((param_1 == 5 && (param_2 == 0)) &&
          ((param_3 == 2 && (((param_4 == 8 && (param_5 == 2)) && (param_6 == 2)))))) ||
         (((param_1 == 2 && (param_2 == 4)) &&
          ((param_3 == 2 && (((param_4 == 0 && (param_5 == 3)) && (param_6 == 0)))))))))) ||
       (((((param_1 == 4 && (param_2 == 1)) && (param_3 == 4)) && ((param_4 == 0 && (param_5 == 1)))
         ) && (param_6 == 3)))) ||
      ((((param_1 == 4 && (param_2 == 0)) &&
        ((param_3 == 1 && (((param_4 == 3 && (param_5 == 1)) && (param_6 == 0)))))) ||
       (((param_1 == 3 && (param_2 == 6)) &&
        ((param_3 == 6 && (((param_4 == 0 && (param_5 == 6)) && (param_6 == 1)))))))))))) {
    local_5 = 1;
  }
  return local_5;
}
```
