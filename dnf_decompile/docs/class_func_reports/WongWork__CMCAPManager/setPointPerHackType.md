# setPointPerHackType

`_ZN8WongWork12CMCAPManager19setPointPerHackTypeEPi`

`WongWork::CMCAPManager::setPointPerHackType(int*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMCAPManager` | `0x080f8be0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8be0  _ZN8WongWork12CMCAPManager19setPointPerHackTypeEPi
#           WongWork::CMCAPManager::setPointPerHackType(int*)
# range [0x080f8be0, 0x080f8c4d]
080f8be0 +0x00:  push   %ebp
080f8be1 +0x01:  mov    %esp,%ebp
080f8be3 +0x03:  sub    $0x38,%esp
080f8be6 +0x06:  movl   $0x0,0xc(%esp)
080f8bee +0x0e:  movl   $0x1d2,0x8(%esp)
080f8bf6 +0x16:  movl   $&_ZZN8WongWork12CMCAPManager19setPointPerHackTypeEPiE19__PRETTY_FUNCTION__,0x4(%esp)
080f8bfe +0x1e:  lea    -0x1c(%ebp),%eax
080f8c01 +0x21:  mov    %eax,(%esp)
080f8c04 +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080f8c09 +0x29:  movl   $"Load cleanpad point per hack type",0x4(%esp)
080f8c11 +0x31:  lea    -0x1c(%ebp),%eax
080f8c14 +0x34:  mov    %eax,(%esp)
080f8c17 +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080f8c1c +0x3c:  movl   $0x0,-0xc(%ebp)
080f8c23 +0x43:  jmp    080f8c3e <+0x5e>
080f8c25 +0x45:  mov    -0xc(%ebp),%eax
080f8c28 +0x48:  mov    -0xc(%ebp),%edx
080f8c2b +0x4b:  shl    $0x2,%edx
080f8c2e +0x4e:  add    0x8(%ebp),%edx
080f8c31 +0x51:  mov    (%edx),%edx
080f8c33 +0x53:  mov    %edx,&_ZN8WongWork12CMCAPManager17pointPerHackType_E(,%eax,4)
080f8c3a +0x5a:  addl   $0x1,-0xc(%ebp)
080f8c3e +0x5e:  cmpl   $0xf3b,-0xc(%ebp)
080f8c45 +0x65:  setle  %al
080f8c48 +0x68:  test   %al,%al
080f8c4a +0x6a:  jne    080f8c25 <+0x45>
080f8c4c +0x6c:  leave
080f8c4d +0x6d:  ret
```

## 反编译 C

```c
// WongWork::CMCAPManager::setPointPerHackType @ 0x80f8be0

/* WongWork::CMCAPManager::setPointPerHackType(int*) */

void WongWork::CMCAPManager::setPointPerHackType(int *param_1)

{
  cMyTrace local_20 [16];
  int local_10;
  
  cMyTrace::cMyTrace(local_20,"static void WongWork::CMCAPManager::setPointPerHackType(int*)",0x1d2,
                     0);
  cMyTrace::operator()(local_20,"Load cleanpad point per hack type");
  for (local_10 = 0; local_10 < 0xf3c; local_10 = local_10 + 1) {
    *(int *)(pointPerHackType_ + local_10 * 4) = param_1[local_10];
  }
  return;
}
```
