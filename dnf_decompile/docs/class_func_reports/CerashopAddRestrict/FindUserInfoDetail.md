# FindUserInfoDetail

`_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj`

`CerashopAddRestrict::FindUserInfoDetail(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, unsigned int, CerashopAddRestrict::InfoDaily*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict` | `0x080e0a43` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0a43  _ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj
#           CerashopAddRestrict::FindUserInfoDetail(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, unsigned int, CerashopAddRestrict::InfoDaily*, unsigned int)
# range [0x080e0a43, 0x080e0bed]
080e0a43 +0x000:  push   %ebp
080e0a44 +0x001:  mov    %esp,%ebp
080e0a46 +0x003:  push   %ebx
080e0a47 +0x004:  sub    $0x44,%esp
080e0a4a +0x007:  lea    -0x28(%ebp),%eax
080e0a4d +0x00a:  lea    0x10(%ebp),%edx
080e0a50 +0x00d:  mov    %edx,0x8(%esp)
080e0a54 +0x011:  mov    0x8(%ebp),%edx
080e0a57 +0x014:  mov    %edx,0x4(%esp)
080e0a5b +0x018:  mov    %eax,(%esp)
080e0a5e +0x01b:  call   080e25f6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x39c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x39c
080e0a63 +0x020:  sub    $0x4,%esp
080e0a66 +0x023:  lea    -0x24(%ebp),%eax
080e0a69 +0x026:  mov    0x8(%ebp),%edx
080e0a6c +0x029:  mov    %edx,0x4(%esp)
080e0a70 +0x02d:  mov    %eax,(%esp)
080e0a73 +0x030:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
080e0a78 +0x035:  sub    $0x4,%esp
080e0a7b +0x038:  lea    -0x24(%ebp),%eax
080e0a7e +0x03b:  mov    %eax,0x4(%esp)
080e0a82 +0x03f:  lea    -0x28(%ebp),%eax
080e0a85 +0x042:  mov    %eax,(%esp)
080e0a88 +0x045:  call   080e2648 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3ee>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3ee
080e0a8d +0x04a:  test   %al,%al
080e0a8f +0x04c:  je     080e0ad3 <+0x90>
080e0a91 +0x04e:  movl   $0x0,-0x18(%ebp)
080e0a98 +0x055:  lea    -0x18(%ebp),%eax
080e0a9b +0x058:  mov    %eax,0x8(%esp)
080e0a9f +0x05c:  lea    0x10(%ebp),%eax
080e0aa2 +0x05f:  mov    %eax,0x4(%esp)
080e0aa6 +0x063:  lea    -0x20(%ebp),%eax
080e0aa9 +0x066:  mov    %eax,(%esp)
080e0aac +0x069:  call   080e265c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x402>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x402
080e0ab1 +0x06e:  lea    -0x34(%ebp),%eax
080e0ab4 +0x071:  lea    -0x20(%ebp),%edx
080e0ab7 +0x074:  mov    %edx,0x8(%esp)
080e0abb +0x078:  mov    0x8(%ebp),%edx
080e0abe +0x07b:  mov    %edx,0x4(%esp)
080e0ac2 +0x07f:  mov    %eax,(%esp)
080e0ac5 +0x082:  call   080e268c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x432>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x432
080e0aca +0x087:  sub    $0x4,%esp
080e0acd +0x08a:  mov    -0x34(%ebp),%eax
080e0ad0 +0x08d:  mov    %eax,-0x28(%ebp)
080e0ad3 +0x090:  lea    -0x28(%ebp),%eax
080e0ad6 +0x093:  mov    %eax,(%esp)
080e0ad9 +0x096:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
080e0ade +0x09b:  mov    0x4(%eax),%edx
080e0ae1 +0x09e:  add    0x18(%ebp),%edx
080e0ae4 +0x0a1:  mov    %edx,0x4(%eax)
080e0ae7 +0x0a4:  lea    -0x2c(%ebp),%eax
080e0aea +0x0a7:  lea    0x10(%ebp),%edx
080e0aed +0x0aa:  mov    %edx,0x8(%esp)
080e0af1 +0x0ae:  mov    0xc(%ebp),%edx
080e0af4 +0x0b1:  mov    %edx,0x4(%esp)
080e0af8 +0x0b5:  mov    %eax,(%esp)
080e0afb +0x0b8:  call   080e26c6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x46c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x46c
080e0b00 +0x0bd:  sub    $0x4,%esp
080e0b03 +0x0c0:  lea    -0x14(%ebp),%eax
080e0b06 +0x0c3:  mov    0xc(%ebp),%edx
080e0b09 +0x0c6:  mov    %edx,0x4(%esp)
080e0b0d +0x0ca:  mov    %eax,(%esp)
080e0b10 +0x0cd:  call   080e26f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x498>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x498
080e0b15 +0x0d2:  sub    $0x4,%esp
080e0b18 +0x0d5:  lea    -0x14(%ebp),%eax
080e0b1b +0x0d8:  mov    %eax,0x4(%esp)
080e0b1f +0x0dc:  lea    -0x2c(%ebp),%eax
080e0b22 +0x0df:  mov    %eax,(%esp)
080e0b25 +0x0e2:  call   080e2718 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4be>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4be
080e0b2a +0x0e7:  test   %al,%al
080e0b2c +0x0e9:  je     080e0bbf <+0x17c>
080e0b32 +0x0ef:  lea    -0x2c(%ebp),%eax
080e0b35 +0x0f2:  mov    %eax,(%esp)
080e0b38 +0x0f5:  call   080e272c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4d2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4d2
080e0b3d +0x0fa:  mov    0x4(%eax),%eax
080e0b40 +0x0fd:  mov    %eax,-0x10(%ebp)
080e0b43 +0x100:  movl   $0x0,(%esp)
080e0b4a +0x107:  call   0807d750 <_init+0x48>
080e0b4f +0x10c:  mov    %eax,-0xc(%ebp)
080e0b52 +0x10f:  mov    -0x10(%ebp),%eax
080e0b55 +0x112:  mov    0x8(%eax),%eax
080e0b58 +0x115:  cmp    -0xc(%ebp),%eax
080e0b5b +0x118:  jle    080e0b8a <+0x147>
080e0b5d +0x11a:  mov    -0x10(%ebp),%eax
080e0b60 +0x11d:  mov    0x4(%eax),%ebx
080e0b63 +0x120:  lea    -0x28(%ebp),%eax
080e0b66 +0x123:  mov    %eax,(%esp)
080e0b69 +0x126:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
080e0b6e +0x12b:  mov    0x4(%eax),%eax
080e0b71 +0x12e:  lea    (%ebx,%eax,1),%edx
080e0b74 +0x131:  mov    0x14(%ebp),%eax
080e0b77 +0x134:  mov    0x8(%eax),%eax
080e0b7a +0x137:  cmp    %eax,%edx
080e0b7c +0x139:  setbe  %al
080e0b7f +0x13c:  test   %al,%al
080e0b81 +0x13e:  je     080e0bb8 <+0x175>
080e0b83 +0x140:  mov    $0x1,%eax
080e0b88 +0x145:  jmp    080e0be8 <+0x1a5>
080e0b8a +0x147:  mov    -0x10(%ebp),%eax
080e0b8d +0x14a:  movl   $0x0,0x4(%eax)
080e0b94 +0x151:  lea    -0x28(%ebp),%eax
080e0b97 +0x154:  mov    %eax,(%esp)
080e0b9a +0x157:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
080e0b9f +0x15c:  mov    0x4(%eax),%edx
080e0ba2 +0x15f:  mov    0x14(%ebp),%eax
080e0ba5 +0x162:  mov    0x8(%eax),%eax
080e0ba8 +0x165:  cmp    %eax,%edx
080e0baa +0x167:  setbe  %al
080e0bad +0x16a:  test   %al,%al
080e0baf +0x16c:  je     080e0bb8 <+0x175>
080e0bb1 +0x16e:  mov    $0x1,%eax
080e0bb6 +0x173:  jmp    080e0be8 <+0x1a5>
080e0bb8 +0x175:  mov    $0x0,%eax
080e0bbd +0x17a:  jmp    080e0be8 <+0x1a5>
080e0bbf +0x17c:  lea    -0x28(%ebp),%eax
080e0bc2 +0x17f:  mov    %eax,(%esp)
080e0bc5 +0x182:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
080e0bca +0x187:  mov    0x4(%eax),%edx
080e0bcd +0x18a:  mov    0x14(%ebp),%eax
080e0bd0 +0x18d:  mov    0x8(%eax),%eax
080e0bd3 +0x190:  cmp    %eax,%edx
080e0bd5 +0x192:  seta   %al
080e0bd8 +0x195:  test   %al,%al
080e0bda +0x197:  je     080e0be3 <+0x1a0>
080e0bdc +0x199:  mov    $0x0,%eax
080e0be1 +0x19e:  jmp    080e0be8 <+0x1a5>
080e0be3 +0x1a0:  mov    $0x1,%eax
080e0be8 +0x1a5:  mov    -0x4(%ebp),%ebx
080e0beb +0x1a8:  leave
080e0bec +0x1a9:  ret
080e0bed +0x1aa:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::FindUserInfoDetail @ 0x80e0a43

