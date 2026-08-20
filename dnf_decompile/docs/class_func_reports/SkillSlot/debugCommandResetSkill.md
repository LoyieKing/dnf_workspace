# debugCommandResetSkill

`_ZN9SkillSlot22debugCommandResetSkillEv`

`SkillSlot::debugCommandResetSkill()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860523e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860523e  _ZN9SkillSlot22debugCommandResetSkillEv
#           SkillSlot::debugCommandResetSkill()
# range [0x0860523e, 0x086053c5]
0860523e +0x000:  push   %ebp
0860523f +0x001:  mov    %esp,%ebp
08605241 +0x003:  push   %esi
08605242 +0x004:  push   %ebx
08605243 +0x005:  sub    $0x1c0,%esp
08605249 +0x00b:  mov    0x8(%ebp),%eax
0860524c +0x00e:  add    $0x46,%eax
0860524f +0x011:  movl   $0x198,0x8(%esp)
08605257 +0x019:  movl   $0x0,0x4(%esp)
0860525f +0x021:  mov    %eax,(%esp)
08605262 +0x024:  call   0807dcc0 <_init+0x5b8>
08605267 +0x029:  mov    0x8(%ebp),%eax
0860526a +0x02c:  add    $0x1de,%eax
0860526f +0x031:  movl   $0x198,0x8(%esp)
08605277 +0x039:  movl   $0x0,0x4(%esp)
0860527f +0x041:  mov    %eax,(%esp)
08605282 +0x044:  call   0807dcc0 <_init+0x5b8>
08605287 +0x049:  lea    -0x1a4(%ebp),%eax
0860528d +0x04f:  mov    %eax,%ebx
0860528f +0x051:  mov    $0xcb,%esi
08605294 +0x056:  jmp    086052a4 <+0x66>
08605296 +0x058:  mov    %ebx,(%esp)
08605299 +0x05b:  call   0848f34c <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x2a>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x2a
0860529e +0x060:  add    $0x2,%ebx
086052a1 +0x063:  sub    $0x1,%esi
086052a4 +0x066:  cmp    $0xffffffff,%esi
086052a7 +0x069:  setne  %al
086052aa +0x06c:  test   %al,%al
086052ac +0x06e:  jne    08605296 <+0x58>
086052ae +0x070:  mov    0x8(%ebp),%eax
086052b1 +0x073:  mov    (%eax),%eax
086052b3 +0x075:  mov    %eax,(%esp)
086052b6 +0x078:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086052bb +0x07d:  mov    %eax,0x4(%esp)
086052bf +0x081:  lea    -0x1a4(%ebp),%eax
086052c5 +0x087:  mov    %eax,(%esp)
086052c8 +0x08a:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
086052cd +0x08f:  movl   $0x0,-0xc(%ebp)
086052d4 +0x096:  jmp    0860534f <+0x111>
086052d6 +0x098:  mov    -0xc(%ebp),%eax
086052d9 +0x09b:  movzbl -0x1a4(%ebp,%eax,2),%eax
086052e1 +0x0a3:  test   %al,%al
086052e3 +0x0a5:  je     0860534b <+0x10d>
086052e5 +0x0a7:  mov    -0xc(%ebp),%ecx
086052e8 +0x0aa:  mov    -0xc(%ebp),%eax
086052eb +0x0ad:  movzbl -0x1a4(%ebp,%eax,2),%edx
086052f3 +0x0b5:  mov    0x8(%ebp),%eax
086052f6 +0x0b8:  add    $0x20,%ecx
086052f9 +0x0bb:  mov    %dl,0x6(%eax,%ecx,2)
086052fd +0x0bf:  mov    -0xc(%ebp),%ecx
08605300 +0x0c2:  mov    -0xc(%ebp),%eax
08605303 +0x0c5:  movzbl -0x1a3(%ebp,%eax,2),%edx
0860530b +0x0cd:  mov    0x8(%ebp),%eax
0860530e +0x0d0:  add    $0x20,%ecx
08605311 +0x0d3:  mov    %dl,0x7(%eax,%ecx,2)
08605315 +0x0d7:  mov    -0xc(%ebp),%ecx
08605318 +0x0da:  mov    -0xc(%ebp),%eax
0860531b +0x0dd:  movzbl -0x1a4(%ebp,%eax,2),%edx
08605323 +0x0e5:  mov    0x8(%ebp),%eax
08605326 +0x0e8:  add    $0xe8,%ecx
0860532c +0x0ee:  mov    %dl,0xe(%eax,%ecx,2)
08605330 +0x0f2:  mov    -0xc(%ebp),%ecx
08605333 +0x0f5:  mov    -0xc(%ebp),%eax
08605336 +0x0f8:  movzbl -0x1a3(%ebp,%eax,2),%edx
0860533e +0x100:  mov    0x8(%ebp),%eax
08605341 +0x103:  add    $0xe8,%ecx
08605347 +0x109:  mov    %dl,0xf(%eax,%ecx,2)
0860534b +0x10d:  addl   $0x1,-0xc(%ebp)
0860534f +0x111:  cmpl   $0xcb,-0xc(%ebp)
08605356 +0x118:  setle  %al
08605359 +0x11b:  test   %al,%al
0860535b +0x11d:  jne    086052d6 <+0x98>
08605361 +0x123:  mov    0x8(%ebp),%eax
08605364 +0x126:  mov    (%eax),%eax
08605366 +0x128:  mov    %eax,(%esp)
08605369 +0x12b:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0860536e +0x130:  test   %al,%al
08605370 +0x132:  setne  %al
08605373 +0x135:  test   %al,%al
08605375 +0x137:  je     086053bc <+0x17e>
08605377 +0x139:  mov    0x8(%ebp),%eax
0860537a +0x13c:  mov    (%eax),%eax
0860537c +0x13e:  mov    %eax,(%esp)
0860537f +0x141:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08605384 +0x146:  movzbl %al,%ebx
08605387 +0x149:  mov    0x8(%ebp),%eax
0860538a +0x14c:  mov    (%eax),%eax
0860538c +0x14e:  mov    %eax,(%esp)
0860538f +0x151:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08605394 +0x156:  movzbl %al,%edx
08605397 +0x159:  mov    0x8(%ebp),%eax
0860539a +0x15c:  mov    (%eax),%eax
0860539c +0x15e:  movl   $0x2,0x10(%esp)
086053a4 +0x166:  movl   $0x0,0xc(%esp)
086053ac +0x16e:  mov    %ebx,0x8(%esp)
086053b0 +0x172:  mov    %edx,0x4(%esp)
086053b4 +0x176:  mov    %eax,(%esp)
086053b7 +0x179:  call   086787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>  ; CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
086053bc +0x17e:  add    $0x1c0,%esp
086053c2 +0x184:  pop    %ebx
086053c3 +0x185:  pop    %esi
086053c4 +0x186:  pop    %ebp
086053c5 +0x187:  ret
```

