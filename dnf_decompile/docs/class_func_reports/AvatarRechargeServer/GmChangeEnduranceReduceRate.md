# GmChangeEnduranceReduceRate

`_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi`

`AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser*, bool, int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08191318` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191318  _ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi
#           AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser*, bool, int)
# range [0x08191318, 0x08191363]
08191318 +0x00:  push   %ebp
08191319 +0x01:  mov    %esp,%ebp
0819131b +0x03:  push   %ebx
0819131c +0x04:  sub    $0x24,%esp
0819131f +0x07:  mov    0xc(%ebp),%eax
08191322 +0x0a:  mov    %al,-0xc(%ebp)
08191325 +0x0d:  mov    0x8(%ebp),%eax
08191328 +0x10:  mov    %eax,(%esp)
0819132b +0x13:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08191330 +0x18:  xor    $0x1,%eax
08191333 +0x1b:  test   %al,%al
08191335 +0x1d:  jne    0819135c <+0x44>
08191337 +0x1f:  movzbl -0xc(%ebp),%ebx
0819133b +0x23:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
08191340 +0x28:  mov    0x10(%ebp),%edx
08191343 +0x2b:  mov    %edx,0xc(%esp)
08191347 +0x2f:  mov    %ebx,0x8(%esp)
0819134b +0x33:  mov    0x8(%ebp),%edx
0819134e +0x36:  mov    %edx,0x4(%esp)
08191352 +0x3a:  mov    %eax,(%esp)
08191355 +0x3d:  call   08191364 <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi>  ; AvatarRechargeServer::GmSetEnduranceReduceRate(CUser*, bool, int)
0819135a +0x42:  jmp    0819135d <+0x45>
0819135c +0x44:  nop
0819135d +0x45:  add    $0x24,%esp
08191360 +0x48:  pop    %ebx
08191361 +0x49:  pop    %ebp
08191362 +0x4a:  ret
08191363 +0x4b:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::GmChangeEnduranceReduceRate @ 0x8191318

/* AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser*, bool, int) */

void AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser *param_1,bool param_2,int param_3)

{
  char cVar1;
  AvatarRechargeServer *this;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    this = (AvatarRechargeServer *)ARAD::Singleton<AvatarRechargeServer>::Get();
    GmSetEnduranceReduceRate(this,param_1,param_2,param_3);
  }
  return;
}
```
