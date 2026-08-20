# dispatch

`_ZN15InterDispatcher8dispatchEiiPci`

`InterDispatcher::dispatch(int, int, char*, int)`

| 类 | 地址 |
|---|---|
| `InterDispatcher` | `0x084be970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084be970  _ZN15InterDispatcher8dispatchEiiPci
#           InterDispatcher::dispatch(int, int, char*, int)
# range [0x084be970, 0x084beb3b]
084be970 +0x000:  push   %ebp
084be971 +0x001:  mov    %esp,%ebp
084be973 +0x003:  push   %ebx
084be974 +0x004:  sub    $0x54,%esp
084be977 +0x007:  movl   $0x0,-0x14(%ebp)
084be97e +0x00e:  cmpl   $0xffffffff,0x10(%ebp)
084be982 +0x012:  je     084be9b8 <+0x48>
084be984 +0x014:  mov    0xc(%ebp),%eax
084be987 +0x017:  lea    0x3e8(%eax),%ebx
084be98d +0x01d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084be992 +0x022:  mov    %ebx,0x8(%esp)
084be996 +0x026:  mov    0x10(%ebp),%edx
084be999 +0x029:  mov    %edx,0x4(%esp)
084be99d +0x02d:  mov    %eax,(%esp)
084be9a0 +0x030:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084be9a5 +0x035:  mov    %eax,-0x14(%ebp)
084be9a8 +0x038:  cmpl   $0x0,-0x14(%ebp)
084be9ac +0x03c:  jne    084be9b8 <+0x48>
084be9ae +0x03e:  mov    $0x0,%eax
084be9b3 +0x043:  jmp    084beb35 <+0x1c5>
084be9b8 +0x048:  mov    0xc(%ebp),%eax
084be9bb +0x04b:  mov    %eax,0x4(%esp)
084be9bf +0x04f:  mov    0x8(%ebp),%eax
084be9c2 +0x052:  mov    %eax,(%esp)
084be9c5 +0x055:  call   084be906 <_ZN15InterDispatcher14get_dispatcherEi>  ; InterDispatcher::get_dispatcher(int)
084be9ca +0x05a:  mov    %eax,-0x10(%ebp)
084be9cd +0x05d:  cmpl   $0x0,-0x10(%ebp)
084be9d1 +0x061:  jne    084bea10 <+0xa0>
084be9d3 +0x063:  mov    0xc(%ebp),%eax
084be9d6 +0x066:  mov    %eax,0x14(%esp)
084be9da +0x06a:  movl   $"get_dispatcher(%d)",0x10(%esp)
084be9e2 +0x072:  movl   $0x602,0xc(%esp)
084be9ea +0x07a:  movl   $&_ZZN15InterDispatcher8dispatchEiiPciE19__PRETTY_FUNCTION__,0x8(%esp)
084be9f2 +0x082:  movl   $"InterDispatcher.cpp",0x4(%esp)
084be9fa +0x08a:  movl   $0x1,(%esp)
084bea01 +0x091:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084bea06 +0x096:  mov    $0x0,%eax
084bea0b +0x09b:  jmp    084beb35 <+0x1c5>
084bea10 +0x0a0:  movl   $0x0,-0xc(%ebp)
084bea17 +0x0a7:  mov    -0x10(%ebp),%eax
084bea1a +0x0aa:  mov    (%eax),%eax
084bea1c +0x0ac:  mov    (%eax),%edx
084bea1e +0x0ae:  mov    0x18(%ebp),%eax
084bea21 +0x0b1:  mov    %eax,0xc(%esp)
084bea25 +0x0b5:  mov    0x14(%ebp),%eax
084bea28 +0x0b8:  mov    %eax,0x8(%esp)
084bea2c +0x0bc:  mov    -0x14(%ebp),%eax
084bea2f +0x0bf:  mov    %eax,0x4(%esp)
084bea33 +0x0c3:  mov    -0x10(%ebp),%eax
084bea36 +0x0c6:  mov    %eax,(%esp)
084bea39 +0x0c9:  call   *%edx
084bea3b +0x0cb:  mov    %eax,-0xc(%ebp)
084bea3e +0x0ce:  cmpl   $0x0,-0xc(%ebp)
084bea42 +0x0d2:  setne  %al
084bea45 +0x0d5:  test   %al,%al
084bea47 +0x0d7:  je     084beb30 <+0x1c0>
084bea4d +0x0dd:  cmpl   $0x0,-0x14(%ebp)
084bea51 +0x0e1:  je     084beae5 <+0x175>
084bea57 +0x0e7:  mov    -0xc(%ebp),%eax
084bea5a +0x0ea:  add    $0xf4240,%eax
084bea5f +0x0ef:  mov    %eax,0xc(%esp)
084bea63 +0x0f3:  movl   $0x1,0x8(%esp)
084bea6b +0x0fb:  movl   $0x2,0x4(%esp)
084bea73 +0x103:  mov    -0x14(%ebp),%eax
084bea76 +0x106:  mov    %eax,(%esp)
084bea79 +0x109:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084bea7e +0x10e:  mov    -0x14(%ebp),%eax
084bea81 +0x111:  mov    %eax,(%esp)
084bea84 +0x114:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084bea89 +0x119:  movl   $0x0,0x4(%esp)
084bea91 +0x121:  mov    %eax,(%esp)
084bea94 +0x124:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084bea99 +0x129:  mov    %eax,%ebx
084bea9b +0x12b:  movl   $0x0,0xc(%esp)
084beaa3 +0x133:  movl   $0x632,0x8(%esp)
084beaab +0x13b:  movl   $&_ZZN15InterDispatcher8dispatchEiiPciE19__PRETTY_FUNCTION__,0x4(%esp)
084beab3 +0x143:  lea    -0x34(%ebp),%eax
084beab6 +0x146:  mov    %eax,(%esp)
084beab9 +0x149:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084beabe +0x14e:  mov    %ebx,0x10(%esp)
084beac2 +0x152:  mov    -0xc(%ebp),%eax
084beac5 +0x155:  mov    %eax,0xc(%esp)
084beac9 +0x159:  mov    0xc(%ebp),%eax
084beacc +0x15c:  mov    %eax,0x8(%esp)
084bead0 +0x160:  movl   $"discon interdispatcher return false: %d line(%d)(m_id: %s)",0x4(%esp)
084bead8 +0x168:  lea    -0x34(%ebp),%eax
084beadb +0x16b:  mov    %eax,(%esp)
084beade +0x16e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084beae3 +0x173:  jmp    084beb29 <+0x1b9>
084beae5 +0x175:  movl   $0x0,0xc(%esp)
084beaed +0x17d:  movl   $0x636,0x8(%esp)
084beaf5 +0x185:  movl   $&_ZZN15InterDispatcher8dispatchEiiPciE19__PRETTY_FUNCTION__,0x4(%esp)
084beafd +0x18d:  lea    -0x24(%ebp),%eax
084beb00 +0x190:  mov    %eax,(%esp)
084beb03 +0x193:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084beb08 +0x198:  mov    -0xc(%ebp),%eax
084beb0b +0x19b:  mov    %eax,0xc(%esp)
084beb0f +0x19f:  mov    0xc(%ebp),%eax
084beb12 +0x1a2:  mov    %eax,0x8(%esp)
084beb16 +0x1a6:  movl   $"discon interdispatcher return false: %d line(%d)(m_id: 0)",0x4(%esp)
084beb1e +0x1ae:  lea    -0x24(%ebp),%eax
084beb21 +0x1b1:  mov    %eax,(%esp)
084beb24 +0x1b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084beb29 +0x1b9:  mov    $0x1,%eax
084beb2e +0x1be:  jmp    084beb35 <+0x1c5>
084beb30 +0x1c0:  mov    $0x1,%eax
084beb35 +0x1c5:  add    $0x54,%esp
084beb38 +0x1c8:  pop    %ebx
084beb39 +0x1c9:  pop    %ebp
084beb3a +0x1ca:  ret
084beb3b +0x1cb:  nop
```

