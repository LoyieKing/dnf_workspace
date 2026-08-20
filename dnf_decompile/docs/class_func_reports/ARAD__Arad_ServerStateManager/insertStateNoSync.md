# insertStateNoSync

`_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage`

`ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a991a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a991a  _ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage
#           ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)
# range [0x081a991a, 0x081a9a1b]
081a991a +0x000:  push   %ebp
081a991b +0x001:  mov    %esp,%ebp
081a991d +0x003:  push   %esi
081a991e +0x004:  push   %ebx
081a991f +0x005:  sub    $0x40,%esp
081a9922 +0x008:  lea    -0x24(%ebp),%eax
081a9925 +0x00b:  mov    %eax,(%esp)
081a9928 +0x00e:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
081a992d +0x013:  mov    0xc(%ebp),%eax
081a9930 +0x016:  lea    -0x24(%ebp),%edx
081a9933 +0x019:  mov    %edx,0x8(%esp)
081a9937 +0x01d:  mov    %eax,0x4(%esp)
081a993b +0x021:  mov    0x8(%ebp),%eax
081a993e +0x024:  mov    %eax,(%esp)
081a9941 +0x027:  call   081a9c2a <_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage>  ; ARAD::Arad_ServerStateManager::findState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage&)
081a9946 +0x02c:  test   %al,%al
081a9948 +0x02e:  jne    081a9a13 <+0xf9>
081a994e +0x034:  mov    0x8(%ebp),%eax
081a9951 +0x037:  lea    0x1c(%eax),%edx
081a9954 +0x03a:  lea    0xc(%ebp),%eax
081a9957 +0x03d:  mov    %eax,0x4(%esp)
081a995b +0x041:  mov    %edx,(%esp)
081a995e +0x044:  call   081a9fda <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x2d5>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x2d5
081a9963 +0x049:  mov    0x10(%ebp),%edx
081a9966 +0x04c:  mov    (%edx),%ecx
081a9968 +0x04e:  mov    %ecx,(%eax)
081a996a +0x050:  mov    0x4(%edx),%ecx
081a996d +0x053:  mov    %ecx,0x4(%eax)
081a9970 +0x056:  mov    0x8(%edx),%edx
081a9973 +0x059:  mov    %edx,0x8(%eax)
081a9976 +0x05c:  mov    0xc(%ebp),%eax
081a9979 +0x05f:  movl   $0x1,0x10(%esp)
081a9981 +0x067:  mov    0x10(%ebp),%edx
081a9984 +0x06a:  mov    %edx,0xc(%esp)
081a9988 +0x06e:  mov    %eax,0x8(%esp)
081a998c +0x072:  movl   $0x1,0x4(%esp)
081a9994 +0x07a:  mov    0x8(%ebp),%eax
081a9997 +0x07d:  mov    %eax,(%esp)
081a999a +0x080:  call   081a9afa <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb>  ; ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY, ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool)
081a999f +0x085:  mov    0xc(%ebp),%eax
081a99a2 +0x088:  movl   $0x0,0xc(%esp)
081a99aa +0x090:  mov    0x10(%ebp),%edx
081a99ad +0x093:  mov    %edx,0x8(%esp)
081a99b1 +0x097:  mov    %eax,0x4(%esp)
081a99b5 +0x09b:  mov    0x8(%ebp),%eax
081a99b8 +0x09e:  mov    %eax,(%esp)
081a99bb +0x0a1:  call   081a9a1c <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser>  ; ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, CUser*)
081a99c0 +0x0a6:  mov    0x10(%ebp),%eax
081a99c3 +0x0a9:  mov    0x2(%eax),%esi
081a99c6 +0x0ac:  mov    0xc(%ebp),%eax
081a99c9 +0x0af:  mov    %eax,%ebx
081a99cb +0x0b1:  movl   $0x0,0xc(%esp)
081a99d3 +0x0b9:  movl   $0x88,0x8(%esp)
081a99db +0x0c1:  movl   $&_ZZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageE19__PRETTY_FUNCTION__,0x4(%esp)
081a99e3 +0x0c9:  lea    -0x18(%ebp),%eax
081a99e6 +0x0cc:  mov    %eax,(%esp)
081a99e9 +0x0cf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081a99ee +0x0d4:  mov    %esi,0x10(%esp)
081a99f2 +0x0d8:  mov    %ebx,0xc(%esp)
081a99f6 +0x0dc:  movl   $0x1,0x8(%esp)
081a99fe +0x0e4:  movl   $"[SERVER_STAT] apply server stat. (category:%d, code:%d, end:%u)",0x4(%esp)
081a9a06 +0x0ec:  lea    -0x18(%ebp),%eax
081a9a09 +0x0ef:  mov    %eax,(%esp)
081a9a0c +0x0f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a9a11 +0x0f7:  jmp    081a9a14 <+0xfa>
081a9a13 +0x0f9:  nop
081a9a14 +0x0fa:  add    $0x40,%esp
081a9a17 +0x0fd:  pop    %ebx
081a9a18 +0x0fe:  pop    %esi
081a9a19 +0x0ff:  pop    %ebp
081a9a1a +0x100:  ret
081a9a1b +0x101:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::insertStateNoSync @ 0x81a991a

/* ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage
   const&) */

void __thiscall
ARAD::Arad_ServerStateManager::insertStateNoSync
          (Arad_ServerStateManager *this,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  AradServerStateMessage local_28 [12];
  cMyTrace local_1c [16];
  
  AradServerStateMessage::AradServerStateMessage(local_28);
  cVar3 = findState(this,param_2,local_28);
  if (cVar3 == '\0') {
    puVar4 = (undefined4 *)
             std::
             map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
             ::operator[]((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
                           *)(this + 0x1c),(ENUM_GLOBAL_EFFECT_ARAD *)&param_2);
    *puVar4 = *param_3;
    puVar4[1] = param_3[1];
    puVar4[2] = param_3[2];
    saveServerState(this,1,param_2,param_3,1);
    sendEffectPacket(this,param_2,param_3,0);
    uVar2 = param_2;
    uVar1 = *(undefined4 *)((int)param_3 + 2);
    cMyTrace::cMyTrace(local_1c,
                       "void ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, const AradServerStateMessage&)"
                       ,0x88,0);
    cMyTrace::operator()
              (local_1c,"[SERVER_STAT] apply server stat. (category:%d, code:%d, end:%u)",1,uVar2,
               uVar1);
  }
  return;
}
```
