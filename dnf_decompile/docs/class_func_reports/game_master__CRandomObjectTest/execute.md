# execute

`_ZN11game_master17CRandomObjectTest7executeEv`

`game_master::CRandomObjectTest::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CRandomObjectTest` | `0x084b0082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0082  _ZN11game_master17CRandomObjectTest7executeEv
#           game_master::CRandomObjectTest::execute()
# range [0x084b0082, 0x084b02bd]
084b0082 +0x000:  push   %ebp
084b0083 +0x001:  mov    %esp,%ebp
084b0085 +0x003:  push   %edi
084b0086 +0x004:  push   %esi
084b0087 +0x005:  push   %ebx
084b0088 +0x006:  sub    $&_ZL14gUnicodeBuffer+0xcf50,%esp
084b008e +0x00c:  mov    0x8(%ebp),%eax
084b0091 +0x00f:  mov    %eax,(%esp)
084b0094 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0099 +0x017:  mov    %eax,-0x24(%ebp)
084b009c +0x01a:  cmpl   $0x0,-0x24(%ebp)
084b00a0 +0x01e:  je     084b02b2 <+0x230>
084b00a6 +0x024:  mov    0x8(%ebp),%eax
084b00a9 +0x027:  mov    %eax,(%esp)
084b00ac +0x02a:  call   084b02be <_ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv>  ; game_master::CRandomObjectTest::checkCommandExecuteError()
084b00b1 +0x02f:  mov    %eax,-0x20(%ebp)
084b00b4 +0x032:  cmpl   $0x0,-0x20(%ebp)
084b00b8 +0x036:  je     084b00d1 <+0x4f>
084b00ba +0x038:  mov    -0x20(%ebp),%eax
084b00bd +0x03b:  mov    %eax,0x4(%esp)
084b00c1 +0x03f:  mov    -0x24(%ebp),%eax
084b00c4 +0x042:  mov    %eax,(%esp)
084b00c7 +0x045:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084b00cc +0x04a:  jmp    084b02b3 <+0x231>
084b00d1 +0x04f:  mov    0x8(%ebp),%eax
084b00d4 +0x052:  mov    0xc(%eax),%eax
084b00d7 +0x055:  test   %eax,%eax
084b00d9 +0x057:  jne    084b00e5 <+0x63>
084b00db +0x059:  mov    0x8(%ebp),%eax
084b00de +0x05c:  movl   $0x2710,0xc(%eax)
084b00e5 +0x063:  mov    0x8(%ebp),%eax
084b00e8 +0x066:  mov    0xc(%eax),%eax
084b00eb +0x069:  mov    %eax,0x8(%esp)
084b00ef +0x06d:  movl   $"%d번 통계입니다",0x4(%esp)
084b00f7 +0x075:  lea    -0x39(%ebp),%eax
084b00fa +0x078:  mov    %eax,(%esp)
084b00fd +0x07b:  call   0807e440 <_init+0xd38>
084b0102 +0x080:  lea    -0x39(%ebp),%eax
084b0105 +0x083:  mov    %eax,0x4(%esp)
084b0109 +0x087:  mov    -0x24(%ebp),%eax
084b010c +0x08a:  mov    %eax,(%esp)
084b010f +0x08d:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084b0114 +0x092:  lea    -0x54(%ebp),%eax
084b0117 +0x095:  mov    %eax,(%esp)
084b011a +0x098:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
084b011f +0x09d:  mov    0x8(%ebp),%eax
084b0122 +0x0a0:  mov    0x8(%eax),%eax
084b0125 +0x0a3:  cmp    $0x1,%eax
084b0128 +0x0a6:  jne    084b02a5 <+0x223>
084b012e +0x0ac:  movl   $"vending machine 결과체크를 시작합니다",0x4(%esp)
084b0136 +0x0b4:  mov    -0x24(%ebp),%eax
084b0139 +0x0b7:  mov    %eax,(%esp)
084b013c +0x0ba:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084b0141 +0x0bf:  lea    -0x54(%ebp),%eax
084b0144 +0x0c2:  mov    %eax,0x4(%esp)
084b0148 +0x0c6:  mov    0x8(%ebp),%eax
084b014b +0x0c9:  mov    %eax,(%esp)
084b014e +0x0cc:  call   084b02e6 <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CRandomObjectTest::getVendingMachineItem(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084b0153 +0x0d1:  nop
084b0154 +0x0d2:  lea    -0x153(%ebp),%edx
084b015a +0x0d8:  mov    $0xff,%ebx
084b015f +0x0dd:  mov    $0x0,%eax
084b0164 +0x0e2:  mov    %edx,%ecx
084b0166 +0x0e4:  and    $0x1,%ecx
084b0169 +0x0e7:  test   %ecx,%ecx
084b016b +0x0e9:  je     084b0175 <+0xf3>
084b016d +0x0eb:  mov    %al,(%edx)
084b016f +0x0ed:  add    $0x1,%edx
084b0172 +0x0f0:  sub    $0x1,%ebx
084b0175 +0x0f3:  mov    %edx,%ecx
084b0177 +0x0f5:  and    $0x2,%ecx
084b017a +0x0f8:  test   %ecx,%ecx
084b017c +0x0fa:  je     084b0187 <+0x105>
084b017e +0x0fc:  mov    %ax,(%edx)
084b0181 +0x0ff:  add    $0x2,%edx
084b0184 +0x102:  sub    $0x2,%ebx
084b0187 +0x105:  mov    %ebx,%ecx
084b0189 +0x107:  shr    $0x2,%ecx
084b018c +0x10a:  mov    %edx,%edi
084b018e +0x10c:  rep stos %eax,%es:(%edi)
084b0190 +0x10e:  mov    %edi,%edx
084b0192 +0x110:  mov    %ebx,%ecx
084b0194 +0x112:  and    $0x2,%ecx
084b0197 +0x115:  test   %ecx,%ecx
084b0199 +0x117:  je     084b01a1 <+0x11f>
084b019b +0x119:  mov    %ax,(%edx)
084b019e +0x11c:  add    $0x2,%edx
084b01a1 +0x11f:  mov    %ebx,%ecx
084b01a3 +0x121:  and    $0x1,%ecx
084b01a6 +0x124:  test   %ecx,%ecx
084b01a8 +0x126:  je     084b01af <+0x12d>
084b01aa +0x128:  mov    %al,(%edx)
084b01ac +0x12a:  add    $0x1,%edx
084b01af +0x12d:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084b01b5 +0x133:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084b01ba +0x138:  mov    %edx,0x8(%esp)
084b01be +0x13c:  movl   $0x0,0x4(%esp)
084b01c6 +0x144:  mov    %eax,(%esp)
084b01c9 +0x147:  call   0807dcc0 <_init+0x5b8>
084b01ce +0x14c:  movb   $0x1,-0x19(%ebp)
084b01d2 +0x150:  jmp    084b026b <+0x1e9>
084b01d7 +0x155:  lea    -0x54(%ebp),%eax
084b01da +0x158:  mov    %eax,0x8(%esp)
084b01de +0x15c:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084b01e4 +0x162:  mov    %eax,0x4(%esp)
084b01e8 +0x166:  mov    -0x24(%ebp),%eax
084b01eb +0x169:  mov    %eax,(%esp)
084b01ee +0x16c:  call   084af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084b01f3 +0x171:  mov    0x8(%ebp),%eax
084b01f6 +0x174:  mov    0xc(%eax),%eax
084b01f9 +0x177:  mov    %eax,0x8(%esp)
084b01fd +0x17b:  movl   $"etc_random_test_%d.txt",0x4(%esp)
084b0205 +0x183:  lea    -0x153(%ebp),%eax
084b020b +0x189:  mov    %eax,(%esp)
084b020e +0x18c:  call   0807e440 <_init+0xd38>
084b0213 +0x191:  lea    -0x54(%ebp),%eax
084b0216 +0x194:  mov    %eax,(%esp)
084b0219 +0x197:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
084b021e +0x19c:  test   %al,%al
084b0220 +0x19e:  je     084b0226 <+0x1a4>
084b0222 +0x1a0:  movb   $0x0,-0x19(%ebp)
084b0226 +0x1a4:  movzbl -0x19(%ebp),%eax
084b022a +0x1a8:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%edx
084b0230 +0x1ae:  mov    %edx,0xc(%esp)
084b0234 +0x1b2:  lea    -0x153(%ebp),%edx
084b023a +0x1b8:  mov    %edx,0x8(%esp)
084b023e +0x1bc:  mov    %eax,0x4(%esp)
084b0242 +0x1c0:  mov    -0x24(%ebp),%eax
084b0245 +0x1c3:  mov    %eax,(%esp)
084b0248 +0x1c6:  call   084aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>  ; game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
084b024d +0x1cb:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x8(%esp)
084b0255 +0x1d3:  movl   $0x0,0x4(%esp)
084b025d +0x1db:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084b0263 +0x1e1:  mov    %eax,(%esp)
084b0266 +0x1e4:  call   0807dcc0 <_init+0x5b8>
084b026b +0x1e9:  cmpb   $0x0,-0x19(%ebp)
084b026f +0x1ed:  jne    084b01d7 <+0x155>
084b0275 +0x1f3:  movl   $"결과체크가 완료되었습니다",0x4(%esp)
084b027d +0x1fb:  mov    -0x24(%ebp),%eax
084b0280 +0x1fe:  mov    %eax,(%esp)
084b0283 +0x201:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084b0288 +0x206:  jmp    084b02a5 <+0x223>
084b028a +0x208:  mov    %edx,%ebx
084b028c +0x20a:  mov    %eax,%esi
084b028e +0x20c:  lea    -0x54(%ebp),%eax
084b0291 +0x20f:  mov    %eax,(%esp)
084b0294 +0x212:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084b0299 +0x217:  mov    %esi,%eax
084b029b +0x219:  mov    %ebx,%edx
084b029d +0x21b:  mov    %eax,(%esp)
084b02a0 +0x21e:  call   08ae3750 <_Unwind_Resume>
084b02a5 +0x223:  lea    -0x54(%ebp),%eax
084b02a8 +0x226:  mov    %eax,(%esp)
084b02ab +0x229:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084b02b0 +0x22e:  jmp    084b02b3 <+0x231>
084b02b2 +0x230:  nop
084b02b3 +0x231:  add    $&_ZL14gUnicodeBuffer+0xcf50,%esp
084b02b9 +0x237:  pop    %ebx
084b02ba +0x238:  pop    %esi
084b02bb +0x239:  pop    %edi
084b02bc +0x23a:  pop    %ebp
084b02bd +0x23b:  ret
```