## 反编译 C

```c
// InterDispatcher::dispatch @ 0x84be970

/* InterDispatcher::dispatch(int, int, char*, int) */

undefined4 __thiscall
InterDispatcher::dispatch(InterDispatcher *this,int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  CUser *local_18;
  undefined4 *local_14;
  int local_10;
  
  local_18 = (CUser *)0x0;
  if (param_2 != -1) {
    iVar1 = G_CGameManager();
    local_18 = (CUser *)CGameManager::getUser(iVar1,param_2);
    if (local_18 == (CUser *)0x0) {
      return 0;
    }
  }
  local_14 = (undefined4 *)get_dispatcher(this,param_1);
  if (local_14 == (undefined4 *)0x0) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp","bool InterDispatcher::dispatch(int, int, char*, int)",0x602,
               "get_dispatcher(%d)",param_1);
    uVar2 = 0;
  }
  else {
    local_10 = 0;
    local_10 = (**(code **)*local_14)(local_14,local_18,param_3,param_4);
    if (local_10 == 0) {
      uVar2 = 1;
    }
    else {
      if (local_18 == (CUser *)0x0) {
        cMyTrace::cMyTrace(local_28,"bool InterDispatcher::dispatch(int, int, char*, int)",0x636,0);
        cMyTrace::operator()
                  (local_28,"discon interdispatcher return false: %d line(%d)(m_id: 0)",param_1,
                   local_10);
      }
      else {
        CUser::DisConnSig(local_18,2,1,local_10 + 1000000);
        uVar3 = CUser::get_acc_id(local_18);
        uVar2 = NumberToString(uVar3,0);
        cMyTrace::cMyTrace(local_38,"bool InterDispatcher::dispatch(int, int, char*, int)",0x632,0);
        cMyTrace::operator()
                  (local_38,"discon interdispatcher return false: %d line(%d)(m_id: %s)",param_1,
                   local_10,uVar2);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
