# UseLuckPoint

`_ZN10CLuckPoint12UseLuckPointEiiii`

`CLuckPoint::UseLuckPoint(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550b14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550b14  _ZN10CLuckPoint12UseLuckPointEiiii
#           CLuckPoint::UseLuckPoint(int, int, int, int)
# range [0x08550b14, 0x08550be3]
08550b14 +0x00:  push   %ebp
08550b15 +0x01:  mov    %esp,%ebp
08550b17 +0x03:  sub    $0x28,%esp
08550b1a +0x06:  mov    0x8(%ebp),%eax
08550b1d +0x09:  mov    %eax,(%esp)
08550b20 +0x0c:  call   085510fc <_GLOBAL__I__ZN10CLuckPointC2Ev+0x14f>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x14f
08550b25 +0x11:  test   %al,%al
08550b27 +0x13:  je     08550b33 <+0x1f>
08550b29 +0x15:  mov    $0x0,%eax
08550b2e +0x1a:  jmp    08550be1 <+0xcd>
08550b33 +0x1f:  mov    0x8(%ebp),%eax
08550b36 +0x22:  mov    %eax,(%esp)
08550b39 +0x25:  call   08550954 <_ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv>  ; CLuckPoint::_GetMaxLuckPointUserIndex()
08550b3e +0x2a:  mov    %eax,-0x10(%ebp)
08550b41 +0x2d:  cmpl   $0x0,-0x10(%ebp)
08550b45 +0x31:  js     08550b59 <+0x45>
08550b47 +0x33:  mov    0x8(%ebp),%eax
08550b4a +0x36:  mov    %eax,(%esp)
08550b4d +0x39:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08550b52 +0x3e:  mov    -0x10(%ebp),%edx
08550b55 +0x41:  cmp    %edx,%eax
08550b57 +0x43:  ja     08550b60 <+0x4c>
08550b59 +0x45:  mov    $0x1,%eax
08550b5e +0x4a:  jmp    08550b65 <+0x51>
08550b60 +0x4c:  mov    $0x0,%eax
08550b65 +0x51:  test   %al,%al
08550b67 +0x53:  je     08550b70 <+0x5c>
08550b69 +0x55:  mov    $0x0,%eax
08550b6e +0x5a:  jmp    08550be1 <+0xcd>
08550b70 +0x5c:  mov    -0x10(%ebp),%edx
08550b73 +0x5f:  mov    0x8(%ebp),%eax
08550b76 +0x62:  mov    %edx,0x4(%esp)
08550b7a +0x66:  mov    %eax,(%esp)
08550b7d +0x69:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550b82 +0x6e:  mov    (%eax),%eax
08550b84 +0x70:  mov    %eax,-0xc(%ebp)
08550b87 +0x73:  cmpl   $0x0,-0xc(%ebp)
08550b8b +0x77:  jne    08550b94 <+0x80>
08550b8d +0x79:  mov    $0x0,%eax
08550b92 +0x7e:  jmp    08550be1 <+0xcd>
08550b94 +0x80:  mov    0x14(%ebp),%eax
08550b97 +0x83:  mov    %eax,0xc(%esp)
08550b9b +0x87:  mov    0x10(%ebp),%eax
08550b9e +0x8a:  mov    %eax,0x8(%esp)
08550ba2 +0x8e:  mov    0xc(%ebp),%eax
08550ba5 +0x91:  mov    %eax,0x4(%esp)
08550ba9 +0x95:  mov    -0xc(%ebp),%eax
08550bac +0x98:  mov    %eax,(%esp)
08550baf +0x9b:  call   08550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>  ; CLuckPoint::UseLuckPoint(CUser*, int, int, int)
08550bb4 +0xa0:  xor    $0x1,%eax
08550bb7 +0xa3:  test   %al,%al
08550bb9 +0xa5:  je     08550bc2 <+0xae>
08550bbb +0xa7:  mov    $0x0,%eax
08550bc0 +0xac:  jmp    08550be1 <+0xcd>
08550bc2 +0xae:  mov    0x8(%ebp),%eax
08550bc5 +0xb1:  lea    0xc(%eax),%edx
08550bc8 +0xb4:  lea    0x18(%ebp),%eax
08550bcb +0xb7:  mov    %eax,0x4(%esp)
08550bcf +0xbb:  mov    %edx,(%esp)
08550bd2 +0xbe:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
08550bd7 +0xc3:  mov    -0x10(%ebp),%edx
08550bda +0xc6:  mov    %edx,(%eax)
08550bdc +0xc8:  mov    $0x1,%eax
08550be1 +0xcd:  leave
08550be2 +0xce:  ret
08550be3 +0xcf:  nop
```

## 反编译 C

```c
// CLuckPoint::UseLuckPoint @ 0x8550b14

/* CLuckPoint::UseLuckPoint(int, int, int, int) */

undefined4 CLuckPoint::UseLuckPoint(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  cVar2 = std::vector<CUser*,std::allocator<CUser*>>::empty();
  if (cVar2 == '\0') {
    uVar3 = _GetMaxLuckPointUserIndex((CLuckPoint *)param_1);
    if (((int)uVar3 < 0) ||
       (uVar4 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)param_1), uVar4 <= uVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      puVar6 = (undefined4 *)
               std::vector<CUser*,std::allocator<CUser*>>::operator[]
                         ((vector<CUser*,std::allocator<CUser*>> *)param_1,uVar3);
      if ((CUser *)*puVar6 == (CUser *)0x0) {
        uVar5 = 0;
      }
      else {
        cVar2 = UseLuckPoint((CUser *)*puVar6,param_2,param_3,param_4);
        if (cVar2 == '\x01') {
          puVar7 = (uint *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                           ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(param_1 + 0xc),(int *)&stack0x00000014);
          *puVar7 = uVar3;
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    return uVar5;
  }
  return 0;
}
```
