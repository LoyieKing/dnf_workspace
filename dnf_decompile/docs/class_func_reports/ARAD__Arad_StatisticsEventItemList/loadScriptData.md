# loadScriptData

`_ZN4ARAD28Arad_StatisticsEventItemList14loadScriptDataEv`

`ARAD::Arad_StatisticsEventItemList::loadScriptData()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_StatisticsEventItemList` | `0x0819cd2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819cd2c  _ZN4ARAD28Arad_StatisticsEventItemList14loadScriptDataEv
#           ARAD::Arad_StatisticsEventItemList::loadScriptData()
# range [0x0819cd2c, 0x0819d083]
0819cd2c +0x000:  push   %ebp
0819cd2d +0x001:  mov    %esp,%ebp
0819cd2f +0x003:  sub    $0x98,%esp
0819cd35 +0x009:  movl   $0x28d3aa,-0x80(%ebp)
0819cd3c +0x010:  mov    0x8(%ebp),%eax
0819cd3f +0x013:  lea    0x8(%eax),%edx
0819cd42 +0x016:  lea    -0x80(%ebp),%eax
0819cd45 +0x019:  mov    %eax,0x4(%esp)
0819cd49 +0x01d:  mov    %edx,(%esp)
0819cd4c +0x020:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cd51 +0x025:  movl   $0x28d3a4,-0x7c(%ebp)
0819cd58 +0x02c:  mov    0x8(%ebp),%eax
0819cd5b +0x02f:  lea    0x8(%eax),%edx
0819cd5e +0x032:  lea    -0x7c(%ebp),%eax
0819cd61 +0x035:  mov    %eax,0x4(%esp)
0819cd65 +0x039:  mov    %edx,(%esp)
0819cd68 +0x03c:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cd6d +0x041:  movl   $0x6856,-0x78(%ebp)
0819cd74 +0x048:  mov    0x8(%ebp),%eax
0819cd77 +0x04b:  lea    0x8(%eax),%edx
0819cd7a +0x04e:  lea    -0x78(%ebp),%eax
0819cd7d +0x051:  mov    %eax,0x4(%esp)
0819cd81 +0x055:  mov    %edx,(%esp)
0819cd84 +0x058:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cd89 +0x05d:  movl   $0x6857,-0x74(%ebp)
0819cd90 +0x064:  mov    0x8(%ebp),%eax
0819cd93 +0x067:  lea    0x8(%eax),%edx
0819cd96 +0x06a:  lea    -0x74(%ebp),%eax
0819cd99 +0x06d:  mov    %eax,0x4(%esp)
0819cd9d +0x071:  mov    %edx,(%esp)
0819cda0 +0x074:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cda5 +0x079:  movl   $0x6858,-0x70(%ebp)
0819cdac +0x080:  mov    0x8(%ebp),%eax
0819cdaf +0x083:  lea    0x8(%eax),%edx
0819cdb2 +0x086:  lea    -0x70(%ebp),%eax
0819cdb5 +0x089:  mov    %eax,0x4(%esp)
0819cdb9 +0x08d:  mov    %edx,(%esp)
0819cdbc +0x090:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cdc1 +0x095:  movl   $0x6859,-0x6c(%ebp)
0819cdc8 +0x09c:  mov    0x8(%ebp),%eax
0819cdcb +0x09f:  lea    0x8(%eax),%edx
0819cdce +0x0a2:  lea    -0x6c(%ebp),%eax
0819cdd1 +0x0a5:  mov    %eax,0x4(%esp)
0819cdd5 +0x0a9:  mov    %edx,(%esp)
0819cdd8 +0x0ac:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cddd +0x0b1:  movl   $0x685a,-0x68(%ebp)
0819cde4 +0x0b8:  mov    0x8(%ebp),%eax
0819cde7 +0x0bb:  lea    0x8(%eax),%edx
0819cdea +0x0be:  lea    -0x68(%ebp),%eax
0819cded +0x0c1:  mov    %eax,0x4(%esp)
0819cdf1 +0x0c5:  mov    %edx,(%esp)
0819cdf4 +0x0c8:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cdf9 +0x0cd:  movl   $0x685b,-0x64(%ebp)
0819ce00 +0x0d4:  mov    0x8(%ebp),%eax
0819ce03 +0x0d7:  lea    0x8(%eax),%edx
0819ce06 +0x0da:  lea    -0x64(%ebp),%eax
0819ce09 +0x0dd:  mov    %eax,0x4(%esp)
0819ce0d +0x0e1:  mov    %edx,(%esp)
0819ce10 +0x0e4:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819ce15 +0x0e9:  movl   $0x685c,-0x60(%ebp)
0819ce1c +0x0f0:  mov    0x8(%ebp),%eax
0819ce1f +0x0f3:  lea    0x8(%eax),%edx
0819ce22 +0x0f6:  lea    -0x60(%ebp),%eax
0819ce25 +0x0f9:  mov    %eax,0x4(%esp)
0819ce29 +0x0fd:  mov    %edx,(%esp)
0819ce2c +0x100:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819ce31 +0x105:  movl   $0x1d98,-0x5c(%ebp)
0819ce38 +0x10c:  mov    0x8(%ebp),%eax
0819ce3b +0x10f:  lea    0x8(%eax),%edx
0819ce3e +0x112:  lea    -0x5c(%ebp),%eax
0819ce41 +0x115:  mov    %eax,0x4(%esp)
0819ce45 +0x119:  mov    %edx,(%esp)
0819ce48 +0x11c:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819ce4d +0x121:  movl   $0x28d435,-0x58(%ebp)
0819ce54 +0x128:  mov    0x8(%ebp),%eax
0819ce57 +0x12b:  lea    0x8(%eax),%edx
0819ce5a +0x12e:  lea    -0x58(%ebp),%eax
0819ce5d +0x131:  mov    %eax,0x4(%esp)
0819ce61 +0x135:  mov    %edx,(%esp)
0819ce64 +0x138:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819ce69 +0x13d:  movl   $0x28d436,-0x54(%ebp)
0819ce70 +0x144:  mov    0x8(%ebp),%eax
0819ce73 +0x147:  lea    0x8(%eax),%edx
0819ce76 +0x14a:  lea    -0x54(%ebp),%eax
0819ce79 +0x14d:  mov    %eax,0x4(%esp)
0819ce7d +0x151:  mov    %edx,(%esp)
0819ce80 +0x154:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819ce85 +0x159:  movl   $0x28d437,-0x50(%ebp)
0819ce8c +0x160:  mov    0x8(%ebp),%eax
0819ce8f +0x163:  lea    0x8(%eax),%edx
0819ce92 +0x166:  lea    -0x50(%ebp),%eax
0819ce95 +0x169:  mov    %eax,0x4(%esp)
0819ce99 +0x16d:  mov    %edx,(%esp)
0819ce9c +0x170:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cea1 +0x175:  movl   $0x28d438,-0x4c(%ebp)
0819cea8 +0x17c:  mov    0x8(%ebp),%eax
0819ceab +0x17f:  lea    0x8(%eax),%edx
0819ceae +0x182:  lea    -0x4c(%ebp),%eax
0819ceb1 +0x185:  mov    %eax,0x4(%esp)
0819ceb5 +0x189:  mov    %edx,(%esp)
0819ceb8 +0x18c:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cebd +0x191:  movl   $0x28d439,-0x48(%ebp)
0819cec4 +0x198:  mov    0x8(%ebp),%eax
0819cec7 +0x19b:  lea    0x8(%eax),%edx
0819ceca +0x19e:  lea    -0x48(%ebp),%eax
0819cecd +0x1a1:  mov    %eax,0x4(%esp)
0819ced1 +0x1a5:  mov    %edx,(%esp)
0819ced4 +0x1a8:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819ced9 +0x1ad:  movl   $0x1d95,-0x44(%ebp)
0819cee0 +0x1b4:  mov    0x8(%ebp),%eax
0819cee3 +0x1b7:  lea    0x8(%eax),%edx
0819cee6 +0x1ba:  lea    -0x44(%ebp),%eax
0819cee9 +0x1bd:  mov    %eax,0x4(%esp)
0819ceed +0x1c1:  mov    %edx,(%esp)
0819cef0 +0x1c4:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cef5 +0x1c9:  movl   $0x28d14d,-0x40(%ebp)
0819cefc +0x1d0:  mov    0x8(%ebp),%eax
0819ceff +0x1d3:  lea    0x8(%eax),%edx
0819cf02 +0x1d6:  lea    -0x40(%ebp),%eax
0819cf05 +0x1d9:  mov    %eax,0x4(%esp)
0819cf09 +0x1dd:  mov    %edx,(%esp)
0819cf0c +0x1e0:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cf11 +0x1e5:  movl   $0x28cdad,-0x3c(%ebp)
0819cf18 +0x1ec:  mov    0x8(%ebp),%eax
0819cf1b +0x1ef:  lea    0x8(%eax),%edx
0819cf1e +0x1f2:  lea    -0x3c(%ebp),%eax
0819cf21 +0x1f5:  mov    %eax,0x4(%esp)
0819cf25 +0x1f9:  mov    %edx,(%esp)
0819cf28 +0x1fc:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cf2d +0x201:  movl   $0x28cdac,-0x38(%ebp)
0819cf34 +0x208:  mov    0x8(%ebp),%eax
0819cf37 +0x20b:  lea    0x8(%eax),%edx
0819cf3a +0x20e:  lea    -0x38(%ebp),%eax
0819cf3d +0x211:  mov    %eax,0x4(%esp)
0819cf41 +0x215:  mov    %edx,(%esp)
0819cf44 +0x218:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cf49 +0x21d:  movl   $0x28d487,-0x34(%ebp)
0819cf50 +0x224:  mov    0x8(%ebp),%eax
0819cf53 +0x227:  lea    0x8(%eax),%edx
0819cf56 +0x22a:  lea    -0x34(%ebp),%eax
0819cf59 +0x22d:  mov    %eax,0x4(%esp)
0819cf5d +0x231:  mov    %edx,(%esp)
0819cf60 +0x234:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cf65 +0x239:  movl   $0x28d4bf,-0x30(%ebp)
0819cf6c +0x240:  mov    0x8(%ebp),%eax
0819cf6f +0x243:  lea    0x8(%eax),%edx
0819cf72 +0x246:  lea    -0x30(%ebp),%eax
0819cf75 +0x249:  mov    %eax,0x4(%esp)
0819cf79 +0x24d:  mov    %edx,(%esp)
0819cf7c +0x250:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cf81 +0x255:  movl   $0x2a445c,-0x2c(%ebp)
0819cf88 +0x25c:  mov    0x8(%ebp),%eax
0819cf8b +0x25f:  lea    0x8(%eax),%edx
0819cf8e +0x262:  lea    -0x2c(%ebp),%eax
0819cf91 +0x265:  mov    %eax,0x4(%esp)
0819cf95 +0x269:  mov    %edx,(%esp)
0819cf98 +0x26c:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cf9d +0x271:  movl   $0x2a4a9c,-0x28(%ebp)
0819cfa4 +0x278:  mov    0x8(%ebp),%eax
0819cfa7 +0x27b:  lea    0x8(%eax),%edx
0819cfaa +0x27e:  lea    -0x28(%ebp),%eax
0819cfad +0x281:  mov    %eax,0x4(%esp)
0819cfb1 +0x285:  mov    %edx,(%esp)
0819cfb4 +0x288:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cfb9 +0x28d:  movl   $0x2a7026,-0x24(%ebp)
0819cfc0 +0x294:  mov    0x8(%ebp),%eax
0819cfc3 +0x297:  lea    0x8(%eax),%edx
0819cfc6 +0x29a:  lea    -0x24(%ebp),%eax
0819cfc9 +0x29d:  mov    %eax,0x4(%esp)
0819cfcd +0x2a1:  mov    %edx,(%esp)
0819cfd0 +0x2a4:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cfd5 +0x2a9:  movl   $0x2a639c,-0x20(%ebp)
0819cfdc +0x2b0:  mov    0x8(%ebp),%eax
0819cfdf +0x2b3:  lea    0x8(%eax),%edx
0819cfe2 +0x2b6:  lea    -0x20(%ebp),%eax
0819cfe5 +0x2b9:  mov    %eax,0x4(%esp)
0819cfe9 +0x2bd:  mov    %edx,(%esp)
0819cfec +0x2c0:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819cff1 +0x2c5:  movl   $0x2a50dc,-0x1c(%ebp)
0819cff8 +0x2cc:  mov    0x8(%ebp),%eax
0819cffb +0x2cf:  lea    0x8(%eax),%edx
0819cffe +0x2d2:  lea    -0x1c(%ebp),%eax
0819d001 +0x2d5:  mov    %eax,0x4(%esp)
0819d005 +0x2d9:  mov    %edx,(%esp)
0819d008 +0x2dc:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819d00d +0x2e1:  movl   $0x2a571c,-0x18(%ebp)
0819d014 +0x2e8:  mov    0x8(%ebp),%eax
0819d017 +0x2eb:  lea    0x8(%eax),%edx
0819d01a +0x2ee:  lea    -0x18(%ebp),%eax
0819d01d +0x2f1:  mov    %eax,0x4(%esp)
0819d021 +0x2f5:  mov    %edx,(%esp)
0819d024 +0x2f8:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819d029 +0x2fd:  movl   $0x2a7660,-0x14(%ebp)
0819d030 +0x304:  mov    0x8(%ebp),%eax
0819d033 +0x307:  lea    0x8(%eax),%edx
0819d036 +0x30a:  lea    -0x14(%ebp),%eax
0819d039 +0x30d:  mov    %eax,0x4(%esp)
0819d03d +0x311:  mov    %edx,(%esp)
0819d040 +0x314:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819d045 +0x319:  movl   $0x2a5d63,-0x10(%ebp)
0819d04c +0x320:  mov    0x8(%ebp),%eax
0819d04f +0x323:  lea    0x8(%eax),%edx
0819d052 +0x326:  lea    -0x10(%ebp),%eax
0819d055 +0x329:  mov    %eax,0x4(%esp)
0819d059 +0x32d:  mov    %edx,(%esp)
0819d05c +0x330:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819d061 +0x335:  movl   $0x2a69dd,-0xc(%ebp)
0819d068 +0x33c:  mov    0x8(%ebp),%eax
0819d06b +0x33f:  lea    0x8(%eax),%edx
0819d06e +0x342:  lea    -0xc(%ebp),%eax
0819d071 +0x345:  mov    %eax,0x4(%esp)
0819d075 +0x349:  mov    %edx,(%esp)
0819d078 +0x34c:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
0819d07d +0x351:  mov    $0x1,%eax
0819d082 +0x356:  leave
0819d083 +0x357:  ret
```

