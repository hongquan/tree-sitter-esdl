#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 719
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 189
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_module = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_type = 5,
  anon_sym_scalar = 6,
  anon_sym_property = 7,
  anon_sym_link = 8,
  anon_sym_COLON = 9,
  anon_sym_COLON_EQ = 10,
  anon_sym_annotation = 11,
  anon_sym_constraint = 12,
  anon_sym_index = 13,
  anon_sym_rewrite = 14,
  anon_sym_insert = 15,
  anon_sym_update = 16,
  anon_sym_COMMA = 17,
  anon_sym_using = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_on = 21,
  anon_sym_target = 22,
  anon_sym_delete = 23,
  anon_sym_restrict = 24,
  anon_sym_allow = 25,
  anon_sym_deferred = 26,
  anon_sym_set = 27,
  anon_sym_empty = 28,
  anon_sym_access = 29,
  anon_sym_policy = 30,
  anon_sym_deny = 31,
  anon_sym_all = 32,
  anon_sym_select = 33,
  anon_sym_read = 34,
  anon_sym_write = 35,
  anon_sym_trigger = 36,
  anon_sym_after = 37,
  anon_sym_before = 38,
  anon_sym_for = 39,
  anon_sym_each = 40,
  anon_sym_do = 41,
  anon_sym_alias = 42,
  anon_sym_function = 43,
  anon_sym_DASH_GT = 44,
  anon_sym_extension = 45,
  anon_sym_extending = 46,
  anon_sym_except = 47,
  anon_sym_abstract = 48,
  anon_sym_overloaded = 49,
  anon_sym_delegated = 50,
  anon_sym_required = 51,
  anon_sym_optional = 52,
  anon_sym_single = 53,
  anon_sym_multi = 54,
  anon_sym_inheritable = 55,
  anon_sym_global = 56,
  anon_sym_setof = 57,
  anon_sym_DOT = 58,
  anon_sym_is = 59,
  anon_sym_LBRACK = 60,
  anon_sym_RBRACK = 61,
  anon_sym_AMP_AMP = 62,
  anon_sym_PIPE_PIPE = 63,
  anon_sym_GT_GT = 64,
  anon_sym_LT_LT = 65,
  anon_sym_AMP = 66,
  anon_sym_CARET = 67,
  anon_sym_PIPE = 68,
  anon_sym_PLUS = 69,
  anon_sym_DASH = 70,
  anon_sym_STAR = 71,
  anon_sym_SLASH = 72,
  anon_sym_PERCENT = 73,
  anon_sym_LT = 74,
  anon_sym_LT_EQ = 75,
  anon_sym_EQ = 76,
  anon_sym_BANG_EQ = 77,
  anon_sym_GT_EQ = 78,
  anon_sym_GT = 79,
  anon_sym_SQUOTE = 80,
  anon_sym_DQUOTE = 81,
  sym_raw_string = 82,
  sym_unescaped_single_string_fragment = 83,
  sym_escape_sequence = 84,
  anon_sym_str = 85,
  anon_sym_bool = 86,
  anon_sym_int16 = 87,
  anon_sym_int32 = 88,
  anon_sym_int64 = 89,
  anon_sym_float32 = 90,
  anon_sym_float64 = 91,
  anon_sym_bigint = 92,
  anon_sym_decimal = 93,
  anon_sym_json = 94,
  anon_sym_uuid = 95,
  anon_sym_bytes = 96,
  anon_sym_datetime = 97,
  anon_sym_duration = 98,
  anon_sym_date_duration = 99,
  anon_sym_relative_duration = 100,
  anon_sym_cal_COLON_COLONlocal_datetime = 101,
  anon_sym_cal_COLON_COLONlocal_date = 102,
  anon_sym_cal_COLON_COLONlocal_time = 103,
  anon_sym_cal_COLON_COLONrelative_duration = 104,
  anon_sym_local_datetime = 105,
  anon_sym_local_date = 106,
  anon_sym_local_time = 107,
  anon_sym_sequence = 108,
  anon_sym_anytype = 109,
  anon_sym_anyscalar = 110,
  anon_sym_anyreal = 111,
  anon_sym_anyfloat = 112,
  anon_sym_anyint = 113,
  anon_sym_anynumeric = 114,
  anon_sym_anyenum = 115,
  anon_sym_anydiscrete = 116,
  anon_sym_anycontiguous = 117,
  anon_sym_anypoint = 118,
  anon_sym_array = 119,
  anon_sym_tuple = 120,
  anon_sym_enum = 121,
  anon_sym_COLON_COLON = 122,
  sym_identifier = 123,
  sym_true = 124,
  sym_false = 125,
  sym_null = 126,
  sym_number = 127,
  sym_comment = 128,
  sym__whitespace = 129,
  sym__edgeql_chars = 130,
  sym_source_file = 131,
  sym_module = 132,
  sym_schema_declarations = 133,
  sym_object_type = 134,
  sym_declarations = 135,
  sym_scalar_type_def = 136,
  sym_property = 137,
  sym_annotation = 138,
  sym_constraint = 139,
  sym_index = 140,
  sym_rewrite = 141,
  sym_on_target_delete = 142,
  sym_access_policy = 143,
  sym_access_policy_action = 144,
  sym_trigger = 145,
  sym_alias = 146,
  sym_function = 147,
  sym_extension = 148,
  sym_extending = 149,
  sym_using = 150,
  sym_on = 151,
  sym_except = 152,
  sym_computed = 153,
  sym_modifier = 154,
  sym_global_def = 155,
  sym_abstract_link = 156,
  sym_argspec = 157,
  sym_returnspec = 158,
  sym_expression = 159,
  sym_accessor = 160,
  sym_fncall = 161,
  sym_binary_expression = 162,
  sym_string = 163,
  sym__scalar_type = 164,
  sym_array = 165,
  sym_tuple = 166,
  sym__tuple = 167,
  sym__named_tuple = 168,
  sym_enum = 169,
  sym_type = 170,
  aux_sym_source_file_repeat1 = 171,
  aux_sym_schema_declarations_repeat1 = 172,
  aux_sym_declarations_repeat1 = 173,
  aux_sym_scalar_type_def_repeat1 = 174,
  aux_sym_annotation_repeat1 = 175,
  aux_sym_constraint_repeat1 = 176,
  aux_sym_rewrite_repeat1 = 177,
  aux_sym_access_policy_repeat1 = 178,
  aux_sym_function_repeat1 = 179,
  aux_sym_extending_repeat1 = 180,
  aux_sym_argspec_repeat1 = 181,
  aux_sym_expression_repeat1 = 182,
  aux_sym_fncall_repeat1 = 183,
  aux_sym_string_repeat1 = 184,
  aux_sym__tuple_repeat1 = 185,
  aux_sym__named_tuple_repeat1 = 186,
  aux_sym_enum_repeat1 = 187,
  aux_sym_type_repeat1 = 188,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_scalar] = "scalar",
  [anon_sym_property] = "property",
  [anon_sym_link] = "link",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_annotation] = "annotation",
  [anon_sym_constraint] = "constraint",
  [anon_sym_index] = "index",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_insert] = "insert",
  [anon_sym_update] = "update",
  [anon_sym_COMMA] = ",",
  [anon_sym_using] = "using",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_on] = "on",
  [anon_sym_target] = "target",
  [anon_sym_delete] = "delete",
  [anon_sym_restrict] = "restrict",
  [anon_sym_allow] = "allow",
  [anon_sym_deferred] = "deferred",
  [anon_sym_set] = "set",
  [anon_sym_empty] = "empty",
  [anon_sym_access] = "access",
  [anon_sym_policy] = "policy",
  [anon_sym_deny] = "deny",
  [anon_sym_all] = "all",
  [anon_sym_select] = "select",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_trigger] = "trigger",
  [anon_sym_after] = "after",
  [anon_sym_before] = "before",
  [anon_sym_for] = "for",
  [anon_sym_each] = "each",
  [anon_sym_do] = "do",
  [anon_sym_alias] = "alias",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_extension] = "extension",
  [anon_sym_extending] = "extending",
  [anon_sym_except] = "except",
  [anon_sym_abstract] = "abstract",
  [anon_sym_overloaded] = "overloaded",
  [anon_sym_delegated] = "delegated",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_single] = "single",
  [anon_sym_multi] = "multi",
  [anon_sym_inheritable] = "inheritable",
  [anon_sym_global] = "global",
  [anon_sym_setof] = "set of",
  [anon_sym_DOT] = ".",
  [anon_sym_is] = "is",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_raw_string] = "raw_string",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_str] = "str",
  [anon_sym_bool] = "bool",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_bigint] = "bigint",
  [anon_sym_decimal] = "decimal",
  [anon_sym_json] = "json",
  [anon_sym_uuid] = "uuid",
  [anon_sym_bytes] = "bytes",
  [anon_sym_datetime] = "datetime",
  [anon_sym_duration] = "duration",
  [anon_sym_date_duration] = "date_duration",
  [anon_sym_relative_duration] = "relative_duration",
  [anon_sym_cal_COLON_COLONlocal_datetime] = "cal::local_datetime",
  [anon_sym_cal_COLON_COLONlocal_date] = "cal::local_date",
  [anon_sym_cal_COLON_COLONlocal_time] = "cal::local_time",
  [anon_sym_cal_COLON_COLONrelative_duration] = "cal::relative_duration",
  [anon_sym_local_datetime] = "local_datetime",
  [anon_sym_local_date] = "local_date",
  [anon_sym_local_time] = "local_time",
  [anon_sym_sequence] = "sequence",
  [anon_sym_anytype] = "anytype",
  [anon_sym_anyscalar] = "anyscalar",
  [anon_sym_anyreal] = "anyreal",
  [anon_sym_anyfloat] = "anyfloat",
  [anon_sym_anyint] = "anyint",
  [anon_sym_anynumeric] = "anynumeric",
  [anon_sym_anyenum] = "anyenum",
  [anon_sym_anydiscrete] = "anydiscrete",
  [anon_sym_anycontiguous] = "anycontiguous",
  [anon_sym_anypoint] = "anypoint",
  [anon_sym_array] = "array",
  [anon_sym_tuple] = "tuple",
  [anon_sym_enum] = "enum",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym__edgeql_chars] = "edgeql_fragment",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_schema_declarations] = "schema_declarations",
  [sym_object_type] = "object_type",
  [sym_declarations] = "declarations",
  [sym_scalar_type_def] = "scalar_type_def",
  [sym_property] = "property",
  [sym_annotation] = "annotation",
  [sym_constraint] = "constraint",
  [sym_index] = "index",
  [sym_rewrite] = "rewrite",
  [sym_on_target_delete] = "on_target_delete",
  [sym_access_policy] = "access_policy",
  [sym_access_policy_action] = "access_policy_action",
  [sym_trigger] = "trigger",
  [sym_alias] = "alias",
  [sym_function] = "function",
  [sym_extension] = "extension",
  [sym_extending] = "extending",
  [sym_using] = "using",
  [sym_on] = "on",
  [sym_except] = "except",
  [sym_computed] = "computed",
  [sym_modifier] = "modifier",
  [sym_global_def] = "global_def",
  [sym_abstract_link] = "abstract_link",
  [sym_argspec] = "argspec",
  [sym_returnspec] = "returnspec",
  [sym_expression] = "expression",
  [sym_accessor] = "accessor",
  [sym_fncall] = "fncall",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym__scalar_type] = "_scalar_type",
  [sym_array] = "array",
  [sym_tuple] = "tuple",
  [sym__tuple] = "_tuple",
  [sym__named_tuple] = "_named_tuple",
  [sym_enum] = "enum",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_scalar_type_def_repeat1] = "scalar_type_def_repeat1",
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym_rewrite_repeat1] = "rewrite_repeat1",
  [aux_sym_access_policy_repeat1] = "access_policy_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_extending_repeat1] = "extending_repeat1",
  [aux_sym_argspec_repeat1] = "argspec_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_fncall_repeat1] = "fncall_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__tuple_repeat1] = "_tuple_repeat1",
  [aux_sym__named_tuple_repeat1] = "_named_tuple_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_scalar] = anon_sym_scalar,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_deferred] = anon_sym_deferred,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_access] = anon_sym_access,
  [anon_sym_policy] = anon_sym_policy,
  [anon_sym_deny] = anon_sym_deny,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_trigger] = anon_sym_trigger,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_overloaded] = anon_sym_overloaded,
  [anon_sym_delegated] = anon_sym_delegated,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_inheritable] = anon_sym_inheritable,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_setof] = anon_sym_setof,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_raw_string] = sym_raw_string,
  [sym_unescaped_single_string_fragment] = sym_unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_bigint] = anon_sym_bigint,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_date_duration] = anon_sym_date_duration,
  [anon_sym_relative_duration] = anon_sym_relative_duration,
  [anon_sym_cal_COLON_COLONlocal_datetime] = anon_sym_cal_COLON_COLONlocal_datetime,
  [anon_sym_cal_COLON_COLONlocal_date] = anon_sym_cal_COLON_COLONlocal_date,
  [anon_sym_cal_COLON_COLONlocal_time] = anon_sym_cal_COLON_COLONlocal_time,
  [anon_sym_cal_COLON_COLONrelative_duration] = anon_sym_cal_COLON_COLONrelative_duration,
  [anon_sym_local_datetime] = anon_sym_local_datetime,
  [anon_sym_local_date] = anon_sym_local_date,
  [anon_sym_local_time] = anon_sym_local_time,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_anytype] = anon_sym_anytype,
  [anon_sym_anyscalar] = anon_sym_anyscalar,
  [anon_sym_anyreal] = anon_sym_anyreal,
  [anon_sym_anyfloat] = anon_sym_anyfloat,
  [anon_sym_anyint] = anon_sym_anyint,
  [anon_sym_anynumeric] = anon_sym_anynumeric,
  [anon_sym_anyenum] = anon_sym_anyenum,
  [anon_sym_anydiscrete] = anon_sym_anydiscrete,
  [anon_sym_anycontiguous] = anon_sym_anycontiguous,
  [anon_sym_anypoint] = anon_sym_anypoint,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__edgeql_chars] = sym__edgeql_chars,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_schema_declarations] = sym_schema_declarations,
  [sym_object_type] = sym_object_type,
  [sym_declarations] = sym_declarations,
  [sym_scalar_type_def] = sym_scalar_type_def,
  [sym_property] = sym_property,
  [sym_annotation] = sym_annotation,
  [sym_constraint] = sym_constraint,
  [sym_index] = sym_index,
  [sym_rewrite] = sym_rewrite,
  [sym_on_target_delete] = sym_on_target_delete,
  [sym_access_policy] = sym_access_policy,
  [sym_access_policy_action] = sym_access_policy_action,
  [sym_trigger] = sym_trigger,
  [sym_alias] = sym_alias,
  [sym_function] = sym_function,
  [sym_extension] = sym_extension,
  [sym_extending] = sym_extending,
  [sym_using] = sym_using,
  [sym_on] = sym_on,
  [sym_except] = sym_except,
  [sym_computed] = sym_computed,
  [sym_modifier] = sym_modifier,
  [sym_global_def] = sym_global_def,
  [sym_abstract_link] = sym_abstract_link,
  [sym_argspec] = sym_argspec,
  [sym_returnspec] = sym_returnspec,
  [sym_expression] = sym_expression,
  [sym_accessor] = sym_accessor,
  [sym_fncall] = sym_fncall,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym__scalar_type] = sym__scalar_type,
  [sym_array] = sym_array,
  [sym_tuple] = sym_tuple,
  [sym__tuple] = sym__tuple,
  [sym__named_tuple] = sym__named_tuple,
  [sym_enum] = sym_enum,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_scalar_type_def_repeat1] = aux_sym_scalar_type_def_repeat1,
  [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym_rewrite_repeat1] = aux_sym_rewrite_repeat1,
  [aux_sym_access_policy_repeat1] = aux_sym_access_policy_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_extending_repeat1] = aux_sym_extending_repeat1,
  [aux_sym_argspec_repeat1] = aux_sym_argspec_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_fncall_repeat1] = aux_sym_fncall_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__tuple_repeat1] = aux_sym__tuple_repeat1,
  [aux_sym__named_tuple_repeat1] = aux_sym__named_tuple_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deferred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_access] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trigger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overloaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_single] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inheritable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bigint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relative_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONrelative_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anytype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyscalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyreal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anynumeric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyenum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anydiscrete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anycontiguous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anypoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__edgeql_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite] = {
    .visible = true,
    .named = true,
  },
  [sym_on_target_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_access_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_access_policy_action] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_extending] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_except] = {
    .visible = true,
    .named = true,
  },
  [sym_computed] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_global_def] = {
    .visible = true,
    .named = true,
  },
  [sym_abstract_link] = {
    .visible = true,
    .named = true,
  },
  [sym_argspec] = {
    .visible = true,
    .named = true,
  },
  [sym_returnspec] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_fncall] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__scalar_type] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple] = {
    .visible = false,
    .named = true,
  },
  [sym__named_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_type_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rewrite_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_access_policy_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extending_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argspec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fncall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__named_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_language = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_supertype = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_supertype] = "supertype",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 3},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 2},
  [3] =
    {field_supertype, 1},
  [4] =
    {field_name, 3},
  [5] =
    {field_supertype, 1},
    {field_supertype, 2, .inherited = true},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [10] =
    {field_supertype, 0, .inherited = true},
    {field_supertype, 1, .inherited = true},
  [12] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = sym__edgeql_chars,
  },
  [11] = {
    [2] = sym__edgeql_chars,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 6,
  [16] = 10,
  [17] = 9,
  [18] = 11,
  [19] = 12,
  [20] = 20,
  [21] = 8,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 35,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 2,
  [57] = 37,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 38,
  [62] = 43,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 41,
  [68] = 40,
  [69] = 45,
  [70] = 42,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 46,
  [83] = 83,
  [84] = 54,
  [85] = 50,
  [86] = 53,
  [87] = 49,
  [88] = 59,
  [89] = 55,
  [90] = 90,
  [91] = 91,
  [92] = 52,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 141,
  [184] = 125,
  [185] = 128,
  [186] = 171,
  [187] = 187,
  [188] = 142,
  [189] = 123,
  [190] = 162,
  [191] = 191,
  [192] = 129,
  [193] = 193,
  [194] = 133,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 135,
  [200] = 136,
  [201] = 138,
  [202] = 143,
  [203] = 203,
  [204] = 204,
  [205] = 148,
  [206] = 146,
  [207] = 161,
  [208] = 168,
  [209] = 165,
  [210] = 158,
  [211] = 152,
  [212] = 134,
  [213] = 139,
  [214] = 155,
  [215] = 215,
  [216] = 164,
  [217] = 217,
  [218] = 127,
  [219] = 118,
  [220] = 169,
  [221] = 170,
  [222] = 120,
  [223] = 126,
  [224] = 154,
  [225] = 175,
  [226] = 177,
  [227] = 166,
  [228] = 121,
  [229] = 122,
  [230] = 145,
  [231] = 140,
  [232] = 130,
  [233] = 174,
  [234] = 137,
  [235] = 131,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 247,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 242,
  [264] = 244,
  [265] = 245,
  [266] = 238,
  [267] = 253,
  [268] = 268,
  [269] = 269,
  [270] = 246,
  [271] = 241,
  [272] = 262,
  [273] = 257,
  [274] = 250,
  [275] = 249,
  [276] = 255,
  [277] = 245,
  [278] = 269,
  [279] = 245,
  [280] = 269,
  [281] = 268,
  [282] = 269,
  [283] = 261,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 288,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 292,
  [295] = 293,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 310,
  [312] = 309,
  [313] = 291,
  [314] = 287,
  [315] = 286,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 292,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 296,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 293,
  [332] = 327,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 316,
  [338] = 323,
  [339] = 329,
  [340] = 297,
  [341] = 341,
  [342] = 342,
  [343] = 298,
  [344] = 317,
  [345] = 318,
  [346] = 299,
  [347] = 347,
  [348] = 308,
  [349] = 307,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 306,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 289,
  [362] = 300,
  [363] = 363,
  [364] = 364,
  [365] = 325,
  [366] = 366,
  [367] = 367,
  [368] = 330,
  [369] = 301,
  [370] = 305,
  [371] = 304,
  [372] = 302,
  [373] = 303,
  [374] = 292,
  [375] = 322,
  [376] = 376,
  [377] = 321,
  [378] = 293,
  [379] = 334,
  [380] = 335,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 382,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 385,
  [391] = 388,
  [392] = 388,
  [393] = 393,
  [394] = 385,
  [395] = 388,
  [396] = 385,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 401,
  [403] = 403,
  [404] = 400,
  [405] = 401,
  [406] = 400,
  [407] = 401,
  [408] = 408,
  [409] = 409,
  [410] = 400,
  [411] = 389,
  [412] = 382,
  [413] = 128,
  [414] = 159,
  [415] = 123,
  [416] = 142,
  [417] = 125,
  [418] = 171,
  [419] = 162,
  [420] = 382,
  [421] = 421,
  [422] = 156,
  [423] = 171,
  [424] = 142,
  [425] = 389,
  [426] = 162,
  [427] = 128,
  [428] = 125,
  [429] = 123,
  [430] = 430,
  [431] = 430,
  [432] = 432,
  [433] = 432,
  [434] = 434,
  [435] = 434,
  [436] = 382,
  [437] = 437,
  [438] = 438,
  [439] = 437,
  [440] = 440,
  [441] = 440,
  [442] = 442,
  [443] = 443,
  [444] = 443,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 447,
  [452] = 452,
  [453] = 446,
  [454] = 448,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 35,
  [460] = 460,
  [461] = 34,
  [462] = 462,
  [463] = 463,
  [464] = 450,
  [465] = 458,
  [466] = 462,
  [467] = 452,
  [468] = 468,
  [469] = 463,
  [470] = 470,
  [471] = 109,
  [472] = 472,
  [473] = 114,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 108,
  [478] = 37,
  [479] = 476,
  [480] = 472,
  [481] = 475,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 483,
  [490] = 490,
  [491] = 43,
  [492] = 492,
  [493] = 492,
  [494] = 494,
  [495] = 487,
  [496] = 496,
  [497] = 42,
  [498] = 38,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 485,
  [503] = 503,
  [504] = 504,
  [505] = 45,
  [506] = 40,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 41,
  [511] = 511,
  [512] = 512,
  [513] = 124,
  [514] = 507,
  [515] = 515,
  [516] = 504,
  [517] = 509,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 524,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 528,
  [532] = 530,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 536,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 522,
  [545] = 545,
  [546] = 521,
  [547] = 547,
  [548] = 548,
  [549] = 547,
  [550] = 525,
  [551] = 535,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 556,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 560,
  [565] = 565,
  [566] = 565,
  [567] = 561,
  [568] = 555,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 558,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 562,
  [589] = 583,
  [590] = 569,
  [591] = 554,
  [592] = 571,
  [593] = 593,
  [594] = 576,
  [595] = 553,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 596,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 608,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 603,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 626,
  [630] = 624,
  [631] = 631,
  [632] = 628,
  [633] = 633,
  [634] = 634,
  [635] = 602,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 607,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 634,
  [648] = 648,
  [649] = 633,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 652,
  [660] = 660,
  [661] = 661,
  [662] = 600,
  [663] = 610,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 658,
  [670] = 670,
  [671] = 671,
  [672] = 641,
  [673] = 599,
  [674] = 674,
  [675] = 660,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 626,
  [680] = 596,
  [681] = 681,
  [682] = 612,
  [683] = 626,
  [684] = 596,
  [685] = 685,
  [686] = 686,
  [687] = 622,
  [688] = 644,
  [689] = 689,
  [690] = 664,
  [691] = 665,
  [692] = 613,
  [693] = 693,
  [694] = 694,
  [695] = 693,
  [696] = 694,
  [697] = 697,
  [698] = 698,
  [699] = 693,
  [700] = 700,
  [701] = 701,
  [702] = 666,
  [703] = 655,
  [704] = 627,
  [705] = 625,
  [706] = 617,
  [707] = 707,
  [708] = 666,
  [709] = 639,
  [710] = 601,
  [711] = 707,
  [712] = 686,
  [713] = 606,
  [714] = 614,
  [715] = 631,
  [716] = 716,
  [717] = 620,
  [718] = 657,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < '`'
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '\'' && c <= '@')))
      : (c <= '`' || (c < 160
        ? c == '~'
        : c <= 160)))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8203)
        : c <= 8239)
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '!' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 160
    ? (c < ']'
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 160
    ? (c < ']'
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 160
    ? (c < ';'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '{'
        ? (c >= '[' && c <= '`')
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(383);
      if (lookahead == '!') ADVANCE(499);
      if (lookahead == '"') ADVANCE(739);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == '%') ADVANCE(739);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == ')') ADVANCE(739);
      if (lookahead == '*') ADVANCE(739);
      if (lookahead == '+') ADVANCE(739);
      if (lookahead == ',') ADVANCE(739);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(735);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == '0') ADVANCE(487);
      if (lookahead == ':') ADVANCE(494);
      if (lookahead == ';') ADVANCE(739);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(739);
      if (lookahead == '>') ADVANCE(498);
      if (lookahead == '[') ADVANCE(739);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == ']') ADVANCE(739);
      if (lookahead == '^') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'g') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'j') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(647);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(664);
      if (lookahead == 'w') ADVANCE(673);
      if (lookahead == '{') ADVANCE(739);
      if (lookahead == '|') ADVANCE(728);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(739);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '%') ADVANCE(472);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '+') ADVANCE(468);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == '/') ADVANCE(471);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(479);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '^') ADVANCE(466);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'g') ADVANCE(965);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(1130);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(739);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '.') ADVANCE(457);
      if (lookahead == '0') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(842);
      if (lookahead == 'g') ADVANCE(965);
      if (lookahead == 'i') ADVANCE(1070);
      if (lookahead == 'n') ADVANCE(1117);
      if (lookahead == 'r') ADVANCE(813);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1136);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(1130);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(1130);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'b') ADVANCE(933);
      if (lookahead == 'c') ADVANCE(834);
      if (lookahead == 'd') ADVANCE(846);
      if (lookahead == 'f') ADVANCE(977);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'j') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead == 'u') ADVANCE(1114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(1130);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'g') ADVANCE(965);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(1130);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'g') ADVANCE(965);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead == 'u') ADVANCE(1076);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(1130);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'b') ADVANCE(933);
      if (lookahead == 'c') ADVANCE(834);
      if (lookahead == 'd') ADVANCE(846);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == 'f') ADVANCE(977);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'j') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead == 's') ADVANCE(914);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead == 'u') ADVANCE(1114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'b') ADVANCE(933);
      if (lookahead == 'c') ADVANCE(834);
      if (lookahead == 'd') ADVANCE(846);
      if (lookahead == 'f') ADVANCE(977);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'j') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead == 's') ADVANCE(914);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead == 'u') ADVANCE(1114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'e') ADVANCE(1125);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'g') ADVANCE(965);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(1130);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'e') ADVANCE(1125);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(997);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead == 't') ADVANCE(1051);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(1017);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead == 't') ADVANCE(1051);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'm') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'm') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead == 'u') ADVANCE(1076);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(1130);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(750);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(754);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(752);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(756);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(748);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(208);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(811);
      if (lookahead == '=') ADVANCE(396);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(476);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'q') ADVANCE(340);
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(798);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(455);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(254);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(405);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(435);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(342);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(429);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(800);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(313);
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 268:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 269:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 270:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 271:
      if (lookahead == 'q') ADVANCE(341);
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 335:
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == 'x') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(743);
      if (lookahead != 0) ADVANCE(740);
      END_STATE();
    case 336:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 337:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 339:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 340:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 342:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(743);
      if (lookahead != 0) ADVANCE(740);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 346:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 347:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 348:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 349:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 350:
      if (lookahead == 'w') ADVANCE(414);
      END_STATE();
    case 351:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 352:
      if (lookahead == 'y') ADVANCE(420);
      END_STATE();
    case 353:
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 354:
      if (lookahead == 'y') ADVANCE(419);
      END_STATE();
    case 355:
      if (lookahead == 'y') ADVANCE(270);
      END_STATE();
    case 356:
      if (lookahead == '{') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 357:
      if (lookahead == '{') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 358:
      if (lookahead == '{') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 359:
      if (lookahead == '}') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 360:
      if (lookahead == '}') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 361:
      if (lookahead == '}') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 362:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      END_STATE();
    case 363:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1137);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1138);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1136);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1142);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1139);
      END_STATE();
    case 368:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      END_STATE();
    case 369:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 370:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(740);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1130);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 382:
      if (eof) ADVANCE(383);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(481);
      if (lookahead == '#') ADVANCE(1144);
      if (lookahead == '%') ADVANCE(472);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(480);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '+') ADVANCE(468);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == '/') ADVANCE(471);
      if (lookahead == ':') ADVANCE(395);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(479);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '^') ADVANCE(466);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'j') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead == 'w') ADVANCE(278);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1145);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_scalar);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_deferred);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_access);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_policy);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_trigger);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_extending);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_overloaded);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_overloaded);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_delegated);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_delegated);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_single);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_multi);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_inheritable);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1142);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(461);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(462);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(477);
      if (lookahead == '>') ADVANCE(463);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '"') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '"') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '&') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(731);
      if (lookahead == '0') ADVANCE(505);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(732);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(738);
      if (lookahead == '_') ADVANCE(736);
      if (lookahead == 'n') ADVANCE(739);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(731);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (lookahead == '_') ADVANCE(734);
      if (lookahead == 'n') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '1') ADVANCE(493);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '6') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '2') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '6') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '4') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '6') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == '=') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '<') ADVANCE(739);
      if (lookahead == '=') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(739);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(739);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(733);
      if (lookahead == 'n') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(738);
      if (lookahead == 'n') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(736);
      if (lookahead == 'n') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(551);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'm') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == 'x') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'l') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'q') ADVANCE(719);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 'w') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(598);
      if (lookahead == 'u') ADVANCE(667);
      if (lookahead == 'y') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(688);
      if (lookahead == 'c') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(708);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(659);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == 't') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 'y') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(529);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'h') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'u') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'k') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == 'q') ADVANCE(722);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == 'y') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead == 'u') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead == 'u') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'v') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'w') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'x') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (lookahead == '_') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(740);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(742);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_date_duration);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_date_duration);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_relative_duration);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_relative_duration);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_local_datetime);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_local_datetime);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_local_date);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(951);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_local_date);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_local_time);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_local_time);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_anyscalar);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_anyscalar);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_anyreal);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_anyreal);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_anyfloat);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_anyfloat);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_anyint);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_anyint);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_anynumeric);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_anynumeric);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_anyenum);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_anyenum);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_anydiscrete);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_anydiscrete);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_anycontiguous);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_anycontiguous);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_anypoint);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_anypoint);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(820);
      if (lookahead == '3') ADVANCE(815);
      if (lookahead == '6') ADVANCE(818);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(816);
      if (lookahead == '6') ADVANCE(819);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(757);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_8(lookahead)) ADVANCE(1130);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '_') ADVANCE(876);
      if (!sym_identifier_character_set_9(lookahead)) ADVANCE(1130);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '_') ADVANCE(873);
      if (lookahead == 't') ADVANCE(946);
      if (!sym_identifier_character_set_9(lookahead)) ADVANCE(1130);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '_') ADVANCE(878);
      if (!sym_identifier_character_set_9(lookahead)) ADVANCE(1130);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(874);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(856);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1066);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(860);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(966);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1093);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1128);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(957);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(958);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(959);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1045);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1082);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(961);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1048);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(962);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(963);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1085);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(971);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(940);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(976);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1092);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1096);
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead == 'u') ADVANCE(1063);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1097);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1103);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1104);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1105);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(1106);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(1071);
      if (lookahead == 'c') ADVANCE(859);
      if (lookahead == 'l') ADVANCE(930);
      if (lookahead == 'n') ADVANCE(1000);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(1071);
      if (lookahead == 'c') ADVANCE(859);
      if (lookahead == 'n') ADVANCE(1000);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(1071);
      if (lookahead == 'n') ADVANCE(1000);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(832);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(972);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(829);
      if (lookahead == 'i') ADVANCE(989);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(799);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(900);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(1079);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(928);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(889);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(1060);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(837);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(1029);
      if (lookahead == 'd') ADVANCE(938);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead == 'f') ADVANCE(979);
      if (lookahead == 'i') ADVANCE(1007);
      if (lookahead == 'n') ADVANCE(1107);
      if (lookahead == 'p') ADVANCE(1034);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == 't') ADVANCE(1129);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(844);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(1102);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(445);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(443);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(441);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(765);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(1120);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(1121);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(908);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(902);
      if (lookahead == 'h') ADVANCE(905);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(847);
      if (lookahead == 't') ADVANCE(949);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(943);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(1122);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1042);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(390);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(385);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(449);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(453);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == 't') ADVANCE(1047);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(823);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(809);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(789);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(769);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(787);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(782);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(785);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(803);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(781);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1041);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(401);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1131);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1132);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(968);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1061);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1072);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(824);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1124);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(868);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(921);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1054);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(869);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1053);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(870);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1068);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(978);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1046);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1011);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1002);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == 't') ADVANCE(1047);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1058);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(1098);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(839);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(436);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(406);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(923);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(830);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(1116);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(911);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(941);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'g') ADVANCE(970);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(905);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(451);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(986);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1123);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(827);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(920);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(988);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == 'o') ADVANCE(1023);
      if (lookahead == 'y') ADVANCE(1095);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(989);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1057);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(871);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(922);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1073);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(858);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1003);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1009);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1010);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1004);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1006);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1020);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(982);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1091);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1021);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(983);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1025);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(984);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1030);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1100);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1031);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(1032);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'k') ADVANCE(393);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(454);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(447);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(821);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(747);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(822);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(793);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(761);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1133);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1016);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(835);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1022);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(904);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(881);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(882);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1074);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(883);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(964);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(886);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1089);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(838);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1026);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(845);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(1028);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(801);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(810);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(888);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(891);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(893);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(915);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(840);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(926);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(956);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(925);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(432);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(398);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(763);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(771);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(773);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(775);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(875);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(1088);
      if (lookahead == 'v') ADVANCE(899);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(867);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1127);
      if (lookahead == 'r') ADVANCE(1056);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1018);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1110);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(877);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1080);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(918);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1081);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(919);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1083);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1112);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1084);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1086);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(862);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(833);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1094);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(1077);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == 'u') ADVANCE(975);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(855);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(1014);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(1090);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(864);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(1012);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(990);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(825);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(960);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(1115);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(991);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(836);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(992);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(841);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(1013);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(993);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(994);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(995);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(1038);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(942);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(1088);
      if (lookahead == 'v') ADVANCE(899);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(1088);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(880);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(907);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(887);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(974);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'q') ADVANCE(1113);
      if (lookahead == 'w') ADVANCE(1059);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'q') ADVANCE(1113);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'q') ADVANCE(1118);
      if (lookahead == 't') ADVANCE(812);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'q') ADVANCE(1118);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(391);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(425);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(745);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(791);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(1033);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(931);
      if (lookahead == 'y') ADVANCE(1037);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(931);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(828);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(1078);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(947);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(843);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(831);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(903);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(939);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(953);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(916);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(967);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(1119);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(849);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(850);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(851);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(431);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(418);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(767);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(805);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(458);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(1087);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(1067);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(863);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(897);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(1027);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(944);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 's') ADVANCE(1101);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(1126);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(439);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(399);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(814);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(817);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(797);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(759);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(795);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(807);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(1052);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(945);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(927);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(848);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(826);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(929);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(906);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(937);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(909);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(885);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(890);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(892);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(913);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(895);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(1055);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(948);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(950);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(952);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(954);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 't') ADVANCE(955);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(985);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(975);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(1040);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(980);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(998);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(981);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(935);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(936);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(1069);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(1024);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(973);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(912);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(896);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(969);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(1064);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(1065);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'v') ADVANCE(901);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'x') ADVANCE(400);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'x') ADVANCE(1099);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'y') ADVANCE(392);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'y') ADVANCE(865);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'y') ADVANCE(808);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == 'y') ADVANCE(1039);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(343);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(1130);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(363);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(373);
      if (lookahead == '_') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(1134);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1136);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (lookahead == '_') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1136);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1137);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1138);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1139);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (lookahead == '_') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1142);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1142);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1144);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 382},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 382},
  [28] = {.lex_state = 382},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 382},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 382},
  [48] = {.lex_state = 382},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 382},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 382},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 382},
  [72] = {.lex_state = 382},
  [73] = {.lex_state = 382},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 382},
  [79] = {.lex_state = 382},
  [80] = {.lex_state = 382},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 382},
  [94] = {.lex_state = 382},
  [95] = {.lex_state = 382},
  [96] = {.lex_state = 382},
  [97] = {.lex_state = 382},
  [98] = {.lex_state = 382},
  [99] = {.lex_state = 382},
  [100] = {.lex_state = 382},
  [101] = {.lex_state = 382},
  [102] = {.lex_state = 382},
  [103] = {.lex_state = 382},
  [104] = {.lex_state = 382},
  [105] = {.lex_state = 382},
  [106] = {.lex_state = 382},
  [107] = {.lex_state = 382},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 382},
  [111] = {.lex_state = 382},
  [112] = {.lex_state = 382},
  [113] = {.lex_state = 382},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 382},
  [116] = {.lex_state = 382},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 382},
  [182] = {.lex_state = 382},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 382},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 13},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 13},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 382},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 13},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 13},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 3, .external_lex_state = 1},
  [237] = {.lex_state = 382},
  [238] = {.lex_state = 382},
  [239] = {.lex_state = 382},
  [240] = {.lex_state = 382},
  [241] = {.lex_state = 382},
  [242] = {.lex_state = 382},
  [243] = {.lex_state = 382},
  [244] = {.lex_state = 382},
  [245] = {.lex_state = 382},
  [246] = {.lex_state = 382},
  [247] = {.lex_state = 382},
  [248] = {.lex_state = 382},
  [249] = {.lex_state = 382},
  [250] = {.lex_state = 382},
  [251] = {.lex_state = 382},
  [252] = {.lex_state = 382},
  [253] = {.lex_state = 382},
  [254] = {.lex_state = 382},
  [255] = {.lex_state = 382},
  [256] = {.lex_state = 382},
  [257] = {.lex_state = 382},
  [258] = {.lex_state = 382},
  [259] = {.lex_state = 3, .external_lex_state = 1},
  [260] = {.lex_state = 382},
  [261] = {.lex_state = 382},
  [262] = {.lex_state = 382},
  [263] = {.lex_state = 382},
  [264] = {.lex_state = 382},
  [265] = {.lex_state = 382},
  [266] = {.lex_state = 382},
  [267] = {.lex_state = 382},
  [268] = {.lex_state = 382},
  [269] = {.lex_state = 382},
  [270] = {.lex_state = 382},
  [271] = {.lex_state = 382},
  [272] = {.lex_state = 382},
  [273] = {.lex_state = 382},
  [274] = {.lex_state = 382},
  [275] = {.lex_state = 382},
  [276] = {.lex_state = 382},
  [277] = {.lex_state = 382},
  [278] = {.lex_state = 382},
  [279] = {.lex_state = 382},
  [280] = {.lex_state = 382},
  [281] = {.lex_state = 382},
  [282] = {.lex_state = 382},
  [283] = {.lex_state = 382},
  [284] = {.lex_state = 3, .external_lex_state = 1},
  [285] = {.lex_state = 3, .external_lex_state = 1},
  [286] = {.lex_state = 18},
  [287] = {.lex_state = 18},
  [288] = {.lex_state = 3, .external_lex_state = 1},
  [289] = {.lex_state = 3, .external_lex_state = 1},
  [290] = {.lex_state = 3, .external_lex_state = 1},
  [291] = {.lex_state = 3, .external_lex_state = 1},
  [292] = {.lex_state = 3, .external_lex_state = 1},
  [293] = {.lex_state = 3, .external_lex_state = 1},
  [294] = {.lex_state = 3, .external_lex_state = 1},
  [295] = {.lex_state = 3, .external_lex_state = 1},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 3, .external_lex_state = 1},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 18},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 3, .external_lex_state = 1},
  [304] = {.lex_state = 18},
  [305] = {.lex_state = 18},
  [306] = {.lex_state = 3, .external_lex_state = 1},
  [307] = {.lex_state = 18},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 18},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 3, .external_lex_state = 1},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 3, .external_lex_state = 1},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 3, .external_lex_state = 1},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 3, .external_lex_state = 1},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 3, .external_lex_state = 1},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 3, .external_lex_state = 1},
  [326] = {.lex_state = 3, .external_lex_state = 1},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 3, .external_lex_state = 1},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 3, .external_lex_state = 1},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 3, .external_lex_state = 1},
  [334] = {.lex_state = 3, .external_lex_state = 1},
  [335] = {.lex_state = 3, .external_lex_state = 1},
  [336] = {.lex_state = 3, .external_lex_state = 1},
  [337] = {.lex_state = 3, .external_lex_state = 1},
  [338] = {.lex_state = 3, .external_lex_state = 1},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 3, .external_lex_state = 1},
  [341] = {.lex_state = 3, .external_lex_state = 1},
  [342] = {.lex_state = 3, .external_lex_state = 1},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 18},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 3, .external_lex_state = 1},
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 18},
  [350] = {.lex_state = 3, .external_lex_state = 1},
  [351] = {.lex_state = 3, .external_lex_state = 1},
  [352] = {.lex_state = 3, .external_lex_state = 1},
  [353] = {.lex_state = 3, .external_lex_state = 1},
  [354] = {.lex_state = 3, .external_lex_state = 1},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 3, .external_lex_state = 1},
  [358] = {.lex_state = 3, .external_lex_state = 1},
  [359] = {.lex_state = 3, .external_lex_state = 1},
  [360] = {.lex_state = 3, .external_lex_state = 1},
  [361] = {.lex_state = 3, .external_lex_state = 1},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 3, .external_lex_state = 1},
  [364] = {.lex_state = 3, .external_lex_state = 1},
  [365] = {.lex_state = 3, .external_lex_state = 1},
  [366] = {.lex_state = 3, .external_lex_state = 1},
  [367] = {.lex_state = 3, .external_lex_state = 1},
  [368] = {.lex_state = 18},
  [369] = {.lex_state = 18},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 3, .external_lex_state = 1},
  [374] = {.lex_state = 3, .external_lex_state = 1},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 18},
  [377] = {.lex_state = 3, .external_lex_state = 1},
  [378] = {.lex_state = 3, .external_lex_state = 1},
  [379] = {.lex_state = 3, .external_lex_state = 1},
  [380] = {.lex_state = 3, .external_lex_state = 1},
  [381] = {.lex_state = 3, .external_lex_state = 1},
  [382] = {.lex_state = 14},
  [383] = {.lex_state = 14},
  [384] = {.lex_state = 14},
  [385] = {.lex_state = 382},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 382},
  [389] = {.lex_state = 16},
  [390] = {.lex_state = 382},
  [391] = {.lex_state = 382},
  [392] = {.lex_state = 382},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 382},
  [395] = {.lex_state = 382},
  [396] = {.lex_state = 382},
  [397] = {.lex_state = 382},
  [398] = {.lex_state = 382},
  [399] = {.lex_state = 382},
  [400] = {.lex_state = 382},
  [401] = {.lex_state = 382},
  [402] = {.lex_state = 382},
  [403] = {.lex_state = 17},
  [404] = {.lex_state = 382},
  [405] = {.lex_state = 382},
  [406] = {.lex_state = 382},
  [407] = {.lex_state = 382},
  [408] = {.lex_state = 382},
  [409] = {.lex_state = 382},
  [410] = {.lex_state = 382},
  [411] = {.lex_state = 17},
  [412] = {.lex_state = 16},
  [413] = {.lex_state = 18},
  [414] = {.lex_state = 18},
  [415] = {.lex_state = 18},
  [416] = {.lex_state = 18},
  [417] = {.lex_state = 18},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 18},
  [420] = {.lex_state = 17},
  [421] = {.lex_state = 18},
  [422] = {.lex_state = 18},
  [423] = {.lex_state = 382},
  [424] = {.lex_state = 382},
  [425] = {.lex_state = 382},
  [426] = {.lex_state = 382},
  [427] = {.lex_state = 382},
  [428] = {.lex_state = 382},
  [429] = {.lex_state = 382},
  [430] = {.lex_state = 382},
  [431] = {.lex_state = 382},
  [432] = {.lex_state = 382},
  [433] = {.lex_state = 382},
  [434] = {.lex_state = 382},
  [435] = {.lex_state = 382},
  [436] = {.lex_state = 382},
  [437] = {.lex_state = 382},
  [438] = {.lex_state = 382},
  [439] = {.lex_state = 382},
  [440] = {.lex_state = 382},
  [441] = {.lex_state = 382},
  [442] = {.lex_state = 382},
  [443] = {.lex_state = 6},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 382},
  [447] = {.lex_state = 382},
  [448] = {.lex_state = 382},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 382},
  [451] = {.lex_state = 382},
  [452] = {.lex_state = 382},
  [453] = {.lex_state = 382},
  [454] = {.lex_state = 382},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 382},
  [457] = {.lex_state = 9},
  [458] = {.lex_state = 382},
  [459] = {.lex_state = 6},
  [460] = {.lex_state = 382},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 382},
  [463] = {.lex_state = 382},
  [464] = {.lex_state = 382},
  [465] = {.lex_state = 382},
  [466] = {.lex_state = 382},
  [467] = {.lex_state = 382},
  [468] = {.lex_state = 9},
  [469] = {.lex_state = 382},
  [470] = {.lex_state = 382},
  [471] = {.lex_state = 382},
  [472] = {.lex_state = 382},
  [473] = {.lex_state = 382},
  [474] = {.lex_state = 2},
  [475] = {.lex_state = 382},
  [476] = {.lex_state = 382},
  [477] = {.lex_state = 382},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 382},
  [480] = {.lex_state = 382},
  [481] = {.lex_state = 382},
  [482] = {.lex_state = 9},
  [483] = {.lex_state = 382},
  [484] = {.lex_state = 2},
  [485] = {.lex_state = 382},
  [486] = {.lex_state = 382},
  [487] = {.lex_state = 382},
  [488] = {.lex_state = 382},
  [489] = {.lex_state = 382},
  [490] = {.lex_state = 382},
  [491] = {.lex_state = 6},
  [492] = {.lex_state = 4},
  [493] = {.lex_state = 4},
  [494] = {.lex_state = 382},
  [495] = {.lex_state = 382},
  [496] = {.lex_state = 382},
  [497] = {.lex_state = 6},
  [498] = {.lex_state = 6},
  [499] = {.lex_state = 2},
  [500] = {.lex_state = 2},
  [501] = {.lex_state = 382},
  [502] = {.lex_state = 382},
  [503] = {.lex_state = 382},
  [504] = {.lex_state = 382},
  [505] = {.lex_state = 6},
  [506] = {.lex_state = 6},
  [507] = {.lex_state = 382},
  [508] = {.lex_state = 2},
  [509] = {.lex_state = 382},
  [510] = {.lex_state = 6},
  [511] = {.lex_state = 2},
  [512] = {.lex_state = 2},
  [513] = {.lex_state = 382},
  [514] = {.lex_state = 382},
  [515] = {.lex_state = 2},
  [516] = {.lex_state = 382},
  [517] = {.lex_state = 382},
  [518] = {.lex_state = 2},
  [519] = {.lex_state = 382},
  [520] = {.lex_state = 382},
  [521] = {.lex_state = 382},
  [522] = {.lex_state = 382},
  [523] = {.lex_state = 6},
  [524] = {.lex_state = 382},
  [525] = {.lex_state = 6},
  [526] = {.lex_state = 382},
  [527] = {.lex_state = 382},
  [528] = {.lex_state = 6},
  [529] = {.lex_state = 382},
  [530] = {.lex_state = 6},
  [531] = {.lex_state = 6},
  [532] = {.lex_state = 6},
  [533] = {.lex_state = 382},
  [534] = {.lex_state = 382},
  [535] = {.lex_state = 382},
  [536] = {.lex_state = 6},
  [537] = {.lex_state = 6},
  [538] = {.lex_state = 382},
  [539] = {.lex_state = 6},
  [540] = {.lex_state = 6},
  [541] = {.lex_state = 382},
  [542] = {.lex_state = 6},
  [543] = {.lex_state = 382},
  [544] = {.lex_state = 382},
  [545] = {.lex_state = 382},
  [546] = {.lex_state = 382},
  [547] = {.lex_state = 382},
  [548] = {.lex_state = 382},
  [549] = {.lex_state = 382},
  [550] = {.lex_state = 6},
  [551] = {.lex_state = 382},
  [552] = {.lex_state = 6},
  [553] = {.lex_state = 382},
  [554] = {.lex_state = 382},
  [555] = {.lex_state = 382},
  [556] = {.lex_state = 382},
  [557] = {.lex_state = 382},
  [558] = {.lex_state = 382},
  [559] = {.lex_state = 382},
  [560] = {.lex_state = 382, .external_lex_state = 1},
  [561] = {.lex_state = 382},
  [562] = {.lex_state = 382},
  [563] = {.lex_state = 6},
  [564] = {.lex_state = 382, .external_lex_state = 1},
  [565] = {.lex_state = 4},
  [566] = {.lex_state = 4},
  [567] = {.lex_state = 382},
  [568] = {.lex_state = 382},
  [569] = {.lex_state = 382},
  [570] = {.lex_state = 382},
  [571] = {.lex_state = 382},
  [572] = {.lex_state = 382},
  [573] = {.lex_state = 382},
  [574] = {.lex_state = 382},
  [575] = {.lex_state = 382},
  [576] = {.lex_state = 382},
  [577] = {.lex_state = 382},
  [578] = {.lex_state = 382},
  [579] = {.lex_state = 382},
  [580] = {.lex_state = 6},
  [581] = {.lex_state = 382},
  [582] = {.lex_state = 382},
  [583] = {.lex_state = 382},
  [584] = {.lex_state = 382},
  [585] = {.lex_state = 6},
  [586] = {.lex_state = 382},
  [587] = {.lex_state = 382},
  [588] = {.lex_state = 382},
  [589] = {.lex_state = 382},
  [590] = {.lex_state = 382},
  [591] = {.lex_state = 382},
  [592] = {.lex_state = 382},
  [593] = {.lex_state = 382},
  [594] = {.lex_state = 382},
  [595] = {.lex_state = 382},
  [596] = {.lex_state = 4},
  [597] = {.lex_state = 382},
  [598] = {.lex_state = 4},
  [599] = {.lex_state = 382},
  [600] = {.lex_state = 382},
  [601] = {.lex_state = 382},
  [602] = {.lex_state = 4},
  [603] = {.lex_state = 382},
  [604] = {.lex_state = 4},
  [605] = {.lex_state = 382},
  [606] = {.lex_state = 382},
  [607] = {.lex_state = 382},
  [608] = {.lex_state = 382},
  [609] = {.lex_state = 4},
  [610] = {.lex_state = 382},
  [611] = {.lex_state = 382},
  [612] = {.lex_state = 382},
  [613] = {.lex_state = 382},
  [614] = {.lex_state = 382},
  [615] = {.lex_state = 382},
  [616] = {.lex_state = 4},
  [617] = {.lex_state = 382},
  [618] = {.lex_state = 4},
  [619] = {.lex_state = 382},
  [620] = {.lex_state = 4},
  [621] = {.lex_state = 382},
  [622] = {.lex_state = 382},
  [623] = {.lex_state = 382},
  [624] = {.lex_state = 4},
  [625] = {.lex_state = 382},
  [626] = {.lex_state = 4},
  [627] = {.lex_state = 4},
  [628] = {.lex_state = 4},
  [629] = {.lex_state = 4},
  [630] = {.lex_state = 4},
  [631] = {.lex_state = 4},
  [632] = {.lex_state = 4},
  [633] = {.lex_state = 382},
  [634] = {.lex_state = 4},
  [635] = {.lex_state = 4},
  [636] = {.lex_state = 382},
  [637] = {.lex_state = 382},
  [638] = {.lex_state = 382},
  [639] = {.lex_state = 382},
  [640] = {.lex_state = 382},
  [641] = {.lex_state = 4},
  [642] = {.lex_state = 382},
  [643] = {.lex_state = 382},
  [644] = {.lex_state = 382},
  [645] = {.lex_state = 4},
  [646] = {.lex_state = 6},
  [647] = {.lex_state = 4},
  [648] = {.lex_state = 382},
  [649] = {.lex_state = 382},
  [650] = {.lex_state = 4},
  [651] = {.lex_state = 382},
  [652] = {.lex_state = 6},
  [653] = {.lex_state = 4},
  [654] = {.lex_state = 382},
  [655] = {.lex_state = 382},
  [656] = {.lex_state = 382},
  [657] = {.lex_state = 4},
  [658] = {.lex_state = 382},
  [659] = {.lex_state = 6},
  [660] = {.lex_state = 382},
  [661] = {.lex_state = 4},
  [662] = {.lex_state = 382},
  [663] = {.lex_state = 382},
  [664] = {.lex_state = 382},
  [665] = {.lex_state = 382},
  [666] = {.lex_state = 4},
  [667] = {.lex_state = 382},
  [668] = {.lex_state = 382},
  [669] = {.lex_state = 382},
  [670] = {.lex_state = 4},
  [671] = {.lex_state = 4},
  [672] = {.lex_state = 4},
  [673] = {.lex_state = 382},
  [674] = {.lex_state = 382},
  [675] = {.lex_state = 382},
  [676] = {.lex_state = 382},
  [677] = {.lex_state = 382},
  [678] = {.lex_state = 382},
  [679] = {.lex_state = 4},
  [680] = {.lex_state = 4},
  [681] = {.lex_state = 4},
  [682] = {.lex_state = 382},
  [683] = {.lex_state = 4},
  [684] = {.lex_state = 4},
  [685] = {.lex_state = 382},
  [686] = {.lex_state = 382},
  [687] = {.lex_state = 382},
  [688] = {.lex_state = 382},
  [689] = {.lex_state = 4},
  [690] = {.lex_state = 382},
  [691] = {.lex_state = 382},
  [692] = {.lex_state = 382},
  [693] = {.lex_state = 4},
  [694] = {.lex_state = 382},
  [695] = {.lex_state = 4},
  [696] = {.lex_state = 382},
  [697] = {.lex_state = 382},
  [698] = {.lex_state = 4},
  [699] = {.lex_state = 4},
  [700] = {.lex_state = 382},
  [701] = {.lex_state = 4},
  [702] = {.lex_state = 4},
  [703] = {.lex_state = 382},
  [704] = {.lex_state = 4},
  [705] = {.lex_state = 382},
  [706] = {.lex_state = 382},
  [707] = {.lex_state = 382},
  [708] = {.lex_state = 4},
  [709] = {.lex_state = 382},
  [710] = {.lex_state = 382},
  [711] = {.lex_state = 382},
  [712] = {.lex_state = 382},
  [713] = {.lex_state = 382},
  [714] = {.lex_state = 382},
  [715] = {.lex_state = 4},
  [716] = {.lex_state = 4},
  [717] = {.lex_state = 4},
  [718] = {.lex_state = 4},
};

