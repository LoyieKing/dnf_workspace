# ComboSkill

`_ZN10ComboSkillC1Ev`

`ComboSkill::ComboSkill()`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9b0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9b0e  _ZN10ComboSkillC1Ev
#           ComboSkill::ComboSkill()
# range [0x080e9b0e, 0x080e9d25]
080e9b0e +0x000:  push   %ebp
080e9b0f +0x001:  mov    %esp,%ebp
080e9b11 +0x003:  push   %esi
080e9b12 +0x004:  push   %ebx
080e9b13 +0x005:  add    $0xffffff80,%esp
080e9b16 +0x008:  mov    0x8(%ebp),%eax
080e9b19 +0x00b:  mov    %eax,(%esp)
080e9b1c +0x00e:  call   080ea586 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1bf>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1bf
080e9b21 +0x013:  mov    0x8(%ebp),%eax
080e9b24 +0x016:  add    $0x15,%eax
080e9b27 +0x019:  mov    %eax,(%esp)
080e9b2a +0x01c:  call   080ea586 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1bf>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1bf
080e9b2f +0x021:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080e9b34 +0x026:  mov    0x14(%eax),%eax
080e9b37 +0x029:  add    $0x48fc,%eax
080e9b3c +0x02e:  mov    %eax,-0x10(%ebp)
080e9b3f +0x031:  lea    -0x6c(%ebp),%eax
080e9b42 +0x034:  mov    %eax,(%esp)
080e9b45 +0x037:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080e9b4a +0x03c:  movl   $0x0,0x8(%esp)
080e9b52 +0x044:  movl   $0x6,0x4(%esp)
080e9b5a +0x04c:  lea    -0x6c(%ebp),%eax
080e9b5d +0x04f:  mov    %eax,(%esp)
080e9b60 +0x052:  call   080df92a <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x146>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x146
080e9b65 +0x057:  movl   $0x0,-0xc(%ebp)
080e9b6c +0x05e:  jmp    080e9cb5 <+0x1a7>
080e9b71 +0x063:  mov    -0xc(%ebp),%eax
080e9b74 +0x066:  mov    %eax,0x4(%esp)
080e9b78 +0x06a:  mov    -0x10(%ebp),%eax
080e9b7b +0x06d:  mov    %eax,(%esp)
080e9b7e +0x070:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
080e9b83 +0x075:  mov    %eax,%edx
080e9b85 +0x077:  lea    -0x48(%ebp),%eax
080e9b88 +0x07a:  lea    -0x6c(%ebp),%ecx
080e9b8b +0x07d:  mov    %ecx,0x8(%esp)
080e9b8f +0x081:  mov    %edx,0x4(%esp)
080e9b93 +0x085:  mov    %eax,(%esp)
080e9b96 +0x088:  call   080ea8b6 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4ef>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4ef
080e9b9b +0x08d:  sub    $0x4,%esp
080e9b9e +0x090:  lea    -0x48(%ebp),%eax
080e9ba1 +0x093:  mov    %eax,0x4(%esp)
080e9ba5 +0x097:  lea    -0x58(%ebp),%eax
080e9ba8 +0x09a:  mov    %eax,(%esp)
080e9bab +0x09d:  call   080ea8fa <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x533>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x533
080e9bb0 +0x0a2:  mov    0x8(%ebp),%edx
080e9bb3 +0x0a5:  lea    -0x60(%ebp),%eax
080e9bb6 +0x0a8:  lea    -0x58(%ebp),%ecx
080e9bb9 +0x0ab:  mov    %ecx,0x8(%esp)
080e9bbd +0x0af:  mov    %edx,0x4(%esp)
080e9bc1 +0x0b3:  mov    %eax,(%esp)
080e9bc4 +0x0b6:  call   080ea938 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x571>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x571
080e9bc9 +0x0bb:  sub    $0x4,%esp
080e9bcc +0x0be:  lea    -0x58(%ebp),%eax
080e9bcf +0x0c1:  mov    %eax,(%esp)
080e9bd2 +0x0c4:  call   080ea44c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x85>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x85
080e9bd7 +0x0c9:  jmp    080e9c06 <+0xf8>
080e9bd9 +0x0cb:  mov    %edx,%ebx
080e9bdb +0x0cd:  mov    %eax,%esi
080e9bdd +0x0cf:  lea    -0x58(%ebp),%eax
080e9be0 +0x0d2:  mov    %eax,(%esp)
080e9be3 +0x0d5:  call   080ea44c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x85>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x85
080e9be8 +0x0da:  mov    %esi,%eax
080e9bea +0x0dc:  mov    %ebx,%edx
080e9bec +0x0de:  jmp    080e9bee <+0xe0>
080e9bee +0x0e0:  mov    %edx,%ebx
080e9bf0 +0x0e2:  mov    %eax,%esi
080e9bf2 +0x0e4:  lea    -0x48(%ebp),%eax
080e9bf5 +0x0e7:  mov    %eax,(%esp)
080e9bf8 +0x0ea:  call   080ea436 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x6f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x6f
080e9bfd +0x0ef:  mov    %esi,%eax
080e9bff +0x0f1:  mov    %ebx,%edx
080e9c01 +0x0f3:  jmp    080e9cc6 <+0x1b8>
080e9c06 +0x0f8:  lea    -0x48(%ebp),%eax
080e9c09 +0x0fb:  mov    %eax,(%esp)
080e9c0c +0x0fe:  call   080ea436 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x6f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x6f
080e9c11 +0x103:  mov    -0xc(%ebp),%eax
080e9c14 +0x106:  mov    %eax,0x4(%esp)
080e9c18 +0x10a:  mov    -0x10(%ebp),%eax
080e9c1b +0x10d:  mov    %eax,(%esp)
080e9c1e +0x110:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
080e9c23 +0x115:  mov    %eax,%edx
080e9c25 +0x117:  lea    -0x20(%ebp),%eax
080e9c28 +0x11a:  lea    -0x6c(%ebp),%ecx
080e9c2b +0x11d:  mov    %ecx,0x8(%esp)
080e9c2f +0x121:  mov    %edx,0x4(%esp)
080e9c33 +0x125:  mov    %eax,(%esp)
080e9c36 +0x128:  call   080ea8b6 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4ef>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4ef
080e9c3b +0x12d:  sub    $0x4,%esp
080e9c3e +0x130:  lea    -0x20(%ebp),%eax
080e9c41 +0x133:  mov    %eax,0x4(%esp)
080e9c45 +0x137:  lea    -0x30(%ebp),%eax
080e9c48 +0x13a:  mov    %eax,(%esp)
080e9c4b +0x13d:  call   080ea8fa <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x533>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x533
080e9c50 +0x142:  mov    0x8(%ebp),%eax
080e9c53 +0x145:  lea    0x15(%eax),%ecx
080e9c56 +0x148:  lea    -0x38(%ebp),%eax
080e9c59 +0x14b:  lea    -0x30(%ebp),%edx
080e9c5c +0x14e:  mov    %edx,0x8(%esp)
080e9c60 +0x152:  mov    %ecx,0x4(%esp)
080e9c64 +0x156:  mov    %eax,(%esp)
080e9c67 +0x159:  call   080ea938 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x571>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x571
080e9c6c +0x15e:  sub    $0x4,%esp
080e9c6f +0x161:  lea    -0x30(%ebp),%eax
080e9c72 +0x164:  mov    %eax,(%esp)
080e9c75 +0x167:  call   080ea44c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x85>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x85
080e9c7a +0x16c:  jmp    080e9ca6 <+0x198>
080e9c7c +0x16e:  mov    %edx,%ebx
080e9c7e +0x170:  mov    %eax,%esi
080e9c80 +0x172:  lea    -0x30(%ebp),%eax
080e9c83 +0x175:  mov    %eax,(%esp)
080e9c86 +0x178:  call   080ea44c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x85>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x85
080e9c8b +0x17d:  mov    %esi,%eax
080e9c8d +0x17f:  mov    %ebx,%edx
080e9c8f +0x181:  jmp    080e9c91 <+0x183>
080e9c91 +0x183:  mov    %edx,%ebx
080e9c93 +0x185:  mov    %eax,%esi
080e9c95 +0x187:  lea    -0x20(%ebp),%eax
080e9c98 +0x18a:  mov    %eax,(%esp)
080e9c9b +0x18d:  call   080ea436 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x6f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x6f
080e9ca0 +0x192:  mov    %esi,%eax
080e9ca2 +0x194:  mov    %ebx,%edx
080e9ca4 +0x196:  jmp    080e9cc6 <+0x1b8>
080e9ca6 +0x198:  lea    -0x20(%ebp),%eax
080e9ca9 +0x19b:  mov    %eax,(%esp)
080e9cac +0x19e:  call   080ea436 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x6f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x6f
080e9cb1 +0x1a3:  addl   $0x1,-0xc(%ebp)
080e9cb5 +0x1a7:  cmpl   $0x5,-0xc(%ebp)
080e9cb9 +0x1ab:  setle  %al
080e9cbc +0x1ae:  test   %al,%al
080e9cbe +0x1b0:  jne    080e9b71 <+0x63>
080e9cc4 +0x1b6:  jmp    080e9cdb <+0x1cd>
080e9cc6 +0x1b8:  mov    %edx,%ebx
080e9cc8 +0x1ba:  mov    %eax,%esi
080e9cca +0x1bc:  lea    -0x6c(%ebp),%eax
080e9ccd +0x1bf:  mov    %eax,(%esp)
080e9cd0 +0x1c2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080e9cd5 +0x1c7:  mov    %esi,%eax
080e9cd7 +0x1c9:  mov    %ebx,%edx
080e9cd9 +0x1cb:  jmp    080e9ce8 <+0x1da>
080e9cdb +0x1cd:  lea    -0x6c(%ebp),%eax
080e9cde +0x1d0:  mov    %eax,(%esp)
080e9ce1 +0x1d3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080e9ce6 +0x1d8:  jmp    080e9d1b <+0x20d>
080e9ce8 +0x1da:  mov    %edx,%ebx
080e9cea +0x1dc:  mov    %eax,%esi
080e9cec +0x1de:  mov    0x8(%ebp),%eax
080e9cef +0x1e1:  add    $0x15,%eax
080e9cf2 +0x1e4:  mov    %eax,(%esp)
080e9cf5 +0x1e7:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
080e9cfa +0x1ec:  mov    %esi,%eax
080e9cfc +0x1ee:  mov    %ebx,%edx
080e9cfe +0x1f0:  jmp    080e9d00 <+0x1f2>
080e9d00 +0x1f2:  mov    %edx,%ebx
080e9d02 +0x1f4:  mov    %eax,%esi
080e9d04 +0x1f6:  mov    0x8(%ebp),%eax
080e9d07 +0x1f9:  mov    %eax,(%esp)
080e9d0a +0x1fc:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
080e9d0f +0x201:  mov    %esi,%eax
080e9d11 +0x203:  mov    %ebx,%edx
080e9d13 +0x205:  mov    %eax,(%esp)
080e9d16 +0x208:  call   08ae3750 <_Unwind_Resume>
080e9d1b +0x20d:  lea    -0x8(%ebp),%esp
080e9d1e +0x210:  add    $0x0,%esp
080e9d21 +0x213:  pop    %ebx
080e9d22 +0x214:  pop    %esi
080e9d23 +0x215:  pop    %ebp
080e9d24 +0x216:  ret
080e9d25 +0x217:  nop
```

## 反编译 C

```c
// ComboSkill::ComboSkill @ 0x80e9b0e

