# get_init_trigger

`_ZNK5Quest16get_init_triggerEv`

`Quest::get_init_trigger() const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x083530d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083530d6  _ZNK5Quest16get_init_triggerEv
#           Quest::get_init_trigger() const
# range [0x083530d6, 0x08353341]
083530d6 +0x000:  push   %ebp
083530d7 +0x001:  mov    %esp,%ebp
083530d9 +0x003:  sub    $0x68,%esp
083530dc +0x006:  mov    0x8(%ebp),%eax
083530df +0x009:  mov    0x7c(%eax),%eax
083530e2 +0x00c:  cmp    $0x2,%eax
083530e5 +0x00f:  je     083530f6 <+0x20>
083530e7 +0x011:  mov    0x8(%ebp),%eax
083530ea +0x014:  mov    0x7c(%eax),%eax
083530ed +0x017:  cmp    $0x6,%eax
083530f0 +0x01a:  jne    0835329a <+0x1c4>
083530f6 +0x020:  mov    0x8(%ebp),%eax
083530f9 +0x023:  lea    0x84(%eax),%edx
083530ff +0x029:  lea    -0x38(%ebp),%eax
08353102 +0x02c:  mov    %edx,0x4(%esp)
08353106 +0x030:  mov    %eax,(%esp)
08353109 +0x033:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0835310e +0x038:  sub    $0x4,%esp
08353111 +0x03b:  mov    0x8(%ebp),%eax
08353114 +0x03e:  lea    0x84(%eax),%edx
0835311a +0x044:  lea    -0x3c(%ebp),%eax
0835311d +0x047:  mov    %edx,0x4(%esp)
08353121 +0x04b:  mov    %eax,(%esp)
08353124 +0x04e:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08353129 +0x053:  sub    $0x4,%esp
0835312c +0x056:  movl   $0x0,-0x42(%ebp)
08353133 +0x05d:  movw   $0x0,-0x3e(%ebp)
08353139 +0x063:  movl   $0x0,-0x20(%ebp)
08353140 +0x06a:  jmp    0835323b <+0x165>
08353145 +0x06f:  lea    -0x34(%ebp),%eax
08353148 +0x072:  movl   $0x0,0x8(%esp)
08353150 +0x07a:  lea    -0x38(%ebp),%edx
08353153 +0x07d:  mov    %edx,0x4(%esp)
08353157 +0x081:  mov    %eax,(%esp)
0835315a +0x084:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0835315f +0x089:  sub    $0x4,%esp
08353162 +0x08c:  lea    -0x34(%ebp),%eax
08353165 +0x08f:  mov    %eax,(%esp)
08353168 +0x092:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0835316d +0x097:  mov    (%eax),%eax
0835316f +0x099:  mov    %eax,-0x1c(%ebp)
08353172 +0x09c:  lea    -0x30(%ebp),%eax
08353175 +0x09f:  movl   $0x0,0x8(%esp)
0835317d +0x0a7:  lea    -0x38(%ebp),%edx
08353180 +0x0aa:  mov    %edx,0x4(%esp)
08353184 +0x0ae:  mov    %eax,(%esp)
08353187 +0x0b1:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0835318c +0x0b6:  sub    $0x4,%esp
0835318f +0x0b9:  lea    -0x30(%ebp),%eax
08353192 +0x0bc:  mov    %eax,(%esp)
08353195 +0x0bf:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0835319a +0x0c4:  mov    (%eax),%eax
0835319c +0x0c6:  mov    %eax,-0x18(%ebp)
0835319f +0x0c9:  lea    -0x2c(%ebp),%eax
083531a2 +0x0cc:  movl   $0x0,0x8(%esp)
083531aa +0x0d4:  lea    -0x38(%ebp),%edx
083531ad +0x0d7:  mov    %edx,0x4(%esp)
083531b1 +0x0db:  mov    %eax,(%esp)
083531b4 +0x0de:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
083531b9 +0x0e3:  sub    $0x4,%esp
083531bc +0x0e6:  lea    -0x2c(%ebp),%eax
083531bf +0x0e9:  mov    %eax,(%esp)
083531c2 +0x0ec:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083531c7 +0x0f1:  mov    (%eax),%eax
083531c9 +0x0f3:  mov    %eax,-0x14(%ebp)
083531cc +0x0f6:  mov    0x8(%ebp),%eax
083531cf +0x0f9:  mov    0x7c(%eax),%eax
083531d2 +0x0fc:  cmp    $0x6,%eax
083531d5 +0x0ff:  jne    083531ff <+0x129>
083531d7 +0x101:  lea    -0x28(%ebp),%eax
083531da +0x104:  movl   $0x0,0x8(%esp)
083531e2 +0x10c:  lea    -0x38(%ebp),%edx
083531e5 +0x10f:  mov    %edx,0x4(%esp)
083531e9 +0x113:  mov    %eax,(%esp)
083531ec +0x116:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
083531f1 +0x11b:  sub    $0x4,%esp
083531f4 +0x11e:  lea    -0x28(%ebp),%eax
083531f7 +0x121:  mov    %eax,(%esp)
083531fa +0x124:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083531ff +0x129:  lea    -0x24(%ebp),%eax
08353202 +0x12c:  movl   $0x0,0x8(%esp)
0835320a +0x134:  lea    -0x38(%ebp),%edx
0835320d +0x137:  mov    %edx,0x4(%esp)
08353211 +0x13b:  mov    %eax,(%esp)
08353214 +0x13e:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08353219 +0x143:  sub    $0x4,%esp
0835321c +0x146:  lea    -0x24(%ebp),%eax
0835321f +0x149:  mov    %eax,(%esp)
08353222 +0x14c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08353227 +0x151:  mov    (%eax),%eax
08353229 +0x153:  mov    %eax,-0x10(%ebp)
0835322c +0x156:  mov    -0x20(%ebp),%eax
0835322f +0x159:  mov    -0x10(%ebp),%edx
08353232 +0x15c:  mov    %dx,-0x42(%ebp,%eax,2)
08353237 +0x161:  addl   $0x1,-0x20(%ebp)
0835323b +0x165:  lea    -0x3c(%ebp),%eax
0835323e +0x168:  mov    %eax,0x4(%esp)
08353242 +0x16c:  lea    -0x38(%ebp),%eax
08353245 +0x16f:  mov    %eax,(%esp)
08353248 +0x172:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0835324d +0x177:  test   %al,%al
0835324f +0x179:  jne    08353145 <+0x6f>
08353255 +0x17f:  lea    -0x4c(%ebp),%eax
08353258 +0x182:  mov    %eax,(%esp)
0835325b +0x185:  call   0836ddac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d78>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d78
08353260 +0x18a:  movzwl -0x3e(%ebp),%eax
08353264 +0x18e:  movswl %ax,%ecx
08353267 +0x191:  movzwl -0x40(%ebp),%eax
0835326b +0x195:  movswl %ax,%edx
0835326e +0x198:  movzwl -0x42(%ebp),%eax
08353272 +0x19c:  cwtl
08353273 +0x19d:  mov    %ecx,0xc(%esp)
08353277 +0x1a1:  mov    %edx,0x8(%esp)
0835327b +0x1a5:  mov    %eax,0x4(%esp)
0835327f +0x1a9:  lea    -0x4c(%ebp),%eax
08353282 +0x1ac:  mov    %eax,(%esp)
08353285 +0x1af:  call   0836dce0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7cac>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7cac
0835328a +0x1b4:  lea    -0x4c(%ebp),%eax
0835328d +0x1b7:  mov    %eax,(%esp)
08353290 +0x1ba:  call   0836dd68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d34>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d34
08353295 +0x1bf:  jmp    08353340 <+0x26a>
0835329a +0x1c4:  mov    0x8(%ebp),%eax
0835329d +0x1c7:  mov    0x7c(%eax),%eax
083532a0 +0x1ca:  cmp    $0x19,%eax
083532a3 +0x1cd:  jne    083532e0 <+0x20a>
083532a5 +0x1cf:  lea    -0x54(%ebp),%eax
083532a8 +0x1d2:  mov    %eax,(%esp)
083532ab +0x1d5:  call   0836ddac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d78>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d78
083532b0 +0x1da:  movl   $0x0,0xc(%esp)
083532b8 +0x1e2:  movl   $0x1,0x8(%esp)
083532c0 +0x1ea:  movl   $0x1,0x4(%esp)
083532c8 +0x1f2:  lea    -0x54(%ebp),%eax
083532cb +0x1f5:  mov    %eax,(%esp)
083532ce +0x1f8:  call   0836dce0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7cac>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7cac
083532d3 +0x1fd:  lea    -0x54(%ebp),%eax
083532d6 +0x200:  mov    %eax,(%esp)
083532d9 +0x203:  call   0836dd68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d34>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d34
083532de +0x208:  jmp    08353340 <+0x26a>
083532e0 +0x20a:  mov    0x8(%ebp),%eax
083532e3 +0x20d:  mov    0x7c(%eax),%eax
083532e6 +0x210:  cmp    $0x1,%eax
083532e9 +0x213:  jne    0835333b <+0x265>
083532eb +0x215:  mov    0x8(%ebp),%eax
083532ee +0x218:  mov    0x80(%eax),%eax
083532f4 +0x21e:  cmp    $0x6,%eax
083532f7 +0x221:  jne    0835333b <+0x265>
083532f9 +0x223:  mov    0x8(%ebp),%eax
083532fc +0x226:  add    $0x84,%eax
08353301 +0x22b:  mov    %eax,(%esp)
08353304 +0x22e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08353309 +0x233:  cmp    $0x3,%eax
0835330c +0x236:  sete   %al
0835330f +0x239:  test   %al,%al
08353311 +0x23b:  je     0835333b <+0x265>
08353313 +0x23d:  mov    0x8(%ebp),%eax
08353316 +0x240:  add    $0x84,%eax
0835331b +0x245:  movl   $0x2,0x4(%esp)
08353323 +0x24d:  mov    %eax,(%esp)
08353326 +0x250:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
0835332b +0x255:  mov    (%eax),%eax
0835332d +0x257:  mov    %eax,-0xc(%ebp)
08353330 +0x25a:  cmpl   $0x0,-0xc(%ebp)
08353334 +0x25e:  jle    0835333b <+0x265>
08353336 +0x260:  mov    -0xc(%ebp),%eax
08353339 +0x263:  jmp    08353340 <+0x26a>
0835333b +0x265:  mov    $0x1,%eax
08353340 +0x26a:  leave
08353341 +0x26b:  ret
```

