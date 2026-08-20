# wrapEncrypt

`_ZN11EncryptTool11wrapEncryptEPciS0_`

`EncryptTool::wrapEncrypt(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `EncryptTool` | `0x0848d9b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d9b0  _ZN11EncryptTool11wrapEncryptEPciS0_
#           EncryptTool::wrapEncrypt(char*, int, char*)
# range [0x0848d9b0, 0x0848da6f]
0848d9b0 +0x00:  push   %ebp
0848d9b1 +0x01:  mov    %esp,%ebp
0848d9b3 +0x03:  sub    $0x28,%esp
0848d9b6 +0x06:  mov    0x8(%ebp),%eax
0848d9b9 +0x09:  mov    0x204(%eax),%eax
0848d9bf +0x0f:  movl   $0x0,0x4(%esp)
0848d9c7 +0x17:  mov    %eax,(%esp)
0848d9ca +0x1a:  call   080b4416 <_ZN7IMethod12GetBlockSizeEPj>  ; IMethod::GetBlockSize(unsigned int*)
0848d9cf +0x1f:  mov    %eax,-0x10(%ebp)
0848d9d2 +0x22:  movl   $0x0,-0xc(%ebp)
0848d9d9 +0x29:  mov    0x10(%ebp),%eax
0848d9dc +0x2c:  mov    %eax,%edx
0848d9de +0x2e:  sar    $0x1f,%edx
0848d9e1 +0x31:  idivl  -0x10(%ebp)
0848d9e4 +0x34:  mov    %edx,%eax
0848d9e6 +0x36:  test   %eax,%eax
0848d9e8 +0x38:  je     0848da01 <+0x51>
0848d9ea +0x3a:  mov    0x10(%ebp),%eax
0848d9ed +0x3d:  mov    %eax,%edx
0848d9ef +0x3f:  sar    $0x1f,%edx
0848d9f2 +0x42:  idivl  -0x10(%ebp)
0848d9f5 +0x45:  add    $0x1,%eax
0848d9f8 +0x48:  imul   -0x10(%ebp),%eax
0848d9fc +0x4c:  mov    %eax,-0xc(%ebp)
0848d9ff +0x4f:  jmp    0848da07 <+0x57>
0848da01 +0x51:  mov    0x10(%ebp),%eax
0848da04 +0x54:  mov    %eax,-0xc(%ebp)
0848da07 +0x57:  mov    0x8(%ebp),%eax
0848da0a +0x5a:  mov    0x204(%eax),%eax
0848da10 +0x60:  movl   $0x0,0xc(%esp)
0848da18 +0x68:  mov    0x10(%ebp),%edx
0848da1b +0x6b:  mov    %edx,0x8(%esp)
0848da1f +0x6f:  mov    0xc(%ebp),%edx
0848da22 +0x72:  mov    %edx,0x4(%esp)
0848da26 +0x76:  mov    %eax,(%esp)
0848da29 +0x79:  call   080b44a6 <_ZN7IMethod3PadEPciPj>  ; IMethod::Pad(char*, int, unsigned int*)
0848da2e +0x7e:  mov    0x8(%ebp),%eax
0848da31 +0x81:  mov    0x204(%eax),%eax
0848da37 +0x87:  mov    (%eax),%eax
0848da39 +0x89:  add    $0xc,%eax
0848da3c +0x8c:  mov    (%eax),%ecx
0848da3e +0x8e:  mov    -0xc(%ebp),%edx
0848da41 +0x91:  mov    0x8(%ebp),%eax
0848da44 +0x94:  mov    0x204(%eax),%eax
0848da4a +0x9a:  mov    %edx,0xc(%esp)
0848da4e +0x9e:  mov    0x14(%ebp),%edx
0848da51 +0xa1:  mov    %edx,0x8(%esp)
0848da55 +0xa5:  mov    0xc(%ebp),%edx
0848da58 +0xa8:  mov    %edx,0x4(%esp)
0848da5c +0xac:  mov    %eax,(%esp)
0848da5f +0xaf:  call   *%ecx
0848da61 +0xb1:  mov    -0xc(%ebp),%eax
0848da64 +0xb4:  add    0x14(%ebp),%eax
0848da67 +0xb7:  movb   $0x0,(%eax)
0848da6a +0xba:  mov    -0xc(%ebp),%eax
0848da6d +0xbd:  leave
0848da6e +0xbe:  ret
0848da6f +0xbf:  nop
```

## 反编译 C

```c
// EncryptTool::wrapEncrypt @ 0x848d9b0

/* EncryptTool::wrapEncrypt(char*, int, char*) */

int __thiscall EncryptTool::wrapEncrypt(EncryptTool *this,char *param_1,int param_2,char *param_3)

{
  int local_10;
  
  local_10 = IMethod::GetBlockSize(*(IMethod **)(this + 0x204),(uint *)0x0);
  if (param_2 % local_10 == 0) {
    local_10 = param_2;
  }
  else {
    local_10 = (param_2 / local_10 + 1) * local_10;
  }
  IMethod::Pad(*(IMethod **)(this + 0x204),param_1,param_2,(uint *)0x0);
  (**(code **)(**(int **)(this + 0x204) + 0xc))
            (*(undefined4 *)(this + 0x204),param_1,param_3,local_10);
  param_3[local_10] = '\0';
  return local_10;
}
```
