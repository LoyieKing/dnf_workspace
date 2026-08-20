# addDungeonClear

`_ZN6CParty15addDungeonClearEPK8CDungeonii`

`CParty::addDungeonClear(CDungeon const*, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bddfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bddfc  _ZN6CParty15addDungeonClearEPK8CDungeonii
#           CParty::addDungeonClear(CDungeon const*, int, int)
# range [0x085bddfc, 0x085be059]
085bddfc +0x000:  push   %ebp
085bddfd +0x001:  mov    %esp,%ebp
085bddff +0x003:  push   %ebx
085bde00 +0x004:  sub    $0x24,%esp
085bde03 +0x007:  movl   $0x0,-0xc(%ebp)
085bde0a +0x00e:  jmp    085be040 <+0x244>
085bde0f +0x013:  mov    0x14(%ebp),%edx
085bde12 +0x016:  mov    0x8(%ebp),%ecx
085bde15 +0x019:  mov    %edx,%eax
085bde17 +0x01b:  add    %eax,%eax
085bde19 +0x01d:  add    %edx,%eax
085bde1b +0x01f:  shl    $0x3,%eax
085bde1e +0x022:  lea    (%ecx,%eax,1),%eax
085bde21 +0x025:  add    $0x78,%eax
085bde24 +0x028:  mov    (%eax),%eax
085bde26 +0x02a:  mov    %eax,(%esp)
085bde29 +0x02d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085bde2e +0x032:  mov    -0xc(%ebp),%ecx
085bde31 +0x035:  mov    0x8(%ebp),%edx
085bde34 +0x038:  add    $0x300,%ecx
085bde3a +0x03e:  movzwl 0x8(%edx,%ecx,8),%edx
085bde3f +0x043:  cmp    %dx,%ax
085bde42 +0x046:  setne  %al
085bde45 +0x049:  test   %al,%al
085bde47 +0x04b:  jne    085be032 <+0x236>
085bde4d +0x051:  mov    0xc(%ebp),%eax
085bde50 +0x054:  mov    %eax,0x4(%esp)
085bde54 +0x058:  mov    0x8(%ebp),%eax
085bde57 +0x05b:  mov    %eax,(%esp)
085bde5a +0x05e:  call   085bdd2a <_ZN6CParty18getDungeonTypeKindEPK8CDungeon>  ; CParty::getDungeonTypeKind(CDungeon const*)
085bde5f +0x063:  cmp    $0x1,%eax
085bde62 +0x066:  je     085bdf0c <+0x110>
085bde68 +0x06c:  cmp    $0x2,%eax
085bde6b +0x06f:  je     085bdf9f <+0x1a3>
085bde71 +0x075:  test   %eax,%eax
085bde73 +0x077:  jne    085be02b <+0x22f>
085bde79 +0x07d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bde7e +0x082:  movzwl 0x512c(%eax),%eax
085bde85 +0x089:  movzwl %ax,%eax
085bde88 +0x08c:  cmp    0x10(%ebp),%eax
085bde8b +0x08f:  jg     085bdec6 <+0xca>
085bde8d +0x091:  mov    -0xc(%ebp),%edx
085bde90 +0x094:  mov    0x8(%ebp),%eax
085bde93 +0x097:  add    $0x300,%edx
085bde99 +0x09d:  mov    0xc(%eax,%edx,8),%eax
085bde9d +0x0a1:  cmp    $0xa,%eax
085bdea0 +0x0a4:  jg     085bdec6 <+0xca>
085bdea2 +0x0a6:  mov    0x14(%ebp),%edx
085bdea5 +0x0a9:  mov    0x8(%ebp),%ecx
085bdea8 +0x0ac:  mov    %edx,%eax
085bdeaa +0x0ae:  add    %eax,%eax
085bdeac +0x0b0:  add    %edx,%eax
085bdeae +0x0b2:  shl    $0x3,%eax
085bdeb1 +0x0b5:  lea    (%ecx,%eax,1),%eax
085bdeb4 +0x0b8:  add    $0x8c,%eax
085bdeb9 +0x0bd:  mov    (%eax),%eax
085bdebb +0x0bf:  test   %eax,%eax
085bdebd +0x0c1:  jne    085bdec6 <+0xca>
085bdebf +0x0c3:  mov    $0x1,%eax
085bdec4 +0x0c8:  jmp    085bdecb <+0xcf>
085bdec6 +0x0ca:  mov    $0x0,%eax
085bdecb +0x0cf:  test   %al,%al
085bdecd +0x0d1:  je     085be035 <+0x239>
085bded3 +0x0d7:  mov    0x8(%ebp),%eax
085bded6 +0x0da:  mov    0xcb8(%eax),%ecx
085bdedc +0x0e0:  mov    0x14(%ebp),%edx
085bdedf +0x0e3:  mov    0x8(%ebp),%ebx
085bdee2 +0x0e6:  mov    %edx,%eax
085bdee4 +0x0e8:  add    %eax,%eax
085bdee6 +0x0ea:  add    %edx,%eax
085bdee8 +0x0ec:  shl    $0x3,%eax
085bdeeb +0x0ef:  lea    (%ebx,%eax,1),%eax
085bdeee +0x0f2:  add    $0x78,%eax
085bdef1 +0x0f5:  mov    (%eax),%eax
085bdef3 +0x0f7:  movl   $0x3,0x8(%esp)
085bdefb +0x0ff:  mov    %ecx,0x4(%esp)
085bdeff +0x103:  mov    %eax,(%esp)
085bdf02 +0x106:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
085bdf07 +0x10b:  jmp    085be054 <+0x258>
085bdf0c +0x110:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bdf11 +0x115:  movzwl 0x512e(%eax),%eax
085bdf18 +0x11c:  movzwl %ax,%eax
085bdf1b +0x11f:  cmp    0x10(%ebp),%eax
085bdf1e +0x122:  jg     085bdf59 <+0x15d>
085bdf20 +0x124:  mov    -0xc(%ebp),%edx
085bdf23 +0x127:  mov    0x8(%ebp),%eax
085bdf26 +0x12a:  add    $0x300,%edx
085bdf2c +0x130:  mov    0xc(%eax,%edx,8),%eax
085bdf30 +0x134:  cmp    $0x1e,%eax
085bdf33 +0x137:  jg     085bdf59 <+0x15d>
085bdf35 +0x139:  mov    0x14(%ebp),%edx
085bdf38 +0x13c:  mov    0x8(%ebp),%ecx
085bdf3b +0x13f:  mov    %edx,%eax
085bdf3d +0x141:  add    %eax,%eax
085bdf3f +0x143:  add    %edx,%eax
085bdf41 +0x145:  shl    $0x3,%eax
085bdf44 +0x148:  lea    (%ecx,%eax,1),%eax
085bdf47 +0x14b:  add    $0x8c,%eax
085bdf4c +0x150:  mov    (%eax),%eax
085bdf4e +0x152:  test   %eax,%eax
085bdf50 +0x154:  jne    085bdf59 <+0x15d>
085bdf52 +0x156:  mov    $0x1,%eax
085bdf57 +0x15b:  jmp    085bdf5e <+0x162>
085bdf59 +0x15d:  mov    $0x0,%eax
085bdf5e +0x162:  test   %al,%al
085bdf60 +0x164:  je     085be038 <+0x23c>
085bdf66 +0x16a:  mov    0x8(%ebp),%eax
085bdf69 +0x16d:  mov    0xcb8(%eax),%ecx
085bdf6f +0x173:  mov    0x14(%ebp),%edx
085bdf72 +0x176:  mov    0x8(%ebp),%ebx
085bdf75 +0x179:  mov    %edx,%eax
085bdf77 +0x17b:  add    %eax,%eax
085bdf79 +0x17d:  add    %edx,%eax
085bdf7b +0x17f:  shl    $0x3,%eax
085bdf7e +0x182:  lea    (%ebx,%eax,1),%eax
085bdf81 +0x185:  add    $0x78,%eax
085bdf84 +0x188:  mov    (%eax),%eax
085bdf86 +0x18a:  movl   $0x3,0x8(%esp)
085bdf8e +0x192:  mov    %ecx,0x4(%esp)
085bdf92 +0x196:  mov    %eax,(%esp)
085bdf95 +0x199:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
085bdf9a +0x19e:  jmp    085be054 <+0x258>
085bdf9f +0x1a3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bdfa4 +0x1a8:  movzwl 0x512e(%eax),%eax
085bdfab +0x1af:  movzwl %ax,%eax
085bdfae +0x1b2:  cmp    0x10(%ebp),%eax
085bdfb1 +0x1b5:  jg     085bdfec <+0x1f0>
085bdfb3 +0x1b7:  mov    -0xc(%ebp),%edx
085bdfb6 +0x1ba:  mov    0x8(%ebp),%eax
085bdfb9 +0x1bd:  add    $0x300,%edx
085bdfbf +0x1c3:  mov    0xc(%eax,%edx,8),%eax
085bdfc3 +0x1c7:  cmp    $0x32,%eax
085bdfc6 +0x1ca:  jg     085bdfec <+0x1f0>
085bdfc8 +0x1cc:  mov    0x14(%ebp),%edx
085bdfcb +0x1cf:  mov    0x8(%ebp),%ecx
085bdfce +0x1d2:  mov    %edx,%eax
085bdfd0 +0x1d4:  add    %eax,%eax
085bdfd2 +0x1d6:  add    %edx,%eax
085bdfd4 +0x1d8:  shl    $0x3,%eax
085bdfd7 +0x1db:  lea    (%ecx,%eax,1),%eax
085bdfda +0x1de:  add    $0x8c,%eax
085bdfdf +0x1e3:  mov    (%eax),%eax
085bdfe1 +0x1e5:  test   %eax,%eax
085bdfe3 +0x1e7:  jne    085bdfec <+0x1f0>
085bdfe5 +0x1e9:  mov    $0x1,%eax
085bdfea +0x1ee:  jmp    085bdff1 <+0x1f5>
085bdfec +0x1f0:  mov    $0x0,%eax
085bdff1 +0x1f5:  test   %al,%al
085bdff3 +0x1f7:  je     085be03b <+0x23f>
085bdff5 +0x1f9:  mov    0x8(%ebp),%eax
085bdff8 +0x1fc:  mov    0xcb8(%eax),%ecx
085bdffe +0x202:  mov    0x14(%ebp),%edx
085be001 +0x205:  mov    0x8(%ebp),%ebx
085be004 +0x208:  mov    %edx,%eax
085be006 +0x20a:  add    %eax,%eax
085be008 +0x20c:  add    %edx,%eax
085be00a +0x20e:  shl    $0x3,%eax
085be00d +0x211:  lea    (%ebx,%eax,1),%eax
085be010 +0x214:  add    $0x78,%eax
085be013 +0x217:  mov    (%eax),%eax
085be015 +0x219:  movl   $0x3,0x8(%esp)
085be01d +0x221:  mov    %ecx,0x4(%esp)
085be021 +0x225:  mov    %eax,(%esp)
085be024 +0x228:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
085be029 +0x22d:  jmp    085be054 <+0x258>
085be02b +0x22f:  mov    $0x0,%eax
085be030 +0x234:  jmp    085be054 <+0x258>
085be032 +0x236:  nop
085be033 +0x237:  jmp    085be03c <+0x240>
085be035 +0x239:  nop
085be036 +0x23a:  jmp    085be03c <+0x240>
085be038 +0x23c:  nop
085be039 +0x23d:  jmp    085be03c <+0x240>
085be03b +0x23f:  nop
085be03c +0x240:  addl   $0x1,-0xc(%ebp)
085be040 +0x244:  cmpl   $0x3,-0xc(%ebp)
085be044 +0x248:  setle  %al
085be047 +0x24b:  test   %al,%al
085be049 +0x24d:  jne    085bde0f <+0x13>
085be04f +0x253:  mov    $0x0,%eax
085be054 +0x258:  add    $0x24,%esp
085be057 +0x25b:  pop    %ebx
085be058 +0x25c:  pop    %ebp
085be059 +0x25d:  ret
```

