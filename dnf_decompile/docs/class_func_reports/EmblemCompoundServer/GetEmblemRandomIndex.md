# GetEmblemRandomIndex

`_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit`

`EmblemCompoundServer::GetEmblemRandomIndex(int, unsigned short)`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x081919e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081919e8  _ZN20EmblemCompoundServer20GetEmblemRandomIndexEit
#           EmblemCompoundServer::GetEmblemRandomIndex(int, unsigned short)
# range [0x081919e8, 0x08191ad5]
081919e8 +0x00:  push   %ebp
081919e9 +0x01:  mov    %esp,%ebp
081919eb +0x03:  sub    $0x38,%esp
081919ee +0x06:  mov    0x10(%ebp),%eax
081919f1 +0x09:  mov    %ax,-0x1c(%ebp)
081919f5 +0x0d:  mov    0x8(%ebp),%eax
081919f8 +0x10:  lea    0x1c(%eax),%edx
081919fb +0x13:  lea    0xc(%ebp),%eax
081919fe +0x16:  mov    %eax,0x4(%esp)
08191a02 +0x1a:  mov    %edx,(%esp)
08191a05 +0x1d:  call   0819363c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x2a4>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x2a4
08191a0a +0x22:  mov    (%eax),%eax
08191a0c +0x24:  mov    %eax,-0x18(%ebp)
08191a0f +0x27:  movl   $0x0,-0x14(%ebp)
08191a16 +0x2e:  movl   $0x3e8,(%esp)
08191a1d +0x35:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08191a22 +0x3a:  mov    %eax,-0x10(%ebp)
08191a25 +0x3d:  mov    -0x18(%ebp),%eax
08191a28 +0x40:  movzwl 0x2(%eax),%eax
08191a2c +0x44:  cwtl
08191a2d +0x45:  cmp    -0x10(%ebp),%eax
08191a30 +0x48:  jle    08191a3e <+0x56>
08191a32 +0x4a:  mov    -0x18(%ebp),%eax
08191a35 +0x4d:  movzwl (%eax),%eax
08191a38 +0x50:  cwtl
08191a39 +0x51:  mov    %eax,-0x14(%ebp)
08191a3c +0x54:  jmp    08191a49 <+0x61>
08191a3e +0x56:  mov    -0x18(%ebp),%eax
08191a41 +0x59:  movzwl 0x4(%eax),%eax
08191a45 +0x5d:  cwtl
08191a46 +0x5e:  mov    %eax,-0x14(%ebp)
08191a49 +0x61:  mov    -0x14(%ebp),%edx
08191a4c +0x64:  mov    %edx,%eax
08191a4e +0x66:  add    %eax,%eax
08191a50 +0x68:  add    %edx,%eax
08191a52 +0x6a:  shl    $0x2,%eax
08191a55 +0x6d:  add    $0x30,%eax
08191a58 +0x70:  add    0x8(%ebp),%eax
08191a5b +0x73:  add    $0x4,%eax
08191a5e +0x76:  mov    %eax,-0xc(%ebp)
08191a61 +0x79:  mov    -0xc(%ebp),%eax
08191a64 +0x7c:  mov    %eax,(%esp)
08191a67 +0x7f:  call   08193732 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x39a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x39a
08191a6c +0x84:  test   %al,%al
08191a6e +0x86:  je     08191a77 <+0x8f>
08191a70 +0x88:  mov    $0x0,%eax
08191a75 +0x8d:  jmp    08191ad4 <+0xec>
08191a77 +0x8f:  mov    0x8(%ebp),%eax
08191a7a +0x92:  lea    0x1c(%eax),%edx
08191a7d +0x95:  lea    0xc(%ebp),%eax
08191a80 +0x98:  mov    %eax,0x4(%esp)
08191a84 +0x9c:  mov    %edx,(%esp)
08191a87 +0x9f:  call   0819363c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x2a4>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x2a4
08191a8c +0xa4:  mov    (%eax),%eax
08191a8e +0xa6:  movzbl 0x8(%eax),%eax
08191a92 +0xaa:  xor    $0x1,%eax
08191a95 +0xad:  test   %al,%al
08191a97 +0xaf:  je     08191abf <+0xd7>
08191a99 +0xb1:  mov    -0xc(%ebp),%eax
08191a9c +0xb4:  mov    %eax,(%esp)
08191a9f +0xb7:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
08191aa4 +0xbc:  mov    %eax,(%esp)
08191aa7 +0xbf:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08191aac +0xc4:  mov    %eax,0x4(%esp)
08191ab0 +0xc8:  mov    -0xc(%ebp),%eax
08191ab3 +0xcb:  mov    %eax,(%esp)
08191ab6 +0xce:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
08191abb +0xd3:  mov    (%eax),%eax
08191abd +0xd5:  jmp    08191ad4 <+0xec>
08191abf +0xd7:  movzwl -0x1c(%ebp),%eax
08191ac3 +0xdb:  mov    %eax,0x4(%esp)
08191ac7 +0xdf:  mov    -0xc(%ebp),%eax
08191aca +0xe2:  mov    %eax,(%esp)
08191acd +0xe5:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
08191ad2 +0xea:  mov    (%eax),%eax
08191ad4 +0xec:  leave
08191ad5 +0xed:  ret
```

## 反编译 C

```c
// EmblemCompoundServer::GetEmblemRandomIndex @ 0x81919e8

/* EmblemCompoundServer::GetEmblemRandomIndex(int, unsigned short) */

undefined4 __thiscall
EmblemCompoundServer::GetEmblemRandomIndex(EmblemCompoundServer *this,int param_1,ushort param_2)

{
  short sVar1;
  short *psVar2;
  ushort uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined2 in_stack_0000000e;
  int local_18;
  
  uVar3 = param_2;
  puVar5 = (undefined4 *)
           std::
           map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
           ::operator[]((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                         *)(this + 0x1c),&param_1);
  psVar2 = (short *)*puVar5;
  iVar6 = get_rand_int(1000);
  if (iVar6 < psVar2[1]) {
    sVar1 = *psVar2;
  }
  else {
    sVar1 = psVar2[2];
  }
  local_18 = (int)sVar1;
  this_00 = (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + local_18 * 0xc + 0x34);
  cVar4 = std::vector<unsigned_long,std::allocator<unsigned_long>>::empty();
  if (cVar4 == '\0') {
    piVar8 = (int *)std::
                    map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                    ::operator[]((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                                  *)(this + 0x1c),&param_1);
    if (*(char *)(*piVar8 + 8) == '\x01') {
      puVar5 = (undefined4 *)
               std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                         (this_00,(uint)uVar3);
      uVar7 = *puVar5;
    }
    else {
      iVar6 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size(this_00);
      uVar9 = get_rand_int(iVar6);
      puVar5 = (undefined4 *)
               std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[](this_00,uVar9);
      uVar7 = *puVar5;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
