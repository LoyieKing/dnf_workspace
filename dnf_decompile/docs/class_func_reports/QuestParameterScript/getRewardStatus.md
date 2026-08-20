# getRewardStatus

`_ZN20QuestParameterScript15getRewardStatusEi`

`QuestParameterScript::getRewardStatus(int)`

| 类 | 地址 |
|---|---|
| `QuestParameterScript` | `0x08a6be66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6be66  _ZN20QuestParameterScript15getRewardStatusEi
#           QuestParameterScript::getRewardStatus(int)
# range [0x08a6be66, 0x08a6c0e6]
08a6be66 +0x000:  push   %ebp
08a6be67 +0x001:  mov    %esp,%ebp
08a6be69 +0x003:  push   %edi
08a6be6a +0x004:  push   %esi
08a6be6b +0x005:  push   %ebx
08a6be6c +0x006:  sub    $0x8c,%esp
08a6be72 +0x00c:  mov    0x8(%ebp),%ebx
08a6be75 +0x00f:  mov    %ebx,%eax
08a6be77 +0x011:  mov    %eax,(%esp)
08a6be7a +0x014:  call   08a6c27a <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x151>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x151
08a6be7f +0x019:  mov    0x10(%ebp),%eax
08a6be82 +0x01c:  mov    %eax,0x4(%esp)
08a6be86 +0x020:  mov    0xc(%ebp),%eax
08a6be89 +0x023:  mov    %eax,(%esp)
08a6be8c +0x026:  call   08a6bdc6 <_ZN20QuestParameterScript14getRewardLevelEi>  ; QuestParameterScript::getRewardLevel(int)
08a6be91 +0x02b:  mov    %eax,-0x1c(%ebp)
08a6be94 +0x02e:  cmpl   $0xffffffff,-0x1c(%ebp)
08a6be98 +0x032:  je     08a6c0d7 <+0x271>
08a6be9e +0x038:  mov    0xc(%ebp),%eax
08a6bea1 +0x03b:  lea    0x54(%eax),%edx
08a6bea4 +0x03e:  lea    -0x48(%ebp),%eax
08a6bea7 +0x041:  mov    %edx,0x4(%esp)
08a6beab +0x045:  mov    %eax,(%esp)
08a6beae +0x048:  call   08a6c442 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x319>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x319
08a6beb3 +0x04d:  sub    $0x4,%esp
08a6beb6 +0x050:  jmp    08a6c089 <+0x223>
08a6bebb +0x055:  lea    -0x48(%ebp),%eax
08a6bebe +0x058:  mov    %eax,(%esp)
08a6bec1 +0x05b:  call   08a6c4e0 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x3b7>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x3b7
08a6bec6 +0x060:  mov    (%eax),%eax
08a6bec8 +0x062:  cmp    -0x1c(%ebp),%eax
08a6becb +0x065:  setg   %al
08a6bece +0x068:  test   %al,%al
08a6bed0 +0x06a:  je     08a6bed8 <+0x72>
08a6bed2 +0x06c:  nop
08a6bed3 +0x06d:  jmp    08a6c0d8 <+0x272>
08a6bed8 +0x072:  lea    -0x48(%ebp),%eax
08a6bedb +0x075:  mov    %eax,(%esp)
08a6bede +0x078:  call   08a6c4e0 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x3b7>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x3b7
08a6bee3 +0x07d:  add    $0x4,%eax
08a6bee6 +0x080:  mov    %eax,0x4(%esp)
08a6beea +0x084:  lea    -0x54(%ebp),%eax
08a6beed +0x087:  mov    %eax,(%esp)
08a6bef0 +0x08a:  call   08a6c4ee <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x3c5>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x3c5
08a6bef5 +0x08f:  lea    -0x58(%ebp),%eax
08a6bef8 +0x092:  lea    -0x54(%ebp),%edx
08a6befb +0x095:  mov    %edx,0x4(%esp)
08a6beff +0x099:  mov    %eax,(%esp)
08a6bf02 +0x09c:  call   08a6c5a2 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x479>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x479
08a6bf07 +0x0a1:  sub    $0x4,%esp
08a6bf0a +0x0a4:  jmp    08a6c01b <+0x1b5>
08a6bf0f +0x0a9:  lea    -0x58(%ebp),%eax
08a6bf12 +0x0ac:  mov    %eax,(%esp)
08a6bf15 +0x0af:  call   08a6c64c <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x523>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x523
08a6bf1a +0x0b4:  mov    (%eax),%edx
08a6bf1c +0x0b6:  mov    %edx,0x4(%esp)
08a6bf20 +0x0ba:  mov    0x4(%eax),%edx
08a6bf23 +0x0bd:  mov    %edx,0x8(%esp)
08a6bf27 +0x0c1:  mov    0x8(%eax),%eax
08a6bf2a +0x0c4:  mov    %eax,0xc(%esp)
08a6bf2e +0x0c8:  lea    -0x3c(%ebp),%eax
08a6bf31 +0x0cb:  mov    %eax,(%esp)
08a6bf34 +0x0ce:  call   08a6c186 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x5d>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x5d
08a6bf39 +0x0d3:  mov    %ebx,%edx
08a6bf3b +0x0d5:  lea    -0x30(%ebp),%eax
08a6bf3e +0x0d8:  mov    %edx,0x4(%esp)
08a6bf42 +0x0dc:  mov    %eax,(%esp)
08a6bf45 +0x0df:  call   08a6c5c6 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x49d>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x49d
08a6bf4a +0x0e4:  sub    $0x4,%esp
08a6bf4d +0x0e7:  mov    %ebx,%edx
08a6bf4f +0x0e9:  lea    -0x2c(%ebp),%eax
08a6bf52 +0x0ec:  mov    %edx,0x4(%esp)
08a6bf56 +0x0f0:  mov    %eax,(%esp)
08a6bf59 +0x0f3:  call   08a6c5a2 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x479>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x479
08a6bf5e +0x0f8:  sub    $0x4,%esp
08a6bf61 +0x0fb:  lea    -0x5c(%ebp),%eax
08a6bf64 +0x0fe:  mov    -0x3c(%ebp),%edx
08a6bf67 +0x101:  mov    %edx,0xc(%esp)
08a6bf6b +0x105:  mov    -0x38(%ebp),%edx
08a6bf6e +0x108:  mov    %edx,0x10(%esp)
08a6bf72 +0x10c:  mov    -0x34(%ebp),%edx
08a6bf75 +0x10f:  mov    %edx,0x14(%esp)
08a6bf79 +0x113:  mov    -0x30(%ebp),%edx
08a6bf7c +0x116:  mov    %edx,0x8(%esp)
08a6bf80 +0x11a:  mov    -0x2c(%ebp),%edx
08a6bf83 +0x11d:  mov    %edx,0x4(%esp)
08a6bf87 +0x121:  mov    %eax,(%esp)
08a6bf8a +0x124:  call   08a6c656 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x52d>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x52d
08a6bf8f +0x129:  sub    $0x4,%esp
08a6bf92 +0x12c:  mov    %ebx,%edx
08a6bf94 +0x12e:  lea    -0x28(%ebp),%eax
08a6bf97 +0x131:  mov    %edx,0x4(%esp)
08a6bf9b +0x135:  mov    %eax,(%esp)
08a6bf9e +0x138:  call   08a6c5c6 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x49d>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x49d
08a6bfa3 +0x13d:  sub    $0x4,%esp
08a6bfa6 +0x140:  lea    -0x28(%ebp),%eax
08a6bfa9 +0x143:  mov    %eax,0x4(%esp)
08a6bfad +0x147:  lea    -0x5c(%ebp),%eax
08a6bfb0 +0x14a:  mov    %eax,(%esp)
08a6bfb3 +0x14d:  call   08a6c5ec <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x4c3>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x4c3
08a6bfb8 +0x152:  test   %al,%al
08a6bfba +0x154:  je     08a6bfe5 <+0x17f>
08a6bfbc +0x156:  lea    -0x5c(%ebp),%eax
08a6bfbf +0x159:  mov    %eax,(%esp)
08a6bfc2 +0x15c:  call   08a6c64c <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x523>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x523
08a6bfc7 +0x161:  mov    %eax,%esi
08a6bfc9 +0x163:  flds   0x8(%esi)
08a6bfcc +0x166:  fstps  -0x6c(%ebp)
08a6bfcf +0x169:  lea    -0x58(%ebp),%eax
08a6bfd2 +0x16c:  mov    %eax,(%esp)
08a6bfd5 +0x16f:  call   08a6c64c <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x523>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x523
08a6bfda +0x174:  flds   0x8(%eax)
08a6bfdd +0x177:  fadds  -0x6c(%ebp)
08a6bfe0 +0x17a:  fstps  0x8(%esi)
08a6bfe3 +0x17d:  jmp    08a6bffe <+0x198>
08a6bfe5 +0x17f:  lea    -0x58(%ebp),%eax
08a6bfe8 +0x182:  mov    %eax,(%esp)
08a6bfeb +0x185:  call   08a6c64c <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x523>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x523
08a6bff0 +0x18a:  mov    %ebx,%edx
08a6bff2 +0x18c:  mov    %eax,0x4(%esp)
08a6bff6 +0x190:  mov    %edx,(%esp)
08a6bff9 +0x193:  call   08a6c28e <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x165>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x165
08a6bffe +0x198:  lea    -0x24(%ebp),%eax
08a6c001 +0x19b:  movl   $0x0,0x8(%esp)
08a6c009 +0x1a3:  lea    -0x58(%ebp),%edx
08a6c00c +0x1a6:  mov    %edx,0x4(%esp)
08a6c010 +0x1aa:  mov    %eax,(%esp)
08a6c013 +0x1ad:  call   08a6c618 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x4ef>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x4ef
08a6c018 +0x1b2:  sub    $0x4,%esp
08a6c01b +0x1b5:  lea    -0x40(%ebp),%eax
08a6c01e +0x1b8:  lea    -0x54(%ebp),%edx
08a6c021 +0x1bb:  mov    %edx,0x4(%esp)
08a6c025 +0x1bf:  mov    %eax,(%esp)
08a6c028 +0x1c2:  call   08a6c5c6 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x49d>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x49d
08a6c02d +0x1c7:  sub    $0x4,%esp
08a6c030 +0x1ca:  lea    -0x40(%ebp),%eax
08a6c033 +0x1cd:  mov    %eax,0x4(%esp)
08a6c037 +0x1d1:  lea    -0x58(%ebp),%eax
08a6c03a +0x1d4:  mov    %eax,(%esp)
08a6c03d +0x1d7:  call   08a6c5ec <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x4c3>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x4c3
08a6c042 +0x1dc:  test   %al,%al
08a6c044 +0x1de:  jne    08a6bf0f <+0xa9>
08a6c04a +0x1e4:  jmp    08a6c061 <+0x1fb>
08a6c04c +0x1e6:  mov    %edx,%esi
08a6c04e +0x1e8:  mov    %eax,%edi
08a6c050 +0x1ea:  lea    -0x54(%ebp),%eax
08a6c053 +0x1ed:  mov    %eax,(%esp)
08a6c056 +0x1f0:  call   083dcb52 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x76b1e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x76b1e
08a6c05b +0x1f5:  mov    %edi,%eax
08a6c05d +0x1f7:  mov    %esi,%edx
08a6c05f +0x1f9:  jmp    08a6c0bd <+0x257>
08a6c061 +0x1fb:  lea    -0x54(%ebp),%eax
08a6c064 +0x1fe:  mov    %eax,(%esp)
08a6c067 +0x201:  call   083dcb52 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x76b1e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x76b1e
08a6c06c +0x206:  lea    -0x20(%ebp),%eax
08a6c06f +0x209:  movl   $0x0,0x8(%esp)
08a6c077 +0x211:  lea    -0x48(%ebp),%edx
08a6c07a +0x214:  mov    %edx,0x4(%esp)
08a6c07e +0x218:  mov    %eax,(%esp)
08a6c081 +0x21b:  call   08a6c4a2 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x379>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x379
08a6c086 +0x220:  sub    $0x4,%esp
08a6c089 +0x223:  mov    0xc(%ebp),%eax
08a6c08c +0x226:  lea    0x54(%eax),%edx
08a6c08f +0x229:  lea    -0x44(%ebp),%eax
08a6c092 +0x22c:  mov    %edx,0x4(%esp)
08a6c096 +0x230:  mov    %eax,(%esp)
08a6c099 +0x233:  call   08a6c468 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x33f>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x33f
08a6c09e +0x238:  sub    $0x4,%esp
08a6c0a1 +0x23b:  lea    -0x44(%ebp),%eax
08a6c0a4 +0x23e:  mov    %eax,0x4(%esp)
08a6c0a8 +0x242:  lea    -0x48(%ebp),%eax
08a6c0ab +0x245:  mov    %eax,(%esp)
08a6c0ae +0x248:  call   08a6c48e <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x365>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x365
08a6c0b3 +0x24d:  test   %al,%al
08a6c0b5 +0x24f:  jne    08a6bebb <+0x55>
08a6c0bb +0x255:  jmp    08a6c0d8 <+0x272>
08a6c0bd +0x257:  mov    %edx,%esi
08a6c0bf +0x259:  mov    %eax,%edi
08a6c0c1 +0x25b:  mov    %ebx,%eax
08a6c0c3 +0x25d:  mov    %eax,(%esp)
08a6c0c6 +0x260:  call   083dcb52 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x76b1e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x76b1e
08a6c0cb +0x265:  mov    %edi,%eax
08a6c0cd +0x267:  mov    %esi,%edx
08a6c0cf +0x269:  mov    %eax,(%esp)
08a6c0d2 +0x26c:  call   08ae3750 <_Unwind_Resume>
08a6c0d7 +0x271:  nop
08a6c0d8 +0x272:  mov    %ebx,%eax
08a6c0da +0x274:  mov    %ebx,%eax
08a6c0dc +0x276:  lea    -0xc(%ebp),%esp
08a6c0df +0x279:  add    $0x0,%esp
08a6c0e2 +0x27c:  pop    %ebx
08a6c0e3 +0x27d:  pop    %esi
08a6c0e4 +0x27e:  pop    %edi
08a6c0e5 +0x27f:  pop    %ebp
08a6c0e6 +0x280:  ret    $0x4
```

