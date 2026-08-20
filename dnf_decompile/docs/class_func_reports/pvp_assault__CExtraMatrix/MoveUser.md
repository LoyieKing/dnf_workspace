# MoveUser

`_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE`

`pvp_assault::CExtraMatrix::MoveUser(pvp_assault::CForcedMoveCharacter*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CExtraMatrix` | `0x082e5c0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5c0a  _ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE
#           pvp_assault::CExtraMatrix::MoveUser(pvp_assault::CForcedMoveCharacter*)
# range [0x082e5c0a, 0x082e5c9d]
082e5c0a +0x00:  push   %ebp
082e5c0b +0x01:  mov    %esp,%ebp
082e5c0d +0x03:  push   %ebx
082e5c0e +0x04:  sub    $0x14,%esp
082e5c11 +0x07:  mov    0xc(%ebp),%eax
082e5c14 +0x0a:  mov    0x4(%eax),%eax
082e5c17 +0x0d:  test   %eax,%eax
082e5c19 +0x0f:  js     082e5c32 <+0x28>
082e5c1b +0x11:  mov    0xc(%ebp),%eax
082e5c1e +0x14:  mov    0x4(%eax),%eax
082e5c21 +0x17:  mov    %eax,%ebx
082e5c23 +0x19:  mov    0x8(%ebp),%eax
082e5c26 +0x1c:  mov    %eax,(%esp)
082e5c29 +0x1f:  call   082f1814 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1598>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1598
082e5c2e +0x24:  cmp    %eax,%ebx
082e5c30 +0x26:  jb     082e5c39 <+0x2f>
082e5c32 +0x28:  mov    $0x1,%eax
082e5c37 +0x2d:  jmp    082e5c3e <+0x34>
082e5c39 +0x2f:  mov    $0x0,%eax
082e5c3e +0x34:  test   %al,%al
082e5c40 +0x36:  je     082e5c49 <+0x3f>
082e5c42 +0x38:  mov    $0x0,%eax
082e5c47 +0x3d:  jmp    082e5c98 <+0x8e>
082e5c49 +0x3f:  mov    0xc(%ebp),%eax
082e5c4c +0x42:  mov    0x4(%eax),%eax
082e5c4f +0x45:  mov    %eax,%edx
082e5c51 +0x47:  mov    0x8(%ebp),%eax
082e5c54 +0x4a:  mov    %edx,0x4(%esp)
082e5c58 +0x4e:  mov    %eax,(%esp)
082e5c5b +0x51:  call   082f1830 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x15b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x15b4
082e5c60 +0x56:  mov    (%eax),%edx
082e5c62 +0x58:  mov    0xc(%ebp),%eax
082e5c65 +0x5b:  mov    %edx,0x14(%eax)
082e5c68 +0x5e:  mov    0xc(%ebp),%eax
082e5c6b +0x61:  mov    0x4(%eax),%eax
082e5c6e +0x64:  mov    %eax,%edx
082e5c70 +0x66:  mov    0x8(%ebp),%eax
082e5c73 +0x69:  mov    %edx,0x4(%esp)
082e5c77 +0x6d:  mov    %eax,(%esp)
082e5c7a +0x70:  call   082f1830 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x15b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x15b4
082e5c7f +0x75:  mov    0x4(%eax),%edx
082e5c82 +0x78:  mov    0xc(%ebp),%eax
082e5c85 +0x7b:  mov    %edx,0x18(%eax)
082e5c88 +0x7e:  mov    0xc(%ebp),%eax
082e5c8b +0x81:  mov    %eax,(%esp)
082e5c8e +0x84:  call   082e567c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv>  ; pvp_assault::CForcedMoveCharacter::ForcedMove()
082e5c93 +0x89:  mov    $0x1,%eax
082e5c98 +0x8e:  add    $0x14,%esp
082e5c9b +0x91:  pop    %ebx
082e5c9c +0x92:  pop    %ebp
082e5c9d +0x93:  ret
```

## 反编译 C

```c
// pvp_assault::CExtraMatrix::MoveUser @ 0x82e5c0a

/* pvp_assault::CExtraMatrix::MoveUser(pvp_assault::CForcedMoveCharacter*) */

bool __thiscall
pvp_assault::CExtraMatrix::MoveUser(CExtraMatrix *this,CForcedMoveCharacter *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 4) < 0) ||
     (uVar1 = *(uint *)(param_1 + 4),
     uVar3 = std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::size
                       ((vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *)this),
     uVar3 <= uVar1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    puVar4 = (undefined4 *)
             std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::at
                       ((vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *)this,
                        *(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x14) = *puVar4;
    iVar5 = std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::at
                      ((vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *)this,
                       *(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar5 + 4);
    CForcedMoveCharacter::ForcedMove(param_1);
  }
  return !bVar2;
}
```