## 反编译 C

```c
// ARAD::Arad_StatisticsEventItemList::loadScriptData @ 0x819cd2c

/* ARAD::Arad_StatisticsEventItemList::loadScriptData() */

undefined4 __thiscall
ARAD::Arad_StatisticsEventItemList::loadScriptData(Arad_StatisticsEventItemList *this)

{
  ulong local_84 [32];
  
  local_84[0] = 0x28d3aa;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84);
  local_84[1] = 0x28d3a4;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 1);
  local_84[2] = 0x6856;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 2);
  local_84[3] = 0x6857;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 3);
  local_84[4] = 0x6858;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 4);
  local_84[5] = 0x6859;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 5);
  local_84[6] = 0x685a;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 6);
  local_84[7] = 0x685b;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 7);
  local_84[8] = 0x685c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 8);
  local_84[9] = 0x1d98;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 9);
  local_84[10] = 0x28d435;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 10);
  local_84[0xb] = 0x28d436;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xb);
  local_84[0xc] = 0x28d437;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xc);
  local_84[0xd] = 0x28d438;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xd);
  local_84[0xe] = 0x28d439;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xe);
  local_84[0xf] = 0x1d95;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xf);
  local_84[0x10] = 0x28d14d;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x10);
  local_84[0x11] = 0x28cdad;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x11);
  local_84[0x12] = 0x28cdac;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x12);
  local_84[0x13] = 0x28d487;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x13);
  local_84[0x14] = 0x28d4bf;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x14);
  local_84[0x15] = 0x2a445c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x15);
  local_84[0x16] = 0x2a4a9c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x16);
  local_84[0x17] = 0x2a7026;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x17);
  local_84[0x18] = 0x2a639c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x18);
  local_84[0x19] = 0x2a50dc;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x19);
  local_84[0x1a] = 0x2a571c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1a);
  local_84[0x1b] = 0x2a7660;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1b);
  local_84[0x1c] = 0x2a5d63;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1c);
  local_84[0x1d] = 0x2a69dd;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1d);
  return 1;
}
```
