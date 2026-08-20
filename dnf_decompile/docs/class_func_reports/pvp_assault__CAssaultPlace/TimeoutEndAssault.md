# TimeoutEndAssault

`_ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv`

`pvp_assault::CAssaultPlace::TimeoutEndAssault()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ea004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ea004  _ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv
#           pvp_assault::CAssaultPlace::TimeoutEndAssault()
# range [0x082ea004, 0x082ea187]
082ea004 +0x000:  push   %ebp
082ea005 +0x001:  mov    %esp,%ebp
082ea007 +0x003:  push   %edi
082ea008 +0x004:  push   %esi
082ea009 +0x005:  push   %ebx
082ea00a +0x006:  sub    $0x6c,%esp
082ea00d +0x009:  mov    0x8(%ebp),%eax
082ea010 +0x00c:  add    $0xe0,%eax
082ea015 +0x011:  mov    %eax,(%esp)
082ea018 +0x014:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea01d +0x019:  mov    %eax,-0x40(%ebp)
082ea020 +0x01c:  mov    0x8(%ebp),%eax
082ea023 +0x01f:  add    $0xc0,%eax
082ea028 +0x024:  mov    %eax,(%esp)
082ea02b +0x027:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea030 +0x02c:  mov    %eax,-0x3c(%ebp)
082ea033 +0x02f:  mov    0x8(%ebp),%eax
082ea036 +0x032:  add    $0xa0,%eax
082ea03b +0x037:  mov    %eax,(%esp)
082ea03e +0x03a:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea043 +0x03f:  mov    %eax,-0x38(%ebp)
082ea046 +0x042:  mov    0x8(%ebp),%eax
082ea049 +0x045:  sub    $0xffffff80,%eax
082ea04c +0x048:  mov    %eax,(%esp)
082ea04f +0x04b:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea054 +0x050:  mov    %eax,-0x34(%ebp)
082ea057 +0x053:  mov    0x8(%ebp),%eax
082ea05a +0x056:  add    $0x60,%eax
082ea05d +0x059:  mov    %eax,(%esp)
082ea060 +0x05c:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea065 +0x061:  mov    %eax,-0x30(%ebp)
082ea068 +0x064:  mov    0x8(%ebp),%eax
082ea06b +0x067:  add    $0x40,%eax
082ea06e +0x06a:  mov    %eax,(%esp)
082ea071 +0x06d:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea076 +0x072:  mov    %eax,-0x2c(%ebp)
082ea079 +0x075:  mov    0x8(%ebp),%eax
082ea07c +0x078:  add    $0x20,%eax
082ea07f +0x07b:  mov    %eax,(%esp)
082ea082 +0x07e:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea087 +0x083:  mov    %eax,%edi
082ea089 +0x085:  mov    0x8(%ebp),%eax
082ea08c +0x088:  mov    %eax,(%esp)
082ea08f +0x08b:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ea094 +0x090:  mov    %eax,%esi
082ea096 +0x092:  mov    0x8(%ebp),%eax
082ea099 +0x095:  mov    0x10c(%eax),%eax
082ea09f +0x09b:  mov    %eax,%ebx
082ea0a1 +0x09d:  movl   $0x0,0xc(%esp)
082ea0a9 +0x0a5:  movl   $0x9ce,0x8(%esp)
082ea0b1 +0x0ad:  movl   $&_ZZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea0b9 +0x0b5:  lea    -0x28(%ebp),%eax
082ea0bc +0x0b8:  mov    %eax,(%esp)
082ea0bf +0x0bb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea0c4 +0x0c0:  mov    -0x40(%ebp),%eax
082ea0c7 +0x0c3:  mov    %eax,0x28(%esp)
082ea0cb +0x0c7:  mov    -0x3c(%ebp),%eax
082ea0ce +0x0ca:  mov    %eax,0x24(%esp)
082ea0d2 +0x0ce:  mov    -0x38(%ebp),%eax
082ea0d5 +0x0d1:  mov    %eax,0x20(%esp)
082ea0d9 +0x0d5:  mov    -0x34(%ebp),%eax
082ea0dc +0x0d8:  mov    %eax,0x1c(%esp)
082ea0e0 +0x0dc:  mov    -0x30(%ebp),%eax
082ea0e3 +0x0df:  mov    %eax,0x18(%esp)
082ea0e7 +0x0e3:  mov    -0x2c(%ebp),%eax
082ea0ea +0x0e6:  mov    %eax,0x14(%esp)
082ea0ee +0x0ea:  mov    %edi,0x10(%esp)
082ea0f2 +0x0ee:  mov    %esi,0xc(%esp)
082ea0f6 +0x0f2:  mov    %ebx,0x8(%esp)
082ea0fa +0x0f6:  movl   $"TimeoutEndAssault() state(%d) %s,%s,%s,%s,%s,%s,%s,%s",0x4(%esp)
082ea102 +0x0fe:  lea    -0x28(%ebp),%eax
082ea105 +0x101:  mov    %eax,(%esp)
082ea108 +0x104:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea10d +0x109:  mov    0x8(%ebp),%eax
082ea110 +0x10c:  mov    0x10c(%eax),%eax
082ea116 +0x112:  cmp    $0x4,%eax
082ea119 +0x115:  jne    082ea17f <+0x17b>
082ea11b +0x117:  mov    0x8(%ebp),%eax
082ea11e +0x11a:  movl   $0x5,0x10c(%eax)
082ea128 +0x124:  mov    0x8(%ebp),%eax
082ea12b +0x127:  mov    0x12c(%eax),%eax
082ea131 +0x12d:  test   %eax,%eax
082ea133 +0x12f:  je     082ea14e <+0x14a>
082ea135 +0x131:  mov    0x8(%ebp),%eax
082ea138 +0x134:  mov    0x12c(%eax),%eax
082ea13e +0x13a:  movl   $0x5,0x4(%esp)
082ea146 +0x142:  mov    %eax,(%esp)
082ea149 +0x145:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ea14e +0x14a:  mov    0x8(%ebp),%eax
082ea151 +0x14d:  mov    0x130(%eax),%eax
082ea157 +0x153:  test   %eax,%eax
082ea159 +0x155:  je     082ea174 <+0x170>
082ea15b +0x157:  mov    0x8(%ebp),%eax
082ea15e +0x15a:  mov    0x130(%eax),%eax
082ea164 +0x160:  movl   $0x5,0x4(%esp)
082ea16c +0x168:  mov    %eax,(%esp)
082ea16f +0x16b:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ea174 +0x170:  mov    0x8(%ebp),%eax
082ea177 +0x173:  mov    %eax,(%esp)
082ea17a +0x176:  call   082e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>  ; pvp_assault::CAssaultPlace::EndAssault()
082ea17f +0x17b:  add    $0x6c,%esp
082ea182 +0x17e:  pop    %ebx
082ea183 +0x17f:  pop    %esi
082ea184 +0x180:  pop    %edi
082ea185 +0x181:  pop    %ebp
082ea186 +0x182:  ret
082ea187 +0x183:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::TimeoutEndAssault @ 0x82ea004

/* pvp_assault::CAssaultPlace::TimeoutEndAssault() */

void __thiscall pvp_assault::CAssaultPlace::TimeoutEndAssault(CAssaultPlace *this)

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
  cMyTrace::cMyTrace(local_2c,"void pvp_assault::CAssaultPlace::TimeoutEndAssault()",0x9ce,0);
  cMyTrace::operator()
            (local_2c,"TimeoutEndAssault() state(%d) %s,%s,%s,%s,%s,%s,%s,%s",uVar1,uVar9,uVar8,
             uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  if (*(int *)(this + 0x10c) == 4) {
    *(undefined4 *)(this + 0x10c) = 5;
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\x05');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x05');
    }
    EndAssault(this);
  }
  return;
}
```