## 反编译 C

```c
// SkillSlot::debugCommandResetSkill @ 0x860523e

/* WARNING: Type propagation algorithm not settling */
/* SkillSlot::debugCommandResetSkill() */

void __thiscall SkillSlot::debugCommandResetSkill(SkillSlot *this)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  _Mastered_skill *this_00;
  int iVar4;
  _Mastered_skill local_1a8;
  SkillSlot aSStack_1a7 [407];
  int local_10;
  
  memset(this + 0x46,0,0x198);
  memset(this + 0x1de,0,0x198);
  this_00 = &local_1a8;
  for (iVar4 = 0xcb; iVar4 != -1; iVar4 = iVar4 + -1) {
    _Mastered_skill::_Mastered_skill(this_00);
    this_00 = this_00 + 2;
  }
  iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
  addSkillOnCreateCharacter(&local_1a8,iVar4);
  for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
    if ((&local_1a8)[local_10 * 2] != (_Mastered_skill)0x0) {
      *(_Mastered_skill *)(this + (local_10 + 0x20) * 2 + 6) = (&local_1a8)[local_10 * 2];
      this[(local_10 + 0x20) * 2 + 7] = aSStack_1a7[local_10 * 2];
      *(_Mastered_skill *)(this + (local_10 + 0xe8) * 2 + 0xe) = (&local_1a8)[local_10 * 2];
      this[(local_10 + 0xe8) * 2 + 0xf] = aSStack_1a7[local_10 * 2];
    }
  }
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
  if (cVar1 != '\0') {
    uVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    uVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
    CUser::set_grow_type(*(CUser **)this,uVar3,uVar2,0,2);
  }
  return;
}
```