## 反编译 C

```c
// game_master::CRandomObjectTest::execute @ 0x84b0082

/* game_master::CRandomObjectTest::execute() */

void __thiscall game_master::CRandomObjectTest::execute(CRandomObjectTest *this)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char acStack_1746f [95000];
  char local_157;
  char local_156 [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_58 [27];
  char local_3d [21];
  CUser *local_28;
  char *local_24;
  bool local_1d;
  
  bVar6 = 0;
  local_28 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_28 != (CUser *)0x0) {
    local_24 = (char *)checkCommandExecuteError(this);
    if (local_24 == (char *)0x0) {
      if (*(int *)(this + 0xc) == 0) {
        *(undefined4 *)(this + 0xc) = 10000;
      }
      sprintf(local_3d,&DAT_08c7fddb,*(undefined4 *)(this + 0xc));
      CBoosterTest::SendChatMsg(local_28,local_3d);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_58);
      if (*(int *)(this + 8) == 1) {
                    /* try { // try from 084b013c to 084b0287 has its CatchHandler @ 084b028a */
        CBoosterTest::SendChatMsg(local_28,&DAT_08c801e0);
        getVendingMachineItem((map *)this);
        pcVar3 = &local_157;
        uVar4 = 0xff;
        bVar5 = ((uint)pcVar3 & 1) != 0;
        if (bVar5) {
          local_157 = '\0';
          pcVar3 = local_156;
          uVar4 = 0xfe;
        }
        if (((uint)pcVar3 & 2) != 0) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3 = pcVar3 + 2;
          uVar4 = uVar4 - 2;
        }
        for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
        }
        if ((uVar4 & 2) != 0) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3 = pcVar3 + 2;
        }
        if (!bVar5) {
          *pcVar3 = '\0';
        }
        memset(acStack_1746f,0,95000);
        local_1d = true;
        while (local_1d != false) {
          CBoosterTest::makeFileContents(local_28,acStack_1746f,(map *)local_58);
          sprintf(&local_157,"etc_random_test_%d.txt",*(undefined4 *)(this + 0xc));
          cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                            (local_58);
          if (cVar1 != '\0') {
            local_1d = false;
          }
          CBoosterTest::printClient(local_28,local_1d,&local_157,acStack_1746f);
          memset(acStack_1746f,0,95000);
        }
        CBoosterTest::SendChatMsg(local_28,&DAT_08c8021d);
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_58);
    }
    else {
      CBoosterTest::SendChatMsg(local_28,local_24);
    }
  }
  return;
}
```
