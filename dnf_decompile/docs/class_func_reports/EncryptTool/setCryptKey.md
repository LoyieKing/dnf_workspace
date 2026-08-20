# setCryptKey

`_ZN11EncryptTool11setCryptKeyEi`

`EncryptTool::setCryptKey(int)`

| 类 | 地址 |
|---|---|
| `EncryptTool` | `0x0848d94a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d94a  _ZN11EncryptTool11setCryptKeyEi
#           EncryptTool::setCryptKey(int)
# range [0x0848d94a, 0x0848d9a1]
0848d94a +0x00:  push   %ebp
0848d94b +0x01:  mov    %esp,%ebp
0848d94d +0x03:  sub    $0x28,%esp
0848d950 +0x06:  mov    0xc(%ebp),%eax
0848d953 +0x09:  shl    $0x5,%eax
0848d956 +0x0c:  add    0x8(%ebp),%eax
0848d959 +0x0f:  mov    %eax,%edx
0848d95b +0x11:  mov    0x8(%ebp),%eax
0848d95e +0x14:  mov    0x204(%eax),%eax
0848d964 +0x1a:  movl   $0x0,0x1c(%esp)
0848d96c +0x22:  movl   $0x0,0x18(%esp)
0848d974 +0x2a:  movl   $0x10,0x14(%esp)
0848d97c +0x32:  movl   $0x10,0x10(%esp)
0848d984 +0x3a:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0848d98c +0x42:  movl   $0x20,0x8(%esp)
0848d994 +0x4a:  mov    %edx,0x4(%esp)
0848d998 +0x4e:  mov    %eax,(%esp)
0848d99b +0x51:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0848d9a0 +0x56:  leave
0848d9a1 +0x57:  ret
```

## 反编译 C

```c
// EncryptTool::setCryptKey @ 0x848d94a

/* EncryptTool::setCryptKey(int) */

void __thiscall EncryptTool::setCryptKey(EncryptTool *this,int param_1)

{
  CRijndael::Initialize
            (*(CRijndael **)(this + 0x204),(char *)(this + param_1 * 0x20),0x20,CRijndael::sm_chain0
             ,0x10,0x10,0,0);
  return;
}
```
