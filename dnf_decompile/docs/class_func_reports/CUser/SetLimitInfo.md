# SetLimitInfo

`_ZN5CUser12SetLimitInfoEP19SIG_LIMIT_ITEM_INFO`

`CUser::SetLimitInfo(SIG_LIMIT_ITEM_INFO*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086888f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086888f8  _ZN5CUser12SetLimitInfoEP19SIG_LIMIT_ITEM_INFO
#           CUser::SetLimitInfo(SIG_LIMIT_ITEM_INFO*)
# range [0x086888f8, 0x08688ae5]
086888f8 +0x000:  push   %ebp
086888f9 +0x001:  mov    %esp,%ebp
086888fb +0x003:  push   %ebx
086888fc +0x004:  sub    $0x54,%esp
086888ff +0x007:  cmpl   $0x0,0xc(%ebp)
08688903 +0x00b:  je     08688ae0 <+0x1e8>
08688909 +0x011:  mov    0x8(%ebp),%eax
0868890c +0x014:  add    $0x8cf68,%eax
08688911 +0x019:  mov    %eax,(%esp)
08688914 +0x01c:  call   0869ade4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7639>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7639
08688919 +0x021:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868891e +0x026:  mov    %eax,(%esp)
08688921 +0x029:  call   08693f16 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x76b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x76b
08688926 +0x02e:  mov    %eax,-0x14(%ebp)
08688929 +0x031:  mov    -0x14(%ebp),%edx
0868892c +0x034:  lea    -0x1c(%ebp),%eax
0868892f +0x037:  mov    %edx,0x4(%esp)
08688933 +0x03b:  mov    %eax,(%esp)
08688936 +0x03e:  call   0869c4b2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8d07>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8d07
0868893b +0x043:  sub    $0x4,%esp
0868893e +0x046:  mov    -0x14(%ebp),%edx
08688941 +0x049:  lea    -0x20(%ebp),%eax
08688944 +0x04c:  mov    %edx,0x4(%esp)
08688948 +0x050:  mov    %eax,(%esp)
0868894b +0x053:  call   0869c4d6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8d2b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8d2b
08688950 +0x058:  sub    $0x4,%esp
08688953 +0x05b:  jmp    08688ac4 <+0x1cc>
08688958 +0x060:  lea    -0x3d(%ebp),%eax
0868895b +0x063:  mov    %eax,(%esp)
0868895e +0x066:  call   08695ef0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2745>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2745
08688963 +0x06b:  movb   $0x0,-0xd(%ebp)
08688967 +0x06f:  movl   $0x0,-0xc(%ebp)
0868896e +0x076:  movl   $0x0,-0xc(%ebp)
08688975 +0x07d:  jmp    08688a2c <+0x134>
0868897a +0x082:  mov    -0xc(%ebp),%edx
0868897d +0x085:  mov    0xc(%ebp),%eax
08688980 +0x088:  shl    $0x4,%edx
08688983 +0x08b:  add    %edx,%eax
08688985 +0x08d:  add    $0xc,%eax
08688988 +0x090:  mov    (%eax),%ebx
0868898a +0x092:  lea    -0x1c(%ebp),%eax
0868898d +0x095:  mov    %eax,(%esp)
08688990 +0x098:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
08688995 +0x09d:  mov    0x4(%eax),%eax
08688998 +0x0a0:  cmp    %eax,%ebx
0868899a +0x0a2:  sete   %al
0868899d +0x0a5:  test   %al,%al
0868899f +0x0a7:  je     08688a28 <+0x130>
086889a5 +0x0ad:  lea    -0x1c(%ebp),%eax
086889a8 +0x0b0:  mov    %eax,(%esp)
086889ab +0x0b3:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
086889b0 +0x0b8:  movzbl (%eax),%eax
086889b3 +0x0bb:  mov    %al,-0x2d(%ebp)
086889b6 +0x0be:  lea    -0x1c(%ebp),%eax
086889b9 +0x0c1:  mov    %eax,(%esp)
086889bc +0x0c4:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
086889c1 +0x0c9:  mov    0x8(%eax),%eax
086889c4 +0x0cc:  mov    %eax,-0x2c(%ebp)
086889c7 +0x0cf:  lea    -0x1c(%ebp),%eax
086889ca +0x0d2:  mov    %eax,(%esp)
086889cd +0x0d5:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
086889d2 +0x0da:  mov    0x4(%eax),%eax
086889d5 +0x0dd:  mov    %eax,-0x28(%ebp)
086889d8 +0x0e0:  mov    -0xc(%ebp),%edx
086889db +0x0e3:  mov    0xc(%ebp),%eax
086889de +0x0e6:  shl    $0x4,%edx
086889e1 +0x0e9:  add    %edx,%eax
086889e3 +0x0eb:  add    $0x10,%eax
086889e6 +0x0ee:  mov    (%eax),%eax
086889e8 +0x0f0:  mov    %eax,-0x24(%ebp)
086889eb +0x0f3:  mov    -0xc(%ebp),%edx
086889ee +0x0f6:  mov    0xc(%ebp),%eax
086889f1 +0x0f9:  shl    $0x4,%edx
086889f4 +0x0fc:  add    %edx,%eax
086889f6 +0x0fe:  add    $0x8,%eax
086889f9 +0x101:  mov    (%eax),%eax
086889fb +0x103:  mov    %eax,0x4(%esp)
086889ff +0x107:  lea    -0x3d(%ebp),%eax
08688a02 +0x10a:  mov    %eax,(%esp)
08688a05 +0x10d:  call   0822d0e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2790>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2790
08688a0a +0x112:  mov    0x8(%ebp),%eax
08688a0d +0x115:  lea    0x8cf68(%eax),%edx
08688a13 +0x11b:  lea    -0x3d(%ebp),%eax
08688a16 +0x11e:  mov    %eax,0x4(%esp)
08688a1a +0x122:  mov    %edx,(%esp)
08688a1d +0x125:  call   0869c566 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8dbb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8dbb
08688a22 +0x12a:  movb   $0x1,-0xd(%ebp)
08688a26 +0x12e:  jmp    08688a3f <+0x147>
08688a28 +0x130:  addl   $0x1,-0xc(%ebp)
08688a2c +0x134:  mov    0xc(%ebp),%eax
08688a2f +0x137:  mov    (%eax),%eax
08688a31 +0x139:  cmp    -0xc(%ebp),%eax
08688a34 +0x13c:  setg   %al
08688a37 +0x13f:  test   %al,%al
08688a39 +0x141:  jne    0868897a <+0x82>
08688a3f +0x147:  movzbl -0xd(%ebp),%eax
08688a43 +0x14b:  xor    $0x1,%eax
08688a46 +0x14e:  test   %al,%al
08688a48 +0x150:  je     08688aa7 <+0x1af>
08688a4a +0x152:  lea    -0x1c(%ebp),%eax
08688a4d +0x155:  mov    %eax,(%esp)
08688a50 +0x158:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
08688a55 +0x15d:  movzbl (%eax),%eax
08688a58 +0x160:  mov    %al,-0x2d(%ebp)
08688a5b +0x163:  lea    -0x1c(%ebp),%eax
08688a5e +0x166:  mov    %eax,(%esp)
08688a61 +0x169:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
08688a66 +0x16e:  mov    0x8(%eax),%eax
08688a69 +0x171:  mov    %eax,-0x2c(%ebp)
08688a6c +0x174:  lea    -0x1c(%ebp),%eax
08688a6f +0x177:  mov    %eax,(%esp)
08688a72 +0x17a:  call   0869c55c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8db1
08688a77 +0x17f:  mov    0x4(%eax),%eax
08688a7a +0x182:  mov    %eax,-0x28(%ebp)
08688a7d +0x185:  movl   $0x0,-0x24(%ebp)
08688a84 +0x18c:  lea    -0x3d(%ebp),%eax
08688a87 +0x18f:  mov    %eax,(%esp)
08688a8a +0x192:  call   082a4224 <_GLOBAL__I__ZN4CLog5this_E+0x64b>  ; global constructors keyed to CLog::this_+0x64b
08688a8f +0x197:  mov    0x8(%ebp),%eax
08688a92 +0x19a:  lea    0x8cf68(%eax),%edx
08688a98 +0x1a0:  lea    -0x3d(%ebp),%eax
08688a9b +0x1a3:  mov    %eax,0x4(%esp)
08688a9f +0x1a7:  mov    %edx,(%esp)
08688aa2 +0x1aa:  call   0869c566 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8dbb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8dbb
08688aa7 +0x1af:  lea    -0x18(%ebp),%eax
08688aaa +0x1b2:  movl   $0x0,0x8(%esp)
08688ab2 +0x1ba:  lea    -0x1c(%ebp),%edx
08688ab5 +0x1bd:  mov    %edx,0x4(%esp)
08688ab9 +0x1c1:  mov    %eax,(%esp)
08688abc +0x1c4:  call   0869c528 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8d7d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8d7d
08688ac1 +0x1c9:  sub    $0x4,%esp
08688ac4 +0x1cc:  lea    -0x20(%ebp),%eax
08688ac7 +0x1cf:  mov    %eax,0x4(%esp)
08688acb +0x1d3:  lea    -0x1c(%ebp),%eax
08688ace +0x1d6:  mov    %eax,(%esp)
08688ad1 +0x1d9:  call   0869c4fc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8d51>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8d51
08688ad6 +0x1de:  test   %al,%al
08688ad8 +0x1e0:  jne    08688958 <+0x60>
08688ade +0x1e6:  jmp    08688ae1 <+0x1e9>
08688ae0 +0x1e8:  nop
08688ae1 +0x1e9:  mov    -0x4(%ebp),%ebx
08688ae4 +0x1ec:  leave
08688ae5 +0x1ed:  ret
```

