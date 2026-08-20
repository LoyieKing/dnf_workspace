# MoveToGate

`_ZN13private_store13CPrivateStore10MoveToGateEv`

`private_store::CPrivateStore::MoveToGate()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c751a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c751a  _ZN13private_store13CPrivateStore10MoveToGateEv
#           private_store::CPrivateStore::MoveToGate()
# range [0x085c751a, 0x085c76ef]
085c751a +0x000:  push   %ebp
085c751b +0x001:  mov    %esp,%ebp
085c751d +0x003:  push   %esi
085c751e +0x004:  push   %ebx
085c751f +0x005:  sub    $0x30,%esp
085c7522 +0x008:  mov    0x8(%ebp),%eax
085c7525 +0x00b:  mov    0x2c(%eax),%eax
085c7528 +0x00e:  mov    0x8(%ebp),%edx
085c752b +0x011:  add    $0x14,%edx
085c752e +0x014:  movl   $0x59,0xc(%esp)
085c7536 +0x01c:  movl   $0x1,0x8(%esp)
085c753e +0x024:  mov    %eax,0x4(%esp)
085c7542 +0x028:  mov    %edx,(%esp)
085c7545 +0x02b:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c754a +0x030:  mov    0x8(%ebp),%eax
085c754d +0x033:  mov    0x2c(%eax),%eax
085c7550 +0x036:  test   %eax,%eax
085c7552 +0x038:  jne    085c755e <+0x44>
085c7554 +0x03a:  mov    $0x0,%ebx
085c7559 +0x03f:  jmp    085c76e6 <+0x1cc>
085c755e +0x044:  mov    0x8(%ebp),%eax
085c7561 +0x047:  mov    0x20(%eax),%eax
085c7564 +0x04a:  test   %eax,%eax
085c7566 +0x04c:  jne    085c7588 <+0x6e>
085c7568 +0x04e:  mov    0x8(%ebp),%eax
085c756b +0x051:  add    $0x14,%eax
085c756e +0x054:  movl   $0x3a,0x4(%esp)
085c7576 +0x05c:  mov    %eax,(%esp)
085c7579 +0x05f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c757e +0x064:  mov    $0x0,%ebx
085c7583 +0x069:  jmp    085c76e6 <+0x1cc>
085c7588 +0x06e:  lea    -0x18(%ebp),%eax
085c758b +0x071:  mov    %eax,(%esp)
085c758e +0x074:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c7593 +0x079:  mov    0x8(%ebp),%eax
085c7596 +0x07c:  movzbl 0x24(%eax),%eax
085c759a +0x080:  test   %al,%al
085c759c +0x082:  jne    085c75c5 <+0xab>
085c759e +0x084:  mov    0x8(%ebp),%eax
085c75a1 +0x087:  movzbl 0x25(%eax),%eax
085c75a5 +0x08b:  test   %al,%al
085c75a7 +0x08d:  jne    085c75c5 <+0xab>
085c75a9 +0x08f:  mov    0x8(%ebp),%eax
085c75ac +0x092:  movzwl 0x26(%eax),%eax
085c75b0 +0x096:  test   %ax,%ax
085c75b3 +0x099:  jne    085c75c5 <+0xab>
085c75b5 +0x09b:  mov    0x8(%ebp),%eax
085c75b8 +0x09e:  movzwl 0x28(%eax),%eax
085c75bc +0x0a2:  test   %ax,%ax
085c75bf +0x0a5:  je     085c7699 <+0x17f>
085c75c5 +0x0ab:  mov    0x8(%ebp),%eax
085c75c8 +0x0ae:  mov    %eax,(%esp)
085c75cb +0x0b1:  call   085cb894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5aa
085c75d0 +0x0b6:  movzwl %ax,%eax
085c75d3 +0x0b9:  mov    %eax,0x4(%esp)
085c75d7 +0x0bd:  lea    -0x18(%ebp),%eax
085c75da +0x0c0:  mov    %eax,(%esp)
085c75dd +0x0c3:  call   085cbb2c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x842>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x842
085c75e2 +0x0c8:  mov    0x8(%ebp),%eax
085c75e5 +0x0cb:  movzbl 0x25(%eax),%eax
085c75e9 +0x0cf:  movzbl %al,%edx
085c75ec +0x0d2:  mov    0x8(%ebp),%eax
085c75ef +0x0d5:  movzbl 0x24(%eax),%eax
085c75f3 +0x0d9:  movzbl %al,%eax
085c75f6 +0x0dc:  lea    -0x18(%ebp),%ecx
085c75f9 +0x0df:  mov    %ecx,0x8(%esp)
085c75fd +0x0e3:  mov    %edx,0x4(%esp)
085c7601 +0x0e7:  mov    %eax,(%esp)
085c7604 +0x0ea:  call   085cca73 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1789>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1789
085c7609 +0x0ef:  mov    0x8(%ebp),%eax
085c760c +0x0f2:  lea    0x4c(%eax),%ebx
085c760f +0x0f5:  mov    0x8(%ebp),%eax
085c7612 +0x0f8:  movzbl 0x25(%eax),%eax
085c7616 +0x0fc:  movzbl %al,%edx
085c7619 +0x0ff:  mov    0x8(%ebp),%eax
085c761c +0x102:  movzbl 0x24(%eax),%eax
085c7620 +0x106:  movzbl %al,%eax
085c7623 +0x109:  mov    %edx,0x8(%esp)
085c7627 +0x10d:  mov    %eax,0x4(%esp)
085c762b +0x111:  lea    -0xa(%ebp),%eax
085c762e +0x114:  mov    %eax,(%esp)
085c7631 +0x117:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
085c7636 +0x11c:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
085c763b +0x121:  mov    %ebx,0x8(%esp)
085c763f +0x125:  movzwl -0xa(%ebp),%edx
085c7643 +0x129:  mov    %dx,0x4(%esp)
085c7648 +0x12e:  mov    %eax,(%esp)
085c764b +0x131:  call   086b70d0 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE>  ; village_object::CVillageObjectMgr::unregister_object(village_object::Zone, village_object::IObject*)
085c7650 +0x136:  xor    $0x1,%eax
085c7653 +0x139:  test   %al,%al
085c7655 +0x13b:  je     085c7683 <+0x169>
085c7657 +0x13d:  movl   $"unregister_object error",0x10(%esp)
085c765f +0x145:  movl   $0x658,0xc(%esp)
085c7667 +0x14d:  movl   $&_ZZN13private_store13CPrivateStore10MoveToGateEvE19__PRETTY_FUNCTION__,0x8(%esp)
085c766f +0x155:  movl   $"PrivateStore.cpp",0x4(%esp)
085c7677 +0x15d:  movl   $0x1,(%esp)
085c767e +0x164:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c7683 +0x169:  mov    0x8(%ebp),%eax
085c7686 +0x16c:  mov    0x2c(%eax),%eax
085c7689 +0x16f:  mov    %eax,0x4(%esp)
085c768d +0x173:  movl   $&_ZN13private_store21g_CharacterControllerE,(%esp)
085c7694 +0x17a:  call   085cc9d2 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x16e8>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x16e8
085c7699 +0x17f:  lea    -0x18(%ebp),%eax
085c769c +0x182:  mov    %eax,(%esp)
085c769f +0x185:  call   085cc7dc <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x14f2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x14f2
085c76a4 +0x18a:  mov    0x8(%ebp),%eax
085c76a7 +0x18d:  mov    0x2c(%eax),%eax
085c76aa +0x190:  lea    -0x18(%ebp),%edx
085c76ad +0x193:  mov    %edx,0x4(%esp)
085c76b1 +0x197:  mov    %eax,(%esp)
085c76b4 +0x19a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c76b9 +0x19f:  mov    $0x1,%ebx
085c76be +0x1a4:  lea    -0x18(%ebp),%eax
085c76c1 +0x1a7:  mov    %eax,(%esp)
085c76c4 +0x1aa:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c76c9 +0x1af:  jmp    085c76e6 <+0x1cc>
085c76cb +0x1b1:  mov    %edx,%ebx
085c76cd +0x1b3:  mov    %eax,%esi
085c76cf +0x1b5:  lea    -0x18(%ebp),%eax
085c76d2 +0x1b8:  mov    %eax,(%esp)
085c76d5 +0x1bb:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c76da +0x1c0:  mov    %esi,%eax
085c76dc +0x1c2:  mov    %ebx,%edx
085c76de +0x1c4:  mov    %eax,(%esp)
085c76e1 +0x1c7:  call   08ae3750 <_Unwind_Resume>
085c76e6 +0x1cc:  mov    %ebx,%eax
085c76e8 +0x1ce:  add    $0x30,%esp
085c76eb +0x1d1:  pop    %ebx
085c76ec +0x1d2:  pop    %esi
085c76ed +0x1d3:  pop    %ebp
085c76ee +0x1d4:  ret
085c76ef +0x1d5:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::MoveToGate @ 0x85c751a

/* private_store::CPrivateStore::MoveToGate() */

undefined4 __thiscall private_store::CPrivateStore::MoveToGate(CPrivateStore *this)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  CPacketBufPrivate local_1c [14];
  undefined2 local_e;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x59);
  if (*(int *)(this + 0x2c) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar4 = 0;
  }
  else {
    CPacketBufPrivate::CPacketBufPrivate(local_1c);
    if ((((this[0x24] != (CPrivateStore)0x0) || (this[0x25] != (CPrivateStore)0x0)) ||
        (*(short *)(this + 0x26) != 0)) || (*(short *)(this + 0x28) != 0)) {
      uVar2 = GetSellerIndex(this);
                    /* try { // try from 085c75dd to 085c76b8 has its CatchHandler @ 085c76cb */
      CPacketBufPrivate::MakeNotipacketRemovePrivateStore(local_1c,uVar2);
      CBroadcastPrivate::Send((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_1c)
      ;
      uVar3 = 0;
      village_object::Zone::Zone((Zone *)&local_e,(uchar)this[0x24],(uchar)this[0x25]);
      cVar1 = village_object::CVillageObjectMgr::unregister_object
                        (GlobalData::s_villageObjectMgr,CONCAT22(uVar3,local_e),this + 0x4c);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"PrivateStore.cpp","virtual bool private_store::CPrivateStore::MoveToGate()",
                   0x658,"unregister_object error");
      }
      CCharacterControllerPrivate::MoveCharacterStartPoint
                ((CCharacterControllerPrivate *)&g_CharacterController,*(CUser **)(this + 0x2c));
    }
    CPacketBufPrivate::MakeCmdpacketMoveToGate(local_1c);
    CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_1c);
    uVar4 = 1;
    CPacketBufPrivate::~CPacketBufPrivate(local_1c);
  }
  return uVar4;
}
```