enum {
  ts_external_token__edgeql_chars = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__edgeql_chars] = sym__edgeql_chars,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__edgeql_chars] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_scalar] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_deferred] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_access] = ACTIONS(1),
    [anon_sym_policy] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_trigger] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_overloaded] = ACTIONS(1),
    [anon_sym_delegated] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_inheritable] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_raw_string] = ACTIONS(1),
    [sym_unescaped_single_string_fragment] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_bigint] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_date_duration] = ACTIONS(1),
    [anon_sym_relative_duration] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_datetime] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_date] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_time] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONrelative_duration] = ACTIONS(1),
    [anon_sym_local_datetime] = ACTIONS(1),
    [anon_sym_local_date] = ACTIONS(1),
    [anon_sym_local_time] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_anytype] = ACTIONS(1),
    [anon_sym_anyscalar] = ACTIONS(1),
    [anon_sym_anyreal] = ACTIONS(1),
    [anon_sym_anyfloat] = ACTIONS(1),
    [anon_sym_anyint] = ACTIONS(1),
    [anon_sym_anynumeric] = ACTIONS(1),
    [anon_sym_anyenum] = ACTIONS(1),
    [anon_sym_anydiscrete] = ACTIONS(1),
    [anon_sym_anycontiguous] = ACTIONS(1),
    [anon_sym_anypoint] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__edgeql_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(676),
    [sym_module] = STATE(442),
    [sym_schema_declarations] = STATE(442),
    [sym_extension] = STATE(442),
    [aux_sym_source_file_repeat1] = STATE(442),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_using] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(17), 23,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(15), 25,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [57] = 13,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_setof,
    ACTIONS(27), 1,
      anon_sym_array,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(77), 1,
      sym_returnspec,
    STATE(90), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(84), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(25), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(88), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(23), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [133] = 11,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(63), 2,
      sym_enum,
      sym_type,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [204] = 11,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(76), 2,
      sym_enum,
      sym_type,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [275] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(525), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [342] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(580), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [409] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(524), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [476] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(531), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [543] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(652), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [610] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(544), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [677] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(549), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [744] = 10,
    ACTIONS(27), 1,
      anon_sym_array,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(91), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(84), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(25), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(88), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(23), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [811] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(587), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [878] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(550), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [945] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(659), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1012] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(528), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1079] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(522), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1146] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(547), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1213] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(563), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1280] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(526), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(54), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(59), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 31,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_datetime,
      anon_sym_local_date,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1347] = 19,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_type,
    ACTIONS(63), 1,
      anon_sym_scalar,
    ACTIONS(67), 1,
      anon_sym_annotation,
    ACTIONS(69), 1,
      anon_sym_constraint,
    ACTIONS(71), 1,
      anon_sym_access,
    ACTIONS(73), 1,
      anon_sym_trigger,
    ACTIONS(75), 1,
      anon_sym_alias,
    ACTIONS(77), 1,
      anon_sym_function,
    ACTIONS(79), 1,
      anon_sym_abstract,
    ACTIONS(83), 1,
      anon_sym_global,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(384), 1,
      sym_modifier,
    STATE(387), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(81), 7,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(23), 13,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_access_policy,
      sym_trigger,
      sym_alias,
      sym_function,
      sym_global_def,
      sym_abstract_link,
      aux_sym_schema_declarations_repeat1,
  [1425] = 19,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(61), 1,
      anon_sym_type,
    ACTIONS(63), 1,
      anon_sym_scalar,
    ACTIONS(67), 1,
      anon_sym_annotation,
    ACTIONS(69), 1,
      anon_sym_constraint,
    ACTIONS(71), 1,
      anon_sym_access,
    ACTIONS(73), 1,
      anon_sym_trigger,
    ACTIONS(75), 1,
      anon_sym_alias,
    ACTIONS(77), 1,
      anon_sym_function,
    ACTIONS(79), 1,
      anon_sym_abstract,
    ACTIONS(83), 1,
      anon_sym_global,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      sym_modifier,
    STATE(387), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(81), 7,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(25), 13,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_access_policy,
      sym_trigger,
      sym_alias,
      sym_function,
      sym_global_def,
      sym_abstract_link,
      aux_sym_schema_declarations_repeat1,
  [1503] = 19,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(61), 1,
      anon_sym_type,
    ACTIONS(63), 1,
      anon_sym_scalar,
    ACTIONS(67), 1,
      anon_sym_annotation,
    ACTIONS(69), 1,
      anon_sym_constraint,
    ACTIONS(71), 1,
      anon_sym_access,
    ACTIONS(73), 1,
      anon_sym_trigger,
    ACTIONS(75), 1,
      anon_sym_alias,
    ACTIONS(77), 1,
      anon_sym_function,
    ACTIONS(79), 1,
      anon_sym_abstract,
    ACTIONS(83), 1,
      anon_sym_global,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      sym_modifier,
    STATE(387), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(81), 7,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(26), 13,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_access_policy,
      sym_trigger,
      sym_alias,
      sym_function,
      sym_global_def,
      sym_abstract_link,
      aux_sym_schema_declarations_repeat1,
  [1581] = 19,
    ACTIONS(91), 1,
      anon_sym_module,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_scalar,
    ACTIONS(105), 1,
      anon_sym_annotation,
    ACTIONS(108), 1,
      anon_sym_constraint,
    ACTIONS(111), 1,
      anon_sym_access,
    ACTIONS(114), 1,
      anon_sym_trigger,
    ACTIONS(117), 1,
      anon_sym_alias,
    ACTIONS(120), 1,
      anon_sym_function,
    ACTIONS(123), 1,
      anon_sym_abstract,
    ACTIONS(129), 1,
      anon_sym_global,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(384), 1,
      sym_modifier,
    STATE(387), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(102), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(126), 7,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(25), 13,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_access_policy,
      sym_trigger,
      sym_alias,
      sym_function,
      sym_global_def,
      sym_abstract_link,
      aux_sym_schema_declarations_repeat1,
  [1659] = 19,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(61), 1,
      anon_sym_type,
    ACTIONS(63), 1,
      anon_sym_scalar,
    ACTIONS(67), 1,
      anon_sym_annotation,
    ACTIONS(69), 1,
      anon_sym_constraint,
    ACTIONS(71), 1,
      anon_sym_access,
    ACTIONS(73), 1,
      anon_sym_trigger,
    ACTIONS(75), 1,
      anon_sym_alias,
    ACTIONS(77), 1,
      anon_sym_function,
    ACTIONS(79), 1,
      anon_sym_abstract,
    ACTIONS(83), 1,
      anon_sym_global,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      sym_modifier,
    STATE(387), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(81), 7,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(25), 13,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_access_policy,
      sym_trigger,
      sym_alias,
      sym_function,
      sym_global_def,
      sym_abstract_link,
      aux_sym_schema_declarations_repeat1,
  [1737] = 4,
    STATE(527), 1,
      sym__scalar_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_date,
    ACTIONS(137), 32,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
      anon_sym_local_datetime,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1783] = 4,
    STATE(574), 1,
      sym__scalar_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(143), 2,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_local_date,
    ACTIONS(141), 32,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_date_duration,
      anon_sym_relative_duration,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
      anon_sym_local_datetime,
      anon_sym_local_time,
      anon_sym_sequence,
      anon_sym_anytype,
      anon_sym_anyscalar,
      anon_sym_anyreal,
      anon_sym_anyfloat,
      anon_sym_anyint,
      anon_sym_anynumeric,
      anon_sym_anyenum,
      anon_sym_anydiscrete,
      anon_sym_anycontiguous,
      anon_sym_anypoint,
  [1829] = 17,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_annotation,
    ACTIONS(151), 1,
      anon_sym_constraint,
    ACTIONS(153), 1,
      anon_sym_index,
    ACTIONS(155), 1,
      anon_sym_rewrite,
    ACTIONS(157), 1,
      anon_sym_on,
    ACTIONS(159), 1,
      anon_sym_access,
    ACTIONS(161), 1,
      anon_sym_trigger,
    ACTIONS(163), 1,
      anon_sym_extending,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(393), 1,
      sym_modifier,
    STATE(403), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(597), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(165), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(30), 9,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      sym_rewrite,
      sym_on_target_delete,
      sym_access_policy,
      sym_trigger,
      aux_sym_declarations_repeat1,
  [1898] = 17,
    ACTIONS(149), 1,
      anon_sym_annotation,
    ACTIONS(151), 1,
      anon_sym_constraint,
    ACTIONS(153), 1,
      anon_sym_index,
    ACTIONS(155), 1,
      anon_sym_rewrite,
    ACTIONS(157), 1,
      anon_sym_on,
    ACTIONS(159), 1,
      anon_sym_access,
    ACTIONS(161), 1,
      anon_sym_trigger,
    ACTIONS(163), 1,
      anon_sym_extending,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_modifier,
    STATE(403), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(597), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(165), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(31), 9,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      sym_rewrite,
      sym_on_target_delete,
      sym_access_policy,
      sym_trigger,
      aux_sym_declarations_repeat1,
  [1967] = 17,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_annotation,
    ACTIONS(179), 1,
      anon_sym_constraint,
    ACTIONS(182), 1,
      anon_sym_index,
    ACTIONS(185), 1,
      anon_sym_rewrite,
    ACTIONS(188), 1,
      anon_sym_on,
    ACTIONS(191), 1,
      anon_sym_access,
    ACTIONS(194), 1,
      anon_sym_trigger,
    ACTIONS(197), 1,
      anon_sym_extending,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(393), 1,
      sym_modifier,
    STATE(403), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(597), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(200), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(31), 9,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      sym_rewrite,
      sym_on_target_delete,
      sym_access_policy,
      sym_trigger,
      aux_sym_declarations_repeat1,
  [2036] = 17,
    ACTIONS(149), 1,
      anon_sym_annotation,
    ACTIONS(151), 1,
      anon_sym_constraint,
    ACTIONS(153), 1,
      anon_sym_index,
    ACTIONS(155), 1,
      anon_sym_rewrite,
    ACTIONS(157), 1,
      anon_sym_on,
    ACTIONS(159), 1,
      anon_sym_access,
    ACTIONS(161), 1,
      anon_sym_trigger,
    ACTIONS(163), 1,
      anon_sym_extending,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_modifier,
    STATE(403), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(597), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(165), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(31), 9,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      sym_rewrite,
      sym_on_target_delete,
      sym_access_policy,
      sym_trigger,
      aux_sym_declarations_repeat1,
  [2105] = 17,
    ACTIONS(149), 1,
      anon_sym_annotation,
    ACTIONS(151), 1,
      anon_sym_constraint,
    ACTIONS(153), 1,
      anon_sym_index,
    ACTIONS(155), 1,
      anon_sym_rewrite,
    ACTIONS(157), 1,
      anon_sym_on,
    ACTIONS(159), 1,
      anon_sym_access,
    ACTIONS(161), 1,
      anon_sym_trigger,
    ACTIONS(163), 1,
      anon_sym_extending,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_modifier,
    STATE(403), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(597), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(165), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(32), 9,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      sym_rewrite,
      sym_on_target_delete,
      sym_access_policy,
      sym_trigger,
      aux_sym_declarations_repeat1,
  [2174] = 7,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_type_repeat1,
    STATE(41), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(210), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2221] = 7,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      aux_sym_type_repeat1,
    STATE(45), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(218), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2268] = 10,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_accessor,
    STATE(78), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2321] = 5,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
    ACTIONS(234), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2363] = 5,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(238), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2404] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(67), 1,
      sym_accessor,
    STATE(68), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(210), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2449] = 5,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(218), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2490] = 5,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(218), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2531] = 5,
    ACTIONS(246), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(234), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2572] = 5,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(249), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2613] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_type_repeat1,
    STATE(69), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(218), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2658] = 5,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(43), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(238), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2699] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(255), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON_COLON,
    ACTIONS(253), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2736] = 11,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_accessor,
    STATE(78), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2789] = 11,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_accessor,
    STATE(78), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2842] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(263), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(261), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2878] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(267), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(265), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2914] = 8,
    ACTIONS(163), 1,
      anon_sym_extending,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_extending,
    STATE(149), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2960] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(279), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(277), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [2996] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(281), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3032] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(287), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(285), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3068] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(291), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(289), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3104] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(17), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON_COLON,
    ACTIONS(15), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3140] = 5,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(234), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3180] = 8,
    ACTIONS(163), 1,
      anon_sym_extending,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_extending,
    STATE(119), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(293), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3226] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(210), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3262] = 7,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_expression_repeat1,
    STATE(80), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(301), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3306] = 5,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(238), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3345] = 5,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(249), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3384] = 5,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_extending_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(305), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(303), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3423] = 5,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_extending_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(309), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3462] = 5,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3501] = 5,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_extending_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(317), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3540] = 5,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(218), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3579] = 5,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(218), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3618] = 5,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    STATE(62), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(238), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3657] = 5,
    ACTIONS(324), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(234), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3696] = 5,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3734] = 5,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(301), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3772] = 5,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3810] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(334), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3844] = 6,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3884] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(344), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3918] = 6,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      anon_sym_using,
    STATE(178), 1,
      sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [3958] = 5,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(301), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3996] = 5,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4034] = 5,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4072] = 6,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4112] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(255), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(253), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4146] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(366), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4180] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(287), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(285), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4213] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(267), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(265), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4246] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(281), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4279] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(263), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(261), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4312] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(210), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4345] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(291), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(289), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4378] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(370), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4411] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(374), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4444] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(279), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(277), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_using,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [4477] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(378), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4510] = 11,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(382), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4558] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4590] = 6,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(402), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4628] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4660] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(408), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4692] = 8,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(402), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(382), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4734] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4766] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4798] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(301), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4830] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(420), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4862] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4894] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(424), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4926] = 12,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(382), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [4976] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(430), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5008] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(434), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5040] = 4,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5074] = 5,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(402), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 14,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5110] = 9,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(402), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(382), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [5154] = 10,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(382), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [5200] = 11,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(382), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5248] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(444), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5280] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(402), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5314] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5346] = 3,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5377] = 3,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5408] = 3,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5439] = 3,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5470] = 3,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5501] = 3,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5532] = 3,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5563] = 3,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5594] = 3,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5625] = 3,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(480), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5656] = 3,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(484), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5687] = 3,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5718] = 3,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5749] = 3,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(496), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5780] = 3,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5811] = 3,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(504), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5842] = 3,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(508), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5873] = 3,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(512), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5904] = 3,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(516), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5935] = 3,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(520), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5966] = 3,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [5997] = 3,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(528), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6028] = 3,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(532), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6059] = 3,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(536), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6090] = 3,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6121] = 3,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6152] = 3,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6183] = 3,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6214] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6245] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6276] = 3,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6307] = 3,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6338] = 3,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6369] = 3,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6400] = 3,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(576), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6431] = 3,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(580), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6462] = 3,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6493] = 3,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6524] = 3,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6555] = 3,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(596), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6586] = 3,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(600), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6617] = 3,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(604), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6648] = 3,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(608), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6679] = 3,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(612), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6710] = 3,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(616), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6741] = 3,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6772] = 3,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(624), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6803] = 3,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6834] = 3,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(632), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6865] = 3,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(636), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6896] = 3,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(640), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6927] = 3,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6958] = 3,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(648), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [6989] = 3,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(652), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7020] = 3,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(656), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7051] = 3,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(660), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7082] = 3,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(664), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7113] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(668), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7144] = 3,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(672), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7175] = 3,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(676), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7206] = 3,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(680), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7237] = 3,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(684), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_global,
      sym_identifier,
  [7268] = 4,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(692), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7300] = 4,
    ACTIONS(694), 1,
      anon_sym_SEMI,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(698), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7332] = 15,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    STATE(533), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7386] = 15,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7440] = 3,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7469] = 3,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7498] = 3,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7527] = 3,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(656), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7556] = 3,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(712), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7585] = 3,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7614] = 3,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7643] = 3,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7672] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7721] = 3,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7750] = 3,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(718), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7779] = 3,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(508), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7808] = 3,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7837] = 3,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(724), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7866] = 3,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(728), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7895] = 3,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(698), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7924] = 3,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(516), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7953] = 3,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(520), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7982] = 3,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(528), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8011] = 3,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8040] = 3,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(732), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8069] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(734), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8118] = 3,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8147] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8176] = 3,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(616), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8205] = 3,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8234] = 3,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(632), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8263] = 3,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(604), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8292] = 3,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(580), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8321] = 3,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(512), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8350] = 3,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(532), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8379] = 3,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8408] = 3,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(738), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8437] = 3,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8466] = 3,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(742), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8495] = 3,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(484), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8524] = 3,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8553] = 3,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(648), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8582] = 3,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(652), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8611] = 3,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8640] = 3,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(480), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8669] = 3,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8698] = 3,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(672), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8727] = 3,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(680), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8756] = 3,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(636), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8785] = 3,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8814] = 3,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8843] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8872] = 3,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(536), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8901] = 3,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(496), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8930] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(668), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8959] = 3,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8988] = 3,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 19,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_rewrite,
      anon_sym_on,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9017] = 14,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    STATE(181), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9067] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9115] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9163] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9211] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9259] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(774), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9307] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9355] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9403] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9451] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9499] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(784), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9547] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9595] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9643] = 4,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9673] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9721] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9769] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9817] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(799), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9865] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9913] = 4,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [9943] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9991] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10039] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10087] = 14,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(182), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10137] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(816), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10185] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10233] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10281] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10329] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10377] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10425] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(828), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10473] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10521] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10569] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10617] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10665] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10713] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10761] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(842), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10809] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10857] = 4,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10887] = 4,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(329), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10917] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10965] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11013] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11061] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11109] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11157] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11205] = 13,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_AMP_AMP,
    ACTIONS(704), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11253] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(110), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11300] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(252), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11347] = 8,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11384] = 8,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(348), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11421] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(247), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11468] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(283), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11515] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(248), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11562] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(241), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11609] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(280), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11656] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(279), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11703] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(278), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11750] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(277), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11797] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11834] = 13,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(878), 1,
      anon_sym_LPAREN,
    STATE(274), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11881] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(296), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11918] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11955] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11992] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(299), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12029] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12066] = 13,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(273), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12113] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(300), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12150] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12187] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(272), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12234] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(302), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12271] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12308] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(305), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12345] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12382] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12419] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(370), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12456] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(271), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12503] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(308), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12540] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12577] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(270), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12624] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(310), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12661] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12698] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(269), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12745] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(376), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12782] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(268), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12829] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(315), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12866] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(267), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12913] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12950] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(266), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [12997] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(237), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13044] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(318), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13081] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(254), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13128] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13165] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(329), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13202] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(265), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13249] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(345), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13286] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(243), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13333] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(264), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13380] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(263), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13427] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(239), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13474] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(246), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13521] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(253), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13568] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13605] = 13,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(912), 1,
      anon_sym_LPAREN,
    STATE(250), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13652] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(191), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13699] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(240), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13746] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(324), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13783] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(311), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13820] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13857] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13894] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(94), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [13941] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [13978] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(372), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14015] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(106), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14062] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14109] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(112), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14156] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(920), 1,
      sym_identifier,
    STATE(204), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14203] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(262), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14250] = 8,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    ACTIONS(924), 1,
      anon_sym_annotation,
    ACTIONS(927), 1,
      anon_sym_using,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(355), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(930), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14287] = 8,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    ACTIONS(938), 1,
      anon_sym_annotation,
    ACTIONS(941), 1,
      anon_sym_using,
    ACTIONS(947), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(944), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14324] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(258), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14371] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(260), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14418] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14465] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(115), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14512] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(261), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14559] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14596] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14643] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(96), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14690] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(238), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14737] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(251), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14784] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [14831] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(339), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14868] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(346), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14905] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14942] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(362), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [14979] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(356), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15016] = 13,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    STATE(257), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15063] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(282), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15110] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(286), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15147] = 8,
    ACTIONS(868), 1,
      anon_sym_annotation,
    ACTIONS(870), 1,
      anon_sym_using,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(431), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(355), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(872), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15184] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(281), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15231] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(245), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15278] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(244), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15325] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(242), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15372] = 13,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_escape_sequence,
    ACTIONS(764), 1,
      sym__edgeql_chars,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(256), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(756), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(762), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(104), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [15419] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(964), 17,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [15443] = 3,
    ACTIONS(966), 1,
      anon_sym_link,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(964), 16,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [15469] = 6,
    ACTIONS(969), 1,
      anon_sym_type,
    ACTIONS(973), 1,
      anon_sym_constraint,
    ACTIONS(975), 1,
      anon_sym_access,
    ACTIONS(977), 1,
      anon_sym_trigger,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(971), 13,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [15501] = 7,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      anon_sym_COLON_EQ,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(407), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15533] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(964), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_access,
      anon_sym_trigger,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [15555] = 7,
    ACTIONS(987), 1,
      anon_sym_scalar,
    ACTIONS(991), 1,
      anon_sym_annotation,
    ACTIONS(995), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(989), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(389), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(993), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15587] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(999), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(410), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15619] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(389), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(1001), 5,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      sym_identifier,
    ACTIONS(1003), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15645] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
    ACTIONS(1008), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(402), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15677] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
    ACTIONS(1012), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(406), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15709] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    ACTIONS(1016), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(404), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15741] = 5,
    ACTIONS(1018), 1,
      anon_sym_constraint,
    ACTIONS(1020), 1,
      anon_sym_access,
    ACTIONS(1022), 1,
      anon_sym_trigger,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(971), 12,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [15769] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
    ACTIONS(1026), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(405), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15801] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
    ACTIONS(1030), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(400), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15833] = 7,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
    ACTIONS(1034), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(401), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15865] = 6,
    ACTIONS(1038), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1036), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(1041), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15895] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(409), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15924] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15953] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [15982] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16011] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1052), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16040] = 6,
    ACTIONS(1056), 1,
      anon_sym_annotation,
    ACTIONS(1060), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1054), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(411), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(1058), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16069] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16098] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16127] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16156] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16185] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(399), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16214] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16243] = 6,
    ACTIONS(983), 1,
      anon_sym_annotation,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(397), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(430), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16272] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(411), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(1001), 4,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      sym_identifier,
    ACTIONS(1074), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16297] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(964), 13,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16317] = 3,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16338] = 3,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(608), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16359] = 3,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16380] = 3,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16401] = 3,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16422] = 3,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(656), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16443] = 3,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16464] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(964), 12,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16483] = 3,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1079), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16504] = 3,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(596), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [16525] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(658), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16543] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16561] = 4,
    ACTIONS(1081), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(425), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(1083), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16583] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16601] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(490), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16619] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16637] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(470), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16655] = 4,
    ACTIONS(1086), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(425), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16677] = 4,
    ACTIONS(1088), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(425), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(985), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16699] = 11,
    ACTIONS(1090), 1,
      anon_sym_SEMI,
    ACTIONS(1092), 1,
      anon_sym_LBRACE,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    STATE(439), 1,
      sym_argspec,
    STATE(463), 1,
      sym_on,
    STATE(485), 1,
      sym_except,
    STATE(562), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16734] = 11,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_argspec,
    STATE(469), 1,
      sym_on,
    STATE(502), 1,
      sym_except,
    STATE(588), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16769] = 11,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
    ACTIONS(1108), 1,
      anon_sym_LBRACE,
    STATE(441), 1,
      sym_argspec,
    STATE(467), 1,
      sym_on,
    STATE(517), 1,
      sym_except,
    STATE(590), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16804] = 11,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    ACTIONS(1112), 1,
      anon_sym_LBRACE,
    STATE(440), 1,
      sym_argspec,
    STATE(452), 1,
      sym_on,
    STATE(509), 1,
      sym_except,
    STATE(569), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16839] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1114), 9,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_delegated,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [16855] = 9,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_LBRACE,
    STATE(450), 1,
      sym_on,
    STATE(495), 1,
      sym_except,
    STATE(561), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16884] = 6,
    ACTIONS(1120), 1,
      ts_builtin_sym_end,
    ACTIONS(1122), 1,
      anon_sym_module,
    ACTIONS(1125), 1,
      anon_sym_LBRACE,
    ACTIONS(1128), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(438), 4,
      sym_module,
      sym_schema_declarations,
      sym_extension,
      aux_sym_source_file_repeat1,
  [16907] = 9,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
    STATE(464), 1,
      sym_on,
    STATE(487), 1,
      sym_except,
    STATE(567), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16936] = 9,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    STATE(465), 1,
      sym_on,
    STATE(483), 1,
      sym_except,
    STATE(583), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16965] = 9,
    ACTIONS(1096), 1,
      anon_sym_on,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    ACTIONS(1141), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_on,
    STATE(489), 1,
      sym_except,
    STATE(589), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [16994] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_using,
    ACTIONS(1143), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(438), 4,
      sym_module,
      sym_schema_declarations,
      sym_extension,
      aux_sym_source_file_repeat1,
  [17017] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(1145), 1,
      anon_sym_COLON,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(506), 1,
      aux_sym_type_repeat1,
    STATE(510), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [17041] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    STATE(506), 1,
      aux_sym_type_repeat1,
    STATE(510), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [17065] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1151), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_on,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_except,
  [17078] = 5,
    ACTIONS(1153), 1,
      anon_sym_SEMI,
    ACTIONS(1155), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(466), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17097] = 5,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    ACTIONS(1161), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(460), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17116] = 5,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    ACTIONS(1165), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(447), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17135] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1167), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_on,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_except,
  [17148] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_except,
    STATE(594), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17171] = 5,
    ACTIONS(1173), 1,
      anon_sym_SEMI,
    ACTIONS(1175), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(460), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17190] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    STATE(483), 1,
      sym_except,
    STATE(583), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17213] = 5,
    ACTIONS(1177), 1,
      anon_sym_SEMI,
    ACTIONS(1179), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(462), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17232] = 5,
    ACTIONS(1181), 1,
      anon_sym_SEMI,
    ACTIONS(1183), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(451), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17251] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1185), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_on,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_except,
  [17264] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1187), 6,
      anon_sym_delete,
      anon_sym_restrict,
      anon_sym_allow,
      anon_sym_deferred,
      anon_sym_set,
      anon_sym_empty,
  [17277] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1189), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_on,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_except,
  [17290] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(1193), 1,
      anon_sym_LBRACE,
    STATE(507), 1,
      sym_except,
    STATE(591), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17313] = 6,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(498), 1,
      aux_sym_type_repeat1,
    STATE(505), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [17334] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1195), 2,
      anon_sym_SEMI,
      anon_sym_using,
    ACTIONS(1197), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(460), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17351] = 6,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(506), 1,
      aux_sym_type_repeat1,
    STATE(510), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [17372] = 5,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    ACTIONS(1202), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(460), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17391] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
    STATE(487), 1,
      sym_except,
    STATE(567), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17414] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1204), 1,
      anon_sym_SEMI,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
    STATE(516), 1,
      sym_except,
    STATE(576), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17437] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1208), 1,
      anon_sym_SEMI,
    ACTIONS(1210), 1,
      anon_sym_LBRACE,
    STATE(514), 1,
      sym_except,
    STATE(554), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17460] = 5,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
    ACTIONS(1214), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1157), 2,
      anon_sym_allow,
      anon_sym_deny,
    STATE(460), 2,
      sym_access_policy_action,
      aux_sym_access_policy_repeat1,
  [17479] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    ACTIONS(1141), 1,
      anon_sym_LBRACE,
    STATE(489), 1,
      sym_except,
    STATE(589), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17502] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1216), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_on,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_except,
  [17515] = 7,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_LBRACE,
    STATE(495), 1,
      sym_except,
    STATE(561), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17538] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1220), 2,
      anon_sym_read,
      anon_sym_write,
    ACTIONS(1218), 4,
      anon_sym_SEMI,
      anon_sym_using,
      anon_sym_allow,
      anon_sym_deny,
  [17553] = 3,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_LBRACE,
      anon_sym_using,
  [17567] = 6,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(1224), 1,
      anon_sym_SEMI,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1228), 1,
      anon_sym_COLON_EQ,
    STATE(118), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17587] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_using,
  [17599] = 5,
    ACTIONS(1230), 1,
      anon_sym_SQUOTE,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1234), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [17617] = 6,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(1237), 1,
      anon_sym_SEMI,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(1241), 1,
      anon_sym_COLON_EQ,
    STATE(146), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17637] = 6,
    ACTIONS(1243), 1,
      anon_sym_SEMI,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_COLON_EQ,
    STATE(209), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17657] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_using,
  [17669] = 4,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON_COLON,
  [17685] = 6,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    ACTIONS(1253), 1,
      anon_sym_COLON,
    ACTIONS(1255), 1,
      anon_sym_COLON_EQ,
    STATE(165), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17705] = 6,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    ACTIONS(1257), 1,
      anon_sym_SEMI,
    ACTIONS(1259), 1,
      anon_sym_COLON,
    ACTIONS(1261), 1,
      anon_sym_COLON_EQ,
    STATE(219), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17725] = 6,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    ACTIONS(1263), 1,
      anon_sym_SEMI,
    ACTIONS(1265), 1,
      anon_sym_COLON,
    ACTIONS(1267), 1,
      anon_sym_COLON_EQ,
    STATE(206), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17745] = 3,
    ACTIONS(1271), 1,
      anon_sym_update,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1269), 4,
      anon_sym_insert,
      anon_sym_delete,
      anon_sym_all,
      anon_sym_select,
  [17759] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1208), 1,
      anon_sym_SEMI,
    ACTIONS(1210), 1,
      anon_sym_LBRACE,
    STATE(554), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17776] = 4,
    ACTIONS(1273), 1,
      anon_sym_DQUOTE,
    STATE(518), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1275), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [17791] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
    STATE(567), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17808] = 5,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(1098), 1,
      anon_sym_extending,
    STATE(172), 1,
      sym_declarations,
    STATE(593), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17825] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1204), 1,
      anon_sym_SEMI,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
    STATE(576), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17842] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1277), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_extending,
      anon_sym_except,
  [17853] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(1193), 1,
      anon_sym_LBRACE,
    STATE(591), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17870] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1279), 4,
      anon_sym_SEMI,
      anon_sym_using,
      anon_sym_allow,
      anon_sym_deny,
  [17881] = 4,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(497), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [17896] = 5,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(1281), 1,
      sym_identifier,
    STATE(599), 1,
      sym_string,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17913] = 5,
    ACTIONS(752), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(1281), 1,
      sym_identifier,
    STATE(673), 1,
      sym_string,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17930] = 5,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(1098), 1,
      anon_sym_extending,
    STATE(147), 1,
      sym_declarations,
    STATE(559), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17947] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 1,
      anon_sym_LBRACE,
    STATE(594), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17964] = 5,
    ACTIONS(1100), 1,
      anon_sym_except,
    ACTIONS(1283), 1,
      anon_sym_SEMI,
    ACTIONS(1285), 1,
      anon_sym_LBRACE,
    STATE(582), 1,
      sym_except,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [17981] = 4,
    ACTIONS(1287), 1,
      anon_sym_COLON_COLON,
    STATE(497), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [17996] = 4,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(497), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [18011] = 4,
    ACTIONS(1290), 1,
      anon_sym_SQUOTE,
    STATE(508), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1292), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18026] = 4,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    STATE(511), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1296), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18041] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1218), 4,
      anon_sym_SEMI,
      anon_sym_using,
      anon_sym_allow,
      anon_sym_deny,
  [18052] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_LBRACE,
    STATE(561), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18069] = 5,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(1098), 1,
      anon_sym_extending,
    STATE(151), 1,
      sym_declarations,
    STATE(586), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18086] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1298), 1,
      anon_sym_SEMI,
    ACTIONS(1300), 1,
      anon_sym_LBRACE,
    STATE(571), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18103] = 4,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(491), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [18118] = 4,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(497), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [18133] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1302), 1,
      anon_sym_SEMI,
    ACTIONS(1304), 1,
      anon_sym_LBRACE,
    STATE(553), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18150] = 4,
    ACTIONS(1306), 1,
      anon_sym_SQUOTE,
    STATE(474), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1308), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18165] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    STATE(583), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18182] = 4,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    STATE(498), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [18197] = 4,
    ACTIONS(1273), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1308), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18212] = 4,
    ACTIONS(1306), 1,
      anon_sym_SQUOTE,
    STATE(515), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1310), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18227] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_LBRACE,
      anon_sym_using,
  [18238] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1312), 1,
      anon_sym_SEMI,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    STATE(595), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18255] = 4,
    ACTIONS(1316), 1,
      anon_sym_SQUOTE,
    STATE(474), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1308), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18270] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(1320), 1,
      anon_sym_LBRACE,
    STATE(592), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18287] = 5,
    ACTIONS(1098), 1,
      anon_sym_extending,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    ACTIONS(1141), 1,
      anon_sym_LBRACE,
    STATE(589), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18304] = 4,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1308), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [18319] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1324), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_LBRACE,
      anon_sym_using,
  [18330] = 4,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18344] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1328), 3,
      anon_sym_insert,
      anon_sym_update,
      anon_sym_delete,
  [18354] = 4,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18368] = 4,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_GT,
    STATE(523), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18382] = 4,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18396] = 4,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_GT,
    STATE(536), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18410] = 4,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18424] = 4,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18438] = 4,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_GT,
    STATE(532), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18452] = 4,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18466] = 4,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_GT,
    STATE(552), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18480] = 4,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_GT,
    STATE(530), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18494] = 4,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_GT,
    STATE(552), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18508] = 4,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18522] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_using,
    STATE(543), 1,
      aux_sym_rewrite_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18536] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1360), 3,
      anon_sym_insert,
      anon_sym_update,
      anon_sym_delete,
  [18546] = 4,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_GT,
    STATE(523), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18560] = 4,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_GT,
    STATE(539), 1,
      aux_sym_enum_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18574] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1368), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_extending,
  [18584] = 4,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_GT,
    STATE(542), 1,
      aux_sym_enum_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18598] = 4,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_GT,
    STATE(523), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18612] = 4,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_using,
    STATE(541), 1,
      aux_sym_rewrite_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18626] = 4,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1382), 1,
      anon_sym_GT,
    STATE(542), 1,
      aux_sym_enum_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18640] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_using,
    STATE(541), 1,
      aux_sym_rewrite_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18654] = 4,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18668] = 4,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18682] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1388), 3,
      anon_sym_insert,
      anon_sym_update,
      anon_sym_delete,
  [18692] = 4,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18706] = 4,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    STATE(548), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18720] = 4,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18734] = 4,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_GT,
    STATE(540), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18748] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1395), 3,
      anon_sym_insert,
      anon_sym_update,
      anon_sym_delete,
  [18758] = 4,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_GT,
    STATE(552), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18772] = 3,
    ACTIONS(1402), 1,
      anon_sym_SEMI,
    ACTIONS(1404), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18783] = 3,
    ACTIONS(1312), 1,
      anon_sym_SEMI,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18794] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1406), 2,
      anon_sym_after,
      anon_sym_before,
  [18803] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1408), 2,
      anon_sym_after,
      anon_sym_before,
  [18812] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1410), 2,
      anon_sym_after,
      anon_sym_before,
  [18821] = 3,
    ACTIONS(1412), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_schema_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18832] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18843] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1414), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [18852] = 3,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18863] = 3,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18874] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [18883] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1418), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [18892] = 3,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
    ACTIONS(1422), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18903] = 3,
    ACTIONS(1424), 1,
      anon_sym_LPAREN,
    ACTIONS(1426), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18914] = 3,
    ACTIONS(1204), 1,
      anon_sym_SEMI,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18925] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1428), 2,
      anon_sym_after,
      anon_sym_before,
  [18934] = 3,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18945] = 3,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18956] = 3,
    ACTIONS(1430), 1,
      anon_sym_SEMI,
    ACTIONS(1432), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18967] = 3,
    ACTIONS(1434), 1,
      anon_sym_LBRACE,
    ACTIONS(1436), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18978] = 3,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
    STATE(646), 1,
      sym_argspec,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [18989] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1438), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18998] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1440), 2,
      anon_sym_insert,
      anon_sym_update,
  [19007] = 3,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(1320), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19018] = 3,
    ACTIONS(1096), 1,
      anon_sym_on,
    STATE(496), 1,
      sym_on,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19029] = 3,
    ACTIONS(1442), 1,
      anon_sym_COLON,
    ACTIONS(1444), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19040] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1446), 2,
      anon_sym_insert,
      anon_sym_update,
  [19049] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1333), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [19058] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(471), 1,
      sym_schema_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19069] = 3,
    ACTIONS(1448), 1,
      anon_sym_SEMI,
    ACTIONS(1450), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19080] = 3,
    ACTIONS(1208), 1,
      anon_sym_SEMI,
    ACTIONS(1210), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19091] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_using,
  [19100] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1382), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [19109] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19120] = 3,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(1452), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19131] = 3,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19142] = 3,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(1193), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19153] = 3,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    ACTIONS(1141), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19164] = 3,
    ACTIONS(1302), 1,
      anon_sym_SEMI,
    ACTIONS(1304), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19175] = 3,
    ACTIONS(1454), 1,
      anon_sym_SEMI,
    ACTIONS(1456), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19186] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19197] = 3,
    ACTIONS(1298), 1,
      anon_sym_SEMI,
    ACTIONS(1300), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19208] = 3,
    ACTIONS(1458), 1,
      anon_sym_SEMI,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19219] = 2,
    ACTIONS(1462), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19227] = 2,
    ACTIONS(1464), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19235] = 2,
    ACTIONS(1466), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19243] = 2,
    ACTIONS(1468), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19251] = 2,
    ACTIONS(1454), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19259] = 2,
    ACTIONS(1470), 1,
      anon_sym_each,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19267] = 2,
    ACTIONS(1472), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19275] = 2,
    ACTIONS(1312), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19283] = 2,
    ACTIONS(1474), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19291] = 2,
    ACTIONS(1476), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19299] = 2,
    ACTIONS(1478), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19307] = 2,
    ACTIONS(1480), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19315] = 2,
    ACTIONS(1458), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19323] = 2,
    ACTIONS(1482), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19331] = 2,
    ACTIONS(1484), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19339] = 2,
    ACTIONS(1402), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19347] = 2,
    ACTIONS(1486), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19355] = 2,
    ACTIONS(1488), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19363] = 2,
    ACTIONS(1490), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19371] = 2,
    ACTIONS(1492), 1,
      anon_sym_COLON,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19379] = 2,
    ACTIONS(1494), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19387] = 2,
    ACTIONS(1496), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19395] = 2,
    ACTIONS(1498), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19403] = 2,
    ACTIONS(1302), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19411] = 2,
    ACTIONS(1500), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19419] = 2,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19427] = 2,
    ACTIONS(1504), 1,
      anon_sym_policy,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19435] = 2,
    ACTIONS(1506), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19443] = 2,
    ACTIONS(1508), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19451] = 2,
    ACTIONS(1510), 1,
      anon_sym_do,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19459] = 2,
    ACTIONS(1512), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19467] = 2,
    ACTIONS(1514), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19475] = 2,
    ACTIONS(1516), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19483] = 2,
    ACTIONS(1518), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19491] = 2,
    ACTIONS(1520), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19499] = 2,
    ACTIONS(1522), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19507] = 2,
    ACTIONS(1524), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19515] = 2,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19523] = 2,
    ACTIONS(1526), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19531] = 2,
    ACTIONS(1528), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19539] = 2,
    ACTIONS(1530), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19547] = 2,
    ACTIONS(1532), 1,
      anon_sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19555] = 2,
    ACTIONS(1534), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19563] = 2,
    ACTIONS(1536), 1,
      anon_sym_each,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19571] = 2,
    ACTIONS(1538), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19579] = 2,
    ACTIONS(1540), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19587] = 2,
    ACTIONS(1542), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19595] = 2,
    ACTIONS(1544), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19603] = 2,
    ACTIONS(1546), 1,
      anon_sym_policy,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19611] = 2,
    ACTIONS(1548), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19619] = 2,
    ACTIONS(1550), 1,
      anon_sym_DASH_GT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19627] = 2,
    ACTIONS(1552), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19635] = 2,
    ACTIONS(1554), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19643] = 2,
    ACTIONS(1208), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19651] = 2,
    ACTIONS(1556), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19659] = 2,
    ACTIONS(1558), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19667] = 2,
    ACTIONS(1560), 1,
      anon_sym_GT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19675] = 2,
    ACTIONS(1562), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19683] = 2,
    ACTIONS(1564), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19691] = 2,
    ACTIONS(1566), 1,
      anon_sym_do,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19699] = 2,
    ACTIONS(1568), 1,
      anon_sym_target,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19707] = 2,
    ACTIONS(1570), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19715] = 2,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19723] = 2,
    ACTIONS(1572), 1,
      anon_sym_GT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19731] = 2,
    ACTIONS(1574), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19739] = 2,
    ACTIONS(1576), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19747] = 2,
    ACTIONS(1430), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19755] = 2,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19763] = 2,
    ACTIONS(1580), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19771] = 2,
    ACTIONS(1582), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19779] = 2,
    ACTIONS(1584), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19787] = 2,
    ACTIONS(1586), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19795] = 2,
    ACTIONS(1588), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19803] = 2,
    ACTIONS(1298), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19811] = 2,
    ACTIONS(1590), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19819] = 2,
    ACTIONS(1592), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19827] = 2,
    ACTIONS(1594), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19835] = 2,
    ACTIONS(1596), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19843] = 2,
    ACTIONS(1598), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19851] = 2,
    ACTIONS(1600), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19859] = 2,
    ACTIONS(1602), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19867] = 2,
    ACTIONS(1604), 1,
      anon_sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19875] = 2,
    ACTIONS(1606), 1,
      anon_sym_extension,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19883] = 2,
    ACTIONS(1608), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19891] = 2,
    ACTIONS(1610), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19899] = 2,
    ACTIONS(1612), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19907] = 2,
    ACTIONS(1614), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19915] = 2,
    ACTIONS(1616), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19923] = 2,
    ACTIONS(1618), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19931] = 2,
    ACTIONS(1620), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19939] = 2,
    ACTIONS(1622), 1,
      anon_sym_for,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19947] = 2,
    ACTIONS(1624), 1,
      anon_sym_policy,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19955] = 2,
    ACTIONS(1626), 1,
      anon_sym_policy,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19963] = 2,
    ACTIONS(1628), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19971] = 2,
    ACTIONS(1630), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19979] = 2,
    ACTIONS(1632), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19987] = 2,
    ACTIONS(1634), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [19995] = 2,
    ACTIONS(1636), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20003] = 2,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20011] = 2,
    ACTIONS(1638), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20019] = 2,
    ACTIONS(1204), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20027] = 2,
    ACTIONS(1640), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20035] = 2,
    ACTIONS(1642), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20043] = 2,
    ACTIONS(1644), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20051] = 2,
    ACTIONS(1646), 1,
      anon_sym_delete,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20059] = 2,
    ACTIONS(1648), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20067] = 2,
    ACTIONS(1650), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20075] = 2,
    ACTIONS(1652), 1,
      anon_sym_do,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20083] = 2,
    ACTIONS(1654), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20091] = 2,
    ACTIONS(1656), 1,
      anon_sym_do,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20099] = 2,
    ACTIONS(1658), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20107] = 2,
    ACTIONS(1660), 1,
      anon_sym_for,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20115] = 2,
    ACTIONS(1662), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20123] = 2,
    ACTIONS(1664), 1,
      anon_sym_each,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20131] = 2,
    ACTIONS(1666), 1,
      anon_sym_each,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20139] = 2,
    ACTIONS(1668), 1,
      anon_sym_for,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20147] = 2,
    ACTIONS(1670), 1,
      anon_sym_for,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20155] = 2,
    ACTIONS(1672), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20163] = 2,
    ACTIONS(1674), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20171] = 2,
    ACTIONS(1676), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20179] = 2,
    ACTIONS(1678), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20187] = 2,
    ACTIONS(1680), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [20195] = 2,
    ACTIONS(1682), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 133,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 275,
  [SMALL_STATE(7)] = 342,
  [SMALL_STATE(8)] = 409,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 543,
  [SMALL_STATE(11)] = 610,
  [SMALL_STATE(12)] = 677,
  [SMALL_STATE(13)] = 744,
  [SMALL_STATE(14)] = 811,
  [SMALL_STATE(15)] = 878,
  [SMALL_STATE(16)] = 945,
  [SMALL_STATE(17)] = 1012,
  [SMALL_STATE(18)] = 1079,
  [SMALL_STATE(19)] = 1146,
  [SMALL_STATE(20)] = 1213,
  [SMALL_STATE(21)] = 1280,
  [SMALL_STATE(22)] = 1347,
  [SMALL_STATE(23)] = 1425,
  [SMALL_STATE(24)] = 1503,
  [SMALL_STATE(25)] = 1581,
  [SMALL_STATE(26)] = 1659,
  [SMALL_STATE(27)] = 1737,
  [SMALL_STATE(28)] = 1783,
  [SMALL_STATE(29)] = 1829,
  [SMALL_STATE(30)] = 1898,
  [SMALL_STATE(31)] = 1967,
  [SMALL_STATE(32)] = 2036,
  [SMALL_STATE(33)] = 2105,
  [SMALL_STATE(34)] = 2174,
  [SMALL_STATE(35)] = 2221,
  [SMALL_STATE(36)] = 2268,
  [SMALL_STATE(37)] = 2321,
  [SMALL_STATE(38)] = 2363,
  [SMALL_STATE(39)] = 2404,
  [SMALL_STATE(40)] = 2449,
  [SMALL_STATE(41)] = 2490,
  [SMALL_STATE(42)] = 2531,
  [SMALL_STATE(43)] = 2572,
  [SMALL_STATE(44)] = 2613,
  [SMALL_STATE(45)] = 2658,
  [SMALL_STATE(46)] = 2699,
  [SMALL_STATE(47)] = 2736,
  [SMALL_STATE(48)] = 2789,
  [SMALL_STATE(49)] = 2842,
  [SMALL_STATE(50)] = 2878,
  [SMALL_STATE(51)] = 2914,
  [SMALL_STATE(52)] = 2960,
  [SMALL_STATE(53)] = 2996,
  [SMALL_STATE(54)] = 3032,
  [SMALL_STATE(55)] = 3068,
  [SMALL_STATE(56)] = 3104,
  [SMALL_STATE(57)] = 3140,
  [SMALL_STATE(58)] = 3180,
  [SMALL_STATE(59)] = 3226,
  [SMALL_STATE(60)] = 3262,
  [SMALL_STATE(61)] = 3306,
  [SMALL_STATE(62)] = 3345,
  [SMALL_STATE(63)] = 3384,
  [SMALL_STATE(64)] = 3423,
  [SMALL_STATE(65)] = 3462,
  [SMALL_STATE(66)] = 3501,
  [SMALL_STATE(67)] = 3540,
  [SMALL_STATE(68)] = 3579,
  [SMALL_STATE(69)] = 3618,
  [SMALL_STATE(70)] = 3657,
  [SMALL_STATE(71)] = 3696,
  [SMALL_STATE(72)] = 3734,
  [SMALL_STATE(73)] = 3772,
  [SMALL_STATE(74)] = 3810,
  [SMALL_STATE(75)] = 3844,
  [SMALL_STATE(76)] = 3884,
  [SMALL_STATE(77)] = 3918,
  [SMALL_STATE(78)] = 3958,
  [SMALL_STATE(79)] = 3996,
  [SMALL_STATE(80)] = 4034,
  [SMALL_STATE(81)] = 4072,
  [SMALL_STATE(82)] = 4112,
  [SMALL_STATE(83)] = 4146,
  [SMALL_STATE(84)] = 4180,
  [SMALL_STATE(85)] = 4213,
  [SMALL_STATE(86)] = 4246,
  [SMALL_STATE(87)] = 4279,
  [SMALL_STATE(88)] = 4312,
  [SMALL_STATE(89)] = 4345,
  [SMALL_STATE(90)] = 4378,
  [SMALL_STATE(91)] = 4411,
  [SMALL_STATE(92)] = 4444,
  [SMALL_STATE(93)] = 4477,
  [SMALL_STATE(94)] = 4510,
  [SMALL_STATE(95)] = 4558,
  [SMALL_STATE(96)] = 4590,
  [SMALL_STATE(97)] = 4628,
  [SMALL_STATE(98)] = 4660,
  [SMALL_STATE(99)] = 4692,
  [SMALL_STATE(100)] = 4734,
  [SMALL_STATE(101)] = 4766,
  [SMALL_STATE(102)] = 4798,
  [SMALL_STATE(103)] = 4830,
  [SMALL_STATE(104)] = 4862,
  [SMALL_STATE(105)] = 4894,
  [SMALL_STATE(106)] = 4926,
  [SMALL_STATE(107)] = 4976,
  [SMALL_STATE(108)] = 5008,
  [SMALL_STATE(109)] = 5040,
  [SMALL_STATE(110)] = 5074,
  [SMALL_STATE(111)] = 5110,
  [SMALL_STATE(112)] = 5154,
  [SMALL_STATE(113)] = 5200,
  [SMALL_STATE(114)] = 5248,
  [SMALL_STATE(115)] = 5280,
  [SMALL_STATE(116)] = 5314,
  [SMALL_STATE(117)] = 5346,
  [SMALL_STATE(118)] = 5377,
  [SMALL_STATE(119)] = 5408,
  [SMALL_STATE(120)] = 5439,
  [SMALL_STATE(121)] = 5470,
  [SMALL_STATE(122)] = 5501,
  [SMALL_STATE(123)] = 5532,
  [SMALL_STATE(124)] = 5563,
  [SMALL_STATE(125)] = 5594,
  [SMALL_STATE(126)] = 5625,
  [SMALL_STATE(127)] = 5656,
  [SMALL_STATE(128)] = 5687,
  [SMALL_STATE(129)] = 5718,
  [SMALL_STATE(130)] = 5749,
  [SMALL_STATE(131)] = 5780,
  [SMALL_STATE(132)] = 5811,
  [SMALL_STATE(133)] = 5842,
  [SMALL_STATE(134)] = 5873,
  [SMALL_STATE(135)] = 5904,
  [SMALL_STATE(136)] = 5935,
  [SMALL_STATE(137)] = 5966,
  [SMALL_STATE(138)] = 5997,
  [SMALL_STATE(139)] = 6028,
  [SMALL_STATE(140)] = 6059,
  [SMALL_STATE(141)] = 6090,
  [SMALL_STATE(142)] = 6121,
  [SMALL_STATE(143)] = 6152,
  [SMALL_STATE(144)] = 6183,
  [SMALL_STATE(145)] = 6214,
  [SMALL_STATE(146)] = 6245,
  [SMALL_STATE(147)] = 6276,
  [SMALL_STATE(148)] = 6307,
  [SMALL_STATE(149)] = 6338,
  [SMALL_STATE(150)] = 6369,
  [SMALL_STATE(151)] = 6400,
  [SMALL_STATE(152)] = 6431,
  [SMALL_STATE(153)] = 6462,
  [SMALL_STATE(154)] = 6493,
  [SMALL_STATE(155)] = 6524,
  [SMALL_STATE(156)] = 6555,
  [SMALL_STATE(157)] = 6586,
  [SMALL_STATE(158)] = 6617,
  [SMALL_STATE(159)] = 6648,
  [SMALL_STATE(160)] = 6679,
  [SMALL_STATE(161)] = 6710,
  [SMALL_STATE(162)] = 6741,
  [SMALL_STATE(163)] = 6772,
  [SMALL_STATE(164)] = 6803,
  [SMALL_STATE(165)] = 6834,
  [SMALL_STATE(166)] = 6865,
  [SMALL_STATE(167)] = 6896,
  [SMALL_STATE(168)] = 6927,
  [SMALL_STATE(169)] = 6958,
  [SMALL_STATE(170)] = 6989,
  [SMALL_STATE(171)] = 7020,
  [SMALL_STATE(172)] = 7051,
  [SMALL_STATE(173)] = 7082,
  [SMALL_STATE(174)] = 7113,
  [SMALL_STATE(175)] = 7144,
  [SMALL_STATE(176)] = 7175,
  [SMALL_STATE(177)] = 7206,
  [SMALL_STATE(178)] = 7237,
  [SMALL_STATE(179)] = 7268,
  [SMALL_STATE(180)] = 7300,
  [SMALL_STATE(181)] = 7332,
  [SMALL_STATE(182)] = 7386,
  [SMALL_STATE(183)] = 7440,
  [SMALL_STATE(184)] = 7469,
  [SMALL_STATE(185)] = 7498,
  [SMALL_STATE(186)] = 7527,
  [SMALL_STATE(187)] = 7556,
  [SMALL_STATE(188)] = 7585,
  [SMALL_STATE(189)] = 7614,
  [SMALL_STATE(190)] = 7643,
  [SMALL_STATE(191)] = 7672,
  [SMALL_STATE(192)] = 7721,
  [SMALL_STATE(193)] = 7750,
  [SMALL_STATE(194)] = 7779,
  [SMALL_STATE(195)] = 7808,
  [SMALL_STATE(196)] = 7837,
  [SMALL_STATE(197)] = 7866,
  [SMALL_STATE(198)] = 7895,
  [SMALL_STATE(199)] = 7924,
  [SMALL_STATE(200)] = 7953,
  [SMALL_STATE(201)] = 7982,
  [SMALL_STATE(202)] = 8011,
  [SMALL_STATE(203)] = 8040,
  [SMALL_STATE(204)] = 8069,
  [SMALL_STATE(205)] = 8118,
  [SMALL_STATE(206)] = 8147,
  [SMALL_STATE(207)] = 8176,
  [SMALL_STATE(208)] = 8205,
  [SMALL_STATE(209)] = 8234,
  [SMALL_STATE(210)] = 8263,
  [SMALL_STATE(211)] = 8292,
  [SMALL_STATE(212)] = 8321,
  [SMALL_STATE(213)] = 8350,
  [SMALL_STATE(214)] = 8379,
  [SMALL_STATE(215)] = 8408,
  [SMALL_STATE(216)] = 8437,
  [SMALL_STATE(217)] = 8466,
  [SMALL_STATE(218)] = 8495,
  [SMALL_STATE(219)] = 8524,
  [SMALL_STATE(220)] = 8553,
  [SMALL_STATE(221)] = 8582,
  [SMALL_STATE(222)] = 8611,
  [SMALL_STATE(223)] = 8640,
  [SMALL_STATE(224)] = 8669,
  [SMALL_STATE(225)] = 8698,
  [SMALL_STATE(226)] = 8727,
  [SMALL_STATE(227)] = 8756,
  [SMALL_STATE(228)] = 8785,
  [SMALL_STATE(229)] = 8814,
  [SMALL_STATE(230)] = 8843,
  [SMALL_STATE(231)] = 8872,
  [SMALL_STATE(232)] = 8901,
  [SMALL_STATE(233)] = 8930,
  [SMALL_STATE(234)] = 8959,
  [SMALL_STATE(235)] = 8988,
  [SMALL_STATE(236)] = 9017,
  [SMALL_STATE(237)] = 9067,
  [SMALL_STATE(238)] = 9115,
  [SMALL_STATE(239)] = 9163,
  [SMALL_STATE(240)] = 9211,
  [SMALL_STATE(241)] = 9259,
  [SMALL_STATE(242)] = 9307,
  [SMALL_STATE(243)] = 9355,
  [SMALL_STATE(244)] = 9403,
  [SMALL_STATE(245)] = 9451,
  [SMALL_STATE(246)] = 9499,
  [SMALL_STATE(247)] = 9547,
  [SMALL_STATE(248)] = 9595,
  [SMALL_STATE(249)] = 9643,
  [SMALL_STATE(250)] = 9673,
  [SMALL_STATE(251)] = 9721,
  [SMALL_STATE(252)] = 9769,
  [SMALL_STATE(253)] = 9817,
  [SMALL_STATE(254)] = 9865,
  [SMALL_STATE(255)] = 9913,
  [SMALL_STATE(256)] = 9943,
  [SMALL_STATE(257)] = 9991,
  [SMALL_STATE(258)] = 10039,
  [SMALL_STATE(259)] = 10087,
  [SMALL_STATE(260)] = 10137,
  [SMALL_STATE(261)] = 10185,
  [SMALL_STATE(262)] = 10233,
  [SMALL_STATE(263)] = 10281,
  [SMALL_STATE(264)] = 10329,
  [SMALL_STATE(265)] = 10377,
  [SMALL_STATE(266)] = 10425,
  [SMALL_STATE(267)] = 10473,
  [SMALL_STATE(268)] = 10521,
  [SMALL_STATE(269)] = 10569,
  [SMALL_STATE(270)] = 10617,
  [SMALL_STATE(271)] = 10665,
  [SMALL_STATE(272)] = 10713,
  [SMALL_STATE(273)] = 10761,
  [SMALL_STATE(274)] = 10809,
  [SMALL_STATE(275)] = 10857,
  [SMALL_STATE(276)] = 10887,
  [SMALL_STATE(277)] = 10917,
  [SMALL_STATE(278)] = 10965,
  [SMALL_STATE(279)] = 11013,
  [SMALL_STATE(280)] = 11061,
  [SMALL_STATE(281)] = 11109,
  [SMALL_STATE(282)] = 11157,
  [SMALL_STATE(283)] = 11205,
  [SMALL_STATE(284)] = 11253,
  [SMALL_STATE(285)] = 11300,
  [SMALL_STATE(286)] = 11347,
  [SMALL_STATE(287)] = 11384,
  [SMALL_STATE(288)] = 11421,
  [SMALL_STATE(289)] = 11468,
  [SMALL_STATE(290)] = 11515,
  [SMALL_STATE(291)] = 11562,
  [SMALL_STATE(292)] = 11609,
  [SMALL_STATE(293)] = 11656,
  [SMALL_STATE(294)] = 11703,
  [SMALL_STATE(295)] = 11750,
  [SMALL_STATE(296)] = 11797,
  [SMALL_STATE(297)] = 11834,
  [SMALL_STATE(298)] = 11881,
  [SMALL_STATE(299)] = 11918,
  [SMALL_STATE(300)] = 11955,
  [SMALL_STATE(301)] = 11992,
  [SMALL_STATE(302)] = 12029,
  [SMALL_STATE(303)] = 12066,
  [SMALL_STATE(304)] = 12113,
  [SMALL_STATE(305)] = 12150,
  [SMALL_STATE(306)] = 12187,
  [SMALL_STATE(307)] = 12234,
  [SMALL_STATE(308)] = 12271,
  [SMALL_STATE(309)] = 12308,
  [SMALL_STATE(310)] = 12345,
  [SMALL_STATE(311)] = 12382,
  [SMALL_STATE(312)] = 12419,
  [SMALL_STATE(313)] = 12456,
  [SMALL_STATE(314)] = 12503,
  [SMALL_STATE(315)] = 12540,
  [SMALL_STATE(316)] = 12577,
  [SMALL_STATE(317)] = 12624,
  [SMALL_STATE(318)] = 12661,
  [SMALL_STATE(319)] = 12698,
  [SMALL_STATE(320)] = 12745,
  [SMALL_STATE(321)] = 12782,
  [SMALL_STATE(322)] = 12829,
  [SMALL_STATE(323)] = 12866,
  [SMALL_STATE(324)] = 12913,
  [SMALL_STATE(325)] = 12950,
  [SMALL_STATE(326)] = 12997,
  [SMALL_STATE(327)] = 13044,
  [SMALL_STATE(328)] = 13081,
  [SMALL_STATE(329)] = 13128,
  [SMALL_STATE(330)] = 13165,
  [SMALL_STATE(331)] = 13202,
  [SMALL_STATE(332)] = 13249,
  [SMALL_STATE(333)] = 13286,
  [SMALL_STATE(334)] = 13333,
  [SMALL_STATE(335)] = 13380,
  [SMALL_STATE(336)] = 13427,
  [SMALL_STATE(337)] = 13474,
  [SMALL_STATE(338)] = 13521,
  [SMALL_STATE(339)] = 13568,
  [SMALL_STATE(340)] = 13605,
  [SMALL_STATE(341)] = 13652,
  [SMALL_STATE(342)] = 13699,
  [SMALL_STATE(343)] = 13746,
  [SMALL_STATE(344)] = 13783,
  [SMALL_STATE(345)] = 13820,
  [SMALL_STATE(346)] = 13857,
  [SMALL_STATE(347)] = 13894,
  [SMALL_STATE(348)] = 13941,
  [SMALL_STATE(349)] = 13978,
  [SMALL_STATE(350)] = 14015,
  [SMALL_STATE(351)] = 14062,
  [SMALL_STATE(352)] = 14109,
  [SMALL_STATE(353)] = 14156,
  [SMALL_STATE(354)] = 14203,
  [SMALL_STATE(355)] = 14250,
  [SMALL_STATE(356)] = 14287,
  [SMALL_STATE(357)] = 14324,
  [SMALL_STATE(358)] = 14371,
  [SMALL_STATE(359)] = 14418,
  [SMALL_STATE(360)] = 14465,
  [SMALL_STATE(361)] = 14512,
  [SMALL_STATE(362)] = 14559,
  [SMALL_STATE(363)] = 14596,
  [SMALL_STATE(364)] = 14643,
  [SMALL_STATE(365)] = 14690,
  [SMALL_STATE(366)] = 14737,
  [SMALL_STATE(367)] = 14784,
  [SMALL_STATE(368)] = 14831,
  [SMALL_STATE(369)] = 14868,
  [SMALL_STATE(370)] = 14905,
  [SMALL_STATE(371)] = 14942,
  [SMALL_STATE(372)] = 14979,
  [SMALL_STATE(373)] = 15016,
  [SMALL_STATE(374)] = 15063,
  [SMALL_STATE(375)] = 15110,
  [SMALL_STATE(376)] = 15147,
  [SMALL_STATE(377)] = 15184,
  [SMALL_STATE(378)] = 15231,
  [SMALL_STATE(379)] = 15278,
  [SMALL_STATE(380)] = 15325,
  [SMALL_STATE(381)] = 15372,
  [SMALL_STATE(382)] = 15419,
  [SMALL_STATE(383)] = 15443,
  [SMALL_STATE(384)] = 15469,
  [SMALL_STATE(385)] = 15501,
  [SMALL_STATE(386)] = 15533,
  [SMALL_STATE(387)] = 15555,
  [SMALL_STATE(388)] = 15587,
  [SMALL_STATE(389)] = 15619,
  [SMALL_STATE(390)] = 15645,
  [SMALL_STATE(391)] = 15677,
  [SMALL_STATE(392)] = 15709,
  [SMALL_STATE(393)] = 15741,
  [SMALL_STATE(394)] = 15769,
  [SMALL_STATE(395)] = 15801,
  [SMALL_STATE(396)] = 15833,
  [SMALL_STATE(397)] = 15865,
  [SMALL_STATE(398)] = 15895,
  [SMALL_STATE(399)] = 15924,
  [SMALL_STATE(400)] = 15953,
  [SMALL_STATE(401)] = 15982,
  [SMALL_STATE(402)] = 16011,
  [SMALL_STATE(403)] = 16040,
  [SMALL_STATE(404)] = 16069,
  [SMALL_STATE(405)] = 16098,
  [SMALL_STATE(406)] = 16127,
  [SMALL_STATE(407)] = 16156,
  [SMALL_STATE(408)] = 16185,
  [SMALL_STATE(409)] = 16214,
  [SMALL_STATE(410)] = 16243,
  [SMALL_STATE(411)] = 16272,
  [SMALL_STATE(412)] = 16297,
  [SMALL_STATE(413)] = 16317,
  [SMALL_STATE(414)] = 16338,
  [SMALL_STATE(415)] = 16359,
  [SMALL_STATE(416)] = 16380,
  [SMALL_STATE(417)] = 16401,
  [SMALL_STATE(418)] = 16422,
  [SMALL_STATE(419)] = 16443,
  [SMALL_STATE(420)] = 16464,
  [SMALL_STATE(421)] = 16483,
  [SMALL_STATE(422)] = 16504,
  [SMALL_STATE(423)] = 16525,
  [SMALL_STATE(424)] = 16543,
  [SMALL_STATE(425)] = 16561,
  [SMALL_STATE(426)] = 16583,
  [SMALL_STATE(427)] = 16601,
  [SMALL_STATE(428)] = 16619,
  [SMALL_STATE(429)] = 16637,
  [SMALL_STATE(430)] = 16655,
  [SMALL_STATE(431)] = 16677,
  [SMALL_STATE(432)] = 16699,
  [SMALL_STATE(433)] = 16734,
  [SMALL_STATE(434)] = 16769,
  [SMALL_STATE(435)] = 16804,
  [SMALL_STATE(436)] = 16839,
  [SMALL_STATE(437)] = 16855,
  [SMALL_STATE(438)] = 16884,
  [SMALL_STATE(439)] = 16907,
  [SMALL_STATE(440)] = 16936,
  [SMALL_STATE(441)] = 16965,
  [SMALL_STATE(442)] = 16994,
  [SMALL_STATE(443)] = 17017,
  [SMALL_STATE(444)] = 17041,
  [SMALL_STATE(445)] = 17065,
  [SMALL_STATE(446)] = 17078,
  [SMALL_STATE(447)] = 17097,
  [SMALL_STATE(448)] = 17116,
  [SMALL_STATE(449)] = 17135,
  [SMALL_STATE(450)] = 17148,
  [SMALL_STATE(451)] = 17171,
  [SMALL_STATE(452)] = 17190,
  [SMALL_STATE(453)] = 17213,
  [SMALL_STATE(454)] = 17232,
  [SMALL_STATE(455)] = 17251,
  [SMALL_STATE(456)] = 17264,
  [SMALL_STATE(457)] = 17277,
  [SMALL_STATE(458)] = 17290,
  [SMALL_STATE(459)] = 17313,
  [SMALL_STATE(460)] = 17334,
  [SMALL_STATE(461)] = 17351,
  [SMALL_STATE(462)] = 17372,
  [SMALL_STATE(463)] = 17391,
  [SMALL_STATE(464)] = 17414,
  [SMALL_STATE(465)] = 17437,
  [SMALL_STATE(466)] = 17460,
  [SMALL_STATE(467)] = 17479,
  [SMALL_STATE(468)] = 17502,
  [SMALL_STATE(469)] = 17515,
  [SMALL_STATE(470)] = 17538,
  [SMALL_STATE(471)] = 17553,
  [SMALL_STATE(472)] = 17567,
  [SMALL_STATE(473)] = 17587,
  [SMALL_STATE(474)] = 17599,
  [SMALL_STATE(475)] = 17617,
  [SMALL_STATE(476)] = 17637,
  [SMALL_STATE(477)] = 17657,
  [SMALL_STATE(478)] = 17669,
  [SMALL_STATE(479)] = 17685,
  [SMALL_STATE(480)] = 17705,
  [SMALL_STATE(481)] = 17725,
  [SMALL_STATE(482)] = 17745,
  [SMALL_STATE(483)] = 17759,
  [SMALL_STATE(484)] = 17776,
  [SMALL_STATE(485)] = 17791,
  [SMALL_STATE(486)] = 17808,
  [SMALL_STATE(487)] = 17825,
  [SMALL_STATE(488)] = 17842,
  [SMALL_STATE(489)] = 17853,
  [SMALL_STATE(490)] = 17870,
  [SMALL_STATE(491)] = 17881,
  [SMALL_STATE(492)] = 17896,
  [SMALL_STATE(493)] = 17913,
  [SMALL_STATE(494)] = 17930,
  [SMALL_STATE(495)] = 17947,
  [SMALL_STATE(496)] = 17964,
  [SMALL_STATE(497)] = 17981,
  [SMALL_STATE(498)] = 17996,
  [SMALL_STATE(499)] = 18011,
  [SMALL_STATE(500)] = 18026,
  [SMALL_STATE(501)] = 18041,
  [SMALL_STATE(502)] = 18052,
  [SMALL_STATE(503)] = 18069,
  [SMALL_STATE(504)] = 18086,
  [SMALL_STATE(505)] = 18103,
  [SMALL_STATE(506)] = 18118,
  [SMALL_STATE(507)] = 18133,
  [SMALL_STATE(508)] = 18150,
  [SMALL_STATE(509)] = 18165,
  [SMALL_STATE(510)] = 18182,
  [SMALL_STATE(511)] = 18197,
  [SMALL_STATE(512)] = 18212,
  [SMALL_STATE(513)] = 18227,
  [SMALL_STATE(514)] = 18238,
  [SMALL_STATE(515)] = 18255,
  [SMALL_STATE(516)] = 18270,
  [SMALL_STATE(517)] = 18287,
  [SMALL_STATE(518)] = 18304,
  [SMALL_STATE(519)] = 18319,
  [SMALL_STATE(520)] = 18330,
  [SMALL_STATE(521)] = 18344,
  [SMALL_STATE(522)] = 18354,
  [SMALL_STATE(523)] = 18368,
  [SMALL_STATE(524)] = 18382,
  [SMALL_STATE(525)] = 18396,
  [SMALL_STATE(526)] = 18410,
  [SMALL_STATE(527)] = 18424,
  [SMALL_STATE(528)] = 18438,
  [SMALL_STATE(529)] = 18452,
  [SMALL_STATE(530)] = 18466,
  [SMALL_STATE(531)] = 18480,
  [SMALL_STATE(532)] = 18494,
  [SMALL_STATE(533)] = 18508,
  [SMALL_STATE(534)] = 18522,
  [SMALL_STATE(535)] = 18536,
  [SMALL_STATE(536)] = 18546,
  [SMALL_STATE(537)] = 18560,
  [SMALL_STATE(538)] = 18574,
  [SMALL_STATE(539)] = 18584,
  [SMALL_STATE(540)] = 18598,
  [SMALL_STATE(541)] = 18612,
  [SMALL_STATE(542)] = 18626,
  [SMALL_STATE(543)] = 18640,
  [SMALL_STATE(544)] = 18654,
  [SMALL_STATE(545)] = 18668,
  [SMALL_STATE(546)] = 18682,
  [SMALL_STATE(547)] = 18692,
  [SMALL_STATE(548)] = 18706,
  [SMALL_STATE(549)] = 18720,
  [SMALL_STATE(550)] = 18734,
  [SMALL_STATE(551)] = 18748,
  [SMALL_STATE(552)] = 18758,
  [SMALL_STATE(553)] = 18772,
  [SMALL_STATE(554)] = 18783,
  [SMALL_STATE(555)] = 18794,
  [SMALL_STATE(556)] = 18803,
  [SMALL_STATE(557)] = 18812,
  [SMALL_STATE(558)] = 18821,
  [SMALL_STATE(559)] = 18832,
  [SMALL_STATE(560)] = 18843,
  [SMALL_STATE(561)] = 18852,
  [SMALL_STATE(562)] = 18863,
  [SMALL_STATE(563)] = 18874,
  [SMALL_STATE(564)] = 18883,
  [SMALL_STATE(565)] = 18892,
  [SMALL_STATE(566)] = 18903,
  [SMALL_STATE(567)] = 18914,
  [SMALL_STATE(568)] = 18925,
  [SMALL_STATE(569)] = 18934,
  [SMALL_STATE(570)] = 18945,
  [SMALL_STATE(571)] = 18956,
  [SMALL_STATE(572)] = 18967,
  [SMALL_STATE(573)] = 18978,
  [SMALL_STATE(574)] = 18989,
  [SMALL_STATE(575)] = 18998,
  [SMALL_STATE(576)] = 19007,
  [SMALL_STATE(577)] = 19018,
  [SMALL_STATE(578)] = 19029,
  [SMALL_STATE(579)] = 19040,
  [SMALL_STATE(580)] = 19049,
  [SMALL_STATE(581)] = 19058,
  [SMALL_STATE(582)] = 19069,
  [SMALL_STATE(583)] = 19080,
  [SMALL_STATE(584)] = 19091,
  [SMALL_STATE(585)] = 19100,
  [SMALL_STATE(586)] = 19109,
  [SMALL_STATE(587)] = 19120,
  [SMALL_STATE(588)] = 19131,
  [SMALL_STATE(589)] = 19142,
  [SMALL_STATE(590)] = 19153,
  [SMALL_STATE(591)] = 19164,
  [SMALL_STATE(592)] = 19175,
  [SMALL_STATE(593)] = 19186,
  [SMALL_STATE(594)] = 19197,
  [SMALL_STATE(595)] = 19208,
  [SMALL_STATE(596)] = 19219,
  [SMALL_STATE(597)] = 19227,
  [SMALL_STATE(598)] = 19235,
  [SMALL_STATE(599)] = 19243,
  [SMALL_STATE(600)] = 19251,
  [SMALL_STATE(601)] = 19259,
  [SMALL_STATE(602)] = 19267,
  [SMALL_STATE(603)] = 19275,
  [SMALL_STATE(604)] = 19283,
  [SMALL_STATE(605)] = 19291,
  [SMALL_STATE(606)] = 19299,
  [SMALL_STATE(607)] = 19307,
  [SMALL_STATE(608)] = 19315,
  [SMALL_STATE(609)] = 19323,
  [SMALL_STATE(610)] = 19331,
  [SMALL_STATE(611)] = 19339,
  [SMALL_STATE(612)] = 19347,
  [SMALL_STATE(613)] = 19355,
  [SMALL_STATE(614)] = 19363,
  [SMALL_STATE(615)] = 19371,
  [SMALL_STATE(616)] = 19379,
  [SMALL_STATE(617)] = 19387,
  [SMALL_STATE(618)] = 19395,
  [SMALL_STATE(619)] = 19403,
  [SMALL_STATE(620)] = 19411,
  [SMALL_STATE(621)] = 19419,
  [SMALL_STATE(622)] = 19427,
  [SMALL_STATE(623)] = 19435,
  [SMALL_STATE(624)] = 19443,
  [SMALL_STATE(625)] = 19451,
  [SMALL_STATE(626)] = 19459,
  [SMALL_STATE(627)] = 19467,
  [SMALL_STATE(628)] = 19475,
  [SMALL_STATE(629)] = 19483,
  [SMALL_STATE(630)] = 19491,
  [SMALL_STATE(631)] = 19499,
  [SMALL_STATE(632)] = 19507,
  [SMALL_STATE(633)] = 19515,
  [SMALL_STATE(634)] = 19523,
  [SMALL_STATE(635)] = 19531,
  [SMALL_STATE(636)] = 19539,
  [SMALL_STATE(637)] = 19547,
  [SMALL_STATE(638)] = 19555,
  [SMALL_STATE(639)] = 19563,
  [SMALL_STATE(640)] = 19571,
  [SMALL_STATE(641)] = 19579,
  [SMALL_STATE(642)] = 19587,
  [SMALL_STATE(643)] = 19595,
  [SMALL_STATE(644)] = 19603,
  [SMALL_STATE(645)] = 19611,
  [SMALL_STATE(646)] = 19619,
  [SMALL_STATE(647)] = 19627,
  [SMALL_STATE(648)] = 19635,
  [SMALL_STATE(649)] = 19643,
  [SMALL_STATE(650)] = 19651,
  [SMALL_STATE(651)] = 19659,
  [SMALL_STATE(652)] = 19667,
  [SMALL_STATE(653)] = 19675,
  [SMALL_STATE(654)] = 19683,
  [SMALL_STATE(655)] = 19691,
  [SMALL_STATE(656)] = 19699,
  [SMALL_STATE(657)] = 19707,
  [SMALL_STATE(658)] = 19715,
  [SMALL_STATE(659)] = 19723,
  [SMALL_STATE(660)] = 19731,
  [SMALL_STATE(661)] = 19739,
  [SMALL_STATE(662)] = 19747,
  [SMALL_STATE(663)] = 19755,
  [SMALL_STATE(664)] = 19763,
  [SMALL_STATE(665)] = 19771,
  [SMALL_STATE(666)] = 19779,
  [SMALL_STATE(667)] = 19787,
  [SMALL_STATE(668)] = 19795,
  [SMALL_STATE(669)] = 19803,
  [SMALL_STATE(670)] = 19811,
  [SMALL_STATE(671)] = 19819,
  [SMALL_STATE(672)] = 19827,
  [SMALL_STATE(673)] = 19835,
  [SMALL_STATE(674)] = 19843,
  [SMALL_STATE(675)] = 19851,
  [SMALL_STATE(676)] = 19859,
  [SMALL_STATE(677)] = 19867,
  [SMALL_STATE(678)] = 19875,
  [SMALL_STATE(679)] = 19883,
  [SMALL_STATE(680)] = 19891,
  [SMALL_STATE(681)] = 19899,
  [SMALL_STATE(682)] = 19907,
  [SMALL_STATE(683)] = 19915,
  [SMALL_STATE(684)] = 19923,
  [SMALL_STATE(685)] = 19931,
  [SMALL_STATE(686)] = 19939,
  [SMALL_STATE(687)] = 19947,
  [SMALL_STATE(688)] = 19955,
  [SMALL_STATE(689)] = 19963,
  [SMALL_STATE(690)] = 19971,
  [SMALL_STATE(691)] = 19979,
  [SMALL_STATE(692)] = 19987,
  [SMALL_STATE(693)] = 19995,
  [SMALL_STATE(694)] = 20003,
  [SMALL_STATE(695)] = 20011,
  [SMALL_STATE(696)] = 20019,
  [SMALL_STATE(697)] = 20027,
  [SMALL_STATE(698)] = 20035,
  [SMALL_STATE(699)] = 20043,
  [SMALL_STATE(700)] = 20051,
  [SMALL_STATE(701)] = 20059,
  [SMALL_STATE(702)] = 20067,
  [SMALL_STATE(703)] = 20075,
  [SMALL_STATE(704)] = 20083,
  [SMALL_STATE(705)] = 20091,
  [SMALL_STATE(706)] = 20099,
  [SMALL_STATE(707)] = 20107,
  [SMALL_STATE(708)] = 20115,
  [SMALL_STATE(709)] = 20123,
  [SMALL_STATE(710)] = 20131,
  [SMALL_STATE(711)] = 20139,
  [SMALL_STATE(712)] = 20147,
  [SMALL_STATE(713)] = 20155,
  [SMALL_STATE(714)] = 20163,
  [SMALL_STATE(715)] = 20171,
  [SMALL_STATE(716)] = 20179,
  [SMALL_STATE(717)] = 20187,
  [SMALL_STATE(718)] = 20195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(627),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(645),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(637),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(632),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(626),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(624),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(622),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(620),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(618),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(616),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(383),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(382),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(609),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(475),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(628),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(679),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(630),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(577),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(575),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(656),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(687),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(717),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(4),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(386),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(481),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(699),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuple, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuple, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 4, .production_id = 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 6),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_tuple, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_tuple, 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 3, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 3, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extending, 2, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 2, .production_id = 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extending, 3, .production_id = 7),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 3, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 9),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 9),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 9), SHIFT_REPEAT(5),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(693),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(689),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 4, .production_id = 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 5),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 5, .production_id = 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 6),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnspec, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnspec, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 4, .production_id = 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 4, .production_id = 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 5, .production_id = 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 5, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 3, .production_id = 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 3, .production_id = 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_declarations, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3, .production_id = 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_declarations, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 5, .production_id = 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 6, .production_id = 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 6, .production_id = 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4, .production_id = 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 4, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6, .production_id = 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6, .production_id = 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger, 12, .production_id = 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 12, .production_id = 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6, .production_id = 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 7, .production_id = 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 6, .production_id = 6),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 6, .production_id = 6),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 11, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 11, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger, 11, .production_id = 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 11, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger, 10, .production_id = 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 10, .production_id = 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 10, .production_id = 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 4, .production_id = 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 4, .production_id = 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 6, .production_id = 6),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 6, .production_id = 6),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 7, .production_id = 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 7, .production_id = 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 7, .production_id = 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 7, .production_id = 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 6, .production_id = 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_link, 4, .production_id = 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_link, 4, .production_id = 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 9, .production_id = 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 3),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 4, .production_id = 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_def, 7, .production_id = 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_def, 7, .production_id = 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 5, .production_id = 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 5, .production_id = 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 10),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 10),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 5, .production_id = 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5, .production_id = 11),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, .production_id = 11),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 9, .production_id = 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger, 9, .production_id = 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 9, .production_id = 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 5, .production_id = 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5, .production_id = 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 5, .production_id = 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 5, .production_id = 6),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_link, 5, .production_id = 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_link, 5, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 8, .production_id = 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 8, .production_id = 6),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 8, .production_id = 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_def, 5, .production_id = 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_def, 5, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_policy, 7, .production_id = 6),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy, 7, .production_id = 6),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 5, .production_id = 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 8, .production_id = 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, .production_id = 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite, 6),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rewrite, 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite, 7),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rewrite, 7),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 6),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 6),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_target_delete, 5),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_target_delete, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 7),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 7),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rewrite, 8),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rewrite, 8),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 3), SHIFT(135),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 3), SHIFT(129),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 3), SHIFT(199),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 3), SHIFT(192),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(683),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(565),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(436),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(697),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(683),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(565),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(436),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(697),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [966] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_modifier, 1), SHIFT(653),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 1),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(412),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(629),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(436),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(420),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed, 4, .production_id = 2),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_computed, 4, .production_id = 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(436),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(704),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(678),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 6),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 4),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 2),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 5),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_policy_repeat1, 2),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_policy_repeat1, 2), SHIFT_REPEAT(482),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 3),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy_action, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(474),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 4),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_policy_action, 3),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(695),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4, .production_id = 3),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(7),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2), SHIFT_REPEAT(341),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except, 4),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rewrite_repeat1, 2), SHIFT_REPEAT(579),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rewrite_repeat1, 2),
  [1379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(661),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2), SHIFT_REPEAT(353),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(701),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 4),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1602] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_esdl_external_scanner_create(void);
void tree_sitter_esdl_external_scanner_destroy(void *);
bool tree_sitter_esdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_esdl_external_scanner_serialize(void *, char *);
void tree_sitter_esdl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_esdl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_esdl_external_scanner_create,
      tree_sitter_esdl_external_scanner_destroy,
      tree_sitter_esdl_external_scanner_scan,
      tree_sitter_esdl_external_scanner_serialize,
      tree_sitter_esdl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