/* CerashopAddRestrict::FindUserInfoDetail(std::map<unsigned int, unsigned int, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int,
   CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, CerashopAddRestrict::paramDaily*> > >&, unsigned int, CerashopAddRestrict::InfoDaily*,
   unsigned int) */

undefined4
CerashopAddRestrict::FindUserInfoDetail
          (map *param_1,map *param_2,uint param_3,InfoDaily *param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_38 [2];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> local_30 [4];
  uint local_2c;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_28 [4];
  pair<unsigned_int_const,unsigned_int> local_24 [8];
  int local_1c;
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_18 [4];
  int local_14;
  time_t local_10;
  
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::find(&local_2c);
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_28);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c,
                     (_Rb_tree_iterator *)local_28);
  if (cVar1 != '\0') {
    local_1c = 0;
    std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int&,int>(local_24,&param_3,&local_1c)
    ;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::insert((pair *)local_38);
    local_2c = local_38[0];
  }
  iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c);
  *(uint *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_5;
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::find((uint *)local_30);
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
          operator!=(local_30,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c);
    if (*(uint *)(param_4 + 8) < *(uint *)(iVar2 + 4)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
            operator->(local_30);
    local_14 = *(int *)(iVar2 + 4);
    local_10 = time((time_t *)0x0);
    if (local_10 < *(int *)(local_14 + 8)) {
      iVar2 = *(int *)(local_14 + 4);
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c)
      ;
      if ((uint)(iVar2 + *(int *)(iVar3 + 4)) <= *(uint *)(param_4 + 8)) {
        return 1;
      }
    }
    else {
      *(undefined4 *)(local_14 + 4) = 0;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c)
      ;
      if (*(uint *)(iVar2 + 4) <= *(uint *)(param_4 + 8)) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}
```