## 反编译 C

```c
// CParty::addDungeonClear @ 0x85bddfc

/* CParty::addDungeonClear(CDungeon const*, int, int) */

undefined4 __thiscall
CParty::addDungeonClear(CParty *this,CDungeon *param_1,int param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 0;
    }
    sVar2 = CUser::get_unique_id(*(CUser **)(this + param_3 * 0x18 + 0x78));
    if (sVar2 == *(short *)(this + (local_10 + 0x300) * 8 + 8)) {
      iVar3 = getDungeonTypeKind(this,param_1);
      if (iVar3 == 1) {
        iVar3 = G_CDataManager();
        if (((param_2 < (int)(uint)*(ushort *)(iVar3 + 0x512e)) ||
            (0x1e < *(int *)(this + (local_10 + 0x300) * 8 + 0xc))) ||
           (*(int *)(this + param_3 * 0x18 + 0x8c) != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar4 = CUser::AddDungeonClear
                            (*(CUser **)(this + param_3 * 0x18 + 0x78),*(int *)(this + 0xcb8),3);
          return uVar4;
        }
      }
      else if (iVar3 == 2) {
        iVar3 = G_CDataManager();
        if (((param_2 < (int)(uint)*(ushort *)(iVar3 + 0x512e)) ||
            (0x32 < *(int *)(this + (local_10 + 0x300) * 8 + 0xc))) ||
           (*(int *)(this + param_3 * 0x18 + 0x8c) != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar4 = CUser::AddDungeonClear
                            (*(CUser **)(this + param_3 * 0x18 + 0x78),*(int *)(this + 0xcb8),3);
          return uVar4;
        }
      }
      else {
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = G_CDataManager();
        if (((param_2 < (int)(uint)*(ushort *)(iVar3 + 0x512c)) ||
            (10 < *(int *)(this + (local_10 + 0x300) * 8 + 0xc))) ||
           (*(int *)(this + param_3 * 0x18 + 0x8c) != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar4 = CUser::AddDungeonClear
                            (*(CUser **)(this + param_3 * 0x18 + 0x78),*(int *)(this + 0xcb8),3);
          return uVar4;
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