## 反编译 C

```c
// QuestParameterScript::getRewardStatus @ 0x8a6be66

/* QuestParameterScript::getRewardStatus(int) */

int QuestParameterScript::getRewardStatus(int param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  QuestParameterScript *in_stack_00000008;
  int in_stack_0000000c;
  int local_a8 [3];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [12];
  map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
  local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  
  piVar8 = (int *)&stack0xffffff64;
  std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::vector
            ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)param_1);
                    /* try { // try from 08a6be8c to 08a6bef4 has its CatchHandler @ 08a6c0bd */
  local_20 = getRewardLevel(in_stack_00000008,in_stack_0000000c);
  if (local_20 != -1) {
    std::
    map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
    ::begin(local_4c);
    while( true ) {
      piVar8[1] = (int)(in_stack_00000008 + 0x54);
      *piVar8 = (int)local_48;
      piVar8[-1] = 0x8a6c09e;
      std::
      map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
      ::end((map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
             *)*piVar8);
      piVar8[1] = (int)local_48;
      *piVar8 = (int)local_4c;
      piVar8[-1] = 0x8a6c0b3;
      cVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                            *)*piVar8,(_Rb_tree_iterator *)piVar8[1]);
      if (cVar3 == '\0') break;
      *piVar8 = (int)local_4c;
      piVar8[-1] = 0x8a6bec6;
      piVar4 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                                    *)*piVar8);
      if (local_20 < *piVar4) {
        return param_1;
      }
      *piVar8 = (int)local_4c;
      piVar8[-1] = 0x8a6bee3;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                            *)*piVar8);
      piVar8[1] = iVar5 + 4;
      *piVar8 = (int)local_58;
      piVar8[-1] = 0x8a6bef5;
      std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::vector
                ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)*piVar8,
                 (vector *)piVar8[1]);
      piVar8[1] = (int)local_58;
      *piVar8 = (int)local_5c;
                    /* try { // try from 08a6bf02 to 08a6c041 has its CatchHandler @ 08a6c04c */
      piVar8[-1] = 0x8a6bf07;
      std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::begin();
      while( true ) {
        piVar8[1] = (int)local_58;
        *piVar8 = (int)local_44;
        piVar8[-1] = 0x8a6c02d;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::end();
        piVar8[1] = (int)local_44;
        *piVar8 = (int)local_5c;
        piVar8[-1] = 0x8a6c042;
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)*piVar8,(__normal_iterator *)piVar8[1]);
        if (!bVar2) break;
        *piVar8 = (int)local_5c;
        piVar8[-1] = 0x8a6bf1a;
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                        ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                                     *)*piVar8);
        piVar8[1] = *piVar4;
        piVar8[2] = piVar4[1];
        piVar8[3] = piVar4[2];
        *piVar8 = (int)&local_40;
        piVar8[-1] = 0x8a6bf39;
        Statuepredicate::Statuepredicate();
        piVar8[1] = param_1;
        *piVar8 = (int)&local_34;
        piVar8[-1] = 0x8a6bf4a;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::end();
        piVar8[1] = param_1;
        *piVar8 = (int)&local_30;
        piVar8[-1] = 0x8a6bf5e;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::begin();
        piVar8[3] = local_40;
        piVar8[4] = local_3c;
        piVar8[5] = local_38;
        piVar8[2] = local_34;
        piVar8[1] = local_30;
        *piVar8 = (int)local_60;
        piVar8[-1] = 0x8a6bf8f;
        std::
        find_if<__gnu_cxx::__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>,Statuepredicate>
                  ();
        *piVar8 = param_1;
        piVar8[-1] = (int)local_2c;
        piVar8[-2] = 0x8a6bfa3;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::end();
        *piVar8 = (int)local_2c;
        piVar8[-1] = (int)local_60;
        piVar8[-2] = 0x8a6bfb8;
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)piVar8[-1],(__normal_iterator *)*piVar8);
        if (bVar2) {
          piVar8[-1] = (int)local_60;
          piVar8[-2] = 0x8a6bfc7;
          iVar5 = __gnu_cxx::
                  __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                  ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                               *)piVar8[-1]);
          fVar1 = *(float *)(iVar5 + 8);
          piVar8[-1] = (int)local_5c;
          piVar8[-2] = 0x8a6bfda;
          iVar6 = __gnu_cxx::
                  __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                  ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                               *)piVar8[-1]);
          *(float *)(iVar5 + 8) = *(float *)(iVar6 + 8) + fVar1;
        }
        else {
          piVar8[-1] = (int)local_5c;
          piVar8[-2] = 0x8a6bff0;
          uVar7 = __gnu_cxx::
                  __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                  ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                               *)piVar8[-1]);
          *piVar8 = uVar7;
          piVar8[-1] = param_1;
          piVar8[-2] = 0x8a6bffe;
          std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::push_back
                    ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)
                     piVar8[-1],(pieceQuestRewardStatus *)*piVar8);
        }
        piVar8[1] = 0;
        *piVar8 = (int)local_5c;
        piVar8[-1] = (int)local_28;
        piVar8[-2] = 0x8a6c018;
        __gnu_cxx::
        __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
        ::operator++((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                      *)piVar8[-1],*piVar8);
        piVar8 = piVar8 + -1;
      }
      *piVar8 = (int)local_58;
                    /* try { // try from 08a6c067 to 08a6c09d has its CatchHandler @ 08a6c0bd */
      piVar8[-1] = 0x8a6c06c;
      std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::~vector
                ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)*piVar8);
      piVar8[2] = 0;
      piVar8[1] = (int)local_4c;
      *piVar8 = (int)local_24;
      piVar8[-1] = 0x8a6c086;
      std::
      _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
      ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                    *)*piVar8,piVar8[1]);
    }
  }
  return param_1;
}
```