/* ComboSkill::ComboSkill() */

void __thiscall ComboSkill::ComboSkill(ComboSkill *this)

{
  int iVar1;
  vector *pvVar2;
  vector<int,std::allocator<int>> local_70 [12];
  pair local_64 [8];
  pair<short_const,std::vector<int,std::allocator<int>>> local_5c [16];
  pair<int,std::vector<int,std::allocator<int>>> local_4c [16];
  pair local_3c [8];
  pair<short_const,std::vector<int,std::allocator<int>>> local_34 [16];
  pair<int,std::vector<int,std::allocator<int>>> local_24 [16];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_14;
  uint local_10;
  
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
         *)this);
                    /* try { // try from 080e9b2a to 080e9b2e has its CatchHandler @ 080e9d00 */
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
         *)(this + 0x15));
                    /* try { // try from 080e9b2f to 080e9b49 has its CatchHandler @ 080e9ce8 */
  iVar1 = G_CDataManager();
  local_14 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
             (*(int *)(iVar1 + 0x14) + 0x48fc);
  std::vector<int,std::allocator<int>>::vector(local_70);
                    /* try { // try from 080e9b60 to 080e9b9a has its CatchHandler @ 080e9cc6 */
  std::vector<int,std::allocator<int>>::resize((uint)local_70,6);
  for (local_10 = 0; (int)local_10 < 6; local_10 = local_10 + 1) {
    pvVar2 = (vector *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       (local_14,local_10);
    std::make_pair<int&,std::vector<int,std::allocator<int>>&>((int *)local_4c,pvVar2);
                    /* try { // try from 080e9bab to 080e9baf has its CatchHandler @ 080e9bee */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::
    pair<int,std::vector<int,std::allocator<int>>>(local_5c,local_4c);
                    /* try { // try from 080e9bc4 to 080e9bc8 has its CatchHandler @ 080e9bd9 */
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::insert(local_64);
                    /* try { // try from 080e9bd2 to 080e9bd6 has its CatchHandler @ 080e9bee */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::~pair(local_5c);
                    /* try { // try from 080e9c0c to 080e9c3a has its CatchHandler @ 080e9cc6 */
    std::pair<int,std::vector<int,std::allocator<int>>>::~pair(local_4c);
    pvVar2 = (vector *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       (local_14,local_10);
    std::make_pair<int&,std::vector<int,std::allocator<int>>&>((int *)local_24,pvVar2);
                    /* try { // try from 080e9c4b to 080e9c4f has its CatchHandler @ 080e9c91 */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::
    pair<int,std::vector<int,std::allocator<int>>>(local_34,local_24);
                    /* try { // try from 080e9c67 to 080e9c6b has its CatchHandler @ 080e9c7c */
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::insert(local_3c);
                    /* try { // try from 080e9c75 to 080e9c79 has its CatchHandler @ 080e9c91 */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::~pair(local_34);
                    /* try { // try from 080e9cac to 080e9cb0 has its CatchHandler @ 080e9cc6 */
    std::pair<int,std::vector<int,std::allocator<int>>>::~pair(local_24);
  }
                    /* try { // try from 080e9ce1 to 080e9ce5 has its CatchHandler @ 080e9ce8 */
  std::vector<int,std::allocator<int>>::~vector(local_70);
  return;
}
```