## 反编译 C

```c
// CUser::SetLimitInfo @ 0x86888f8

/* CUser::SetLimitInfo(SIG_LIMIT_ITEM_INFO*) */

void __thiscall CUser::SetLimitInfo(CUser *this,SIG_LIMIT_ITEM_INFO *param_1)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  LimitItemUsage local_41 [16];
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  __normal_iterator local_24 [4];
  __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
  local_20 [4];
  __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
  local_1c [4];
  undefined4 local_18;
  char local_11;
  int local_10;
  
  if (param_1 != (SIG_LIMIT_ITEM_INFO *)0x0) {
    std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::clear
              ((vector<LimitItemUsage,std::allocator<LimitItemUsage>> *)(this + 0x8cf68));
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = CDataManager::GetLimitItemUsageInfo(this_00);
    std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>::
    begin();
    std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>::
    end();
    while (bVar1 = __gnu_cxx::operator!=(local_20,local_24), bVar1) {
      LimitItemUsage::LimitItemUsage(local_41);
      local_11 = '\0';
      for (local_10 = 0; local_10 < *(int *)param_1; local_10 = local_10 + 1) {
        iVar4 = *(int *)(param_1 + local_10 * 0x10 + 0xc);
        iVar2 = __gnu_cxx::
                __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                ::operator->(local_20);
        if (iVar4 == *(int *)(iVar2 + 4)) {
          puVar3 = (undefined1 *)
                   __gnu_cxx::
                   __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                   ::operator->(local_20);
          local_31 = *puVar3;
          iVar4 = __gnu_cxx::
                  __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                  ::operator->(local_20);
          local_30 = *(undefined4 *)(iVar4 + 8);
          iVar4 = __gnu_cxx::
                  __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                  ::operator->(local_20);
          local_2c = *(undefined4 *)(iVar4 + 4);
          local_28 = *(undefined4 *)(param_1 + local_10 * 0x10 + 0x10);
          CommonTime::SetCreateTime((CommonTime *)local_41,*(long *)(param_1 + local_10 * 0x10 + 8))
          ;
          std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::push_back
                    ((vector<LimitItemUsage,std::allocator<LimitItemUsage>> *)(this + 0x8cf68),
                     local_41);
          local_11 = '\x01';
          break;
        }
      }
      if (local_11 != '\x01') {
        puVar3 = (undefined1 *)
                 __gnu_cxx::
                 __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                 ::operator->(local_20);
        local_31 = *puVar3;
        iVar4 = __gnu_cxx::
                __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                ::operator->(local_20);
        local_30 = *(undefined4 *)(iVar4 + 8);
        iVar4 = __gnu_cxx::
                __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
                ::operator->(local_20);
        local_2c = *(undefined4 *)(iVar4 + 4);
        local_28 = 0;
        CommonTime::SetCurTime((CommonTime *)local_41);
        std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::push_back
                  ((vector<LimitItemUsage,std::allocator<LimitItemUsage>> *)(this + 0x8cf68),
                   local_41);
      }
      __gnu_cxx::
      __normal_iterator<stLimitItemUsageInfo::LimitInfo*,std::vector<stLimitItemUsageInfo::LimitInfo,std::allocator<stLimitItemUsageInfo::LimitInfo>>>
      ::operator++(local_1c,(int)local_20);
    }
  }
  return;
}
```
