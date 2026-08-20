# read

`_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE`

`Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkill` | `0x0825ef78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825ef78  _ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE
#           Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)
# range [0x0825ef78, 0x0825f291]
0825ef78 +0x000:  push   %ebp
0825ef79 +0x001:  mov    %esp,%ebp
0825ef7b +0x003:  push   %esi
0825ef7c +0x004:  push   %ebx
0825ef7d +0x005:  sub    $0x60,%esp
0825ef80 +0x008:  mov    0x10(%ebp),%eax
0825ef83 +0x00b:  mov    %eax,-0x14(%ebp)
0825ef86 +0x00e:  movw   $0x0,-0x42(%ebp)
0825ef8c +0x014:  movb   $0x0,-0x43(%ebp)
0825ef90 +0x018:  movb   $0x0,-0x44(%ebp)
0825ef94 +0x01c:  movw   $0x0,-0x46(%ebp)
0825ef9a +0x022:  lea    -0x54(%ebp),%eax
0825ef9d +0x025:  mov    %eax,(%esp)
0825efa0 +0x028:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0825efa5 +0x02d:  mov    -0x14(%ebp),%eax
0825efa8 +0x030:  add    $0xe,%eax
0825efab +0x033:  mov    %eax,(%esp)
0825efae +0x036:  call   0826069c <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x3cc>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x3cc
0825efb3 +0x03b:  mov    -0x14(%ebp),%eax
0825efb6 +0x03e:  add    $0xd,%eax
0825efb9 +0x041:  mov    %eax,0x4(%esp)
0825efbd +0x045:  mov    0xc(%ebp),%eax
0825efc0 +0x048:  mov    %eax,(%esp)
0825efc3 +0x04b:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825efc8 +0x050:  xor    $0x1,%eax
0825efcb +0x053:  test   %al,%al
0825efcd +0x055:  je     0825effa <+0x82>
0825efcf +0x057:  movl   $0x0,0xc(%esp)
0825efd7 +0x05f:  movl   $0x0,0x8(%esp)
0825efdf +0x067:  movl   $&_ZZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825efe7 +0x06f:  movl   $0x301,(%esp)
0825efee +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825eff3 +0x07b:  mov    %eax,%ebx
0825eff5 +0x07d:  jmp    0825f27b <+0x303>
0825effa +0x082:  lea    -0x43(%ebp),%eax
0825effd +0x085:  mov    %eax,0x4(%esp)
0825f001 +0x089:  mov    0xc(%ebp),%eax
0825f004 +0x08c:  mov    %eax,(%esp)
0825f007 +0x08f:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825f00c +0x094:  xor    $0x1,%eax
0825f00f +0x097:  test   %al,%al
0825f011 +0x099:  je     0825f03e <+0xc6>
0825f013 +0x09b:  movl   $0x0,0xc(%esp)
0825f01b +0x0a3:  movl   $0x0,0x8(%esp)
0825f023 +0x0ab:  movl   $&_ZZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f02b +0x0b3:  movl   $0x304,(%esp)
0825f032 +0x0ba:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f037 +0x0bf:  mov    %eax,%ebx
0825f039 +0x0c1:  jmp    0825f27b <+0x303>
0825f03e +0x0c6:  movl   $0x0,-0x10(%ebp)
0825f045 +0x0cd:  jmp    0825f233 <+0x2bb>
0825f04a +0x0d2:  movw   $0x0,-0x42(%ebp)
0825f050 +0x0d8:  movb   $0x0,-0x44(%ebp)
0825f054 +0x0dc:  lea    -0x42(%ebp),%eax
0825f057 +0x0df:  mov    %eax,0x4(%esp)
0825f05b +0x0e3:  mov    0xc(%ebp),%eax
0825f05e +0x0e6:  mov    %eax,(%esp)
0825f061 +0x0e9:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0825f066 +0x0ee:  xor    $0x1,%eax
0825f069 +0x0f1:  test   %al,%al
0825f06b +0x0f3:  je     0825f098 <+0x120>
0825f06d +0x0f5:  movl   $0x0,0xc(%esp)
0825f075 +0x0fd:  movl   $0x0,0x8(%esp)
0825f07d +0x105:  movl   $&_ZZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f085 +0x10d:  movl   $0x30c,(%esp)
0825f08c +0x114:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f091 +0x119:  mov    %eax,%ebx
0825f093 +0x11b:  jmp    0825f27b <+0x303>
0825f098 +0x120:  movzwl -0x42(%ebp),%eax
0825f09c +0x124:  cwtl
0825f09d +0x125:  mov    %eax,0x4(%esp)
0825f0a1 +0x129:  mov    0x8(%ebp),%eax
0825f0a4 +0x12c:  mov    %eax,(%esp)
0825f0a7 +0x12f:  call   0825f292 <_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs>  ; Dispatcher_ComboSkill::checkComboSkillIndex(short)
0825f0ac +0x134:  xor    $0x1,%eax
0825f0af +0x137:  test   %al,%al
0825f0b1 +0x139:  jne    0825f22e <+0x2b6>
0825f0b7 +0x13f:  lea    -0x44(%ebp),%eax
0825f0ba +0x142:  mov    %eax,0x4(%esp)
0825f0be +0x146:  mov    0xc(%ebp),%eax
0825f0c1 +0x149:  mov    %eax,(%esp)
0825f0c4 +0x14c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825f0c9 +0x151:  xor    $0x1,%eax
0825f0cc +0x154:  test   %al,%al
0825f0ce +0x156:  je     0825f0fb <+0x183>
0825f0d0 +0x158:  movl   $0x0,0xc(%esp)
0825f0d8 +0x160:  movl   $0x0,0x8(%esp)
0825f0e0 +0x168:  movl   $&_ZZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f0e8 +0x170:  movl   $0x312,(%esp)
0825f0ef +0x177:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f0f4 +0x17c:  mov    %eax,%ebx
0825f0f6 +0x17e:  jmp    0825f27b <+0x303>
0825f0fb +0x183:  lea    -0x54(%ebp),%eax
0825f0fe +0x186:  mov    %eax,(%esp)
0825f101 +0x189:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0825f106 +0x18e:  movl   $0x0,-0xc(%ebp)
0825f10d +0x195:  jmp    0825f177 <+0x1ff>
0825f10f +0x197:  movw   $0x0,-0x46(%ebp)
0825f115 +0x19d:  lea    -0x46(%ebp),%eax
0825f118 +0x1a0:  mov    %eax,0x4(%esp)
0825f11c +0x1a4:  mov    0xc(%ebp),%eax
0825f11f +0x1a7:  mov    %eax,(%esp)
0825f122 +0x1aa:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0825f127 +0x1af:  xor    $0x1,%eax
0825f12a +0x1b2:  test   %al,%al
0825f12c +0x1b4:  je     0825f159 <+0x1e1>
0825f12e +0x1b6:  movl   $0x0,0xc(%esp)
0825f136 +0x1be:  movl   $0x0,0x8(%esp)
0825f13e +0x1c6:  movl   $&_ZZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f146 +0x1ce:  movl   $0x319,(%esp)
0825f14d +0x1d5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f152 +0x1da:  mov    %eax,%ebx
0825f154 +0x1dc:  jmp    0825f27b <+0x303>
0825f159 +0x1e1:  movzwl -0x46(%ebp),%eax
0825f15d +0x1e5:  cwtl
0825f15e +0x1e6:  mov    %eax,-0x40(%ebp)
0825f161 +0x1e9:  lea    -0x40(%ebp),%eax
0825f164 +0x1ec:  mov    %eax,0x4(%esp)
0825f168 +0x1f0:  lea    -0x54(%ebp),%eax
0825f16b +0x1f3:  mov    %eax,(%esp)
0825f16e +0x1f6:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0825f173 +0x1fb:  addl   $0x1,-0xc(%ebp)
0825f177 +0x1ff:  movzbl -0x44(%ebp),%eax
0825f17b +0x203:  movsbl %al,%eax
0825f17e +0x206:  cmp    -0xc(%ebp),%eax
0825f181 +0x209:  jle    0825f190 <+0x218>
0825f183 +0x20b:  cmpl   $0x5,-0xc(%ebp)
0825f187 +0x20f:  jg     0825f190 <+0x218>
0825f189 +0x211:  mov    $0x1,%eax
0825f18e +0x216:  jmp    0825f195 <+0x21d>
0825f190 +0x218:  mov    $0x0,%eax
0825f195 +0x21d:  test   %al,%al
0825f197 +0x21f:  jne    0825f10f <+0x197>
0825f19d +0x225:  lea    -0x24(%ebp),%eax
0825f1a0 +0x228:  lea    -0x54(%ebp),%edx
0825f1a3 +0x22b:  mov    %edx,0x8(%esp)
0825f1a7 +0x22f:  lea    -0x42(%ebp),%edx
0825f1aa +0x232:  mov    %edx,0x4(%esp)
0825f1ae +0x236:  mov    %eax,(%esp)
0825f1b1 +0x239:  call   082606fe <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x42e>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x42e
0825f1b6 +0x23e:  sub    $0x4,%esp
0825f1b9 +0x241:  lea    -0x24(%ebp),%eax
0825f1bc +0x244:  mov    %eax,0x4(%esp)
0825f1c0 +0x248:  lea    -0x34(%ebp),%eax
0825f1c3 +0x24b:  mov    %eax,(%esp)
0825f1c6 +0x24e:  call   08260742 <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x472>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x472
0825f1cb +0x253:  mov    -0x14(%ebp),%eax
0825f1ce +0x256:  lea    0xe(%eax),%ecx
0825f1d1 +0x259:  lea    -0x3c(%ebp),%eax
0825f1d4 +0x25c:  lea    -0x34(%ebp),%edx
0825f1d7 +0x25f:  mov    %edx,0x8(%esp)
0825f1db +0x263:  mov    %ecx,0x4(%esp)
0825f1df +0x267:  mov    %eax,(%esp)
0825f1e2 +0x26a:  call   080ea938 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x571>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x571
0825f1e7 +0x26f:  sub    $0x4,%esp
0825f1ea +0x272:  lea    -0x34(%ebp),%eax
0825f1ed +0x275:  mov    %eax,(%esp)
0825f1f0 +0x278:  call   080ea44c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x85>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x85
0825f1f5 +0x27d:  jmp    0825f221 <+0x2a9>
0825f1f7 +0x27f:  mov    %edx,%ebx
0825f1f9 +0x281:  mov    %eax,%esi
0825f1fb +0x283:  lea    -0x34(%ebp),%eax
0825f1fe +0x286:  mov    %eax,(%esp)
0825f201 +0x289:  call   080ea44c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x85>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x85
0825f206 +0x28e:  mov    %esi,%eax
0825f208 +0x290:  mov    %ebx,%edx
0825f20a +0x292:  jmp    0825f20c <+0x294>
0825f20c +0x294:  mov    %edx,%ebx
0825f20e +0x296:  mov    %eax,%esi
0825f210 +0x298:  lea    -0x24(%ebp),%eax
0825f213 +0x29b:  mov    %eax,(%esp)
0825f216 +0x29e:  call   08260686 <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x3b6>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x3b6
0825f21b +0x2a3:  mov    %esi,%eax
0825f21d +0x2a5:  mov    %ebx,%edx
0825f21f +0x2a7:  jmp    0825f260 <+0x2e8>
0825f221 +0x2a9:  lea    -0x24(%ebp),%eax
0825f224 +0x2ac:  mov    %eax,(%esp)
0825f227 +0x2af:  call   08260686 <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x3b6>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x3b6
0825f22c +0x2b4:  jmp    0825f22f <+0x2b7>
0825f22e +0x2b6:  nop
0825f22f +0x2b7:  addl   $0x1,-0x10(%ebp)
0825f233 +0x2bb:  movzbl -0x43(%ebp),%eax
0825f237 +0x2bf:  movsbl %al,%eax
0825f23a +0x2c2:  cmp    -0x10(%ebp),%eax
0825f23d +0x2c5:  jle    0825f24c <+0x2d4>
0825f23f +0x2c7:  cmpl   $0x5,-0x10(%ebp)
0825f243 +0x2cb:  jg     0825f24c <+0x2d4>
0825f245 +0x2cd:  mov    $0x1,%eax
0825f24a +0x2d2:  jmp    0825f251 <+0x2d9>
0825f24c +0x2d4:  mov    $0x0,%eax
0825f251 +0x2d9:  test   %al,%al
0825f253 +0x2db:  jne    0825f04a <+0xd2>
0825f259 +0x2e1:  mov    $0x0,%ebx
0825f25e +0x2e6:  jmp    0825f27b <+0x303>
0825f260 +0x2e8:  mov    %edx,%ebx
0825f262 +0x2ea:  mov    %eax,%esi
0825f264 +0x2ec:  lea    -0x54(%ebp),%eax
0825f267 +0x2ef:  mov    %eax,(%esp)
0825f26a +0x2f2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0825f26f +0x2f7:  mov    %esi,%eax
0825f271 +0x2f9:  mov    %ebx,%edx
0825f273 +0x2fb:  mov    %eax,(%esp)
0825f276 +0x2fe:  call   08ae3750 <_Unwind_Resume>
0825f27b +0x303:  lea    -0x54(%ebp),%eax
0825f27e +0x306:  mov    %eax,(%esp)
0825f281 +0x309:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0825f286 +0x30e:  mov    %ebx,%eax
0825f288 +0x310:  lea    -0x8(%ebp),%esp
0825f28b +0x313:  add    $0x0,%esp
0825f28e +0x316:  pop    %ebx
0825f28f +0x317:  pop    %esi
0825f290 +0x318:  pop    %ebp
0825f291 +0x319:  ret
```

