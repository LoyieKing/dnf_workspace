# changeCharacName

`_ZN13CEventManager16changeCharacNameEP5CUseriPci`

`CEventManager::changeCharacName(CUser*, int, char*, int)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08116276` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08116276  _ZN13CEventManager16changeCharacNameEP5CUseriPci
#           CEventManager::changeCharacName(CUser*, int, char*, int)
# range [0x08116276, 0x0811630d]
08116276 +0x00:  push   %ebp
08116277 +0x01:  mov    %esp,%ebp
08116279 +0x03:  sub    $0x38,%esp
0811627c +0x06:  movl   $0x0,-0xc(%ebp)
08116283 +0x0d:  jmp    081162fa <+0x84>
08116285 +0x0f:  mov    -0xc(%ebp),%edx
08116288 +0x12:  mov    0x8(%ebp),%eax
0811628b +0x15:  mov    (%eax,%edx,4),%eax
0811628e +0x18:  test   %eax,%eax
08116290 +0x1a:  je     081162f6 <+0x80>
08116292 +0x1c:  mov    -0xc(%ebp),%edx
08116295 +0x1f:  mov    0x8(%ebp),%eax
08116298 +0x22:  mov    (%eax,%edx,4),%eax
0811629b +0x25:  mov    (%eax),%eax
0811629d +0x27:  add    $0x34,%eax
081162a0 +0x2a:  mov    (%eax),%ecx
081162a2 +0x2c:  mov    -0xc(%ebp),%edx
081162a5 +0x2f:  mov    0x8(%ebp),%eax
081162a8 +0x32:  mov    (%eax,%edx,4),%eax
081162ab +0x35:  movl   $0x0,0x4(%esp)
081162b3 +0x3d:  mov    %eax,(%esp)
081162b6 +0x40:  call   *%ecx
081162b8 +0x42:  test   %al,%al
081162ba +0x44:  je     081162f6 <+0x80>
081162bc +0x46:  mov    -0xc(%ebp),%edx
081162bf +0x49:  mov    0x8(%ebp),%eax
081162c2 +0x4c:  mov    (%eax,%edx,4),%eax
081162c5 +0x4f:  mov    (%eax),%eax
081162c7 +0x51:  add    $0x20,%eax
081162ca +0x54:  mov    (%eax),%ecx
081162cc +0x56:  mov    -0xc(%ebp),%edx
081162cf +0x59:  mov    0x8(%ebp),%eax
081162d2 +0x5c:  mov    (%eax,%edx,4),%eax
081162d5 +0x5f:  mov    0x18(%ebp),%edx
081162d8 +0x62:  mov    %edx,0x10(%esp)
081162dc +0x66:  mov    0x14(%ebp),%edx
081162df +0x69:  mov    %edx,0xc(%esp)
081162e3 +0x6d:  mov    0x10(%ebp),%edx
081162e6 +0x70:  mov    %edx,0x8(%esp)
081162ea +0x74:  mov    0xc(%ebp),%edx
081162ed +0x77:  mov    %edx,0x4(%esp)
081162f1 +0x7b:  mov    %eax,(%esp)
081162f4 +0x7e:  call   *%ecx
081162f6 +0x80:  addl   $0x1,-0xc(%ebp)
081162fa +0x84:  cmpl   $0xa5,-0xc(%ebp)
08116301 +0x8b:  setle  %al
08116304 +0x8e:  test   %al,%al
08116306 +0x90:  jne    08116285 <+0xf>
0811630c +0x96:  leave
0811630d +0x97:  ret
```

## 反编译 C

```c
// CEventManager::changeCharacName @ 0x8116276

/* CEventManager::changeCharacName(CUser*, int, char*, int) */

void __thiscall
CEventManager::changeCharacName
          (CEventManager *this,CUser *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      cVar1 = (**(code **)(**(int **)(this + local_10 * 4) + 0x34))
                        (*(undefined4 *)(this + local_10 * 4),0);
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(this + local_10 * 4) + 0x20))
                  (*(undefined4 *)(this + local_10 * 4),param_1,param_2,param_3,param_4);
      }
    }
  }
  return;
}
```
