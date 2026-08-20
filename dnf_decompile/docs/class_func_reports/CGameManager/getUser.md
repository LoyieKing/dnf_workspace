# getUser

`_ZN12CGameManager7getUserEii`

`CGameManager::getUser(int, int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082947a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082947a4  _ZN12CGameManager7getUserEii
#           CGameManager::getUser(int, int)
# range [0x082947a4, 0x082948a1]
082947a4 +0x00:  push   %ebp
082947a5 +0x01:  mov    %esp,%ebp
082947a7 +0x03:  push   %esi
082947a8 +0x04:  push   %ebx
082947a9 +0x05:  sub    $0x30,%esp
082947ac +0x08:  mov    0xc(%ebp),%eax
082947af +0x0b:  sar    $0x10,%eax
082947b2 +0x0e:  mov    %ax,-0x14(%ebp)
082947b6 +0x12:  mov    0xc(%ebp),%eax
082947b9 +0x15:  mov    %ax,-0x12(%ebp)
082947bd +0x19:  mov    0x8(%ebp),%eax
082947c0 +0x1c:  mov    %eax,0x4(%esp)
082947c4 +0x20:  lea    -0x28(%ebp),%eax
082947c7 +0x23:  mov    %eax,(%esp)
082947ca +0x26:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
082947cf +0x2b:  movswl -0x14(%ebp),%eax
082947d3 +0x2f:  mov    0x8(%ebp),%edx
082947d6 +0x32:  add    $0x4c,%edx
082947d9 +0x35:  mov    %eax,0x4(%esp)
082947dd +0x39:  mov    %edx,(%esp)
082947e0 +0x3c:  call   082b050c <_GLOBAL__I__ZN4CLog5this_E+0xc933>  ; global constructors keyed to CLog::this_+0xc933
082947e5 +0x41:  mov    %eax,-0x10(%ebp)
082947e8 +0x44:  lea    -0x28(%ebp),%eax
082947eb +0x47:  mov    %eax,(%esp)
082947ee +0x4a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082947f3 +0x4f:  cmpl   $0x0,-0x10(%ebp)
082947f7 +0x53:  je     08294816 <+0x72>
082947f9 +0x55:  jmp    0829485b <+0xb7>
082947fb +0x57:  mov    %edx,%ebx
082947fd +0x59:  mov    %eax,%esi
082947ff +0x5b:  lea    -0x28(%ebp),%eax
08294802 +0x5e:  mov    %eax,(%esp)
08294805 +0x61:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0829480a +0x66:  mov    %esi,%eax
0829480c +0x68:  mov    %ebx,%edx
0829480e +0x6a:  mov    %eax,(%esp)
08294811 +0x6d:  call   08ae3750 <_Unwind_Resume>
08294816 +0x72:  movswl -0x14(%ebp),%ebx
0829481a +0x76:  movl   $0x5,0xc(%esp)
08294822 +0x7e:  movl   $0x95c,0x8(%esp)
0829482a +0x86:  movl   $&_ZZN12CGameManager7getUserEiiE19__PRETTY_FUNCTION__,0x4(%esp)
08294832 +0x8e:  lea    -0x24(%ebp),%eax
08294835 +0x91:  mov    %eax,(%esp)
08294838 +0x94:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0829483d +0x99:  mov    %ebx,0x8(%esp)
08294841 +0x9d:  movl   $" No way! getUser , slot_id(%d) is abnormal!",0x4(%esp)
08294849 +0xa5:  lea    -0x24(%ebp),%eax
0829484c +0xa8:  mov    %eax,(%esp)
0829484f +0xab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08294854 +0xb0:  mov    $0x0,%eax
08294859 +0xb5:  jmp    0829489a <+0xf6>
0829485b +0xb7:  mov    -0x10(%ebp),%eax
0829485e +0xba:  mov    %eax,(%esp)
08294861 +0xbd:  call   082a683c <_GLOBAL__I__ZN4CLog5this_E+0x2c63>  ; global constructors keyed to CLog::this_+0x2c63
08294866 +0xc2:  mov    %ax,-0xa(%ebp)
0829486a +0xc6:  cmpw   $0x0,-0xa(%ebp)
0829486f +0xcb:  jne    08294878 <+0xd4>
08294871 +0xcd:  mov    $0x0,%eax
08294876 +0xd2:  jmp    0829489a <+0xf6>
08294878 +0xd4:  movzwl -0xa(%ebp),%eax
0829487c +0xd8:  cmp    -0x12(%ebp),%ax
08294880 +0xdc:  je     08294897 <+0xf3>
08294882 +0xde:  cmpw   $0x0,-0xa(%ebp)
08294887 +0xe3:  je     08294897 <+0xf3>
08294889 +0xe5:  cmpw   $0x0,-0x12(%ebp)
0829488e +0xea:  je     08294897 <+0xf3>
08294890 +0xec:  mov    $0x0,%eax
08294895 +0xf1:  jmp    0829489a <+0xf6>
08294897 +0xf3:  mov    -0x10(%ebp),%eax
0829489a +0xf6:  add    $0x30,%esp
0829489d +0xf9:  pop    %ebx
0829489e +0xfa:  pop    %esi
0829489f +0xfb:  pop    %ebp
082948a0 +0xfc:  ret
082948a1 +0xfd:  nop
```

## 反编译 C

```c
// CGameManager::getUser @ 0x82947a4

/* CGameManager::getUser(int, int) */

CUser * CGameManager::getUser(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  Guard<Mutex> local_2c [4];
  cMyTrace local_28 [16];
  short local_18;
  short local_16;
  CUser *local_14;
  
  local_18 = (short)((uint)param_2 >> 0x10);
  local_16 = (short)param_2;
  Guard<Mutex>::Guard(local_2c,(Mutex *)param_1);
                    /* try { // try from 082947e0 to 082947e4 has its CatchHandler @ 082947fb */
  local_14 = (CUser *)StaticPool<CUser,600>::Get
                                ((StaticPool<CUser,600> *)(param_1 + 0x4c),(int)local_18);
  Guard<Mutex>::~Guard(local_2c);
  if (local_14 == (CUser *)0x0) {
    iVar2 = (int)local_18;
    cMyTrace::cMyTrace(local_28,"CUser* CGameManager::getUser(int, int)",0x95c,5);
    cMyTrace::operator()(local_28," No way! getUser , slot_id(%d) is abnormal!",iVar2);
    local_14 = (CUser *)0x0;
  }
  else {
    sVar1 = CUser::GetIncreID(local_14);
    if (sVar1 == 0) {
      local_14 = (CUser *)0x0;
    }
    else if (((sVar1 != local_16) && (sVar1 != 0)) && (local_16 != 0)) {
      local_14 = (CUser *)0x0;
    }
  }
  return local_14;
}
```
