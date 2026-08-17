# EventClassify__CFatigueQuantity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## get_db_table_name

```asm
// === 0810f988 EventClassify::CFatigueQuantity::get_db_table_name  [0x0810f988-0x810f995] ===
 810f988:	55                   	push   %ebp
 810f989:	89 e5                	mov    %esp,%ebp
 810f98b:	8b 45 08             	mov    0x8(%ebp),%eax
 810f98e:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f991:	83 c0 08             	add    $0x8,%eax
 810f994:	5d                   	pop    %ebp
 810f995:	c3                   	ret

```

```c
// EventClassify::CFatigueQuantity::get_db_table_name @ 0x810f988

/* EventClassify::CFatigueQuantity::get_db_table_name() */

int __thiscall EventClassify::CFatigueQuantity::get_db_table_name(CFatigueQuantity *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## set_event_data

```asm
// === 0810f95e EventClassify::CFatigueQuantity::set_event_data  [0x0810f95e-0x810f987] ===
 810f95e:	55                   	push   %ebp
 810f95f:	89 e5                	mov    %esp,%ebp
 810f961:	83 ec 18             	sub    $0x18,%esp
 810f964:	8b 45 08             	mov    0x8(%ebp),%eax
 810f967:	8b 00                	mov    (%eax),%eax
 810f969:	83 c0 18             	add    $0x18,%eax
 810f96c:	8b 08                	mov    (%eax),%ecx
 810f96e:	8b 45 08             	mov    0x8(%ebp),%eax
 810f971:	8b 55 0c             	mov    0xc(%ebp),%edx
 810f974:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f978:	89 04 24             	mov    %eax,(%esp)
 810f97b:	ff d1                	call   *%ecx
 810f97d:	8b 55 10             	mov    0x10(%ebp),%edx
 810f980:	8b 45 08             	mov    0x8(%ebp),%eax
 810f983:	89 50 1c             	mov    %edx,0x1c(%eax)
 810f986:	c9                   	leave
 810f987:	c3                   	ret

```

```c
// EventClassify::CFatigueQuantity::set_event_data @ 0x810f95e

/* EventClassify::CFatigueQuantity::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CFatigueQuantity::set_event_data
          (CFatigueQuantity *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

