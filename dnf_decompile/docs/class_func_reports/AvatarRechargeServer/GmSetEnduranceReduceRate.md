# GmSetEnduranceReduceRate

`_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi`

`AvatarRechargeServer::GmSetEnduranceReduceRate(CUser*, bool, int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08191364` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191364  _ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi
#           AvatarRechargeServer::GmSetEnduranceReduceRate(CUser*, bool, int)
# range [0x08191364, 0x081913f5]
08191364 +0x00:  push   %ebp
08191365 +0x01:  mov    %esp,%ebp
08191367 +0x03:  sub    $0x38,%esp
0819136a +0x06:  mov    0x10(%ebp),%eax
0819136d +0x09:  mov    %al,-0x1c(%ebp)
08191370 +0x0c:  mov    0x8(%ebp),%eax
08191373 +0x0f:  movzbl -0x1c(%ebp),%edx
08191377 +0x13:  mov    %dl,0x58(%eax)
0819137a +0x16:  cmpb   $0x0,-0x1c(%ebp)
0819137e +0x1a:  je     081913d1 <+0x6d>
08191380 +0x1c:  cmpl   $0x0,0x14(%ebp)
08191384 +0x20:  jns    0819138f <+0x2b>
08191386 +0x22:  movl   $0x0,0x14(%ebp)
0819138d +0x29:  jmp    081913ad <+0x49>
0819138f +0x2b:  cmpl   $0x64,0x14(%ebp)
08191393 +0x2f:  jle    0819139e <+0x3a>
08191395 +0x31:  movl   $0x3e8,0x14(%ebp)
0819139c +0x38:  jmp    081913ad <+0x49>
0819139e +0x3a:  mov    0x14(%ebp),%edx
081913a1 +0x3d:  mov    %edx,%eax
081913a3 +0x3f:  shl    $0x2,%eax
081913a6 +0x42:  add    %edx,%eax
081913a8 +0x44:  add    %eax,%eax
081913aa +0x46:  mov    %eax,0x14(%ebp)
081913ad +0x49:  mov    0x8(%ebp),%eax
081913b0 +0x4c:  mov    0x14(%ebp),%edx
081913b3 +0x4f:  mov    %edx,0x54(%eax)
081913b6 +0x52:  movl   $"succ avatar Endurance reduce rate mode on! change rate",-0x10(%ebp)
081913bd +0x59:  mov    -0x10(%ebp),%eax
081913c0 +0x5c:  mov    %eax,0x4(%esp)
081913c4 +0x60:  mov    0xc(%ebp),%eax
081913c7 +0x63:  mov    %eax,(%esp)
081913ca +0x66:  call   08197d00 <_ZN4ARAD19notifySystemMessageEP5CUserPc>  ; ARAD::notifySystemMessage(CUser*, char*)
081913cf +0x6b:  jmp    081913f4 <+0x90>
081913d1 +0x6d:  mov    0x8(%ebp),%eax
081913d4 +0x70:  movl   $0x0,0x54(%eax)
081913db +0x77:  movl   $"avatar Endurance reduce rate mode off",-0xc(%ebp)
081913e2 +0x7e:  mov    -0xc(%ebp),%eax
081913e5 +0x81:  mov    %eax,0x4(%esp)
081913e9 +0x85:  mov    0xc(%ebp),%eax
081913ec +0x88:  mov    %eax,(%esp)
081913ef +0x8b:  call   08197d00 <_ZN4ARAD19notifySystemMessageEP5CUserPc>  ; ARAD::notifySystemMessage(CUser*, char*)
081913f4 +0x90:  leave
081913f5 +0x91:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::GmSetEnduranceReduceRate @ 0x8191364

/* AvatarRechargeServer::GmSetEnduranceReduceRate(CUser*, bool, int) */

void __thiscall
AvatarRechargeServer::GmSetEnduranceReduceRate
          (AvatarRechargeServer *this,CUser *param_1,bool param_2,int param_3)

{
  this[0x58] = (AvatarRechargeServer)param_2;
  if (param_2) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    else if (param_3 < 0x65) {
      param_3 = param_3 * 10;
    }
    else {
      param_3 = 1000;
    }
    *(int *)(this + 0x54) = param_3;
    ARAD::notifySystemMessage(param_1,"succ avatar Endurance reduce rate mode on! change rate");
  }
  else {
    *(undefined4 *)(this + 0x54) = 0;
    ARAD::notifySystemMessage(param_1,"avatar Endurance reduce rate mode off");
  }
  return;
}
```
