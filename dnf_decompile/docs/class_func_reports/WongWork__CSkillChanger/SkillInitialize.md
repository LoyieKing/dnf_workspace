# SkillInitialize

`_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib`

`WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x08609e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08609e90  _ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib
#           WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
# range [0x08609e90, 0x0860a1e5]
08609e90 +0x000:  push   %ebp
08609e91 +0x001:  mov    %esp,%ebp
08609e93 +0x003:  sub    $0x28,%esp
08609e96 +0x006:  mov    0x14(%ebp),%eax
08609e99 +0x009:  mov    %al,-0xc(%ebp)
08609e9c +0x00c:  mov    0x8(%ebp),%eax
08609e9f +0x00f:  movzbl -0xc(%ebp),%edx
08609ea3 +0x013:  mov    %dl,0x90(%eax)
08609ea9 +0x019:  mov    0x8(%ebp),%eax
08609eac +0x01c:  movl   $0x24,0x8(%esp)
08609eb4 +0x024:  movl   $0x0,0x4(%esp)
08609ebc +0x02c:  mov    %eax,(%esp)
08609ebf +0x02f:  call   0807dcc0 <_init+0x5b8>
08609ec4 +0x034:  mov    0x8(%ebp),%eax
08609ec7 +0x037:  add    $0x24,%eax
08609eca +0x03a:  movl   $0x24,0x8(%esp)
08609ed2 +0x042:  movl   $0x0,0x4(%esp)
08609eda +0x04a:  mov    %eax,(%esp)
08609edd +0x04d:  call   0807dcc0 <_init+0x5b8>
08609ee2 +0x052:  mov    0x8(%ebp),%eax
08609ee5 +0x055:  add    $0x48,%eax
08609ee8 +0x058:  movl   $0x24,0x8(%esp)
08609ef0 +0x060:  movl   $0x0,0x4(%esp)
08609ef8 +0x068:  mov    %eax,(%esp)
08609efb +0x06b:  call   0807dcc0 <_init+0x5b8>
08609f00 +0x070:  mov    0x8(%ebp),%eax
08609f03 +0x073:  add    $0x6c,%eax
08609f06 +0x076:  movl   $0x24,0x8(%esp)
08609f0e +0x07e:  movl   $0x0,0x4(%esp)
08609f16 +0x086:  mov    %eax,(%esp)
08609f19 +0x089:  call   0807dcc0 <_init+0x5b8>
08609f1e +0x08e:  mov    0x8(%ebp),%eax
08609f21 +0x091:  movl   $0x8,(%eax)
08609f27 +0x097:  mov    0x8(%ebp),%eax
08609f2a +0x09a:  movl   $0x8,0x24(%eax)
08609f31 +0x0a1:  mov    0x8(%ebp),%eax
08609f34 +0x0a4:  movl   $0x8,0x48(%eax)
08609f3b +0x0ab:  mov    0x8(%ebp),%eax
08609f3e +0x0ae:  movl   $0x8,0x6c(%eax)
08609f45 +0x0b5:  mov    0x8(%ebp),%eax
08609f48 +0x0b8:  movb   $0x0,0x91(%eax)
08609f4f +0x0bf:  cmpl   $0x0,0x10(%ebp)
08609f53 +0x0c3:  jne    0860a040 <+0x1b0>
08609f59 +0x0c9:  movl   $0x0,0x8(%esp)
08609f61 +0x0d1:  mov    0xc(%ebp),%eax
08609f64 +0x0d4:  mov    %eax,0x4(%esp)
08609f68 +0x0d8:  mov    0x8(%ebp),%eax
08609f6b +0x0db:  mov    %eax,(%esp)
08609f6e +0x0de:  call   0860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND)
08609f73 +0x0e3:  movl   $0x1,0x8(%esp)
08609f7b +0x0eb:  mov    0xc(%ebp),%eax
08609f7e +0x0ee:  mov    %eax,0x4(%esp)
08609f82 +0x0f2:  mov    0x8(%ebp),%eax
08609f85 +0x0f5:  mov    %eax,(%esp)
08609f88 +0x0f8:  call   0860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND)
08609f8d +0x0fd:  movl   $0x2,0x8(%esp)
08609f95 +0x105:  mov    0xc(%ebp),%eax
08609f98 +0x108:  mov    %eax,0x4(%esp)
08609f9c +0x10c:  mov    0x8(%ebp),%eax
08609f9f +0x10f:  mov    %eax,(%esp)
08609fa2 +0x112:  call   0860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
08609fa7 +0x117:  movl   $0x3,0x8(%esp)
08609faf +0x11f:  mov    0xc(%ebp),%eax
08609fb2 +0x122:  mov    %eax,0x4(%esp)
08609fb6 +0x126:  mov    0x8(%ebp),%eax
08609fb9 +0x129:  mov    %eax,(%esp)
08609fbc +0x12c:  call   0860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
08609fc1 +0x131:  mov    0xc(%ebp),%eax
08609fc4 +0x134:  mov    %eax,0x4(%esp)
08609fc8 +0x138:  mov    0x8(%ebp),%eax
08609fcb +0x13b:  mov    %eax,(%esp)
08609fce +0x13e:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
08609fd3 +0x143:  movl   $0x0,0x8(%esp)
08609fdb +0x14b:  mov    0xc(%ebp),%eax
08609fde +0x14e:  mov    %eax,0x4(%esp)
08609fe2 +0x152:  mov    0x8(%ebp),%eax
08609fe5 +0x155:  mov    %eax,(%esp)
08609fe8 +0x158:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
08609fed +0x15d:  movl   $0x1,0x8(%esp)
08609ff5 +0x165:  mov    0xc(%ebp),%eax
08609ff8 +0x168:  mov    %eax,0x4(%esp)
08609ffc +0x16c:  mov    0x8(%ebp),%eax
08609fff +0x16f:  mov    %eax,(%esp)
0860a002 +0x172:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a007 +0x177:  movl   $0x2,0x8(%esp)
0860a00f +0x17f:  mov    0xc(%ebp),%eax
0860a012 +0x182:  mov    %eax,0x4(%esp)
0860a016 +0x186:  mov    0x8(%ebp),%eax
0860a019 +0x189:  mov    %eax,(%esp)
0860a01c +0x18c:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a021 +0x191:  movl   $0x3,0x8(%esp)
0860a029 +0x199:  mov    0xc(%ebp),%eax
0860a02c +0x19c:  mov    %eax,0x4(%esp)
0860a030 +0x1a0:  mov    0x8(%ebp),%eax
0860a033 +0x1a3:  mov    %eax,(%esp)
0860a036 +0x1a6:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a03b +0x1ab:  jmp    0860a1e4 <+0x354>
0860a040 +0x1b0:  cmpl   $0x1,0x10(%ebp)
0860a044 +0x1b4:  jne    0860a0c5 <+0x235>
0860a046 +0x1b6:  movl   $0x0,0x8(%esp)
0860a04e +0x1be:  mov    0xc(%ebp),%eax
0860a051 +0x1c1:  mov    %eax,0x4(%esp)
0860a055 +0x1c5:  mov    0x8(%ebp),%eax
0860a058 +0x1c8:  mov    %eax,(%esp)
0860a05b +0x1cb:  call   0860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND)
0860a060 +0x1d0:  movl   $0x2,0x8(%esp)
0860a068 +0x1d8:  mov    0xc(%ebp),%eax
0860a06b +0x1db:  mov    %eax,0x4(%esp)
0860a06f +0x1df:  mov    0x8(%ebp),%eax
0860a072 +0x1e2:  mov    %eax,(%esp)
0860a075 +0x1e5:  call   0860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
0860a07a +0x1ea:  mov    0xc(%ebp),%eax
0860a07d +0x1ed:  mov    %eax,0x4(%esp)
0860a081 +0x1f1:  mov    0x8(%ebp),%eax
0860a084 +0x1f4:  mov    %eax,(%esp)
0860a087 +0x1f7:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
0860a08c +0x1fc:  movl   $0x0,0x8(%esp)
0860a094 +0x204:  mov    0xc(%ebp),%eax
0860a097 +0x207:  mov    %eax,0x4(%esp)
0860a09b +0x20b:  mov    0x8(%ebp),%eax
0860a09e +0x20e:  mov    %eax,(%esp)
0860a0a1 +0x211:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a0a6 +0x216:  movl   $0x2,0x8(%esp)
0860a0ae +0x21e:  mov    0xc(%ebp),%eax
0860a0b1 +0x221:  mov    %eax,0x4(%esp)
0860a0b5 +0x225:  mov    0x8(%ebp),%eax
0860a0b8 +0x228:  mov    %eax,(%esp)
0860a0bb +0x22b:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a0c0 +0x230:  jmp    0860a1e4 <+0x354>
0860a0c5 +0x235:  cmpl   $0x2,0x10(%ebp)
0860a0c9 +0x239:  jne    0860a14a <+0x2ba>
0860a0cb +0x23b:  movl   $0x1,0x8(%esp)
0860a0d3 +0x243:  mov    0xc(%ebp),%eax
0860a0d6 +0x246:  mov    %eax,0x4(%esp)
0860a0da +0x24a:  mov    0x8(%ebp),%eax
0860a0dd +0x24d:  mov    %eax,(%esp)
0860a0e0 +0x250:  call   0860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND)
0860a0e5 +0x255:  movl   $0x3,0x8(%esp)
0860a0ed +0x25d:  mov    0xc(%ebp),%eax
0860a0f0 +0x260:  mov    %eax,0x4(%esp)
0860a0f4 +0x264:  mov    0x8(%ebp),%eax
0860a0f7 +0x267:  mov    %eax,(%esp)
0860a0fa +0x26a:  call   0860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
0860a0ff +0x26f:  mov    0xc(%ebp),%eax
0860a102 +0x272:  mov    %eax,0x4(%esp)
0860a106 +0x276:  mov    0x8(%ebp),%eax
0860a109 +0x279:  mov    %eax,(%esp)
0860a10c +0x27c:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
0860a111 +0x281:  movl   $0x1,0x8(%esp)
0860a119 +0x289:  mov    0xc(%ebp),%eax
0860a11c +0x28c:  mov    %eax,0x4(%esp)
0860a120 +0x290:  mov    0x8(%ebp),%eax
0860a123 +0x293:  mov    %eax,(%esp)
0860a126 +0x296:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a12b +0x29b:  movl   $0x3,0x8(%esp)
0860a133 +0x2a3:  mov    0xc(%ebp),%eax
0860a136 +0x2a6:  mov    %eax,0x4(%esp)
0860a13a +0x2aa:  mov    0x8(%ebp),%eax
0860a13d +0x2ad:  mov    %eax,(%esp)
0860a140 +0x2b0:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a145 +0x2b5:  jmp    0860a1e4 <+0x354>
0860a14a +0x2ba:  cmpl   $0x3,0x10(%ebp)
0860a14e +0x2be:  jne    0860a198 <+0x308>
0860a150 +0x2c0:  movl   $0x2,0x8(%esp)
0860a158 +0x2c8:  mov    0xc(%ebp),%eax
0860a15b +0x2cb:  mov    %eax,0x4(%esp)
0860a15f +0x2cf:  mov    0x8(%ebp),%eax
0860a162 +0x2d2:  mov    %eax,(%esp)
0860a165 +0x2d5:  call   0860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
0860a16a +0x2da:  mov    0xc(%ebp),%eax
0860a16d +0x2dd:  mov    %eax,0x4(%esp)
0860a171 +0x2e1:  mov    0x8(%ebp),%eax
0860a174 +0x2e4:  mov    %eax,(%esp)
0860a177 +0x2e7:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
0860a17c +0x2ec:  movl   $0x2,0x8(%esp)
0860a184 +0x2f4:  mov    0xc(%ebp),%eax
0860a187 +0x2f7:  mov    %eax,0x4(%esp)
0860a18b +0x2fb:  mov    0x8(%ebp),%eax
0860a18e +0x2fe:  mov    %eax,(%esp)
0860a191 +0x301:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a196 +0x306:  jmp    0860a1e4 <+0x354>
0860a198 +0x308:  cmpl   $0x4,0x10(%ebp)
0860a19c +0x30c:  jne    0860a1e4 <+0x354>
0860a19e +0x30e:  movl   $0x3,0x8(%esp)
0860a1a6 +0x316:  mov    0xc(%ebp),%eax
0860a1a9 +0x319:  mov    %eax,0x4(%esp)
0860a1ad +0x31d:  mov    0x8(%ebp),%eax
0860a1b0 +0x320:  mov    %eax,(%esp)
0860a1b3 +0x323:  call   0860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
0860a1b8 +0x328:  mov    0xc(%ebp),%eax
0860a1bb +0x32b:  mov    %eax,0x4(%esp)
0860a1bf +0x32f:  mov    0x8(%ebp),%eax
0860a1c2 +0x332:  mov    %eax,(%esp)
0860a1c5 +0x335:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
0860a1ca +0x33a:  movl   $0x3,0x8(%esp)
0860a1d2 +0x342:  mov    0xc(%ebp),%eax
0860a1d5 +0x345:  mov    %eax,0x4(%esp)
0860a1d9 +0x349:  mov    0x8(%ebp),%eax
0860a1dc +0x34c:  mov    %eax,(%esp)
0860a1df +0x34f:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
0860a1e4 +0x354:  leave
0860a1e5 +0x355:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::SkillInitialize @ 0x8609e90

/* WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool) */

void __thiscall
WongWork::CSkillChanger::SkillInitialize
          (CSkillChanger *this,CUser *param_1,int param_2,bool param_3)

{
  this[0x90] = (CSkillChanger)param_3;
  memset(this,0,0x24);
  memset(this + 0x24,0,0x24);
  memset(this + 0x48,0,0x24);
  memset(this + 0x6c,0,0x24);
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 0x24) = 8;
  *(undefined4 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x6c) = 8;
  this[0x91] = (CSkillChanger)0x0;
  if (param_2 == 0) {
    _ResetSkillPoint(this,param_1,0);
    _ResetSkillPoint(this,param_1,1);
    _ResetSFPoint(this,param_1,2);
    _ResetSFPoint(this,param_1,3);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,0);
    _ApplyUserData(this,param_1,1);
    _ApplyUserData(this,param_1,2);
    _ApplyUserData(this,param_1,3);
  }
  else if (param_2 == 1) {
    _ResetSkillPoint(this,param_1,0);
    _ResetSFPoint(this,param_1,2);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,0);
    _ApplyUserData(this,param_1,2);
  }
  else if (param_2 == 2) {
    _ResetSkillPoint(this,param_1,1);
    _ResetSFPoint(this,param_1,3);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,1);
    _ApplyUserData(this,param_1,3);
  }
  else if (param_2 == 3) {
    _ResetSFPoint(this,param_1,2);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,2);
  }
  else if (param_2 == 4) {
    _ResetSFPoint(this,param_1,3);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,3);
  }
  return;
}
```
