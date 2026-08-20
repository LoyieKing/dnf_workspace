# GM_OpenSouthernDale

`_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv`

`CDailyScheduleManager::GM_OpenSouthernDale()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x081267bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081267bc  _ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv
#           CDailyScheduleManager::GM_OpenSouthernDale()
# range [0x081267bc, 0x08126ad1]
081267bc +0x000:  push   %ebp
081267bd +0x001:  mov    %esp,%ebp
081267bf +0x003:  sub    $0x98,%esp
081267c5 +0x009:  movl   $0x64,-0x1c(%ebp)
081267cc +0x010:  movl   $0x5045,-0x18(%ebp)
081267d3 +0x017:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081267da +0x01e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081267df +0x023:  mov    %eax,-0x20(%ebp)
081267e2 +0x026:  lea    -0x58(%ebp),%eax
081267e5 +0x029:  mov    %eax,0x4(%esp)
081267e9 +0x02d:  lea    -0x20(%ebp),%eax
081267ec +0x030:  mov    %eax,(%esp)
081267ef +0x033:  call   0807e360 <_init+0xc58>
081267f4 +0x038:  mov    -0x20(%ebp),%eax
081267f7 +0x03b:  add    $0x258,%eax
081267fc +0x040:  mov    %eax,-0x24(%ebp)
081267ff +0x043:  lea    -0x84(%ebp),%eax
08126805 +0x049:  mov    %eax,0x4(%esp)
08126809 +0x04d:  lea    -0x24(%ebp),%eax
0812680c +0x050:  mov    %eax,(%esp)
0812680f +0x053:  call   0807e360 <_init+0xc58>
08126814 +0x058:  mov    -0x50(%ebp),%eax
08126817 +0x05b:  mov    %al,-0x27(%ebp)
0812681a +0x05e:  mov    -0x54(%ebp),%eax
0812681d +0x061:  mov    %al,-0x26(%ebp)
08126820 +0x064:  mov    -0x58(%ebp),%eax
08126823 +0x067:  mov    %al,-0x25(%ebp)
08126826 +0x06a:  mov    -0x7c(%ebp),%eax
08126829 +0x06d:  mov    %al,-0x2a(%ebp)
0812682c +0x070:  mov    -0x80(%ebp),%eax
0812682f +0x073:  mov    %al,-0x29(%ebp)
08126832 +0x076:  mov    -0x84(%ebp),%eax
08126838 +0x07c:  mov    %al,-0x28(%ebp)
0812683b +0x07f:  mov    0x8(%ebp),%eax
0812683e +0x082:  add    $0xd8,%eax
08126843 +0x087:  mov    %eax,(%esp)
08126846 +0x08a:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
0812684b +0x08f:  mov    %eax,-0x14(%ebp)
0812684e +0x092:  movl   $0x0,-0x10(%ebp)
08126855 +0x099:  jmp    0812697a <+0x1be>
0812685a +0x09e:  mov    0x8(%ebp),%eax
0812685d +0x0a1:  lea    0xd8(%eax),%edx
08126863 +0x0a7:  mov    -0x10(%ebp),%eax
08126866 +0x0aa:  mov    %eax,0x4(%esp)
0812686a +0x0ae:  mov    %edx,(%esp)
0812686d +0x0b1:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126872 +0x0b6:  mov    0x8(%eax),%eax
08126875 +0x0b9:  cmp    $0x64,%eax
08126878 +0x0bc:  jne    081268a0 <+0xe4>
0812687a +0x0be:  mov    0x8(%ebp),%eax
0812687d +0x0c1:  lea    0xd8(%eax),%edx
08126883 +0x0c7:  mov    -0x10(%ebp),%eax
08126886 +0x0ca:  mov    %eax,0x4(%esp)
0812688a +0x0ce:  mov    %edx,(%esp)
0812688d +0x0d1:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126892 +0x0d6:  mov    0x4(%eax),%eax
08126895 +0x0d9:  test   %eax,%eax
08126897 +0x0db:  jne    081268a0 <+0xe4>
08126899 +0x0dd:  mov    $0x1,%eax
0812689e +0x0e2:  jmp    081268a5 <+0xe9>
081268a0 +0x0e4:  mov    $0x0,%eax
081268a5 +0x0e9:  test   %al,%al
081268a7 +0x0eb:  je     08126976 <+0x1ba>
081268ad +0x0f1:  mov    0x8(%ebp),%eax
081268b0 +0x0f4:  mov    0x8(%eax),%eax
081268b3 +0x0f7:  cmp    $0x64,%eax
081268b6 +0x0fa:  je     081268f1 <+0x135>
081268b8 +0x0fc:  mov    0x8(%ebp),%eax
081268bb +0x0ff:  lea    0xd8(%eax),%edx
081268c1 +0x105:  mov    -0x10(%ebp),%eax
081268c4 +0x108:  mov    %eax,0x4(%esp)
081268c8 +0x10c:  mov    %edx,(%esp)
081268cb +0x10f:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081268d0 +0x114:  mov    0x8(%ebp),%edx
081268d3 +0x117:  movl   $0x24,0x8(%esp)
081268db +0x11f:  mov    %eax,0x4(%esp)
081268df +0x123:  mov    %edx,(%esp)
081268e2 +0x126:  call   0807d8a0 <_init+0x198>
081268e7 +0x12b:  mov    0x8(%ebp),%eax
081268ea +0x12e:  movl   $0x0,0x20(%eax)
081268f1 +0x135:  mov    0x8(%ebp),%eax
081268f4 +0x138:  lea    0xd8(%eax),%edx
081268fa +0x13e:  mov    -0x10(%ebp),%eax
081268fd +0x141:  mov    %eax,0x4(%esp)
08126901 +0x145:  mov    %edx,(%esp)
08126904 +0x148:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126909 +0x14d:  movl   $0x7,0x14(%eax)
08126910 +0x154:  mov    0x8(%ebp),%eax
08126913 +0x157:  lea    0xd8(%eax),%edx
08126919 +0x15d:  mov    -0x10(%ebp),%eax
0812691c +0x160:  mov    %eax,0x4(%esp)
08126920 +0x164:  mov    %edx,(%esp)
08126923 +0x167:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126928 +0x16c:  lea    0x18(%eax),%edx
0812692b +0x16f:  movl   $0x3,0x8(%esp)
08126933 +0x177:  lea    -0x27(%ebp),%eax
08126936 +0x17a:  mov    %eax,0x4(%esp)
0812693a +0x17e:  mov    %edx,(%esp)
0812693d +0x181:  call   0807d8a0 <_init+0x198>
08126942 +0x186:  mov    0x8(%ebp),%eax
08126945 +0x189:  lea    0xd8(%eax),%edx
0812694b +0x18f:  mov    -0x10(%ebp),%eax
0812694e +0x192:  mov    %eax,0x4(%esp)
08126952 +0x196:  mov    %edx,(%esp)
08126955 +0x199:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
0812695a +0x19e:  lea    0x1b(%eax),%edx
0812695d +0x1a1:  movl   $0x3,0x8(%esp)
08126965 +0x1a9:  lea    -0x2a(%ebp),%eax
08126968 +0x1ac:  mov    %eax,0x4(%esp)
0812696c +0x1b0:  mov    %edx,(%esp)
0812696f +0x1b3:  call   0807d8a0 <_init+0x198>
08126974 +0x1b8:  jmp    0812698b <+0x1cf>
08126976 +0x1ba:  addl   $0x1,-0x10(%ebp)
0812697a +0x1be:  mov    -0x10(%ebp),%eax
0812697d +0x1c1:  cmp    -0x14(%ebp),%eax
08126980 +0x1c4:  setb   %al
08126983 +0x1c7:  test   %al,%al
08126985 +0x1c9:  jne    0812685a <+0x9e>
0812698b +0x1cf:  movl   $0x0,-0xc(%ebp)
08126992 +0x1d6:  jmp    08126abf <+0x303>
08126997 +0x1db:  mov    0x8(%ebp),%eax
0812699a +0x1de:  lea    0xd8(%eax),%edx
081269a0 +0x1e4:  mov    -0xc(%ebp),%eax
081269a3 +0x1e7:  mov    %eax,0x4(%esp)
081269a7 +0x1eb:  mov    %edx,(%esp)
081269aa +0x1ee:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081269af +0x1f3:  mov    0x8(%eax),%eax
081269b2 +0x1f6:  cmp    $0x5045,%eax
081269b7 +0x1fb:  jne    081269e0 <+0x224>
081269b9 +0x1fd:  mov    0x8(%ebp),%eax
081269bc +0x200:  lea    0xd8(%eax),%edx
081269c2 +0x206:  mov    -0xc(%ebp),%eax
081269c5 +0x209:  mov    %eax,0x4(%esp)
081269c9 +0x20d:  mov    %edx,(%esp)
081269cc +0x210:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081269d1 +0x215:  mov    0x4(%eax),%eax
081269d4 +0x218:  cmp    $0x1,%eax
081269d7 +0x21b:  jne    081269e0 <+0x224>
081269d9 +0x21d:  mov    $0x1,%eax
081269de +0x222:  jmp    081269e5 <+0x229>
081269e0 +0x224:  mov    $0x0,%eax
081269e5 +0x229:  test   %al,%al
081269e7 +0x22b:  je     08126abb <+0x2ff>
081269ed +0x231:  mov    0x8(%ebp),%eax
081269f0 +0x234:  mov    0x2c(%eax),%eax
081269f3 +0x237:  cmp    $0x5045,%eax
081269f8 +0x23c:  je     08126a36 <+0x27a>
081269fa +0x23e:  mov    0x8(%ebp),%eax
081269fd +0x241:  lea    0xd8(%eax),%edx
08126a03 +0x247:  mov    -0xc(%ebp),%eax
08126a06 +0x24a:  mov    %eax,0x4(%esp)
08126a0a +0x24e:  mov    %edx,(%esp)
08126a0d +0x251:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126a12 +0x256:  mov    0x8(%ebp),%edx
08126a15 +0x259:  add    $0x24,%edx
08126a18 +0x25c:  movl   $0x24,0x8(%esp)
08126a20 +0x264:  mov    %eax,0x4(%esp)
08126a24 +0x268:  mov    %edx,(%esp)
08126a27 +0x26b:  call   0807d8a0 <_init+0x198>
08126a2c +0x270:  mov    0x8(%ebp),%eax
08126a2f +0x273:  movl   $0x0,0x44(%eax)
08126a36 +0x27a:  mov    0x8(%ebp),%eax
08126a39 +0x27d:  lea    0xd8(%eax),%edx
08126a3f +0x283:  mov    -0xc(%ebp),%eax
08126a42 +0x286:  mov    %eax,0x4(%esp)
08126a46 +0x28a:  mov    %edx,(%esp)
08126a49 +0x28d:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126a4e +0x292:  movl   $0x7,0x14(%eax)
08126a55 +0x299:  mov    0x8(%ebp),%eax
08126a58 +0x29c:  lea    0xd8(%eax),%edx
08126a5e +0x2a2:  mov    -0xc(%ebp),%eax
08126a61 +0x2a5:  mov    %eax,0x4(%esp)
08126a65 +0x2a9:  mov    %edx,(%esp)
08126a68 +0x2ac:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126a6d +0x2b1:  lea    0x18(%eax),%edx
08126a70 +0x2b4:  movl   $0x3,0x8(%esp)
08126a78 +0x2bc:  lea    -0x27(%ebp),%eax
08126a7b +0x2bf:  mov    %eax,0x4(%esp)
08126a7f +0x2c3:  mov    %edx,(%esp)
08126a82 +0x2c6:  call   0807d8a0 <_init+0x198>
08126a87 +0x2cb:  mov    0x8(%ebp),%eax
08126a8a +0x2ce:  lea    0xd8(%eax),%edx
08126a90 +0x2d4:  mov    -0xc(%ebp),%eax
08126a93 +0x2d7:  mov    %eax,0x4(%esp)
08126a97 +0x2db:  mov    %edx,(%esp)
08126a9a +0x2de:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126a9f +0x2e3:  lea    0x1b(%eax),%edx
08126aa2 +0x2e6:  movl   $0x3,0x8(%esp)
08126aaa +0x2ee:  lea    -0x2a(%ebp),%eax
08126aad +0x2f1:  mov    %eax,0x4(%esp)
08126ab1 +0x2f5:  mov    %edx,(%esp)
08126ab4 +0x2f8:  call   0807d8a0 <_init+0x198>
08126ab9 +0x2fd:  jmp    08126ad0 <+0x314>
08126abb +0x2ff:  addl   $0x1,-0xc(%ebp)
08126abf +0x303:  mov    -0xc(%ebp),%eax
08126ac2 +0x306:  cmp    -0x14(%ebp),%eax
08126ac5 +0x309:  setb   %al
08126ac8 +0x30c:  test   %al,%al
08126aca +0x30e:  jne    08126997 <+0x1db>
08126ad0 +0x314:  leave
08126ad1 +0x315:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GM_OpenSouthernDale @ 0x81267bc

/* CDailyScheduleManager::GM_OpenSouthernDale() */

void __thiscall CDailyScheduleManager::GM_OpenSouthernDale(CDailyScheduleManager *this)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  tm local_88;
  tm local_5c;
  undefined1 local_2e [3];
  undefined1 local_2b [3];
  int local_28;
  int local_24 [4];
  uint local_14;
  uint local_10;
  
  local_24[1] = 100;
  local_24[2] = 0x5045;
  local_24[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(local_24,&local_5c);
  local_28 = local_24[0] + 600;
  localtime_r(&local_28,&local_88);
  local_24[3] = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  local_14 = 0;
  do {
    if ((uint)local_24[3] <= local_14) {
LAB_0812698b:
      local_10 = 0;
      while( true ) {
        if ((uint)local_24[3] <= local_10) {
          return;
        }
        iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10);
        if ((*(int *)(iVar2 + 8) == 0x5045) &&
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
      if (*(int *)(this + 0x2c) != 0x5045) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_10);
        memcpy(this + 0x24,pvVar3,0x24);
        *(undefined4 *)(this + 0x44) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x18),local_2b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x1b),local_2e,3);
      return;
    }
    iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if ((*(int *)(iVar2 + 8) == 100) &&
       (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_14), *(int *)(iVar2 + 4) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (*(int *)(this + 8) != 100) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_14);
        memcpy(this,pvVar3,0x24);
        *(undefined4 *)(this + 0x20) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x18),local_2b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x1b),local_2e,3);
      goto LAB_0812698b;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
