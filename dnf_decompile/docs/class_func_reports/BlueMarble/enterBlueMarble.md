# enterBlueMarble

`_ZN10BlueMarble15enterBlueMarbleEP5CUser`

`BlueMarble::enterBlueMarble(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9210  _ZN10BlueMarble15enterBlueMarbleEP5CUser
#           BlueMarble::enterBlueMarble(CUser*)
# range [0x080d9210, 0x080d92bd]
080d9210 +0x00:  push   %ebp
080d9211 +0x01:  mov    %esp,%ebp
080d9213 +0x03:  sub    $0x28,%esp
080d9216 +0x06:  movl   $0x0,-0xc(%ebp)
080d921d +0x0d:  cmpl   $0x0,0xc(%ebp)
080d9221 +0x11:  jne    080d922d <+0x1d>
080d9223 +0x13:  mov    $0x17,%eax
080d9228 +0x18:  jmp    080d92bb <+0xab>
080d922d +0x1d:  mov    0x8(%ebp),%eax
080d9230 +0x20:  mov    %eax,(%esp)
080d9233 +0x23:  call   080d8cb6 <_ZN10BlueMarble9checkJoinEv>  ; BlueMarble::checkJoin()
080d9238 +0x28:  xor    $0x1,%eax
080d923b +0x2b:  test   %al,%al
080d923d +0x2d:  je     080d9246 <+0x36>
080d923f +0x2f:  mov    $0x17,%eax
080d9244 +0x34:  jmp    080d92bb <+0xab>
080d9246 +0x36:  mov    0xc(%ebp),%eax
080d9249 +0x39:  mov    %eax,0x4(%esp)
080d924d +0x3d:  mov    0x8(%ebp),%eax
080d9250 +0x40:  mov    %eax,(%esp)
080d9253 +0x43:  call   080d8d02 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser>  ; BlueMarble::checkUserConditionEnterBlueMarble(CUser*)
080d9258 +0x48:  mov    %eax,-0xc(%ebp)
080d925b +0x4b:  cmpl   $0x0,-0xc(%ebp)
080d925f +0x4f:  jle    080d9266 <+0x56>
080d9261 +0x51:  mov    -0xc(%ebp),%eax
080d9264 +0x54:  jmp    080d92bb <+0xab>
080d9266 +0x56:  mov    0xc(%ebp),%eax
080d9269 +0x59:  mov    %eax,0x4(%esp)
080d926d +0x5d:  mov    0x8(%ebp),%eax
080d9270 +0x60:  mov    %eax,(%esp)
080d9273 +0x63:  call   080d8f58 <_ZN10BlueMarble4joinEP5CUser>  ; BlueMarble::join(CUser*)
080d9278 +0x68:  mov    %eax,-0xc(%ebp)
080d927b +0x6b:  cmpl   $0x0,-0xc(%ebp)
080d927f +0x6f:  jle    080d9286 <+0x76>
080d9281 +0x71:  mov    -0xc(%ebp),%eax
080d9284 +0x74:  jmp    080d92bb <+0xab>
080d9286 +0x76:  mov    0x8(%ebp),%eax
080d9289 +0x79:  mov    %eax,(%esp)
080d928c +0x7c:  call   080d90da <_ZNK10BlueMarble16getWaitUserCountEv>  ; BlueMarble::getWaitUserCount() const
080d9291 +0x81:  mov    0x8(%ebp),%edx
080d9294 +0x84:  mov    0x38(%edx),%edx
080d9297 +0x87:  mov    0x30(%edx),%edx
080d929a +0x8a:  cmp    %edx,%eax
080d929c +0x8c:  sete   %al
080d929f +0x8f:  test   %al,%al
080d92a1 +0x91:  je     080d92b6 <+0xa6>
080d92a3 +0x93:  movl   $0x1,0x4(%esp)
080d92ab +0x9b:  mov    0x8(%ebp),%eax
080d92ae +0x9e:  mov    %eax,(%esp)
080d92b1 +0xa1:  call   080d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>  ; BlueMarble::changeState(BlueMarbleState::T)
080d92b6 +0xa6:  mov    $0x0,%eax
080d92bb +0xab:  leave
080d92bc +0xac:  ret
080d92bd +0xad:  nop
```

## 反编译 C

```c
// BlueMarble::enterBlueMarble @ 0x80d9210

/* BlueMarble::enterBlueMarble(CUser*) */

int __thiscall BlueMarble::enterBlueMarble(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = 0x17;
  }
  else {
    cVar1 = checkJoin(this);
    if (cVar1 == '\x01') {
      iVar2 = checkUserConditionEnterBlueMarble(this,param_1);
      if ((iVar2 < 1) && (iVar2 = join(this,param_1), iVar2 < 1)) {
        iVar2 = getWaitUserCount(this);
        if (iVar2 == *(int *)(*(int *)(this + 0x38) + 0x30)) {
          changeState(this,1);
        }
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x17;
    }
  }
  return iVar2;
}
```
