# GetDBHandle

`_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP`

`DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f523e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f523e  _ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP
#           DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
# range [0x083f523e, 0x083f52be]
083f523e +0x00:  push   %ebp
083f523f +0x01:  mov    %esp,%ebp
083f5241 +0x03:  sub    $0x28,%esp
083f5244 +0x06:  mov    0x8(%ebp),%eax
083f5247 +0x09:  mov    (%eax),%eax
083f5249 +0x0b:  mov    %eax,-0x14(%ebp)
083f524c +0x0e:  mov    0x8(%ebp),%eax
083f524f +0x11:  movzbl 0x8(%eax),%eax
083f5253 +0x15:  xor    $0x1,%eax
083f5256 +0x18:  test   %al,%al
083f5258 +0x1a:  je     083f526d <+0x2f>
083f525a +0x1c:  mov    0x8(%ebp),%eax
083f525d +0x1f:  mov    (%eax),%edx
083f525f +0x21:  mov    0xc(%ebp),%eax
083f5262 +0x24:  imul   $0x4208c,%eax,%eax
083f5268 +0x2a:  lea    (%edx,%eax,1),%eax
083f526b +0x2d:  jmp    083f52bd <+0x7f>
083f526d +0x2f:  movl   $0x4,-0x10(%ebp)
083f5274 +0x36:  cmpl   $0x2,0xc(%ebp)
083f5278 +0x3a:  je     083f5280 <+0x42>
083f527a +0x3c:  cmpl   $0x3,0xc(%ebp)
083f527e +0x40:  jne    083f52b1 <+0x73>
083f5280 +0x42:  mov    0x10(%ebp),%eax
083f5283 +0x45:  mov    %eax,0x8(%esp)
083f5287 +0x49:  mov    0xc(%ebp),%eax
083f528a +0x4c:  mov    %eax,0x4(%esp)
083f528e +0x50:  mov    0x8(%ebp),%eax
083f5291 +0x53:  mov    %eax,(%esp)
083f5294 +0x56:  call   083f506c <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandleServerGroup(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083f5299 +0x5b:  mov    %eax,-0xc(%ebp)
083f529c +0x5e:  cmpl   $0x0,-0xc(%ebp)
083f52a0 +0x62:  jne    083f52ac <+0x6e>
083f52a2 +0x64:  mov    -0x14(%ebp),%eax
083f52a5 +0x67:  add    $0x108230,%eax
083f52aa +0x6c:  jmp    083f52bd <+0x7f>
083f52ac +0x6e:  mov    -0xc(%ebp),%eax
083f52af +0x71:  jmp    083f52bd <+0x7f>
083f52b1 +0x73:  mov    0xc(%ebp),%eax
083f52b4 +0x76:  imul   $0x4208c,%eax,%eax
083f52ba +0x7c:  add    -0x14(%ebp),%eax
083f52bd +0x7f:  leave
083f52be +0x80:  ret
```

## 反编译 C

```c
// DBMgr::GetDBHandle @ 0x83f523e

/* DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP) */

int __thiscall DBMgr::GetDBHandle(DBMgr *this,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (this[8] == (DBMgr)0x1) {
    if ((param_2 == 2) || (param_2 == 3)) {
      iVar2 = GetDBHandleServerGroup(this,param_2,param_3);
      if (iVar2 == 0) {
        iVar2 = iVar1 + 0x108230;
      }
    }
    else {
      iVar2 = param_2 * 0x4208c + iVar1;
    }
  }
  else {
    iVar2 = *(int *)this + param_2 * 0x4208c;
  }
  return iVar2;
}
```
