# GetUserGainItem

`_ZN10CLuckPoint15GetUserGainItemEi`

`CLuckPoint::GetUserGainItem(int)`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550e50  _ZN10CLuckPoint15GetUserGainItemEi
#           CLuckPoint::GetUserGainItem(int)
# range [0x08550e50, 0x08550eef]
08550e50 +0x00:  push   %ebp
08550e51 +0x01:  mov    %esp,%ebp
08550e53 +0x03:  push   %ebx
08550e54 +0x04:  sub    $0x24,%esp
08550e57 +0x07:  mov    0xc(%ebp),%eax
08550e5a +0x0a:  test   %eax,%eax
08550e5c +0x0c:  js     08550e75 <+0x25>
08550e5e +0x0e:  mov    0xc(%ebp),%eax
08550e61 +0x11:  mov    %eax,%ebx
08550e63 +0x13:  mov    0x8(%ebp),%eax
08550e66 +0x16:  add    $0xc,%eax
08550e69 +0x19:  mov    %eax,(%esp)
08550e6c +0x1c:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
08550e71 +0x21:  cmp    %eax,%ebx
08550e73 +0x23:  jb     08550e7c <+0x2c>
08550e75 +0x25:  mov    $0x1,%eax
08550e7a +0x2a:  jmp    08550e81 <+0x31>
08550e7c +0x2c:  mov    $0x0,%eax
08550e81 +0x31:  test   %al,%al
08550e83 +0x33:  je     08550e8c <+0x3c>
08550e85 +0x35:  mov    $0x0,%eax
08550e8a +0x3a:  jmp    08550ee9 <+0x99>
08550e8c +0x3c:  mov    0x8(%ebp),%eax
08550e8f +0x3f:  lea    0xc(%eax),%edx
08550e92 +0x42:  lea    0xc(%ebp),%eax
08550e95 +0x45:  mov    %eax,0x4(%esp)
08550e99 +0x49:  mov    %edx,(%esp)
08550e9c +0x4c:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
08550ea1 +0x51:  mov    (%eax),%eax
08550ea3 +0x53:  mov    %eax,-0xc(%ebp)
08550ea6 +0x56:  cmpl   $0x0,-0xc(%ebp)
08550eaa +0x5a:  js     08550ebe <+0x6e>
08550eac +0x5c:  mov    -0xc(%ebp),%ebx
08550eaf +0x5f:  mov    0x8(%ebp),%eax
08550eb2 +0x62:  mov    %eax,(%esp)
08550eb5 +0x65:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08550eba +0x6a:  cmp    %eax,%ebx
08550ebc +0x6c:  jb     08550ec5 <+0x75>
08550ebe +0x6e:  mov    $0x1,%eax
08550ec3 +0x73:  jmp    08550eca <+0x7a>
08550ec5 +0x75:  mov    $0x0,%eax
08550eca +0x7a:  test   %al,%al
08550ecc +0x7c:  je     08550ed5 <+0x85>
08550ece +0x7e:  mov    $0x0,%eax
08550ed3 +0x83:  jmp    08550ee9 <+0x99>
08550ed5 +0x85:  mov    -0xc(%ebp),%edx
08550ed8 +0x88:  mov    0x8(%ebp),%eax
08550edb +0x8b:  mov    %edx,0x4(%esp)
08550edf +0x8f:  mov    %eax,(%esp)
08550ee2 +0x92:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550ee7 +0x97:  mov    (%eax),%eax
08550ee9 +0x99:  add    $0x24,%esp
08550eec +0x9c:  pop    %ebx
08550eed +0x9d:  pop    %ebp
08550eee +0x9e:  ret
08550eef +0x9f:  nop
```

## 反编译 C

```c
// CLuckPoint::GetUserGainItem @ 0x8550e50

/* CLuckPoint::GetUserGainItem(int) */

undefined4 __thiscall CLuckPoint::GetUserGainItem(CLuckPoint *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = param_1;
  if ((param_1 < 0) ||
     (uVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                        ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                         (this + 0xc)), uVar3 <= (uint)iVar2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    puVar4 = (uint *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                     operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                 *)(this + 0xc),&param_1);
    uVar3 = *puVar4;
    if (((int)uVar3 < 0) ||
       (uVar5 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)this), uVar5 <= uVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      puVar7 = (undefined4 *)
               std::vector<CUser*,std::allocator<CUser*>>::operator[]
                         ((vector<CUser*,std::allocator<CUser*>> *)this,uVar3);
      uVar6 = *puVar7;
    }
    return uVar6;
  }
  return 0;
}
```
