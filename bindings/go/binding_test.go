package tree_sitter_esdl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-esdl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_esdl.Language())
	if language == nil {
		t.Errorf("Error loading Esdl grammar")
	}
}
