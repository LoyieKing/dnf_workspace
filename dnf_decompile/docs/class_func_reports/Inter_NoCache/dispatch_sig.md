# dispatch_sig

`_ZN13Inter_NoCache12dispatch_sigEP5CUserPci`

`Inter_NoCache::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoCache` | `0x084e3082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3082  _ZN13Inter_NoCache12dispatch_sigEP5CUserPci
#           Inter_NoCache::dispatch_sig(CUser*, char*, int)
# range [0x084e3082, 0x084e3129]
084e3082 +0x00:  push   %ebp
084e3083 +0x01:  mov    %esp,%ebp
084e3085 +0x03:  push   %esi
084e3086 +0x04:  push   %ebx
084e3087 +0x05:  sub    $0x20,%esp
084e308a +0x08:  mov    0x10(%ebp),%eax
084e308d +0x0b:  mov    %eax,-0xc(%ebp)
084e3090 +0x0e:  mov    -0xc(%ebp),%eax
084e3093 +0x11:  mov    0x12(%eax),%eax
084e3096 +0x14:  test   %eax,%eax
084e3098 +0x16:  je     084e30a5 <+0x23>
084e309a +0x18:  mov    -0xc(%ebp),%eax
084e309d +0x1b:  mov    0x12(%eax),%eax
084e30a0 +0x1e:  cmp    $0x1,%eax
084e30a3 +0x21:  jne    084e30d5 <+0x53>
084e30a5 +0x23:  mov    -0xc(%ebp),%eax
084e30a8 +0x26:  mov    0xa(%eax),%eax
084e30ab +0x29:  test   %eax,%eax
084e30ad +0x2b:  jne    084e30be <+0x3c>
084e30af +0x2d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e30b4 +0x32:  mov    %eax,(%esp)
084e30b7 +0x35:  call   086cf684 <_ZN9GameWorld25ResetCacheCharactorMemoryEv>  ; GameWorld::ResetCacheCharactorMemory()
084e30bc +0x3a:  jmp    084e30d5 <+0x53>
084e30be +0x3c:  mov    -0xc(%ebp),%eax
084e30c1 +0x3f:  mov    0xa(%eax),%ebx
084e30c4 +0x42:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e30c9 +0x47:  mov    %ebx,0x4(%esp)
084e30cd +0x4b:  mov    %eax,(%esp)
084e30d0 +0x4e:  call   086cf746 <_ZN9GameWorld25ResetCacheCharactorMemoryEj>  ; GameWorld::ResetCacheCharactorMemory(unsigned int)
084e30d5 +0x53:  mov    -0xc(%ebp),%eax
084e30d8 +0x56:  mov    0x12(%eax),%eax
084e30db +0x59:  test   %eax,%eax
084e30dd +0x5b:  je     084e30ea <+0x68>
084e30df +0x5d:  mov    -0xc(%ebp),%eax
084e30e2 +0x60:  mov    0x12(%eax),%eax
084e30e5 +0x63:  cmp    $0x2,%eax
084e30e8 +0x66:  jne    084e311e <+0x9c>
084e30ea +0x68:  mov    -0xc(%ebp),%eax
084e30ed +0x6b:  movzwl 0x2(%eax),%eax
084e30f1 +0x6f:  movzwl %ax,%esi
084e30f4 +0x72:  mov    -0xc(%ebp),%ebx
084e30f7 +0x75:  mov    -0xc(%ebp),%eax
084e30fa +0x78:  mov    0xe(%eax),%edx
084e30fd +0x7b:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084e3102 +0x80:  mov    %edx,0x4(%esp)
084e3106 +0x84:  mov    %eax,(%esp)
084e3109 +0x87:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e310e +0x8c:  mov    %esi,0x8(%esp)
084e3112 +0x90:  mov    %ebx,0x4(%esp)
084e3116 +0x94:  mov    %eax,(%esp)
084e3119 +0x97:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e311e +0x9c:  mov    $0x0,%eax
084e3123 +0xa1:  add    $0x20,%esp
084e3126 +0xa4:  pop    %ebx
084e3127 +0xa5:  pop    %esi
084e3128 +0xa6:  pop    %ebp
084e3129 +0xa7:  ret
```

## 反编译 C

```c
// Inter_NoCache::dispatch_sig @ 0x84e3082

/* Inter_NoCache::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoCache::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  CMonitorServerProxy *this;
  
  if ((*(int *)(param_3 + 0x12) == 0) || (*(int *)(param_3 + 0x12) == 1)) {
    if (*(int *)(param_3 + 10) == 0) {
      G_GameWorld();
      GameWorld::ResetCacheCharactorMemory();
    }
    else {
      uVar2 = G_GameWorld();
      GameWorld::ResetCacheCharactorMemory(uVar2);
    }
  }
  if ((*(int *)(param_3 + 0x12) == 0) || (*(int *)(param_3 + 0x12) == 2)) {
    uVar1 = *(ushort *)(param_3 + 2);
    this = (CMonitorServerProxy *)
           CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                     (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(param_3 + 0xe));
    CMonitorServerProxy::SendPacket(this,(char *)param_3,(uint)uVar1);
  }
  return 0;
}
```
