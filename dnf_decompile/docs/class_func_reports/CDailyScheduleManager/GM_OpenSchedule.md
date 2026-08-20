# GM_OpenSchedule

`_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule`

`CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&)`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126dc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126dc0  _ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule
#           CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&)
# range [0x08126dc0, 0x0812707b]
08126dc0 +0x000:  push   %ebp
08126dc1 +0x001:  mov    %esp,%ebp
08126dc3 +0x003:  push   %ebx
08126dc4 +0x004:  sub    $0x34,%esp
08126dc7 +0x007:  movb   $0x0,-0x17(%ebp)
08126dcb +0x00b:  movb   $0x0,-0x16(%ebp)
08126dcf +0x00f:  movb   $0x0,-0x15(%ebp)
08126dd3 +0x013:  movb   $0x17,-0x1a(%ebp)
08126dd7 +0x017:  movb   $0x32,-0x19(%ebp)
08126ddb +0x01b:  movb   $0x32,-0x18(%ebp)
08126ddf +0x01f:  mov    0x8(%ebp),%eax
08126de2 +0x022:  add    $0xd8,%eax
08126de7 +0x027:  mov    %eax,(%esp)
08126dea +0x02a:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08126def +0x02f:  mov    %eax,-0x14(%ebp)
08126df2 +0x032:  movl   $0x0,-0x10(%ebp)
08126df9 +0x039:  jmp    08126f23 <+0x163>
08126dfe +0x03e:  mov    0xc(%ebp),%ebx
08126e01 +0x041:  mov    0x8(%ebp),%eax
08126e04 +0x044:  lea    0xd8(%eax),%edx
08126e0a +0x04a:  mov    -0x10(%ebp),%eax
08126e0d +0x04d:  mov    %eax,0x4(%esp)
08126e11 +0x051:  mov    %edx,(%esp)
08126e14 +0x054:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126e19 +0x059:  mov    0x8(%eax),%eax
08126e1c +0x05c:  cmp    %eax,%ebx
08126e1e +0x05e:  jne    08126e47 <+0x87>
08126e20 +0x060:  mov    0x8(%ebp),%eax
08126e23 +0x063:  lea    0xd8(%eax),%edx
08126e29 +0x069:  mov    -0x10(%ebp),%eax
08126e2c +0x06c:  mov    %eax,0x4(%esp)
08126e30 +0x070:  mov    %edx,(%esp)
08126e33 +0x073:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126e38 +0x078:  mov    0x4(%eax),%eax
08126e3b +0x07b:  cmp    0x10(%ebp),%eax
08126e3e +0x07e:  jne    08126e47 <+0x87>
08126e40 +0x080:  mov    $0x1,%eax
08126e45 +0x085:  jmp    08126e4c <+0x8c>
08126e47 +0x087:  mov    $0x0,%eax
08126e4c +0x08c:  test   %al,%al
08126e4e +0x08e:  je     08126f1f <+0x15f>
08126e54 +0x094:  mov    0xc(%ebp),%edx
08126e57 +0x097:  mov    0x14(%ebp),%eax
08126e5a +0x09a:  mov    0x8(%eax),%eax
08126e5d +0x09d:  cmp    %eax,%edx
08126e5f +0x09f:  je     08126e9a <+0xda>
08126e61 +0x0a1:  mov    0x8(%ebp),%eax
08126e64 +0x0a4:  lea    0xd8(%eax),%edx
08126e6a +0x0aa:  mov    -0x10(%ebp),%eax
08126e6d +0x0ad:  mov    %eax,0x4(%esp)
08126e71 +0x0b1:  mov    %edx,(%esp)
08126e74 +0x0b4:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126e79 +0x0b9:  movl   $0x24,0x8(%esp)
08126e81 +0x0c1:  mov    %eax,0x4(%esp)
08126e85 +0x0c5:  mov    0x14(%ebp),%eax
08126e88 +0x0c8:  mov    %eax,(%esp)
08126e8b +0x0cb:  call   0807d8a0 <_init+0x198>
08126e90 +0x0d0:  mov    0x14(%ebp),%eax
08126e93 +0x0d3:  movl   $0x0,0x20(%eax)
08126e9a +0x0da:  mov    0x8(%ebp),%eax
08126e9d +0x0dd:  lea    0xd8(%eax),%edx
08126ea3 +0x0e3:  mov    -0x10(%ebp),%eax
08126ea6 +0x0e6:  mov    %eax,0x4(%esp)
08126eaa +0x0ea:  mov    %edx,(%esp)
08126ead +0x0ed:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126eb2 +0x0f2:  movl   $0x7,0x14(%eax)
08126eb9 +0x0f9:  mov    0x8(%ebp),%eax
08126ebc +0x0fc:  lea    0xd8(%eax),%edx
08126ec2 +0x102:  mov    -0x10(%ebp),%eax
08126ec5 +0x105:  mov    %eax,0x4(%esp)
08126ec9 +0x109:  mov    %edx,(%esp)
08126ecc +0x10c:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126ed1 +0x111:  lea    0x18(%eax),%edx
08126ed4 +0x114:  movl   $0x3,0x8(%esp)
08126edc +0x11c:  lea    -0x17(%ebp),%eax
08126edf +0x11f:  mov    %eax,0x4(%esp)
08126ee3 +0x123:  mov    %edx,(%esp)
08126ee6 +0x126:  call   0807d8a0 <_init+0x198>
08126eeb +0x12b:  mov    0x8(%ebp),%eax
08126eee +0x12e:  lea    0xd8(%eax),%edx
08126ef4 +0x134:  mov    -0x10(%ebp),%eax
08126ef7 +0x137:  mov    %eax,0x4(%esp)
08126efb +0x13b:  mov    %edx,(%esp)
08126efe +0x13e:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126f03 +0x143:  lea    0x1b(%eax),%edx
08126f06 +0x146:  movl   $0x3,0x8(%esp)
08126f0e +0x14e:  lea    -0x1a(%ebp),%eax
08126f11 +0x151:  mov    %eax,0x4(%esp)
08126f15 +0x155:  mov    %edx,(%esp)
08126f18 +0x158:  call   0807d8a0 <_init+0x198>
08126f1d +0x15d:  jmp    08126f34 <+0x174>
08126f1f +0x15f:  addl   $0x1,-0x10(%ebp)
08126f23 +0x163:  mov    -0x10(%ebp),%eax
08126f26 +0x166:  cmp    -0x14(%ebp),%eax
08126f29 +0x169:  setb   %al
08126f2c +0x16c:  test   %al,%al
08126f2e +0x16e:  jne    08126dfe <+0x3e>
08126f34 +0x174:  movl   $0x0,-0xc(%ebp)
08126f3b +0x17b:  jmp    08127065 <+0x2a5>
08126f40 +0x180:  mov    0xc(%ebp),%ebx
08126f43 +0x183:  mov    0x8(%ebp),%eax
08126f46 +0x186:  lea    0xd8(%eax),%edx
08126f4c +0x18c:  mov    -0xc(%ebp),%eax
08126f4f +0x18f:  mov    %eax,0x4(%esp)
08126f53 +0x193:  mov    %edx,(%esp)
08126f56 +0x196:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126f5b +0x19b:  mov    0x8(%eax),%eax
08126f5e +0x19e:  cmp    %eax,%ebx
08126f60 +0x1a0:  jne    08126f89 <+0x1c9>
08126f62 +0x1a2:  mov    0x8(%ebp),%eax
08126f65 +0x1a5:  lea    0xd8(%eax),%edx
08126f6b +0x1ab:  mov    -0xc(%ebp),%eax
08126f6e +0x1ae:  mov    %eax,0x4(%esp)
08126f72 +0x1b2:  mov    %edx,(%esp)
08126f75 +0x1b5:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126f7a +0x1ba:  mov    0x4(%eax),%eax
08126f7d +0x1bd:  cmp    $0x1,%eax
08126f80 +0x1c0:  jne    08126f89 <+0x1c9>
08126f82 +0x1c2:  mov    $0x1,%eax
08126f87 +0x1c7:  jmp    08126f8e <+0x1ce>
08126f89 +0x1c9:  mov    $0x0,%eax
08126f8e +0x1ce:  test   %al,%al
08126f90 +0x1d0:  je     08127061 <+0x2a1>
08126f96 +0x1d6:  mov    0xc(%ebp),%edx
08126f99 +0x1d9:  mov    0x14(%ebp),%eax
08126f9c +0x1dc:  mov    0x8(%eax),%eax
08126f9f +0x1df:  cmp    %eax,%edx
08126fa1 +0x1e1:  je     08126fdc <+0x21c>
08126fa3 +0x1e3:  mov    0x8(%ebp),%eax
08126fa6 +0x1e6:  lea    0xd8(%eax),%edx
08126fac +0x1ec:  mov    -0xc(%ebp),%eax
08126faf +0x1ef:  mov    %eax,0x4(%esp)
08126fb3 +0x1f3:  mov    %edx,(%esp)
08126fb6 +0x1f6:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126fbb +0x1fb:  movl   $0x24,0x8(%esp)
08126fc3 +0x203:  mov    %eax,0x4(%esp)
08126fc7 +0x207:  mov    0x14(%ebp),%eax
08126fca +0x20a:  mov    %eax,(%esp)
08126fcd +0x20d:  call   0807d8a0 <_init+0x198>
08126fd2 +0x212:  mov    0x14(%ebp),%eax
08126fd5 +0x215:  movl   $0x0,0x20(%eax)
08126fdc +0x21c:  mov    0x8(%ebp),%eax
08126fdf +0x21f:  lea    0xd8(%eax),%edx
08126fe5 +0x225:  mov    -0xc(%ebp),%eax
08126fe8 +0x228:  mov    %eax,0x4(%esp)
08126fec +0x22c:  mov    %edx,(%esp)
08126fef +0x22f:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126ff4 +0x234:  movl   $0x7,0x14(%eax)
08126ffb +0x23b:  mov    0x8(%ebp),%eax
08126ffe +0x23e:  lea    0xd8(%eax),%edx
08127004 +0x244:  mov    -0xc(%ebp),%eax
08127007 +0x247:  mov    %eax,0x4(%esp)
0812700b +0x24b:  mov    %edx,(%esp)
0812700e +0x24e:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08127013 +0x253:  lea    0x18(%eax),%edx
08127016 +0x256:  movl   $0x3,0x8(%esp)
0812701e +0x25e:  lea    -0x17(%ebp),%eax
08127021 +0x261:  mov    %eax,0x4(%esp)
08127025 +0x265:  mov    %edx,(%esp)
08127028 +0x268:  call   0807d8a0 <_init+0x198>
0812702d +0x26d:  mov    0x8(%ebp),%eax
08127030 +0x270:  lea    0xd8(%eax),%edx
08127036 +0x276:  mov    -0xc(%ebp),%eax
08127039 +0x279:  mov    %eax,0x4(%esp)
0812703d +0x27d:  mov    %edx,(%esp)
08127040 +0x280:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08127045 +0x285:  lea    0x1b(%eax),%edx
08127048 +0x288:  movl   $0x3,0x8(%esp)
08127050 +0x290:  lea    -0x1a(%ebp),%eax
08127053 +0x293:  mov    %eax,0x4(%esp)
08127057 +0x297:  mov    %edx,(%esp)
0812705a +0x29a:  call   0807d8a0 <_init+0x198>
0812705f +0x29f:  jmp    08127076 <+0x2b6>
08127061 +0x2a1:  addl   $0x1,-0xc(%ebp)
08127065 +0x2a5:  mov    -0xc(%ebp),%eax
08127068 +0x2a8:  cmp    -0x14(%ebp),%eax
0812706b +0x2ab:  setb   %al
0812706e +0x2ae:  test   %al,%al
08127070 +0x2b0:  jne    08126f40 <+0x180>
08127076 +0x2b6:  add    $0x34,%esp
08127079 +0x2b9:  pop    %ebx
0812707a +0x2ba:  pop    %ebp
0812707b +0x2bb:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GM_OpenSchedule @ 0x8126dc0

/* CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&) */

void __thiscall
CDailyScheduleManager::GM_OpenSchedule
          (CDailyScheduleManager *this,int param_1,int param_3,void *param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  local_1e = 0x17;
  local_1d = 0x32;
  local_1c = 0x32;
  local_18 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  local_14 = 0;
  do {
    if (local_18 <= local_14) {
LAB_08126f34:
      local_10 = 0;
      while( true ) {
        if (local_18 <= local_10) {
          return;
        }
        iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10);
        if ((param_1 == *(int *)(iVar2 + 8)) &&
           (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_10), *(int *)(iVar2 + 4) == 1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) break;
        local_10 = local_10 + 1;
      }
      if (param_1 != *(int *)((int)param_4 + 8)) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_10);
        memcpy(param_4,pvVar3,0x24);
        *(undefined4 *)((int)param_4 + 0x20) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x18),&local_1b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x1b),&local_1e,3);
      return;
    }
    iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if ((param_1 == *(int *)(iVar2 + 8)) &&
       (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_14), *(int *)(iVar2 + 4) == param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 != *(int *)((int)param_4 + 8)) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_14);
        memcpy(param_4,pvVar3,0x24);
        *(undefined4 *)((int)param_4 + 0x20) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x18),&local_1b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x1b),&local_1e,3);
      goto LAB_08126f34;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
