# getBoosterIndex_byUpgradeCardIndex

`_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_`

`Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(unsigned long&, unsigned long&)`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4a0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4a0a  _ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_
#           Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(unsigned long&, unsigned long&)
# range [0x080f4a0a, 0x080f4baf]
080f4a0a +0x000:  push   %ebp
080f4a0b +0x001:  mov    %esp,%ebp
080f4a0d +0x003:  sub    $0x48,%esp
080f4a10 +0x006:  mov    0x8(%ebp),%eax
080f4a13 +0x009:  lea    0x4(%eax),%ecx
080f4a16 +0x00c:  lea    -0x24(%ebp),%eax
080f4a19 +0x00f:  mov    0xc(%ebp),%edx
080f4a1c +0x012:  mov    %edx,0x8(%esp)
080f4a20 +0x016:  mov    %ecx,0x4(%esp)
080f4a24 +0x01a:  mov    %eax,(%esp)
080f4a27 +0x01d:  call   080f54a6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x457>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x457
080f4a2c +0x022:  sub    $0x4,%esp
080f4a2f +0x025:  mov    0x8(%ebp),%eax
080f4a32 +0x028:  lea    0x4(%eax),%ecx
080f4a35 +0x02b:  lea    -0x28(%ebp),%eax
080f4a38 +0x02e:  mov    0x10(%ebp),%edx
080f4a3b +0x031:  mov    %edx,0x8(%esp)
080f4a3f +0x035:  mov    %ecx,0x4(%esp)
080f4a43 +0x039:  mov    %eax,(%esp)
080f4a46 +0x03c:  call   080f54a6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x457>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x457
080f4a4b +0x041:  sub    $0x4,%esp
080f4a4e +0x044:  mov    0x8(%ebp),%eax
080f4a51 +0x047:  lea    0x4(%eax),%edx
080f4a54 +0x04a:  lea    -0x20(%ebp),%eax
080f4a57 +0x04d:  mov    %edx,0x4(%esp)
080f4a5b +0x051:  mov    %eax,(%esp)
080f4a5e +0x054:  call   080f54d2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x483>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x483
080f4a63 +0x059:  sub    $0x4,%esp
080f4a66 +0x05c:  lea    -0x24(%ebp),%eax
080f4a69 +0x05f:  mov    %eax,0x4(%esp)
080f4a6d +0x063:  lea    -0x20(%ebp),%eax
080f4a70 +0x066:  mov    %eax,(%esp)
080f4a73 +0x069:  call   080f54f8 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x4a9>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x4a9
080f4a78 +0x06e:  test   %al,%al
080f4a7a +0x070:  je     080f4ab1 <+0xa7>
080f4a7c +0x072:  mov    0x8(%ebp),%eax
080f4a7f +0x075:  lea    0x4(%eax),%edx
080f4a82 +0x078:  lea    -0x1c(%ebp),%eax
080f4a85 +0x07b:  mov    %edx,0x4(%esp)
080f4a89 +0x07f:  mov    %eax,(%esp)
080f4a8c +0x082:  call   080f54d2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x483>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x483
080f4a91 +0x087:  sub    $0x4,%esp
080f4a94 +0x08a:  lea    -0x28(%ebp),%eax
080f4a97 +0x08d:  mov    %eax,0x4(%esp)
080f4a9b +0x091:  lea    -0x1c(%ebp),%eax
080f4a9e +0x094:  mov    %eax,(%esp)
080f4aa1 +0x097:  call   080f54f8 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x4a9>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x4a9
080f4aa6 +0x09c:  test   %al,%al
080f4aa8 +0x09e:  je     080f4ab1 <+0xa7>
080f4aaa +0x0a0:  mov    $0x1,%eax
080f4aaf +0x0a5:  jmp    080f4ab6 <+0xac>
080f4ab1 +0x0a7:  mov    $0x0,%eax
080f4ab6 +0x0ac:  test   %al,%al
080f4ab8 +0x0ae:  je     080f4ba9 <+0x19f>
080f4abe +0x0b4:  lea    -0x24(%ebp),%eax
080f4ac1 +0x0b7:  mov    %eax,(%esp)
080f4ac4 +0x0ba:  call   080f550c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x4bd>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x4bd
080f4ac9 +0x0bf:  movzwl 0x4(%eax),%eax
080f4acd +0x0c3:  mov    %ax,-0x2c(%ebp)
080f4ad1 +0x0c7:  lea    -0x28(%ebp),%eax
080f4ad4 +0x0ca:  mov    %eax,(%esp)
080f4ad7 +0x0cd:  call   080f550c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x4bd>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x4bd
080f4adc +0x0d2:  movzwl 0x4(%eax),%eax
080f4ae0 +0x0d6:  mov    %ax,-0x2a(%ebp)
080f4ae4 +0x0da:  movzwl -0x2c(%ebp),%edx
080f4ae8 +0x0de:  movzwl -0x2a(%ebp),%eax
080f4aec +0x0e2:  cmp    %ax,%dx
080f4aef +0x0e5:  jle    080f4b1b <+0x111>
080f4af1 +0x0e7:  movzwl -0x2c(%ebp),%edx
080f4af5 +0x0eb:  movzwl -0x2a(%ebp),%eax
080f4af9 +0x0ef:  xor    %edx,%eax
080f4afb +0x0f1:  mov    %ax,-0x2c(%ebp)
080f4aff +0x0f5:  movzwl -0x2a(%ebp),%edx
080f4b03 +0x0f9:  movzwl -0x2c(%ebp),%eax
080f4b07 +0x0fd:  xor    %edx,%eax
080f4b09 +0x0ff:  mov    %ax,-0x2a(%ebp)
080f4b0d +0x103:  movzwl -0x2c(%ebp),%edx
080f4b11 +0x107:  movzwl -0x2a(%ebp),%eax
080f4b15 +0x10b:  xor    %edx,%eax
080f4b17 +0x10d:  mov    %ax,-0x2c(%ebp)
080f4b1b +0x111:  lea    -0x10(%ebp),%eax
080f4b1e +0x114:  lea    -0x2c(%ebp),%edx
080f4b21 +0x117:  add    $0x2,%edx
080f4b24 +0x11a:  mov    %edx,0x8(%esp)
080f4b28 +0x11e:  lea    -0x2c(%ebp),%edx
080f4b2b +0x121:  mov    %edx,0x4(%esp)
080f4b2f +0x125:  mov    %eax,(%esp)
080f4b32 +0x128:  call   080f5519 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x4ca>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x4ca
080f4b37 +0x12d:  sub    $0x4,%esp
080f4b3a +0x130:  lea    -0x10(%ebp),%eax
080f4b3d +0x133:  mov    %eax,0x4(%esp)
080f4b41 +0x137:  lea    -0x18(%ebp),%eax
080f4b44 +0x13a:  mov    %eax,(%esp)
080f4b47 +0x13d:  call   080f5558 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x509>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x509
080f4b4c +0x142:  mov    0x8(%ebp),%eax
080f4b4f +0x145:  lea    0x1c(%eax),%ecx
080f4b52 +0x148:  lea    -0x30(%ebp),%eax
080f4b55 +0x14b:  lea    -0x18(%ebp),%edx
080f4b58 +0x14e:  mov    %edx,0x8(%esp)
080f4b5c +0x152:  mov    %ecx,0x4(%esp)
080f4b60 +0x156:  mov    %eax,(%esp)
080f4b63 +0x159:  call   080f5590 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x541>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x541
080f4b68 +0x15e:  sub    $0x4,%esp
080f4b6b +0x161:  mov    0x8(%ebp),%eax
080f4b6e +0x164:  lea    0x1c(%eax),%edx
080f4b71 +0x167:  lea    -0xc(%ebp),%eax
080f4b74 +0x16a:  mov    %edx,0x4(%esp)
080f4b78 +0x16e:  mov    %eax,(%esp)
080f4b7b +0x171:  call   080f55bc <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x56d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x56d
080f4b80 +0x176:  sub    $0x4,%esp
080f4b83 +0x179:  lea    -0x30(%ebp),%eax
080f4b86 +0x17c:  mov    %eax,0x4(%esp)
080f4b8a +0x180:  lea    -0xc(%ebp),%eax
080f4b8d +0x183:  mov    %eax,(%esp)
080f4b90 +0x186:  call   080f55e2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x593>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x593
080f4b95 +0x18b:  test   %al,%al
080f4b97 +0x18d:  je     080f4ba9 <+0x19f>
080f4b99 +0x18f:  lea    -0x30(%ebp),%eax
080f4b9c +0x192:  mov    %eax,(%esp)
080f4b9f +0x195:  call   080f55f6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5a7>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5a7
080f4ba4 +0x19a:  mov    0x8(%eax),%eax
080f4ba7 +0x19d:  jmp    080f4bae <+0x1a4>
080f4ba9 +0x19f:  mov    $0x0,%eax
080f4bae +0x1a4:  leave
080f4baf +0x1a5:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex @ 0x80f4a0a

/* Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(unsigned long&, unsigned long&) */

undefined4 Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(ulong *param_1,ulong *param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  _Rb_tree_iterator local_34 [4];
  short local_30;
  short local_2e;
  _Rb_tree_iterator local_2c [4];
  _Rb_tree_iterator local_28 [4];
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  local_24 [4];
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  local_20 [4];
  pair<int,int> local_1c [8];
  short local_14 [2];
  map<std::pair<int,int>,unsigned_long,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,unsigned_long>>>
  local_10 [12];
  
  std::
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  ::find((ulong *)local_28);
  std::
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  ::find((ulong *)local_2c);
  std::
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  ::end(local_24);
  cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_24,local_28);
  if (cVar3 != '\0') {
    std::
    map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
    ::end(local_20);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_20,local_2c)
    ;
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_080f4ab6;
    }
  }
  bVar2 = false;
LAB_080f4ab6:
  if (bVar2) {
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_28);
    local_30 = *(short *)(iVar4 + 4);
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_2c);
    sVar1 = *(short *)(iVar4 + 4);
    local_2e = sVar1;
    if (sVar1 < local_30) {
      local_2e = local_30;
      local_30 = sVar1;
    }
    std::make_pair<short&,short&>(local_14,&local_30);
    std::pair<int,int>::pair<short,short>(local_1c,(pair *)local_14);
    std::
    map<std::pair<int,int>,unsigned_long,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,unsigned_long>>>
    ::find(local_34);
    std::
    map<std::pair<int,int>,unsigned_long,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,unsigned_long>>>
    ::end(local_10);
    cVar3 = std::_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>> *)
                       local_10,local_34);
    if (cVar3 != '\0') {
      iVar4 = std::_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>> *)
                         local_34);
      return *(undefined4 *)(iVar4 + 8);
    }
  }
  return 0;
}
```