## 反编译 C

```c
// Dispatcher_ComboSkill::read @ 0x825ef78

/* Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkill::read(Dispatcher_ComboSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  vector<int,std::allocator<int>> local_58 [14];
  short local_4a;
  char local_48;
  char local_47;
  short local_46;
  int local_44;
  pair local_40 [8];
  pair<short_const,std::vector<int,std::allocator<int>>> local_38 [16];
  pair<short,std::vector<int,std::allocator<int>>> local_28 [16];
  MSG_BASE *local_18;
  int local_14;
  int local_10;
  
  local_18 = param_2;
  local_46 = 0;
  local_47 = '\0';
  local_48 = '\0';
  local_4a = 0;
  std::vector<int,std::allocator<int>>::vector(local_58);
                    /* try { // try from 0825efae to 0825f1b5 has its CatchHandler @ 0825f260 */
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::clear((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
           *)(local_18 + 0xe));
  cVar2 = PacketBuf::get_byte(param_1,(char *)(local_18 + 0xd));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_byte(param_1,&local_47);
    if (cVar2 == '\x01') {
      local_14 = 0;
      while( true ) {
        if ((local_14 < local_47) && (local_14 < 6)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          uVar3 = 0;
          goto LAB_0825f27b;
        }
        local_46 = 0;
        local_48 = '\0';
        cVar2 = PacketBuf::get_short(param_1,&local_46);
        if (cVar2 != '\x01') break;
        cVar2 = checkComboSkillIndex(this,local_46);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_byte(param_1,&local_48);
          if (cVar2 != '\x01') {
            uVar3 = LineFunc(0x312,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            goto LAB_0825f27b;
          }
          std::vector<int,std::allocator<int>>::clear(local_58);
          local_10 = 0;
          while( true ) {
            if ((local_10 < local_48) && (local_10 < 6)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) break;
            local_4a = 0;
            cVar2 = PacketBuf::get_short(param_1,&local_4a);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0x319,
                               "virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0)
              ;
              goto LAB_0825f27b;
            }
            local_44 = (int)local_4a;
            std::vector<int,std::allocator<int>>::push_back(local_58,&local_44);
            local_10 = local_10 + 1;
          }
          std::make_pair<short&,std::vector<int,std::allocator<int>>&>
                    ((short *)local_28,(vector *)&local_46);
                    /* try { // try from 0825f1c6 to 0825f1ca has its CatchHandler @ 0825f20c */
          std::pair<short_const,std::vector<int,std::allocator<int>>>::
          pair<short,std::vector<int,std::allocator<int>>>(local_38,local_28);
                    /* try { // try from 0825f1e2 to 0825f1e6 has its CatchHandler @ 0825f1f7 */
          std::
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          ::insert(local_40);
                    /* try { // try from 0825f1f0 to 0825f1f4 has its CatchHandler @ 0825f20c */
          std::pair<short_const,std::vector<int,std::allocator<int>>>::~pair(local_38);
                    /* try { // try from 0825f227 to 0825f22b has its CatchHandler @ 0825f260 */
          std::pair<short,std::vector<int,std::allocator<int>>>::~pair(local_28);
        }
        local_14 = local_14 + 1;
      }
      uVar3 = LineFunc(0x30c,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
    else {
      uVar3 = LineFunc(0x304,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar3 = LineFunc(0x301,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
LAB_0825f27b:
  std::vector<int,std::allocator<int>>::~vector(local_58);
  return uVar3;
}
```
