# TimeoutCloseAssault

`_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv`

`pvp_assault::CAssaultPlace::TimeoutCloseAssault()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ea188` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ea188  _ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv
#           pvp_assault::CAssaultPlace::TimeoutCloseAssault()
# range [0x082ea188, 0x082ea319]
082ea188 +0x000:  push   %ebp
082ea189 +0x001:  mov    %esp,%ebp
082ea18b +0x003:  push   %edi
082ea18c +0x004:  push   %esi
082ea18d +0x005:  push   %ebx
082ea18e +0x006:  sub    $0x6c,%esp
082ea191 +0x009:  mov    0x8(%ebp),%eax
082ea194 +0x00c:  add    $0xe0,%eax
082ea199 +0x011:  mov    %eax,(%esp)
082ea19c +0x014:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea1a1 +0x019:  mov    %eax,-0x40(%ebp)
082ea1a4 +0x01c:  mov    0x8(%ebp),%eax
082ea1a7 +0x01f:  add    $0xc0,%eax
082ea1ac +0x024:  mov    %eax,(%esp)
082ea1af +0x027:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea1b4 +0x02c:  mov    %eax,-0x3c(%ebp)
082ea1b7 +0x02f:  mov    0x8(%ebp),%eax
082ea1ba +0x032:  add    $0xa0,%eax
082ea1bf +0x037:  mov    %eax,(%esp)
082ea1c2 +0x03a:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea1c7 +0x03f:  mov    %eax,-0x38(%ebp)
082ea1ca +0x042:  mov    0x8(%ebp),%eax
082ea1cd +0x045:  sub    $0xffffff80,%eax
082ea1d0 +0x048:  mov    %eax,(%esp)
082ea1d3 +0x04b:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea1d8 +0x050:  mov    %eax,-0x34(%ebp)
082ea1db +0x053:  mov    0x8(%ebp),%eax
082ea1de +0x056:  add    $0x60,%eax
082ea1e1 +0x059:  mov    %eax,(%esp)
082ea1e4 +0x05c:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea1e9 +0x061:  mov    %eax,-0x30(%ebp)
082ea1ec +0x064:  mov    0x8(%ebp),%eax
082ea1ef +0x067:  add    $0x40,%eax
082ea1f2 +0x06a:  mov    %eax,(%esp)
082ea1f5 +0x06d:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea1fa +0x072:  mov    %eax,-0x2c(%ebp)
082ea1fd +0x075:  mov    0x8(%ebp),%eax
082ea200 +0x078:  add    $0x20,%eax
082ea203 +0x07b:  mov    %eax,(%esp)
082ea206 +0x07e:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea20b +0x083:  mov    %eax,%edi
082ea20d +0x085:  mov    0x8(%ebp),%eax
082ea210 +0x088:  mov    %eax,(%esp)
082ea213 +0x08b:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea218 +0x090:  mov    %eax,%esi
082ea21a +0x092:  mov    0x8(%ebp),%eax
082ea21d +0x095:  mov    0x10c(%eax),%eax
082ea223 +0x09b:  mov    %eax,%ebx
082ea225 +0x09d:  movl   $0x0,0xc(%esp)
082ea22d +0x0a5:  movl   $0x9ea,0x8(%esp)
082ea235 +0x0ad:  movl   $&_ZZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea23d +0x0b5:  lea    -0x28(%ebp),%eax
082ea240 +0x0b8:  mov    %eax,(%esp)
082ea243 +0x0bb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea248 +0x0c0:  mov    -0x40(%ebp),%eax
082ea24b +0x0c3:  mov    %eax,0x28(%esp)
082ea24f +0x0c7:  mov    -0x3c(%ebp),%eax
082ea252 +0x0ca:  mov    %eax,0x24(%esp)
082ea256 +0x0ce:  mov    -0x38(%ebp),%eax
082ea259 +0x0d1:  mov    %eax,0x20(%esp)
082ea25d +0x0d5:  mov    -0x34(%ebp),%eax
082ea260 +0x0d8:  mov    %eax,0x1c(%esp)
082ea264 +0x0dc:  mov    -0x30(%ebp),%eax
082ea267 +0x0df:  mov    %eax,0x18(%esp)
082ea26b +0x0e3:  mov    -0x2c(%ebp),%eax
082ea26e +0x0e6:  mov    %eax,0x14(%esp)
082ea272 +0x0ea:  mov    %edi,0x10(%esp)
082ea276 +0x0ee:  mov    %esi,0xc(%esp)
082ea27a +0x0f2:  mov    %ebx,0x8(%esp)
082ea27e +0x0f6:  movl   $"TimeoutCloseAssault() state(%d) %s,%s,%s,%s,%s,%s,%s,%s",0x4(%esp)
082ea286 +0x0fe:  lea    -0x28(%ebp),%eax
082ea289 +0x101:  mov    %eax,(%esp)
082ea28c +0x104:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea291 +0x109:  mov    0x8(%ebp),%eax
082ea294 +0x10c:  mov    0x10c(%eax),%eax
082ea29a +0x112:  cmp    $0x5,%eax
082ea29d +0x115:  je     082ea2ad <+0x125>
082ea29f +0x117:  mov    0x8(%ebp),%eax
082ea2a2 +0x11a:  mov    0x10c(%eax),%eax
082ea2a8 +0x120:  cmp    $0x6,%eax
082ea2ab +0x123:  jne    082ea311 <+0x189>
082ea2ad +0x125:  mov    0x8(%ebp),%eax
082ea2b0 +0x128:  mov    0x12c(%eax),%eax
082ea2b6 +0x12e:  test   %eax,%eax
082ea2b8 +0x130:  je     082ea2d3 <+0x14b>
082ea2ba +0x132:  mov    0x8(%ebp),%eax
082ea2bd +0x135:  mov    0x12c(%eax),%eax
082ea2c3 +0x13b:  movl   $0x7,0x4(%esp)
082ea2cb +0x143:  mov    %eax,(%esp)
082ea2ce +0x146:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ea2d3 +0x14b:  mov    0x8(%ebp),%eax
082ea2d6 +0x14e:  mov    0x130(%eax),%eax
082ea2dc +0x154:  test   %eax,%eax
082ea2de +0x156:  je     082ea2f9 <+0x171>
082ea2e0 +0x158:  mov    0x8(%ebp),%eax
082ea2e3 +0x15b:  mov    0x130(%eax),%eax
082ea2e9 +0x161:  movl   $0x7,0x4(%esp)
082ea2f1 +0x169:  mov    %eax,(%esp)
082ea2f4 +0x16c:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ea2f9 +0x171:  mov    0x8(%ebp),%eax
082ea2fc +0x174:  movl   $0x7,0x10c(%eax)
082ea306 +0x17e:  mov    0x8(%ebp),%eax
082ea309 +0x181:  mov    %eax,(%esp)
082ea30c +0x184:  call   082e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>  ; pvp_assault::CAssaultPlace::CloseAssault()
082ea311 +0x189:  add    $0x6c,%esp
082ea314 +0x18c:  pop    %ebx
082ea315 +0x18d:  pop    %esi
082ea316 +0x18e:  pop    %edi
082ea317 +0x18f:  pop    %ebp
082ea318 +0x190:  ret
082ea319 +0x191:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::TimeoutCloseAssault @ 0x82ea188

/* pvp_assault::CAssaultPlace::TimeoutCloseAssault() */

void __thiscall pvp_assault::CAssaultPlace::TimeoutCloseAssault(CAssaultPlace *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  cMyTrace local_2c [28];
  
  uVar2 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xe0));
  uVar3 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xc0));
  uVar4 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xa0));
  uVar5 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x80));
  uVar6 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x60));
  uVar7 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x40));
  uVar8 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x20));
  uVar9 = CAssaulter::GetCharacName((CAssaulter *)this);
  uVar1 = *(undefined4 *)(this + 0x10c);
  cMyTrace::cMyTrace(local_2c,"void pvp_assault::CAssaultPlace::TimeoutCloseAssault()",0x9ea,0);
  cMyTrace::operator()
            (local_2c,"TimeoutCloseAssault() state(%d) %s,%s,%s,%s,%s,%s,%s,%s",uVar1,uVar9,uVar8,
             uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  if ((*(int *)(this + 0x10c) == 5) || (*(int *)(this + 0x10c) == 6)) {
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
    }
    *(undefined4 *)(this + 0x10c) = 7;
    CloseAssault(this);
  }
  return;
}
```
