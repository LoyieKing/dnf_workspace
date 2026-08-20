# Gm_List

`_ZN7Gm_ListC1Ev`

`Gm_List::Gm_List()`

| 类 | 地址 |
|---|---|
| `Gm_List` | `0x08299912` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299912  _ZN7Gm_ListC1Ev
#           Gm_List::Gm_List()
# range [0x08299912, 0x08299947]
08299912 +0x00:  push   %ebp
08299913 +0x01:  mov    %esp,%ebp
08299915 +0x03:  sub    $0x18,%esp
08299918 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829991d +0x0b:  movl   $0x0,0x8(%esp)
08299925 +0x13:  movl   $0x6,0x4(%esp)
0829992d +0x1b:  mov    %eax,(%esp)
08299930 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08299935 +0x23:  mov    0x8(%ebp),%edx
08299938 +0x26:  mov    %eax,(%edx)
0829993a +0x28:  mov    0x8(%ebp),%eax
0829993d +0x2b:  mov    %eax,(%esp)
08299940 +0x2e:  call   0829996c <_ZN7Gm_List16LoadGmListFromDbEv>  ; Gm_List::LoadGmListFromDb()
08299945 +0x33:  leave
08299946 +0x34:  ret
08299947 +0x35:  nop
```

## 反编译 C

```c
// Gm_List::Gm_List @ 0x8299912

/* Gm_List::Gm_List() */

void __thiscall Gm_List::Gm_List(Gm_List *this)

{
  undefined4 uVar1;
  
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  *(undefined4 *)this = uVar1;
  LoadGmListFromDb(this);
  return;
}
```
