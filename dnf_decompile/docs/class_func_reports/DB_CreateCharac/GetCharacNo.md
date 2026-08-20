# GetCharacNo

`_ZN15DB_CreateCharac11GetCharacNoEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::GetCharacNo(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x0840275c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840275c  _ZN15DB_CreateCharac11GetCharacNoEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::GetCharacNo(SIG_CREATE_CHARAC*)
# range [0x0840275c, 0x084027af]
0840275c +0x00:  push   %ebp
0840275d +0x01:  mov    %esp,%ebp
0840275f +0x03:  sub    $0x28,%esp
08402762 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08402767 +0x0b:  movl   $0x0,0x8(%esp)
0840276f +0x13:  movl   $0x2,0x4(%esp)
08402777 +0x1b:  mov    %eax,(%esp)
0840277a +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840277f +0x23:  mov    %eax,-0x10(%ebp)
08402782 +0x26:  mov    -0x10(%ebp),%eax
08402785 +0x29:  mov    %eax,(%esp)
08402788 +0x2c:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
0840278d +0x31:  mov    %eax,-0xc(%ebp)
08402790 +0x34:  cmpl   $0x0,-0xc(%ebp)
08402794 +0x38:  jne    0840279d <+0x41>
08402796 +0x3a:  mov    $0x0,%eax
0840279b +0x3f:  jmp    084027ae <+0x52>
0840279d +0x41:  mov    -0xc(%ebp),%edx
084027a0 +0x44:  mov    0xc(%ebp),%eax
084027a3 +0x47:  mov    %edx,0x5348(%eax)
084027a9 +0x4d:  mov    $0x1,%eax
084027ae +0x52:  leave
084027af +0x53:  ret
```

## 反编译 C

```c
// DB_CreateCharac::GetCharacNo @ 0x840275c

/* DB_CreateCharac::GetCharacNo(SIG_CREATE_CHARAC*) */

bool __thiscall DB_CreateCharac::GetCharacNo(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  int iVar2;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  iVar2 = WongWork::DBCommon::GetIdentity(pMVar1);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x5348) = iVar2;
  }
  return iVar2 != 0;
}
```