## 反编译 C

```c
// Quest::get_init_trigger @ 0x83530d6

/* Quest::get_init_trigger() const */

int __thiscall Quest::get_init_trigger(Quest *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  stQuestTriggerState_t local_58 [8];
  stQuestTriggerState_t local_50 [10];
  short local_46 [3];
  __normal_iterator local_40 [4];
  undefined1 local_3c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_38 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_34 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_2c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(this + 0x7c) == 2) || (*(int *)(this + 0x7c) == 6)) {
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    local_46[0] = 0;
    local_46[1] = 0;
    local_46[2] = 0;
    local_24 = 0;
    while (bVar1 = __gnu_cxx::operator!=(local_3c,local_40), bVar1) {
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_38,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_38);
      local_20 = *puVar2;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_34,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_34);
      local_1c = *puVar2;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_30,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_30);
      local_18 = *puVar2;
      if (*(int *)(this + 0x7c) == 6) {
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c,(int)local_3c);
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator*
                  (local_2c);
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_28,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_28);
      local_14 = *puVar2;
      local_46[local_24] = (short)local_14;
      local_24 = local_24 + 1;
    }
    stQuestTriggerState_t::stQuestTriggerState_t(local_50);
    stQuestTriggerState_t::setTrigger(local_50,local_46[0],local_46[1],local_46[2]);
    iVar3 = stQuestTriggerState_t::getTrigger(local_50);
  }
  else if (*(int *)(this + 0x7c) == 0x19) {
    stQuestTriggerState_t::stQuestTriggerState_t(local_58);
    stQuestTriggerState_t::setTrigger(local_58,1,1,0);
    iVar3 = stQuestTriggerState_t::getTrigger(local_58);
  }
  else {
    if (((*(int *)(this + 0x7c) == 1) && (*(int *)(this + 0x80) == 6)) &&
       (iVar3 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this + 0x84)), iVar3 == 3)) {
      piVar4 = (int *)std::vector<int,std::allocator<int>>::at
                                ((vector<int,std::allocator<int>> *)(this + 0x84),2);
      if (0 < *piVar4) {
        return *piVar4;
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}
```
